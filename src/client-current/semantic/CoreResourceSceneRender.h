#pragma once

#include <cstdint>

struct MissionFleetCoreRenderRect {
    std::uint32_t words[4];
};

struct MissionFleetCoreRenderOrigin {
    std::uint32_t words[2];
};

// Semantic views of the objects passed through Core.dll's scene draw path.
// These are portable test models, not declarations of the original ABI.
struct MissionFleetCoreRenderContext {
    // Portable screen view: viewport relative to the screen origin, followed
    // by the fields read at +0x04, +0x08, and +0x50. Not an ABI layout.
    MissionFleetCoreRenderRect fallbackClipAt14;
    std::int32_t originX04 = 0;
    std::int32_t originY08 = 0;
    void* targetPixels50 = nullptr;
};

struct MissionFleetCoreResourceSceneChild;

using MissionFleetCoreResourceSceneChildDraw = void (*)(
    MissionFleetCoreResourceSceneChild& child,
    MissionFleetCoreRenderContext* renderContext,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin,
    void* userData);

struct MissionFleetCoreResourceSceneChild {
    std::uint32_t firstWord;
    std::int16_t signedOrderKey26;
    MissionFleetCoreResourceSceneChild* next48;
    MissionFleetCoreResourceSceneChildDraw drawSlot14;
    void* userData;
};

struct MissionFleetCoreResourceScene {
    std::uint16_t flags24;
    MissionFleetCoreResourceSceneChild* firstChild4C;
};

using MissionFleetCoreResourceSceneDrawSlot14 = void (*)(
    MissionFleetCoreResourceScene& scene,
    MissionFleetCoreRenderContext& renderContext,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin,
    void* userData);

enum class MissionFleetCoreResourceSceneRenderResult {
    MissingContext,
    RenderFlagClear,
    EmptyOrInvalidHead,
    DispatchedChildren,
};

enum class MissionFleetCoreResourceSceneDispatchResult {
    MissingContext,
    MissingSlot14,
    InvokedSlot14,
};

// Semantic port of the reachable wrapper FUN_587B5430. The caller's clip is
// copied, or the four words at render-context offset +0x14 are used; the
// wrapper always supplies a zero-initialized two-word origin.
MissionFleetCoreResourceSceneDispatchResult
missionFleetDispatchCoreResourceSceneDraw(
    MissionFleetCoreResourceScene& scene,
    MissionFleetCoreRenderContext* renderContext,
    const MissionFleetCoreRenderRect* optionalClipRect,
    MissionFleetCoreResourceSceneDrawSlot14 drawSceneSlot14,
    void* userData);

// Semantic port of the slot +0x14 target FUN_587B5320. It dispatches child
// virtual slot +0x14 in signed-key order, with negative keys in the first pass.
MissionFleetCoreResourceSceneRenderResult
missionFleetRenderCoreResourceSceneChildren(
    MissionFleetCoreResourceScene& scene,
    MissionFleetCoreRenderContext* renderContext,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin);
