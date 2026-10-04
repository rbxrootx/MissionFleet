#pragma once

#include <cstdint>

// Portable normal-path model of Main.dll FUN_58843190. Names describe the
// observed list operations, not recovered original type declarations.
struct MissionFleetLinkedChildNode {
    MissionFleetLinkedChildNode* previous; // original node +0x50
};

struct MissionFleetLinkedChildList {
    MissionFleetLinkedChildNode* head; // receiver +0x130
    MissionFleetLinkedChildNode* tail; // receiver +0x134, traversal begins here
    void* field144;                     // receiver +0x144, role unknown
    std::int16_t count;                 // receiver +0xFA, signed comparison
};

using MissionFleetReleaseLinkedChild =
    void (*)(MissionFleetLinkedChildNode*, int, void*);

int missionFleetTeardownLinkedChildren(MissionFleetLinkedChildList& list,
                                       MissionFleetReleaseLinkedChild release,
                                       void* context);

// Sibling receiver used by FUN_58842ef0. Unlike the function above, this
// variant is guarded by a positive count and stops at that count.
struct MissionFleetCountedChildList {
    MissionFleetLinkedChildNode* head; // receiver +0x138
    MissionFleetLinkedChildNode* tail; // receiver +0x13C
    void* field140;                     // receiver +0x140, role unknown
    std::int16_t count;                 // receiver +0xF8
};

void missionFleetTeardownCountedChildren(MissionFleetCountedChildList& list,
                                          MissionFleetReleaseLinkedChild release,
                                          void* context);
