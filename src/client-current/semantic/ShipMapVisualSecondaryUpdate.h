#pragma once

#include "ShipMapVisualNodeMode.h"

#include <cstdint>

struct MissionFleetShipMapVisualSecondaryUpdateHooks {
    // FUN_58788F90 samples the MSVCR90 rand() thunk after each frame advance.
    std::int32_t (*randValue)(void* context) = nullptr;
    // The mapped parent walker invokes each circular child through vtable +0x0C.
    void (*updateChild)(MissionFleetShipMapVisualNode& child,
                        void* context) = nullptr;
    // FUN_58788F90 ends expiration by calling the receiver's vtable +0x00
    // with argument 1 (the deleting-destructor path).
    void (*deleteSelf)(MissionFleetShipMapVisualNode& receiver,
                       std::uint32_t deletingFlag, void* context) = nullptr;
};

enum class MissionFleetShipMapVisualSecondaryUpdateResult {
    IgnoredFlag,
    Updated,
    Removed,
};

// Normal-path semantic model of the 172-byte Main.dll function at 0x58788F90.
// Owner-level update scheduling and all indirect vtable destinations remain
// outside this function model.
MissionFleetShipMapVisualSecondaryUpdateResult
missionFleetUpdateShipMapVisualSecondary(
    MissionFleetShipMapVisualNode& receiver,
    const MissionFleetShipMapVisualSecondaryUpdateHooks& hooks,
    void* context);
