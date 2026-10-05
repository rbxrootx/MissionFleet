#pragma once

#include <cstdint>

struct MissionFleetShipMapVisualNode;

// Offset-based view of the two owner heads initialized by FUN_589031A0.
struct MissionFleetShipMapVisualNodeListOwner {
    MissionFleetShipMapVisualNode* circularHead3C = nullptr;
    MissionFleetShipMapVisualNode* linearHead4C = nullptr;
};

// Semantic view of the fields used by Main.dll FUN_58902D20. The offsets are
// retained in the names; this is not asserted to be the original native type.
struct MissionFleetShipMapVisualNode {
    std::uint32_t vtable00 = 0;
    std::uint32_t value04 = 0;
    std::uint32_t value08 = 0;
    std::uint32_t copiedFields0CTo20[6]{};
    std::uint16_t flags24 = 0; // low WORD read by the helper
    std::uint16_t word26 = 0;
    std::uint32_t value28 = 0;
    std::uint32_t mode2C = 0;  // DWORD written by the helper
    MissionFleetShipMapVisualNodeListOwner* owner30 = nullptr;
    MissionFleetShipMapVisualNode* previous34 = nullptr;
    MissionFleetShipMapVisualNode* next38 = nullptr;
    MissionFleetShipMapVisualNode* firstChild3C = nullptr;
    MissionFleetShipMapVisualNodeListOwner* owner40 = nullptr;
    MissionFleetShipMapVisualNode* previous44 = nullptr;
    MissionFleetShipMapVisualNode* next48 = nullptr;
    MissionFleetShipMapVisualNode* firstChild4C = nullptr;
    std::uint32_t counter50 = 0;
    const std::uint8_t* record54 = nullptr;
    std::uint32_t value58 = 0;
    std::uint32_t value5C = 0;
    std::int32_t value60 = 0;
    std::int32_t value64 = 0;
};

// Writes mode2C on the receiver and recursively on linked children whose
// flags24 contain 0x8000, matching FUN_58902D20's observed traversal.
void missionFleetSetShipMapVisualNodeMode(
    MissionFleetShipMapVisualNode& receiver, std::uint32_t mode);
