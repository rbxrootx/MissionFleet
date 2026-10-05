#include "ShipMapVisualStateChildScan.h"

#include <cstring>
#include <new>
#include <stdexcept>

namespace {
constexpr std::uint32_t kPhaseMask = 0x00FF0000u;
constexpr std::uint32_t kPhaseChildScan = 0x00040000u;
constexpr std::uint32_t kPhaseSetup = 0x00080000u;

std::int32_t signedBits(std::uint32_t value) {
    std::int32_t result;
    std::memcpy(&result, &value, sizeof(result));
    return result;
}

bool signedAbsDeltaLessThan(std::uint32_t left, std::uint32_t right,
                            std::int32_t limit) {
    // This mirrors SUB / CDQ / XOR / SUB, including 32-bit wraparound.
    std::uint32_t delta = left - right;
    if (signedBits(delta) < 0) {
        delta = 0u - delta;
    }
    return signedBits(delta) < limit;
}

std::uint32_t incrementBits(std::uint32_t value) {
    return value + 1u;
}

std::uint32_t jitteredCoordinate(std::uint32_t value, std::int32_t randomValue) {
    // The installed code performs 32-bit SUB / ADD, so preserve wraparound.
    return value - static_cast<std::uint32_t>(randomValue % 20) + 10u;
}

std::int32_t arithmeticShiftRightOne(std::int32_t value) {
    std::uint32_t bits = static_cast<std::uint32_t>(value);
    bits = (bits >> 1) | (bits & 0x80000000u);
    return signedBits(bits);
}

std::optional<std::int32_t> wrappedMultiplyThenDivide(std::int32_t value,
                                                     std::int32_t divisor) {
    if (divisor == 0) {
        return std::nullopt;
    }
    const std::uint32_t productBits = static_cast<std::uint32_t>(value) * 1000u;
    const std::int32_t product = signedBits(productBits);
    if (product == INT32_MIN && divisor == -1) {
        return std::nullopt;
    }
    return product / divisor;
}

const std::uint8_t* lookupResourceRecord(const std::uint8_t* table,
                                         std::int32_t count,
                                         std::int32_t index) {
    if (table == nullptr || index < 0 || index >= count) {
        return nullptr;
    }
    return table + static_cast<std::size_t>(index) * 0x40u;
}

const void* effectTarget(const MissionFleetShipMapVisualStateChildScan& state,
                         std::uint32_t index) {
    if (state.effectTargetTable31810 == nullptr ||
        static_cast<std::int64_t>(index) >= state.effectTargetCount31810) {
        return nullptr;
    }
    return state.effectTargetTable31810[index];
}

void selectSetupPhase(MissionFleetShipMapVisualStateChildScan& state) {
    state.state60B0 = (state.state60B0 & 0xFF08FFFFu) | kPhaseSetup;
}

void* allocateOrThrow(const MissionFleetShipMapVisualStateChildScanHooks& hooks,
                      std::uint32_t bytes, void* context) {
    if (hooks.operatorNew5897CC4E == nullptr) {
        throw std::logic_error("ship-map scan requires the mapped allocator");
    }
    void* const allocation = hooks.operatorNew5897CC4E(bytes, context);
    if (allocation == nullptr) {
        // The resolved target is MSVCR90's throwing operator new(unsigned int).
        throw std::bad_alloc();
    }
    return allocation;
}

MissionFleetShipMapVisualNode* allocateCandidateOrThrow(
    const MissionFleetShipMapVisualStateChildScanHooks& hooks, void* context) {
    if (hooks.allocateCandidateStorage5897CC4E == nullptr) {
        throw std::logic_error("ship-map scan requires candidate semantic storage");
    }
    MissionFleetShipMapVisualNode* const storage =
        hooks.allocateCandidateStorage5897CC4E(0x58u, context);
    if (storage == nullptr) {
        throw std::bad_alloc();
    }
    return storage;
}

void applyConstructedNodeMode(MissionFleetShipMapVisualNode* node,
                              std::uint32_t mode) {
    if (node == nullptr) {
        throw std::logic_error("mapped ship-map constructor returned null");
    }
    missionFleetSetShipMapVisualNodeMode(*node, mode);
}

MissionFleetShipMapVisualNode* constructCandidate(
    MissionFleetShipMapVisualNode& storage,
    MissionFleetShipMapVisualNodeListOwner* owner,
    const std::uint8_t* resourceRecord, std::uint32_t x04,
    std::uint32_t y08, std::uint16_t word26) {
    return missionFleetConstructShipMapVisualCandidate(
        storage, owner, resourceRecord, x04, y08, word26);
}
}

