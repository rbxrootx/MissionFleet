#pragma once

#include "ShipMapVisualNodeMode.h"

using MissionFleetShipMapVisualChildUpdate =
    void (*)(MissionFleetShipMapVisualNode& child, void* context);

enum class MissionFleetShipMapVisualNodeUpdateDispatchResult {
    IgnoredFlag,
    Empty,
    Dispatched,
};

// Normal-path port of FUN_58903040. The child callback represents virtual
// slot +0x0C; its contract and meaningful return value are not established.
MissionFleetShipMapVisualNodeUpdateDispatchResult
missionFleetDispatchShipMapVisualNodeUpdates(
    MissionFleetShipMapVisualNode& receiver,
    MissionFleetShipMapVisualChildUpdate updateChild, void* context);
