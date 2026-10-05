#pragma once

#include <cstdint>

// Semantic view of the fields used by Main.dll FUN_58902D20. The offsets are
// retained in the names; this is not asserted to be the original native type.
struct MissionFleetShipMapVisualNode {
    std::uint16_t flags24 = 0; // low WORD read by the helper
    std::uint32_t mode2C = 0;  // DWORD written by the helper
    MissionFleetShipMapVisualNode* next38 = nullptr;
    MissionFleetShipMapVisualNode* firstChild3C = nullptr;
};

// Writes mode2C on the receiver and recursively on linked children whose
// flags24 contain 0x8000, matching FUN_58902D20's observed traversal.
void missionFleetSetShipMapVisualNodeMode(
    MissionFleetShipMapVisualNode& receiver, std::uint32_t mode);
