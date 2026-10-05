#pragma once

#include "ShipMapVisualNodeMode.h"

#include <cstdint>

struct MissionFleetShipMapVisualSecondaryDestructionHooks {
    // FUN_58788F60 forwards `this` through FUN_5897CC42 when deletingFlag's
    // low bit is set. The thunk's target and ownership effect are unresolved.
    void (*releaseThunk)(MissionFleetShipMapVisualNode& receiver,
                         void* context) = nullptr;
};

// Semantic model of the observed destructor chain:
// FUN_58788F60 -> FUN_589038A0 -> FUN_58902D60 -> list unlink helpers.
// Child owner views must represent the receiver's +0x3C/+0x4C list heads.
void missionFleetDestroyShipMapVisualSecondary(
    MissionFleetShipMapVisualNode& receiver, std::uint32_t deletingFlag,
    const MissionFleetShipMapVisualSecondaryDestructionHooks& hooks,
    void* context);
