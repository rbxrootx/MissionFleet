#include "CommunicatorIdMotion.h"

namespace {
std::int64_t signedDword(std::uint32_t value) {
    return value <= 0x7FFFFFFFu ? static_cast<std::int64_t>(value)
                                : static_cast<std::int64_t>(value) - 0x100000000LL;
}

std::int32_t coordinateStep(std::uint32_t current, std::uint32_t target) {
    // The subtraction in the original x86 code wraps before it is classified.
    const std::int64_t delta = signedDword(target - current);
    if (delta >= -3 && delta <= 3) return static_cast<std::int32_t>((delta > 0) - (delta < 0));
    if (delta >= -7 && delta <= 7) return static_cast<std::int32_t>(delta / 2);
    return static_cast<std::int32_t>(delta / 4);
}

std::uint32_t boundedSizeStep(std::uint32_t current, std::uint32_t target) {
    if (signedDword(target) > signedDword(current)) {
        if (signedDword(target - current) > 32) return current + 32u;
    } else if (signedDword(current - target) > 32) {
        return current - 32u;
    }
    return target;
}

void tickChildren(MissionFleetCommunicatorIdMotionChild* head,
                  const MissionFleetCommunicatorIdMotionHooks& hooks, void* context) {
    for (auto* child = head; child != nullptr;) {
        auto* next = child->next38;
        if (hooks.childTick != nullptr) hooks.childTick(*child, context);
        if (next == head) return;
        child = next;
    }
}
}

void missionFleetUpdateCommunicatorIdMotion(
    MissionFleetCommunicatorIdEventState& state, std::uint8_t globalModeD0,
    const MissionFleetCommunicatorIdMotionHooks& hooks, void* context) {
    if (globalModeD0 == 0x0F) {
        // Original cmp ax,cx / jge treats the word as signed.
        const int signedCount = state.counter106 <= 0x7FFFu
            ? state.counter106 : static_cast<int>(state.counter106) - 0x10000;
        if (signedCount < 300) {
            state.counter106 = static_cast<std::uint16_t>(state.counter106 + 1u);
        } else {
            state.counter106 = 0;
            if (hooks.batch != nullptr) hooks.batch(state, context);
        }
    } else {
        state.counter106 = 0;
    }

    if ((state.flags24 & 0x0004u) == 0) return;
    const std::uint16_t mode = state.flags24 & 0x1F00u;
    const bool canMove = mode == 0x0100u || mode == 0x0400u ||
                         (mode == 0x0200u && state.transitionC8 != nullptr);
    if (canMove) {
        if (state.position4 != state.target50 || state.position8 != state.target54) {
            const auto dx = coordinateStep(state.position4, state.target50);
            const auto dy = coordinateStep(state.position8, state.target54);
            state.position4 += static_cast<std::uint32_t>(dx);
            state.position8 += static_cast<std::uint32_t>(dy);
            if (hooks.positionDelta != nullptr) hooks.positionDelta(state, dx, dy, context);
        }
        if (state.height2C != state.targetHeight5C) {
            state.height2C = boundedSizeStep(state.height2C, state.targetHeight5C);
            if (hooks.heightChanged != nullptr) hooks.heightChanged(state, state.height2C, context);
        }
        if (state.width28 != state.target58) {
            state.width28 = boundedSizeStep(state.width28, state.target58);
            if (hooks.widthChanged != nullptr) hooks.widthChanged(state, state.width28, context);
        }

        if (state.position4 == state.target50 && state.position8 == state.target54 &&
            state.width28 == state.target58 && state.height2C == state.targetHeight5C) {
            if (mode == 0x0100u) {
                state.flags24 = static_cast<std::uint16_t>((state.flags24 & 0xE2FFu) | 0x0200u);
                state.flags24 |= 0x0002u;
                if (hooks.refresh != nullptr) hooks.refresh(state, 0, context);
            } else if (mode == 0x0400u) {
                state.flags24 = static_cast<std::uint16_t>((state.flags24 & 0xE5FFu) | 0x0500u);
                state.flags24 &= 0xFFFDu;
                state.flags24 &= 0xFFFBu;
                state.flags24 &= 0xFFFEu;
            } else if (mode == 0x0200u) {
                state.transitionC8 = nullptr;
                if (hooks.parentEvent != nullptr) hooks.parentEvent(state, 0xEE4Au, 0, context);
            }
        }
    }
    tickChildren(state.children3C, hooks, context);
}
