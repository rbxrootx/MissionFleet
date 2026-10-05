#pragma once

#include "CoreSpriteScreenDispatch.h"
#include "Rgb16OpaqueSpan.h"

#include <cstddef>
#include <cstdint>

enum class MissionFleetCoreRgb16MaskFamily {
    // Constructor 0x588009C0 installs vtable 0x588BE71C. Its slot-1 body is
    // 0x58800A60; only two evidenced color/effect branches are ported here.
    firstFormat2Family,
    // Constructor 0x5880D370 installs vtable 0x588BE72C. Its distinct mask
    // family is intentionally not interpreted by this slice.
    alternateFormat2Family,
};

// Portable view of the payload/dimensions read from a selected Core sprite.
// It is not a declaration of the original in-memory C++ object layout.
struct MissionFleetCoreRgb16SpriteView {
    MissionFleetCoreRgb16MaskFamily maskFamily;
    const std::uint8_t* payload;
    std::size_t payloadSize;
    int width;
    int height;
};

// Pitch and capacity are supplied by the emulator's render surface. Core's
// sprite-screen dispatcher passes only the pixel pointer to slot 1.
struct MissionFleetCoreRgb16TargetBinding {
    std::size_t framebufferSize;
    int pitchBytes;
    int targetHeight;
    MissionFleetRgb16BlitResult lastResult;
};

// Portable implementation of the selected slot-1 behavior from
// Core.dll!0x58800A60. The RGB565 effect branch models color=0x80/effect=0x101.
MissionFleetRgb16BlitResult missionFleetBlitCoreRgb16SpriteSlot1(
    const MissionFleetCoreRgb16SpriteView* sprite,
    std::uint8_t* targetPixels,
    int screenLocalX,
    int screenLocalY,
    const MissionFleetCoreRenderRect& screenLocalClip,
    std::uint32_t color,
    std::uint32_t effect,
    const MissionFleetCoreRgb16TargetBinding& target);

// Adapter for MissionFleetCoreSpriteSlot1Dispatch so the existing scene →
// node → screen path can reach real framebuffer writes.
void missionFleetCoreRgb16SpriteSlot1Dispatch(
    void* sprite,
    void* targetPixels,
    std::int32_t screenLocalX,
    std::int32_t screenLocalY,
    const MissionFleetCoreRenderRect& screenLocalClip,
    std::uint32_t color,
    std::uint32_t effect,
    void* userData);