std::int32_t missionFleetMsvc90Rand(MissionFleetMsvc90RandState& state) {
    state.holdRand = state.holdRand * 214013u + 2531011u;
    return static_cast<std::int32_t>((state.holdRand >> 16) & 0x7FFFu);
}

std::optional<MissionFleetShipMapProjectedPoint> missionFleetProjectShipMapVisualPosition(
    const MissionFleetShipMapVisualProjection& projection,
    std::uint32_t objectX, std::uint32_t objectY) {
    const std::int32_t width = signedBits(
        static_cast<std::uint32_t>(projection.right1C) -
        static_cast<std::uint32_t>(projection.left14));
    const std::int32_t height = signedBits(
        static_cast<std::uint32_t>(projection.bottom20) -
        static_cast<std::uint32_t>(projection.top18));
    const auto offsetX = wrappedMultiplyThenDivide(
        arithmeticShiftRightOne(width), projection.scale114);
    const auto offsetY = wrappedMultiplyThenDivide(
        arithmeticShiftRightOne(height), projection.scale114);
    if (!offsetX || !offsetY) {
        return std::nullopt;
    }

    const std::uint32_t projectedX =
        objectX - static_cast<std::uint32_t>(*offsetX) -
        static_cast<std::uint32_t>(projection.referenceX50);
    const std::uint32_t projectedY =
        static_cast<std::uint32_t>(*offsetY) - objectY +
        static_cast<std::uint32_t>(projection.referenceY54);
    return MissionFleetShipMapProjectedPoint{projectedX, projectedY};
}

