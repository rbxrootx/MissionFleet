#pragma once

#include "CoreSpriteScreenDispatch.h"

#include <cstddef>
#include <cstdint>

// Portable view of the first two words in one 0x24-byte Core animation row.
// The remaining row bytes exist in the native table but are not read by the
// timed-frame wrapper being modeled here.
struct MissionFleetCoreShipAnimationFrame {
    std::int32_t offsetX;
    std::int32_t offsetY;
    std::uint8_t unmodeled[0x1c];
};

static_assert(sizeof(MissionFleetCoreShipAnimationFrame) == 0x24,
              "Core ship animation frame stride must remain 0x24 bytes");

// Semantic view of the fields read from the attached animation object. This
// is not a declaration of the original C++ object layout.
struct MissionFleetCoreShipAnimationView {
    std::uint16_t frameCount;
    std::int32_t framePeriod;
    const MissionFleetCoreShipAnimationFrame* frameRecords;
    std::size_t frameRecordCount;
    void* const* frameSprites;
    std::size_t frameSpriteCount;
};

// The sprite-related fields read from Core's ship render node. The linked
// child callbacks around the sprite arm are outside this view.
struct MissionFleetCoreShipRenderNodeView {
    std::uint16_t flags24;
    std::int32_t positionX04;
    std::int32_t positionY08;
    std::int32_t anchorX0C;
    std::int32_t anchorY10;
    std::int32_t elapsed50;
    std::uint32_t color28;
    std::uint32_t effect2C;
    const MissionFleetCoreShipAnimationView* animation54;
};

enum class MissionFleetCoreShipFrameDrawStatus {
    dispatched,
    emptyOrMissingScreen,
    invalidInputs,
    invalidFramePeriod,
    invalidElapsed,
    missingFrameTable,
    missingSelectedSprite,
    skippedByNodeFlag,
    skippedByNegativeNodeTime,
    missingNodeAnimation,
};

struct MissionFleetCoreShipFrameDrawOutcome {
    MissionFleetCoreShipFrameDrawStatus status;
    std::uint16_t frameIndex;
    MissionFleetCoreSpriteScreenDispatchOutcome screenDispatch;
};

// Semantic port of Core.dll!0x5849C770 for the valid caller contract. It
// mutates the caller's two-word position by the selected frame offsets, then
// dispatches the independently selected sprite through 0x587BA830.
// Nonpositive periods and malformed tables receive safe statuses; the native
// code assumes these inputs are valid and may fault for them.
MissionFleetCoreShipFrameDrawOutcome missionFleetDrawCoreShipAnimationFrame(
    const MissionFleetCoreShipAnimationView* animation,
    MissionFleetCoreRenderContext* screen,
    std::int32_t position[2],
    const MissionFleetCoreRenderRect* clipRect,
    std::int32_t elapsed,
    std::uint32_t color,
    std::uint32_t effect,
    MissionFleetCoreSpriteSlot1Dispatch dispatchSlot1,
    void* userData);

// Models the sprite arm of Core.dll!0x587B5DB0: flag/time gates, parent plus
// node/anchor position, and dispatch through the timed frame wrapper above.
// The source's linked child callbacks before and after this arm are not run.
MissionFleetCoreShipFrameDrawOutcome missionFleetDrawCoreShipNodeSprite(
    const MissionFleetCoreShipRenderNodeView* node,
    MissionFleetCoreRenderContext* screen,
    const MissionFleetCoreRenderRect* inheritedClip,
    const MissionFleetCoreRenderOrigin* parentOrigin,
    MissionFleetCoreSpriteSlot1Dispatch dispatchSlot1,
    void* userData);
