#pragma once

#include <cstddef>
#include <cstdint>

struct MissionFleetRgb16Clip {
    int left;
    int top;
    int right;
    int bottom;
};

enum class MissionFleetRgb16BlitError {
    none,
    invalidGeometry,
    invalidStream,
};

struct MissionFleetRgb16BlitResult {
    MissionFleetRgb16BlitError error;
    std::size_t copiedPixels;
};

// Portable opaque/effect-zero RGB16 span path reconstructed from the current
// Core.dll 0x58800A60 branch. Source words are copied without color conversion.
MissionFleetRgb16BlitResult missionFleetBlitOpaqueRgb16Spans(
    const std::uint8_t* payload, std::size_t payloadSize,
    int width, int height, std::uint8_t* framebuffer,
    std::size_t framebufferSize, int pitch, int targetHeight,
    int x, int y, MissionFleetRgb16Clip clip);
