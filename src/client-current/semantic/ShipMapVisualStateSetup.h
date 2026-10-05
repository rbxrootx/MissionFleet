#pragma once

#include "ShipMapVisualNodeMode.h"

#include <array>
#include <cstddef>
#include <cstdint>

// The mapped setup path reads six DWORDs at record offsets 0x18..0x2C and
// advances through records with a 0x40-byte stride. Other bytes stay opaque.
struct MissionFleetShipMapVisualResourceRecord {
    std::uint32_t opaque00To17[6]{};
    std::uint32_t fields18To2C[6]{};
    std::uint32_t opaque30To3F[4]{};
};
static_assert(sizeof(MissionFleetShipMapVisualResourceRecord) == 0x40);
static_assert(offsetof(MissionFleetShipMapVisualResourceRecord, fields18To2C) == 0x18);

struct MissionFleetShipMapVisualResourceList {
    std::int32_t count160 = 0;
    const MissionFleetShipMapVisualResourceRecord* records190 = nullptr;
};

using MissionFleetShipMapVisualAnimationNode = MissionFleetShipMapVisualNode;

struct MissionFleetShipMapVisualChild {
    const MissionFleetShipMapVisualResourceRecord* record54 = nullptr;
    std::uint32_t frameValue50 = 0;
    std::uint32_t copiedFields0CTo20[6]{};
};

// Normal-path model for the 0x080000 phase of Main.dll FUN_588DB610.
// Names preserve observed offsets where the original type is unknown.
struct MissionFleetShipMapVisualStateSetup {
    std::uint32_t state60B0 = 0;
    std::int32_t routeCursor605C = 0;
    std::int32_t routeDivisor6050 = 0;
    std::int32_t pageIndex6054 = 0;
    std::uint32_t value603C = 0;
    std::uint32_t value6040 = 0;

    std::uint8_t modeByte100C4 = 0;
    std::uint16_t modeWord100C0A = 0;
    std::uint16_t word164 = 0;
    std::array<MissionFleetShipMapVisualAnimationNode*, 8> nodes60DC{};

    MissionFleetShipMapVisualResourceList globalRecords58A24724{};
    MissionFleetShipMapVisualResourceList records60D0{};
    MissionFleetShipMapVisualResourceList records60D4{};
    MissionFleetShipMapVisualChild child60D8{};
    MissionFleetShipMapVisualChild child1470{};
    MissionFleetShipMapVisualChild child178{};

    MissionFleetShipMapVisualNode* child60FC = nullptr;
    MissionFleetShipMapVisualAnimationNode* child12F4 = nullptr;
    MissionFleetShipMapVisualAnimationNode* child12F8 = nullptr;
    void* selectedReceiver58A247F8 = nullptr;
};

struct MissionFleetShipMapVisualStateSetupHooks {
    // FUN_588D9C40 is called with this receiver and argument 0 before setup.
    void (*refresh588D9C40)(MissionFleetShipMapVisualStateSetup& receiver,
                            std::uint32_t argument, void* context) = nullptr;
};

enum class MissionFleetShipMapVisualStateSetupResult {
    IgnoredPhase,
    Applied,
    InvalidSignedDivision,
};

MissionFleetShipMapVisualStateSetupResult missionFleetSetupShipMapVisualState(
    MissionFleetShipMapVisualStateSetup& state,
    const MissionFleetShipMapVisualStateSetupHooks& hooks, void* context);
