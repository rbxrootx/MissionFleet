#include "Rgb16OpaqueSpan.h"

#include <cstdint>
#include <limits>

namespace {
std::uint16_t word(const std::uint8_t* data) {
    return static_cast<std::uint16_t>(data[0] | (static_cast<unsigned>(data[1]) << 8));
}

void copyPixel(std::uint8_t* destination, const std::uint8_t* source) {
    destination[0] = source[0];
    destination[1] = source[1];
}

std::uint16_t blendCore565ShipPixel(std::uint16_t source,
                                    std::uint16_t destination) {
    // Core.dll 0x58800A60, color=0x80/effect=0x101 branch. Keep the
    // original mask, shift, multiply, mask, and add order explicit.
    constexpr std::uint32_t color = 0x80;
    constexpr std::uint32_t effect = 0x101;
    constexpr std::uint32_t sourceScale = color * ((effect + 0x100) >> 3) >> 5;
    constexpr std::uint32_t destinationScale = 0x20 - (color >> 3);
    constexpr std::uint32_t redBlueMask = 0xF81F;
    constexpr std::uint32_t greenMask = 0x07E0;

    const auto dst = static_cast<std::uint32_t>(destination);
    const auto src = static_cast<std::uint32_t>(source);
    const auto destinationChannels =
        ((((dst & redBlueMask) >> 5) * destinationScale) & redBlueMask) |
        ((((dst & greenMask) * destinationScale) >> 5) & greenMask);
    const auto sourceChannels =
        ((((src & redBlueMask) >> 5) * sourceScale) & redBlueMask) |
        ((((src & greenMask) * sourceScale) >> 5) & greenMask);
    return static_cast<std::uint16_t>(
        (destinationChannels + sourceChannels) & 0xFFFF);
}

void blendCore565ShipPixelBytes(std::uint8_t* destination,
                                const std::uint8_t* source) {
    const auto result = blendCore565ShipPixel(word(source), word(destination));
    destination[0] = static_cast<std::uint8_t>(result);
    destination[1] = static_cast<std::uint8_t>(result >> 8);
}

bool fitsSurface(int pitch, int height, std::size_t bufferSize) {
    return pitch > 0 && height > 0 &&
           static_cast<std::size_t>(pitch) <= bufferSize / static_cast<std::size_t>(height);
}

MissionFleetRgb16BlitResult blitSpans(
    const std::uint8_t* payload, std::size_t payloadSize,
    int width, int height, std::uint8_t* framebuffer,
    std::size_t framebufferSize, int pitch, int targetHeight,
    int x, int y, MissionFleetRgb16Clip clip,
    void (*writePixel)(std::uint8_t*, const std::uint8_t*)) {
    if (payload == nullptr || framebuffer == nullptr || width <= 0 || height <= 0 ||
        pitch <= 0 || pitch % 2 != 0 ||
        width > std::numeric_limits<int>::max() / 2 ||
        !fitsSurface(pitch, targetHeight, framebufferSize)) {
        return {MissionFleetRgb16BlitError::invalidGeometry, 0};
    }
    const int targetWidth = pitch / 2;
    if (clip.left < 0 || clip.top < 0 || clip.right < clip.left ||
        clip.bottom < clip.top || clip.right > targetWidth ||
        clip.bottom > targetHeight) {
        return {MissionFleetRgb16BlitError::invalidGeometry, 0};
    }

    std::size_t position = 0;
    int row = 0;
    std::int64_t cursorBytes = 0;
    std::size_t written = 0;
    while (payloadSize - position >= 2) {
        const auto rawControl = word(payload + position);
        const int control = rawControl < 0x8000u ? static_cast<int>(rawControl)
                                                : static_cast<int>(rawControl) - 0x10000;
        position += 2;
        if (control == -2) {
            if (position != payloadSize || row != height - 1)
                return {MissionFleetRgb16BlitError::invalidStream, written};
            return {MissionFleetRgb16BlitError::none, written};
        }
        if (control == -1) {
            ++row;
            cursorBytes = 0;
            if (row >= height) return {MissionFleetRgb16BlitError::invalidStream, written};
            continue;
        }
        if (control < 0 || payloadSize - position < 3)
            return {MissionFleetRgb16BlitError::invalidStream, written};
        const int length = word(payload + position + 1); // Intervening byte is ignored by the original.
        position += 3;
        cursorBytes += control;
        if ((control & 1) != 0 || (length & 1) != 0 ||
            cursorBytes + length > static_cast<std::int64_t>(width) * 2 ||
            static_cast<std::size_t>(length) > payloadSize - position) {
            return {MissionFleetRgb16BlitError::invalidStream, written};
        }
        for (int offset = 0; offset < length; offset += 2) {
            const std::int64_t destinationX =
                static_cast<std::int64_t>(x) + (cursorBytes + offset) / 2;
            const std::int64_t destinationY = static_cast<std::int64_t>(y) + row;
            if (clip.left <= destinationX && destinationX < clip.right &&
                clip.top <= destinationY && destinationY < clip.bottom) {
                const auto destination = static_cast<std::size_t>(destinationY) * pitch +
                                         static_cast<std::size_t>(destinationX) * 2;
                writePixel(framebuffer + destination, payload + position + offset);
                ++written;
            }
        }
        position += static_cast<std::size_t>(length);
        cursorBytes += length;
    }
    return {MissionFleetRgb16BlitError::invalidStream, written};
}
}

MissionFleetRgb16BlitResult missionFleetBlitOpaqueRgb16Spans(
    const std::uint8_t* payload, std::size_t payloadSize,
    int width, int height, std::uint8_t* framebuffer,
    std::size_t framebufferSize, int pitch, int targetHeight,
    int x, int y, MissionFleetRgb16Clip clip) {
    return blitSpans(payload, payloadSize, width, height, framebuffer,
                     framebufferSize, pitch, targetHeight, x, y, clip,
                     copyPixel);
}

MissionFleetRgb16BlitResult missionFleetBlitRgb565EffectSpans(
    const std::uint8_t* payload, std::size_t payloadSize,
    int width, int height, std::uint8_t* framebuffer,
    std::size_t framebufferSize, int pitch, int targetHeight,
    int x, int y, MissionFleetRgb16Clip clip) {
    return blitSpans(payload, payloadSize, width, height, framebuffer,
                     framebufferSize, pitch, targetHeight, x, y, clip,
                     blendCore565ShipPixelBytes);
}
