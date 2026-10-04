#include "CommunicatorIdEvent.h"

void missionFleetResetCommunicatorIdPosition(MissionFleetCommunicatorIdEventState& state) {
    state.target50 = state.position4;
    state.target54 = state.position8;
    state.target58 = 0;
    state.flags24 = static_cast<std::uint16_t>((state.flags24 & 0xE4FFu) | 0x0400u);
}

namespace {
void visitListActions(MissionFleetCommunicatorIdNode* node,
                      const MissionFleetCommunicatorIdEventHooks& hooks,
                      void* context) {
    for (; node != nullptr; node = node->next54) {
        if (node->actionA4 != nullptr) hooks.invokeNodeAction(node->actionA4, context);
    }
}

void moveSelection(MissionFleetCommunicatorIdEventState& state,
                   bool forward, const MissionFleetCommunicatorIdEventHooks& hooks,
                   void* context) {
    MissionFleetCommunicatorIdNode** selected;
    std::int16_t* index;
    std::int16_t limit;
    if (state.modeF6 == 0) {
        selected = &state.selected100;
        index = &state.indexFA;
        limit = state.limitF2;
    } else if (state.modeF6 == 1) {
        selected = &state.selectedFC;
        index = &state.indexF8;
        limit = state.limitF0;
    } else {
        return;
    }
    if (*selected == nullptr) return;
    MissionFleetCommunicatorIdNode* next = forward
        ? (*selected)->next54 : (*selected)->previous50;
    if (next == nullptr) return;
    if (forward) {
        if (static_cast<int>(*index) >= static_cast<int>(limit) - 5) return;
        *index = static_cast<std::int16_t>(*index + 1);
    } else {
        if (*index <= 0) return;
        *index = static_cast<std::int16_t>(*index - 1);
    }
    *selected = next;
    hooks.refresh(&state, 0, context);
}
}

std::uint32_t missionFleetDispatchCommunicatorIdEvent(
    MissionFleetCommunicatorIdEventState& state, void* target,
    std::uint32_t eventType, std::uint32_t unusedArgument,
    const MissionFleetCommunicatorIdEventHooks& hooks, void* context) {
    (void)unusedArgument;
    if (eventType != 2) return 0;
    if (target == state.controlD4) {
        visitListActions(state.list6C, hooks, context);
        visitListActions(state.list64, hooks, context);
        hooks.selfVirtual08(&state, context);
    } else if (target == state.controlD8) {
        hooks.childVirtual04(state.child114, context);
    } else if (target == state.controlDC) {
        hooks.globalDispatch(state.globalReceiver588, state.resource450, 0, context);
    } else if (target == state.controlCC) {
        if (state.modeF6 == 0) hooks.refresh(&state, 1, context);
    } else if (target == state.controlD0) {
        if (state.modeF6 == 1) hooks.refresh(&state, 1, context);
    } else if (target == state.controlE8) {
        hooks.openResource(&state, state.resource4A0, nullptr, context);
    } else if (target == state.controlEC) {
        hooks.openResource(&state, state.resource4A0, state.resource4A4, context);
    } else if (target == state.control118) {
        moveSelection(state, false, hooks, context);
    } else if (target == state.control11C) {
        moveSelection(state, true, hooks, context);
    }
    return 0;
}
