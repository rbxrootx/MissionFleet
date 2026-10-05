#pragma once

#include "CoreResourceSceneRender.h"

#include <cstdint>

struct MissionFleetCoreRenderNodeState {
    std::uint16_t flags24;
    MissionFleetCoreResourceSceneChild* firstChild4C;
    std::int32_t positionX04;
    std::int32_t positionY08;
    std::int32_t anchorX0C;
    std::int32_t anchorY10;
    std::uint32_t color28;
    std::uint32_t effect2C;
    void* sprite50;
};

using MissionFleetCoreSpriteDispatch = void (*)(
    void* sprite,
    MissionFleetCoreRenderContext* renderTarget,
    std::int32_t x,
    std::int32_t y,
    MissionFleetCoreRenderRect* localClipRect,
    std::uint32_t color,
    std::uint32_t effect,
    void* userData);

struct MissionFleetCoreRenderNodeBinding {
    MissionFleetCoreRenderNodeState* state;
    MissionFleetCoreSpriteDispatch dispatchSprite;
    void* spriteContext;
};

struct MissionFleetCoreRenderNodeDrawOutcome {
    std::uint32_t childDispatches;
    bool spriteDispatched;
    bool clearedInvalidHead;
    bool stoppedAtInvalidChild;
    bool skippedByFlag;
};

// Semantic port of Core.dll FUN_587B5F40. The per-node fields and child-list
// entry are split into test views; this is not an ABI/layout declaration.
MissionFleetCoreRenderNodeDrawOutcome missionFleetDrawCoreRenderNode(
    MissionFleetCoreRenderNodeState& node,
    MissionFleetCoreRenderContext* renderTarget,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin,
    MissionFleetCoreSpriteDispatch dispatchSprite,
    void* spriteContext);

// Adapter for installing the semantic node method as a scene-child slot +0x14
// callback in the portable scene model. child.userData points to a binding.
void missionFleetRenderCoreNodeSlot14(
    MissionFleetCoreResourceSceneChild& nodeEntry,
    MissionFleetCoreRenderContext* renderTarget,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin,
    void* nodeState);
