#include "ShipMapVisualStateSetup.h"

#include <limits>

namespace {
constexpr std::uint32_t kPhaseMask = 0x00FF0000u;
constexpr std::uint32_t kPhaseSetup = 0x00080000u;

const MissionFleetShipMapVisualResourceRecord* recordAt(
    const MissionFleetShipMapVisualResourceList& list, std::int32_t index) {
    if (list.records190 == nullptr || index < 0 || index >= list.count160) {
        return nullptr;
    }
    return list.records190 + index;
}

void assignRecord(MissionFleetShipMapVisualChild& child,
                  const MissionFleetShipMapVisualResourceRecord* record) {
    child.record54 = record;
    if (record != nullptr) {
        for (std::size_t i = 0; i < 6; ++i) {
            child.copiedFields0CTo20[i] = record->fields18To2C[i];
        }
    }
}

void assignAndReset(MissionFleetShipMapVisualChild& child,
                    const MissionFleetShipMapVisualResourceRecord* record) {
    assignRecord(child, record);
    child.frameValue50 = 0;
}

void clearLowBit(MissionFleetShipMapVisualAnimationNode* node) {
    if (node != nullptr) {
        node->flags24 = static_cast<std::uint16_t>(node->flags24 & 0xFFFEu);
    }
}

void clearLowNibble(MissionFleetShipMapVisualAnimationNode* node) {
    if (node != nullptr) {
        node->flags24 = static_cast<std::uint16_t>(node->flags24 & 0xFFF0u);
    }
}
}

MissionFleetShipMapVisualStateSetupResult missionFleetSetupShipMapVisualState(
    MissionFleetShipMapVisualStateSetup& state,
    const MissionFleetShipMapVisualStateSetupHooks& hooks, void* context) {
    if ((state.state60B0 & kPhaseMask) != kPhaseSetup) {
        return MissionFleetShipMapVisualStateSetupResult::IgnoredPhase;
    }

    if (hooks.refresh588D9C40 != nullptr) {
        hooks.refresh588D9C40(state, 0, context);
    }

    // The native x86 IDIV traps for divisor 0 and INT_MIN / -1. Use a wider
    // temporary to detect both traps without invoking C++ signed-overflow UB.
    if (state.routeDivisor6050 == 0 ||
        (state.routeCursor605C == std::numeric_limits<std::int32_t>::min() &&
         state.routeDivisor6050 == -1)) {
        return MissionFleetShipMapVisualStateSetupResult::InvalidSignedDivision;
    }
    auto quotient = state.routeCursor605C / state.routeDivisor6050;
    if (quotient >= 9) {
        quotient -= 9; // The instruction subtracts nine once, not modulo ten.
    }
    state.pageIndex6054 = quotient;

    const std::size_t nodeCount = state.modeWord100C0A & 7u;
    for (std::size_t i = 0; i < nodeCount; ++i) {
        clearLowBit(state.nodes60DC[i]);
    }

    const bool specialMode = (state.modeByte100C4 & 0x1Fu) == 9u &&
                             state.word164 != 0;
    if (specialMode) {
        assignAndReset(state.child60D8, recordAt(state.globalRecords58A24724, 0));
        assignAndReset(state.child1470, recordAt(state.globalRecords58A24724, 1));
        assignAndReset(state.child178, recordAt(state.globalRecords58A24724, 2));
    } else {
        const std::int32_t selectedIndex =
            static_cast<std::int32_t>(state.modeWord100C0A & 7u) + 1;
        assignRecord(state.child60D8, recordAt(state.records60D0, selectedIndex));
        // IMUL writes the low 32 bits; unsigned multiplication expresses that
        // wraparound without signed-overflow undefined behavior.
        state.child60D8.frameValue50 = static_cast<std::uint32_t>(state.pageIndex6054) * 0x32u;

        const auto* secondRecord = recordAt(state.records60D4, 2);
        assignRecord(state.child1470, secondRecord);
        state.child1470.frameValue50 = static_cast<std::uint32_t>(state.pageIndex6054) * 0x32u;
        // In this branch the native code does not write child +0x178.
    }

    MissionFleetShipMapVisualAnimationNode* animation101 = nullptr;
    if (hooks.lookup58902D20 != nullptr) {
        animation101 = hooks.lookup58902D20(state.child60FC, 0x101u, context);
    }
    clearLowBit(animation101);
    if (state.selectedReceiver58A247F8 != &state) {
        clearLowNibble(state.child12F4);
    }
    clearLowNibble(state.child12F8);

    state.value603C = 0;
    state.value6040 = 0;
    state.state60B0 = (state.state60B0 & 0xFF10FFFFu) | 0x00100000u;
    return MissionFleetShipMapVisualStateSetupResult::Applied;
}
