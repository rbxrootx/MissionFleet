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
