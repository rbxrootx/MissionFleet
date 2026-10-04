#pragma once

#include <cstdint>

// Portable field model for FUN_588DE5C0; pointer widths differ from x86.
struct MissionFleetCleanupNode {
    MissionFleetCleanupNode* next;  // Original node +8.
    void* payload;                   // Original node +0xC.
};

struct MissionFleetCleanupSlot {
    MissionFleetCleanupNode* head;  // Original slot +0.
    std::uint32_t field4;           // Original slot +4.
    std::uint32_t field8;           // Original slot +8.
    std::uint32_t fieldC;           // Original slot +0xC; untouched.
};

struct MissionFleetCleanupCallbacks {
    void (*visitPayload)(void* payload, void* context) noexcept;
    void (*releaseNode)(MissionFleetCleanupNode* node, int one,
                        void* context) noexcept;
    void* context;
};

extern "C" void MissionFleet_CleanupEightNodeSlots(
    MissionFleetCleanupSlot* slots,
    MissionFleetCleanupCallbacks callbacks) noexcept;
