#pragma once

// Portable node model for FUN_588A44A0, FUN_58842F60, and FUN_58842fb0. It does not
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

struct MissionFleetDualNameLists {
    MissionFleetNameNode* at64;  // Original receiver +0x64.
    MissionFleetNameNode* at6C;  // Original receiver +0x6C.
};

struct MissionFleetTokenNameLists {
    MissionFleetNameNode* at130; // Original receiver +0x130.
    MissionFleetNameNode* at138; // Original receiver +0x138.
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
extern "C" MissionFleetNameNode* MissionFleet_FindNameAt64(
    const MissionFleetDualNameLists* receiver,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept;
extern "C" MissionFleetNameNode* MissionFleet_FindNameAt6C(
    const MissionFleetDualNameLists* receiver,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept;
extern "C" MissionFleetNameNode* MissionFleet_FindNameAt130(
    const MissionFleetTokenNameLists* receiver,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept;
extern "C" MissionFleetNameNode* MissionFleet_FindNameAt138(
    const MissionFleetTokenNameLists* receiver,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept;
