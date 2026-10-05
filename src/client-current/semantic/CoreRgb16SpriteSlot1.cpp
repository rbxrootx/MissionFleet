#include "CoreRgb16SpriteSlot1.h"

#include <cstring>

namespace {
std::int32_t signedBits(std::uint32_t bits) {
    std::int32_t value;
    static_assert(sizeof(value) == sizeof(bits), "x86 DWORD must be 32 bits");
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

MissionFleetRgb16BlitResult unsupported() {
    return {MissionFleetRgb16BlitError::unsupportedMode, 0};
}
}

MissionFleetRgb16BlitResult missionFleetBlitCoreRgb16SpriteSlot1(
    const MissionFleetCoreRgb16SpriteView* sprite,
    std::uint8_t* targetPixels,
    int screenLocalX,
    int screenLocalY,
    const MissionFleetCoreRenderRect& screenLocalClip,
    std::uint32_t color,
    std::uint32_t effect,
    const MissionFleetCoreRgb16TargetBinding& target) {
    if (sprite == nullptr || targetPixels == nullptr)
        return {MissionFleetRgb16BlitError::invalidGeometry, 0};

    // Do not apply the first class's masks or pixel math to the sibling class:
    // its slot-1 method uses a different mask-specialized path.
    if (sprite->maskFamily != MissionFleetCoreRgb16MaskFamily::firstFormat2Family)
        return unsupported();

    const MissionFleetRgb16Clip clip{
        signedBits(screenLocalClip.words[0]),
        signedBits(screenLocalClip.words[1]),
        signedBits(screenLocalClip.words[2]),
        signedBits(screenLocalClip.words[3]),
    };
    if (color == 0x100 && effect == 0) {
        return missionFleetBlitOpaqueRgb16Spans(
            sprite->payload, sprite->payloadSize, sprite->width, sprite->height,
            targetPixels, target.framebufferSize, target.pitchBytes,
            target.targetHeight, screenLocalX, screenLocalY, clip);
    }
    if (color == 0x80 && effect == 0x101) {
        return missionFleetBlitRgb565EffectSpans(
            sprite->payload, sprite->payloadSize, sprite->width, sprite->height,
            targetPixels, target.framebufferSize, target.pitchBytes,
            target.targetHeight, screenLocalX, screenLocalY, clip);
    }
    return unsupported();
}

void missionFleetCoreRgb16SpriteSlot1Dispatch(
    void* sprite,
    void* targetPixels,
    std::int32_t screenLocalX,
    std::int32_t screenLocalY,
    const MissionFleetCoreRenderRect& screenLocalClip,
    std::uint32_t color,
    std::uint32_t effect,
    void* userData) {
    if (userData == nullptr) return;
    auto& target = *static_cast<MissionFleetCoreRgb16TargetBinding*>(userData);
    target.lastResult = missionFleetBlitCoreRgb16SpriteSlot1(
        static_cast<const MissionFleetCoreRgb16SpriteView*>(sprite),
        static_cast<std::uint8_t*>(targetPixels), screenLocalX, screenLocalY,
        screenLocalClip, color, effect, target);
}
