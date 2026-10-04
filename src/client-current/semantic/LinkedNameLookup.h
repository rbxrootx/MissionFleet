#pragma once

// Portable node model for FUN_588A44A0 and FUN_58842F60. It does not
// reproduce the original x86 node or receiver layouts.
struct MissionFleetNameNode {
    const char* name;            // Original node +0x70 -> nested +0x6C.
    MissionFleetNameNode* next;  // Original node +0x54.
};

struct MissionFleetNameSelection {
    MissionFleetNameNode* selected;  // Original receiver +0xF0.
};

struct MissionFleetNameManager {
    MissionFleetNameNode* head;  // Original global manager +0x90.
};

using MissionFleetNameCompare = int (*)(const char* query,
                                         const char* candidate,
                                         void* context) noexcept;

extern "C" void MissionFleet_SelectGlobalName(
    MissionFleetNameSelection* receiver,
    const MissionFleetNameManager* manager,
    const char* query) noexcept;
extern "C" MissionFleetNameNode* MissionFleet_FindReceiverName(
    MissionFleetNameNode* head,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept;
