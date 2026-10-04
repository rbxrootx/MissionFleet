#pragma once

#include <cstdint>

// Normal-path model of CPannelCommunicatorIDPannel vtable slot +0x18.
// Suffixes document offsets in the original x86 objects.
struct MissionFleetCommunicatorIdNode {
    MissionFleetCommunicatorIdNode* previous50 = nullptr;
    MissionFleetCommunicatorIdNode* next54 = nullptr;
    void* actionA4 = nullptr;
};

struct MissionFleetCommunicatorIdEventState {
    std::uint32_t position4 = 0;
    std::uint32_t position8 = 0;
    std::uint16_t flags24 = 0;
    std::uint32_t target50 = 0;
    std::uint32_t target54 = 0;
    std::uint32_t target58 = 0;
    void* controlD4 = nullptr;
    void* controlD8 = nullptr;
    void* controlDC = nullptr;
    void* controlCC = nullptr;
    void* controlD0 = nullptr;
    void* controlE8 = nullptr;
    void* controlEC = nullptr;
    void* control118 = nullptr;
    void* control11C = nullptr;
    void* child114 = nullptr;
    MissionFleetCommunicatorIdNode* list6C = nullptr;
    MissionFleetCommunicatorIdNode* list64 = nullptr;
    MissionFleetCommunicatorIdNode* selected100 = nullptr;
    MissionFleetCommunicatorIdNode* selectedFC = nullptr;
    std::uint16_t modeF6 = 0;
    std::int16_t indexFA = 0;
    std::int16_t indexF8 = 0;
    std::int16_t limitF2 = 0;
    std::int16_t limitF0 = 0;
    void* globalReceiver588 = nullptr;
    const void* resource450 = nullptr;
    const void* resource4A0 = nullptr;
    const void* resource4A4 = nullptr;
};

// Normal-path behavior of the panel's exact-matched vtable slot +0x08.
void missionFleetResetCommunicatorIdPosition(MissionFleetCommunicatorIdEventState& state);

struct MissionFleetCommunicatorIdEventHooks {
    void (*invokeNodeAction)(void* action, void* context);
    void (*selfVirtual08)(MissionFleetCommunicatorIdEventState*, void* context);
    void (*childVirtual04)(void* child, void* context);
    void (*globalDispatch)(void* receiver, const void* resource,
                           int argument, void* context);
    void (*refresh)(MissionFleetCommunicatorIdEventState*, int toggle, void* context);
    void (*openResource)(MissionFleetCommunicatorIdEventState*,
                         const void* first, const void* second, void* context);
};

std::uint32_t missionFleetDispatchCommunicatorIdEvent(
    MissionFleetCommunicatorIdEventState& state, void* target,
    std::uint32_t eventType, std::uint32_t unusedArgument,
    const MissionFleetCommunicatorIdEventHooks& hooks, void* context);
