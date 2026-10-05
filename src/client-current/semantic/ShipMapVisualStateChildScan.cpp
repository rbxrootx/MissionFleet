#include "ShipMapVisualStateChildScan.h"

#include <cstring>

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

void selectSetupPhase(MissionFleetShipMapVisualStateChildScan& state) {
    state.state60B0 = (state.state60B0 & 0xFF08FFFFu) | kPhaseSetup;
}
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

    const std::int32_t indirectValue = hooks.sampleIndirectState5897CC36 != nullptr
                                           ? hooks.sampleIndirectState5897CC36(state, context)
                                           : 0;
    // x86 IDIV by 3 uses a signed remainder; a zero remainder skips the array.
    const bool scanEntries = indirectValue % 3 != 0 && state.word164 == 0;
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

    void* lastCandidate = nullptr;
    for (std::size_t i = 0; i < state.entries17C.size(); ++i) {
        const auto* entry = state.entries17C[i];
        if (entry == nullptr) {
            continue;
        }
        const std::uint32_t entryFlags = hooks.entryGate5897CC36 != nullptr
                                             ? hooks.entryGate5897CC36(state, *entry, i,
                                                                       context)
                                             : 0;
        if ((entryFlags & 1u) == 0) {
            continue;
        }
        lastCandidate = hooks.processCandidate != nullptr
                            ? hooks.processCandidate(state, *entry, i, context)
                            : nullptr;
    }

    if (lastCandidate != nullptr && state.word164 == 0 &&
        hooks.processLastCandidate != nullptr) {
        hooks.processLastCandidate(state, lastCandidate, context);
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
