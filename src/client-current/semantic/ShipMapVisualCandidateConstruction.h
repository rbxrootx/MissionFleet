#pragma once

#include "ShipMapVisualNodeMode.h"

#include <cstdint>

// Normal-path semantic model of FUN_58907C80 / FUN_58734A30 and the local
// field initialization in FUN_589031A0. The node is caller-provided storage.
MissionFleetShipMapVisualNode* missionFleetConstructShipMapVisualCandidate(
    MissionFleetShipMapVisualNode& storage,
    MissionFleetShipMapVisualNodeListOwner* owner,
    const std::uint8_t* resourceRecord, std::uint32_t x04,
    std::uint32_t y08, std::uint16_t word26);
