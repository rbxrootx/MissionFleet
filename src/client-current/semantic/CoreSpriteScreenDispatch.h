#pragma once

#include "CoreRenderNodeDraw.h"

#include <cstdint>

using MissionFleetCoreSpriteSlot1Dispatch = void (*)(
    void* sprite,
    void* targetPixels,
    std::int32_t screenLocalX,
    std::int32_t screenLocalY,
    const MissionFleetCoreRenderRect& screenLocalClip,
    std::uint32_t color,
    std::uint32_t effect,
    void* userData);

struct MissionFleetCoreSpriteScreenDispatchOutcome {
    std::int32_t screenLocalX;
    std::int32_t screenLocalY;
    MissionFleetCoreRenderRect screenLocalClip;
};

struct MissionFleetCoreSpriteScreenDispatchBinding {
    MissionFleetCoreSpriteSlot1Dispatch slot1;
    void* userData;
};

// Semantic port of Core.dll FUN_587BA830. The injected slot-1 callback models
// the concrete sprite vtable target; clip edges are copied before clamping.
MissionFleetCoreSpriteScreenDispatchOutcome
missionFleetDispatchCoreSpriteDraw(
    void* sprite,
    MissionFleetCoreRenderContext* screen,
    std::int32_t x,
    std::int32_t y,
    const MissionFleetCoreRenderRect* clipRect,
    std::uint32_t color,
    std::uint32_t effect,
    MissionFleetCoreSpriteSlot1Dispatch dispatchSlot1,
    void* userData);

// Adapter for MissionFleetCoreSpriteDispatch in CoreRenderNodeDraw.h.
void missionFleetCoreSpriteDrawBridge(
    void* sprite,
    MissionFleetCoreRenderContext* screen,
    std::int32_t x,
    std::int32_t y,
    MissionFleetCoreRenderRect* clipRect,
    std::uint32_t color,
    std::uint32_t effect,
    void* dispatchBinding);
