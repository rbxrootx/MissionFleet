#include "CoreSpriteScreenDispatch.h"

#include <cstring>
#include <stdexcept>

namespace {

std::int32_t signedBits(std::uint32_t bits) {
    std::int32_t value;
    static_assert(sizeof(value) == sizeof(bits), "x86 DWORD must be 32 bits");
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

std::uint32_t unsignedBits(std::int32_t value) {
    std::uint32_t bits;
    static_assert(sizeof(value) == sizeof(bits), "x86 DWORD must be 32 bits");
    std::memcpy(&bits, &value, sizeof(bits));
    return bits;
}

std::int32_t addX86(std::int32_t left, std::int32_t right) {
    return signedBits(static_cast<std::uint32_t>(left) +
                      static_cast<std::uint32_t>(right));
}

std::int32_t subtractX86(std::int32_t left, std::int32_t right) {
    return signedBits(static_cast<std::uint32_t>(left) -
                      static_cast<std::uint32_t>(right));
}

}  // namespace

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
    void* userData) {
    if (sprite == nullptr || screen == nullptr || clipRect == nullptr ||
        dispatchSlot1 == nullptr) {
        throw std::logic_error(
            "Core FUN_587BA830 dereferences the sprite, screen, clip and slot 1");
    }

    MissionFleetCoreRenderRect clipped = *clipRect;
    const std::int32_t viewportLeft = addX86(
        screen->originX04, signedBits(screen->fallbackClipAt14.words[0]));
    const std::int32_t viewportTop = addX86(
        screen->originY08, signedBits(screen->fallbackClipAt14.words[1]));
    const std::int32_t viewportRight = addX86(
        screen->originX04, signedBits(screen->fallbackClipAt14.words[2]));
    const std::int32_t viewportBottom = addX86(
        screen->originY08, signedBits(screen->fallbackClipAt14.words[3]));

    if (signedBits(clipped.words[0]) < viewportLeft) {
        clipped.words[0] = unsignedBits(viewportLeft);
    }
    if (signedBits(clipped.words[1]) < viewportTop) {
        clipped.words[1] = unsignedBits(viewportTop);
    }
    if (viewportRight < signedBits(clipped.words[2])) {
        clipped.words[2] = unsignedBits(viewportRight);
    }
    if (viewportBottom < signedBits(clipped.words[3])) {
        clipped.words[3] = unsignedBits(viewportBottom);
    }

    MissionFleetCoreSpriteScreenDispatchOutcome outcome{
        subtractX86(x, screen->originX04),
        subtractX86(y, screen->originY08),
        {{unsignedBits(subtractX86(signedBits(clipped.words[0]),
                                   screen->originX04)),
          unsignedBits(subtractX86(signedBits(clipped.words[1]),
                                   screen->originY08)),
          unsignedBits(subtractX86(signedBits(clipped.words[2]),
                                   screen->originX04)),
          unsignedBits(subtractX86(signedBits(clipped.words[3]),
                                   screen->originY08))}}};

    // The captured callback dispatches even if these edges describe an empty
    // or inverted rectangle; any no-op decision belongs to the sprite method.
    dispatchSlot1(sprite, screen->targetPixels50, outcome.screenLocalX,
                  outcome.screenLocalY, outcome.screenLocalClip, color, effect,
                  userData);
    return outcome;
}

void missionFleetCoreSpriteDrawBridge(
    void* sprite,
    MissionFleetCoreRenderContext* screen,
    std::int32_t x,
    std::int32_t y,
    MissionFleetCoreRenderRect* clipRect,
    std::uint32_t color,
    std::uint32_t effect,
    void* dispatchBinding) {
    if (dispatchBinding == nullptr) {
        throw std::logic_error(
            "Core sprite screen-dispatch bridge requires a slot-1 binding");
    }
    auto& binding =
        *static_cast<MissionFleetCoreSpriteScreenDispatchBinding*>(dispatchBinding);
    missionFleetDispatchCoreSpriteDraw(sprite, screen, x, y, clipRect, color,
                                       effect, binding.slot1, binding.userData);
}
