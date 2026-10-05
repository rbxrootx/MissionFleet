#include "ShipMapRouteChildUpdate.h"

namespace {
constexpr std::uint32_t kPhaseRecordAnimation = 0x50000000u;
constexpr std::uint32_t kPhaseResolveFollowingResource = 0x70000000u;
constexpr std::uint32_t kPhaseFinalAnimation = 0x60000000u;

std::int64_t signedDword(std::uint32_t value) {
    return value <= 0x7FFFFFFFu ? static_cast<std::int64_t>(value)
                                : static_cast<std::int64_t>(value) - 0x100000000LL;
}

const MissionFleetShipMapRouteRecord* recordAt(
    const MissionFleetShipMapRouteChildState& state, std::uint32_t index) {
    const auto signedIndex = signedDword(index);
    if (state.records190 == nullptr || signedIndex < 0 ||
        signedDword(state.recordCount160) <= signedIndex ||
        static_cast<std::uint64_t>(index) >= state.availableRecordCapacity) {
        return nullptr;
    }
    return state.records190 + index;
}

void installRecord(MissionFleetShipMapRouteVisual& child,
                   const MissionFleetShipMapRouteRecord* record) {
    child.record54 = record;
    // FUN_58734920 copies these fields only for a non-null record. Its null
    // path leaves the child's six previously copied DWORDs untouched.
    if (record == nullptr) return;
    for (std::size_t i = 0; i < 6; ++i) {
        child.copiedFields0CTo20[i] = record->copiedFields18To2C[i];
    }
}

std::uint32_t terminalCounter(const MissionFleetShipMapRouteVisual& child) {
    const std::uint32_t word = child.record54 == nullptr ? 0u : child.record54->word0C;
    return word * 3u - 1u;
}

void moveChild(MissionFleetShipMapRouteVisual& child, std::uint32_t targetX,
               std::uint32_t targetY,
               const MissionFleetShipMapRouteChildHooks& hooks, void* context) {
    // FUN_58903290 subtracts the old coordinates as 32-bit values, stores the
    // targets, then propagates those wrapped deltas through the +0x3C list.
    const std::uint32_t dx = targetX - child.position4;
    const std::uint32_t dy = targetY - child.position8;
    child.position4 = targetX;
    child.position8 = targetY;

    auto* const head = child.descendants3C;
    for (auto* descendant = head; descendant != nullptr;) {
        if ((descendant->flags24 & 0x2000u) != 0 &&
            hooks.descendantPositionDelta != nullptr) {
            hooks.descendantPositionDelta(*descendant, dx, dy, context);
        }
        auto* const next = descendant->next38;
        if (next == head) break;
        descendant = next;
    }
}
}

void missionFleetUpdateShipMapRouteChild(
    MissionFleetShipMapRouteChildState& state,
    const MissionFleetShipMapRouteChildHooks& hooks, void* context) {
    // FUN_588DBF10 performs one phase branch per invocation and always reaches
    // the child-position update afterward.
    switch (state.phase609C) {
    case 0:
        if (state.selection23C.flag34 != 0) {
            installRecord(*state.child146C,
                          recordAt(state, state.selection23C.index68));
            state.child146C->counter50 = 0;
            state.phase609C = kPhaseRecordAnimation;
        }
        break;

    case kPhaseRecordAnimation:
        if (state.child146C->counter50 == terminalCounter(*state.child146C)) {
            // The x86 INC wraps the index before its signed bounds checks.
            const std::uint32_t nextIndex = state.selection23C.index68 + 1u;
            installRecord(*state.child146C, recordAt(state, nextIndex));
            state.phase609C = kPhaseResolveFollowingResource;
        } else {
            ++state.child146C->counter50;
        }
        break;

    case kPhaseResolveFollowingResource:
        if (state.selection23C.flag34 == 0) {
            const std::uint32_t nextIndex = state.selection23C.index68 + 2u;
            const auto* record = hooks.resolveIndexPlusTwo == nullptr
                ? nullptr : hooks.resolveIndexPlusTwo(nextIndex, context);
            installRecord(*state.child146C, record);
            state.child146C->counter50 = 0;
            state.phase609C = kPhaseFinalAnimation;
        } else {
            ++state.child146C->counter50;
        }
        break;

    case kPhaseFinalAnimation:
        if (state.child146C->counter50 == terminalCounter(*state.child146C)) {
            state.phase609C = 0;
        } else {
            ++state.child146C->counter50;
        }
        break;

    default:
        break;
    }

    // The original directly indexes the paired tables without a bounds check.
    // The semantic model fails closed for incomplete captured input instead
    // of reading outside its supplied evidence buffer.
    if (state.child146C == nullptr || state.routeOffsets17BC == nullptr ||
        state.routeOffsetIndex605C >= state.availableRouteOffsetCount) {
        return;
    }
    const auto& offset = state.routeOffsets17BC[state.routeOffsetIndex605C];
    const std::uint32_t targetX = state.objectX4 + offset.x17BC;
    const std::uint32_t targetY = state.objectY8 - offset.y17C0;
    moveChild(*state.child146C, targetX, targetY, hooks, context);
}
