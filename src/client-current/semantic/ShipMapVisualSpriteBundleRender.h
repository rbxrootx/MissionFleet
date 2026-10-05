#pragma once

#include "ShipMapVisualNodeMode.h"

#include <cstdint>

struct MissionFleetShipMapVisualPoint {
    std::uint32_t x = 0;
    std::uint32_t y = 0;
};

// FUN_589038C0 forwards stack arguments in order [argument1, &point,
// argument2, frame50, value28, mode2C]. FUN_5873A5D0 may adjust the point.
struct MissionFleetShipMapVisualSpriteBundleInvocation {
    std::uint32_t argument1 = 0;
    MissionFleetShipMapVisualPoint point{};
    std::uint32_t argument2 = 0;
    std::uint32_t frame50 = 0;
    std::uint32_t value28 = 0;
    std::uint32_t mode2C = 0;
};

struct MissionFleetShipMapVisualSpriteBundleRenderHooks {
    // Virtual slot +0x14 on an eligible child. The three values preserve the
    // order passed by FUN_589038C0; origin may be null if the caller supplied it.
    void (*drawChild)(MissionFleetShipMapVisualNode& child,
                      std::uint32_t argument1, std::uint32_t argument2,
                      const MissionFleetShipMapVisualPoint* origin,
                      void* context) = nullptr;
    // Semantic boundary for the native FUN_5873A5D0 call. Its renderer backend
    // remains outside this model.
    void (*drawSprite)(const std::uint8_t* record54,
                       MissionFleetShipMapVisualSpriteBundleInvocation& invocation,
                       void* context) = nullptr;
};

// Readable model of the observed vtable +0x14 method at FUN_589038C0.
// This models its normal call path and leaves both virtual/draw destinations
// at explicit hooks.
void missionFleetRenderShipMapVisualSpriteBundle(
    MissionFleetShipMapVisualNode& receiver,
    std::uint32_t argument1, std::uint32_t argument2,
    const MissionFleetShipMapVisualPoint* origin,
    const MissionFleetShipMapVisualSpriteBundleRenderHooks& hooks,
    void* context);
