#pragma once

#include "CommunicatorIdEvent.h"

#include <cstdint>

// Local, normal-path model of CPannelCommunicatorIDPannel vtable slot +0x0C.
// The original helper functions propagate some updates into nested children;
// these hooks expose those side effects without inventing child layouts.
struct MissionFleetCommunicatorIdMotionChild {
    MissionFleetCommunicatorIdMotionChild* next38 = nullptr;
};

struct MissionFleetCommunicatorIdMotionHooks {
    void (*batch)(MissionFleetCommunicatorIdEventState&, void* context) = nullptr;
    void (*positionDelta)(MissionFleetCommunicatorIdEventState&, std::int32_t dx,
                          std::int32_t dy, void* context) = nullptr;
    void (*heightChanged)(MissionFleetCommunicatorIdEventState&, std::uint32_t value,
                          void* context) = nullptr;
    void (*widthChanged)(MissionFleetCommunicatorIdEventState&, std::uint32_t value,
                         void* context) = nullptr;
    void (*refresh)(MissionFleetCommunicatorIdEventState&, int argument,
                    void* context) = nullptr;
    void (*parentEvent)(MissionFleetCommunicatorIdEventState&, std::uint32_t code,
                        int argument, void* context) = nullptr;
    void (*childTick)(MissionFleetCommunicatorIdMotionChild&, void* context) = nullptr;
};

void missionFleetUpdateCommunicatorIdMotion(
    MissionFleetCommunicatorIdEventState& state, std::uint8_t globalModeD0,
    const MissionFleetCommunicatorIdMotionHooks& hooks, void* context);
