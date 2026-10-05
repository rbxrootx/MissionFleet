#include "ShipMapVisualStateTail.h"

namespace {
constexpr std::uint32_t kPhaseMask = 0x00FF0000u;
constexpr std::uint32_t kPhaseHandlerSetup = 0x00100000u;
constexpr std::uint32_t kPhaseFrameTick = 0x00200000u;
constexpr std::uint32_t kPhaseFinish = 0x00400000u;
constexpr std::uint32_t kPhaseTerminal = 0x00FF0000u;
}

void missionFleetUpdateShipMapVisualStateTail(
    MissionFleetShipMapVisualStateTail& state,
    const MissionFleetShipMapVisualStateTailHooks& hooks, void* context) {
    switch (state.state60B0 & kPhaseMask) {
    case kPhaseHandlerSetup: {
        state.parentField9C = 0;
        state.selectionFlag34 = 0;

        const void* handler = nullptr;
        if (state.handlerObjects354 != nullptr &&
            state.handlerIndex354 < state.handlerObjectCount) {
            handler = state.handlerObjects354[state.handlerIndex354];
        }
        if (hooks.handler587898D0 != nullptr) {
            hooks.handler587898D0(handler, state.inputWord350, context);
        }

        // The original preserves the unrelated receiver bits and selects the
        // next phase using AND 0xFF20FFFF / OR 0x00200000.
        state.state60B0 = (state.state60B0 & 0xFF20FFFFu) | kPhaseFrameTick;
        break;
    }

    case kPhaseFrameTick: {
        ++state.frameCounter60D8;
        ++state.frameCounter1470;
        ++state.frameCounter178;

        const std::uint32_t selector =
            (state.controlMode4 & 0x1Fu) == 9u && state.word164 != 0
                ? 0x4Fu : 0x31u;
        if (hooks.tick588D65C0 != nullptr) {
            hooks.tick588D65C0(state, selector, kPhaseFinish, context);
        }
        break;
    }

    case kPhaseFinish:
        if (hooks.reset587315F0 != nullptr) {
            hooks.reset587315F0(state.child60D8, 0, context);
        }
        if (hooks.finish587F21E0 != nullptr) {
            hooks.finish587F21E0(state.globalManager58A2459C, state, 1, 1, context);
        }
        state.state60B0 |= kPhaseTerminal;
        break;

    case kPhaseTerminal:
        if (state.globalDword21C34 == 0 && state.globalWord105F0 == 7 &&
            state.value664C != 10000) {
            state.state6090 = 0x00060000u;
            state.value6648 = 0;
        }
        break;

    default:
        break;
    }
}
