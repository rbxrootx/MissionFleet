#include "Rgb16OpaqueSpan.h"

#include <cstdint>
#include <limits>

namespace {
std::uint16_t word(const std::uint8_t* data) {
    return static_cast<std::uint16_t>(data[0] | (static_cast<unsigned>(data[1]) << 8));
}

bool fitsSurface(int pitch, int height, std::size_t bufferSize) {
    return pitch > 0 && height > 0 &&
           static_cast<std::size_t>(pitch) <= bufferSize / static_cast<std::size_t>(height);
}
}

MissionFleetRgb16BlitResult missionFleetBlitOpaqueRgb16Spans(
    const std::uint8_t* payload, std::size_t payloadSize,
    int width, int height, std::uint8_t* framebuffer,
    std::size_t framebufferSize, int pitch, int targetHeight,
    int x, int y, MissionFleetRgb16Clip clip) {
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
    std::size_t copied = 0;
    while (payloadSize - position >= 2) {
        const auto rawControl = word(payload + position);
        const int control = rawControl < 0x8000u ? static_cast<int>(rawControl)
                                                : static_cast<int>(rawControl) - 0x10000;
        position += 2;
        if (control == -2) {
            if (position != payloadSize || row != height - 1)
                return {MissionFleetRgb16BlitError::invalidStream, copied};
            return {MissionFleetRgb16BlitError::none, copied};
        }
        if (control == -1) {
            ++row;
            cursorBytes = 0;
            if (row >= height) return {MissionFleetRgb16BlitError::invalidStream, copied};
            continue;
        }
        if (control < 0 || payloadSize - position < 3)
            return {MissionFleetRgb16BlitError::invalidStream, copied};
        const int length = word(payload + position + 1); // Intervening byte is ignored by the original.
        position += 3;
        cursorBytes += control;
        if ((control & 1) != 0 || (length & 1) != 0 ||
            cursorBytes + length > static_cast<std::int64_t>(width) * 2 ||
            static_cast<std::size_t>(length) > payloadSize - position) {
            return {MissionFleetRgb16BlitError::invalidStream, copied};
        }
        for (int offset = 0; offset < length; offset += 2) {
            const std::int64_t destinationX =
                static_cast<std::int64_t>(x) + (cursorBytes + offset) / 2;
            const std::int64_t destinationY = static_cast<std::int64_t>(y) + row;
            if (clip.left <= destinationX && destinationX < clip.right &&
                clip.top <= destinationY && destinationY < clip.bottom) {
                const auto destination = static_cast<std::size_t>(destinationY) * pitch +
                                         static_cast<std::size_t>(destinationX) * 2;
                framebuffer[destination] = payload[position + offset];
                framebuffer[destination + 1] = payload[position + offset + 1];
                ++copied;
            }
        }
        position += static_cast<std::size_t>(length);
        cursorBytes += length;
    }
    return {MissionFleetRgb16BlitError::invalidStream, copied};
}
