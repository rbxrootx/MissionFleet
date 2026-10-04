#pragma once

#include <cstdint>

// Normal-path model of installed Main.dll FUN_58848B40.
struct MissionFleetCommunicatorIdPairNode {
    MissionFleetCommunicatorIdPairNode* next54 = nullptr;
    const void* first78 = nullptr;
    const void* second7C = nullptr;
    std::uint16_t flag9E = 0;
};

struct MissionFleetCommunicatorIdPairReceiver {
    MissionFleetCommunicatorIdPairNode* head64 = nullptr;
};

struct MissionFleetCommunicatorIdPairHooks {
    void* (*getMessageUi)(void* context);
    std::uint32_t (*dispatchMessage)(void* ui, std::uint32_t id,
                                     std::uint32_t first, std::uint32_t second,
                                     std::uint32_t third, void* context);
};

std::uint32_t missionFleetGuardCommunicatorIdPair(
    const MissionFleetCommunicatorIdPairReceiver& receiver,
    const void* first, const void* second,
    const MissionFleetCommunicatorIdPairHooks& hooks, void* context);
