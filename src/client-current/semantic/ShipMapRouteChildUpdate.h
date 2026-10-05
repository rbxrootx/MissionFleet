#pragma once

#include "ShipMapRouteDescendantMovement.h"

#include <cstddef>
#include <cstdint>

// Normal-path model of Main.dll FUN_588DBF10. Names retain the source offsets
// where the original type or field meaning is not established.
struct MissionFleetShipMapRouteRecord {
    std::uint8_t unknown00To0B[0x0C]{};
    std::uint16_t word0C = 0;
    std::uint8_t unknown0ETo17[0x0A]{};
    std::uint32_t copiedFields18To2C[6]{};
    std::uint8_t unknown30To3F[0x10]{};
};
static_assert(sizeof(MissionFleetShipMapRouteRecord) == 0x40,
              "ship-map route records use a 0x40-byte stride");
static_assert(offsetof(MissionFleetShipMapRouteRecord, word0C) == 0x0C &&
              offsetof(MissionFleetShipMapRouteRecord, copiedFields18To2C) == 0x18,
              "route-record fields retain the observed offsets");

struct MissionFleetShipMapRouteVisual {
    const MissionFleetShipMapRouteRecord* record54 = nullptr;
    std::uint32_t counter50 = 0;
    std::uint32_t copiedFields0CTo20[6]{};
    std::uint32_t position4 = 0;
    std::uint32_t position8 = 0;
    MissionFleetShipMapRouteDescendant* descendants3C = nullptr;
};

struct MissionFleetShipMapSelection {
    std::uint32_t flag34 = 0;
    std::uint32_t index68 = 0;
};

struct MissionFleetShipMapRouteOffset {
    std::uint32_t x17BC = 0;
    std::uint32_t y17C0 = 0;
};

struct MissionFleetShipMapRouteChildState {
    std::uint32_t phase609C = 0;
    std::uint32_t objectX4 = 0;
    std::uint32_t objectY8 = 0;
    MissionFleetShipMapSelection selection23C{};
    std::uint32_t routeOffsetIndex605C = 0;
    const MissionFleetShipMapRouteRecord* records190 = nullptr;
    std::uint32_t recordCount160 = 0;
    std::size_t availableRecordCapacity = 0;
    const MissionFleetShipMapRouteOffset* routeOffsets17BC = nullptr;
    std::size_t availableRouteOffsetCount = 0;
    MissionFleetShipMapRouteVisual* child146C = nullptr;
};

void missionFleetUpdateShipMapRouteChild(
    MissionFleetShipMapRouteChildState& state);
