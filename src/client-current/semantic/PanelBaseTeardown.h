#pragma once

#include <cstdint>

// Portable normal-path model for FUN_587B5F50. This is not the x86 object
// layout and does not model its exception-registration frame.
struct MissionFleetPanelBaseReceiver {
    std::uintptr_t vtable;  // Original receiver +0.
    void* child;            // Original receiver +0x74.
    std::int32_t sentinel;  // Original receiver +0x7C.
};

struct MissionFleetPanelBaseCallbacks {
    void (*releaseChild)(void* child, int one, void* context) noexcept;
    void (*baseCleanup)(MissionFleetPanelBaseReceiver* receiver,
                        void* context) noexcept;
    void* context;
};

extern "C" void MissionFleet_TeardownPanelBase(
    MissionFleetPanelBaseReceiver* receiver,
    MissionFleetPanelBaseCallbacks callbacks) noexcept;
