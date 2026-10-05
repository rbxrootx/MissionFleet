#pragma once

#include <cstdint>

// Abstract view of the fields FUN_58902E10 uses; this is not a packed native
// ABI declaration. The names retain their observed Main.dll offsets.
struct MissionFleetShipMapRouteDescendant {
    std::uint32_t position4 = 0;
    std::uint32_t position8 = 0;
    std::uint16_t flags24 = 0;
    MissionFleetShipMapRouteDescendant* next38 = nullptr;
    MissionFleetShipMapRouteDescendant* firstChild3C = nullptr;
};

// Portable normal-path port of Main.dll FUN_58902E10. Adds the DWORD deltas
// to the receiver, then recursively visits its +0x3C/+0x38 child chain only
// when each child has flag 0x2000 set at +0x24.
void missionFleetApplyShipMapRouteDescendantDelta(
    MissionFleetShipMapRouteDescendant& receiver, std::uint32_t deltaX,
    std::uint32_t deltaY);