MissionFleetShipMapVisualStateChildScanResult missionFleetScanShipMapVisualStateChildren(
    MissionFleetShipMapVisualStateChildScan& state,
    const MissionFleetShipMapVisualStateChildScanHooks& hooks, void* context) {
    if ((state.state60B0 & kPhaseMask) != kPhaseChildScan) {
        return MissionFleetShipMapVisualStateChildScanResult::IgnoredPhase;
    }

    const bool withinObservedBounds =
        signedAbsDeltaLessThan(state.referenceX50, state.objectX4, 900) &&
        signedAbsDeltaLessThan(state.referenceY54, state.objectY8, 700);
    if (withinObservedBounds || state.selectedByGlobal58A247F8) {
        if (hooks.notify587E5A60 != nullptr) {
            hooks.notify587E5A60(0x19u, context);
        }
    }

    if (state.gateValue60B4 == 0) {
        selectSetupPhase(state);
        return MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup;
    }

    const std::int32_t gateValue = hooks.rand5897CC36 != nullptr
                                       ? hooks.rand5897CC36(context)
                                       : 0;
    // rand() is nonnegative and at most 0x7FFF in this MSVCR90 build.
    const bool scanEntries = gateValue % 3 != 0 && state.word164 == 0;
    if (!scanEntries) {
        state.counter6058 = incrementBits(state.counter6058);
        const std::int32_t counter = signedBits(state.counter6058);
        if (counter >= 10 || counter < 0) {
            state.counter6058 = 0;
            selectSetupPhase(state);
            return MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup;
        }
        return MissionFleetShipMapVisualStateChildScanResult::ScanDeferred;
    }

    MissionFleetShipMapVisualNode* lastCandidate = nullptr;
    for (std::size_t i = 0; i < state.entries17C.size(); ++i) {
        const auto* entry = state.entries17C[i];
        if (entry == nullptr) {
            continue;
        }
        const std::int32_t entryRandom = hooks.rand5897CC36 != nullptr
                                             ? hooks.rand5897CC36(context)
                                             : 0;
        // The native AND mask is 0x80000001; MSVCR90 rand() never sets bit 31.
        if ((static_cast<std::uint32_t>(entryRandom) & 1u) == 0) {
            continue;
        }

        MissionFleetShipMapVisualNode* const storage =
            allocateCandidateOrThrow(hooks, context);
        const std::uint8_t* selectedResourceRecord =
            lookupResourceRecord(state.resourceTable246F0,
                                 state.resourceTableCount246F0, 0x12);
        const std::int32_t yRandom = hooks.rand5897CC36 != nullptr
                                         ? hooks.rand5897CC36(context)
                                         : 0;
        const std::int32_t xRandom = hooks.rand5897CC36 != nullptr
                                         ? hooks.rand5897CC36(context)
                                         : 0;
        const std::uint32_t candidateY = jitteredCoordinate(entry->value08, yRandom);
        const std::uint32_t candidateX = jitteredCoordinate(entry->value04, xRandom);
        const std::uint16_t variant = static_cast<std::uint16_t>(
            static_cast<std::uint16_t>(state.value42AC) + 100u);
        lastCandidate = constructCandidate(
            *storage, &state.ownerLists, selectedResourceRecord, candidateX,
            candidateY, variant);
        applyConstructedNodeMode(lastCandidate, 0x102u);

        if (state.drawCandidateEffects589C8EDC) {
            const auto projected = missionFleetProjectShipMapVisualPosition(
                state.projection, state.objectX4, state.objectY8);
            if (!projected) {
                return MissionFleetShipMapVisualStateChildScanResult::InvalidProjection;
            }
            const std::int32_t effectRandom = hooks.rand5897CC36 != nullptr
                                                  ? hooks.rand5897CC36(context)
                                                  : 0;
            // The native mask is 0x80000003 plus signed normalization. Bit 31
            // is unreachable for MSVCR90 rand(), leaving the low two bits.
            const std::uint32_t effectSelector =
                (static_cast<std::uint32_t>(effectRandom) & 3u) + 7u;
            if (hooks.drawEffect587B7400 != nullptr) {
                hooks.drawEffect587B7400(
                    const_cast<void*>(effectTarget(state, effectSelector)),
                    projected->x, projected->y, state.projection.effectColor,
                    context);
            }
        }
    }

    if (lastCandidate != nullptr && state.word164 == 0) {
        MissionFleetShipMapVisualNode* const candidateStorage =
            allocateCandidateOrThrow(hooks, context);

        const std::int32_t resourceRandom = hooks.rand5897CC36 != nullptr
                                                ? hooks.rand5897CC36(context)
                                                : 0;
        const std::uint32_t resourceIndex =
            static_cast<std::uint32_t>(resourceRandom) & 3u;
        const std::uint16_t variant = static_cast<std::uint16_t>(
            lastCandidate->word26 + 1u);
        MissionFleetShipMapVisualNode* const extraCandidate =
            constructCandidate(
                *candidateStorage, state.globalRecord10524,
                lookupResourceRecord(state.resourceTable246F4,
                                     state.resourceTableCount246F4,
                                     static_cast<std::int32_t>(resourceIndex)),
                lastCandidate->value04, lastCandidate->value08, variant);
        applyConstructedNodeMode(extraCandidate, 0x102u);

        if (hooks.initializeSecondary58789040 == nullptr) {
            throw std::logic_error("ship-map scan requires the mapped secondary constructor");
        }

        void* const allocatedSecondary = allocateOrThrow(hooks, 0x68u, context);
        const std::int32_t randomValue = hooks.rand5897CC36 != nullptr
                                             ? hooks.rand5897CC36(context)
                                             : 0;
        const std::uint32_t randomRemainder6 =
            static_cast<std::uint32_t>(randomValue % 6);
        MissionFleetShipMapVisualNode* const secondary =
            hooks.initializeSecondary58789040(
                allocatedSecondary, state.globalRecord10524,
                lookupResourceRecord(state.resourceTable246F0,
                                     state.resourceTableCount246F0, 0x17),
                lastCandidate->value04,
                lastCandidate->value08 - 5u, lastCandidate->word26,
                randomRemainder6, context);
        applyConstructedNodeMode(secondary, 0xFFFFFEFFu);

        if (state.drawCandidateEffects589C8EDC) {
            const auto projected = missionFleetProjectShipMapVisualPosition(
                state.projection, state.objectX4, state.objectY8);
            if (!projected) {
                return MissionFleetShipMapVisualStateChildScanResult::InvalidProjection;
            }
            if (hooks.drawEffect587B7400 != nullptr) {
                hooks.drawEffect587B7400(
                    state.postScanEffectTarget604C, projected->x, projected->y,
                    state.projection.effectColor, context);
            }
        }

        if (state.drawRouteEffect589C9040 &&
            hooks.drawRouteEffect588D7DC0 != nullptr) {
            const std::uint16_t childFrame = static_cast<std::uint16_t>(
                state.child60D8Word26 + 1u);
            hooks.drawRouteEffect588D7DC0(
                state, lastCandidate->value04, lastCandidate->value08,
                10u, 0x28u, 3u, 7u, childFrame, context);
        }
    }

    state.counter6058 = incrementBits(state.counter6058);
    const std::int32_t counter = signedBits(state.counter6058);
    if (counter >= 10 || counter < 0) {
        state.counter6058 = 0;
        selectSetupPhase(state);
        return MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup;
    }
    return MissionFleetShipMapVisualStateChildScanResult::ScanCompleted;
}
