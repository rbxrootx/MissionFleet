#include "CoreShipAnimationFrameDraw.h"

#include <cstring>

namespace {

std::int32_t signedBits(std::uint32_t bits) {
    std::int32_t value;
    static_assert(sizeof(value) == sizeof(bits), "x86 DWORD must be 32 bits");
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

std::int32_t addX86(std::int32_t left, std::int32_t right) {
    return signedBits(static_cast<std::uint32_t>(left) +
                      static_cast<std::uint32_t>(right));
}

MissionFleetCoreShipFrameDrawOutcome result(
    MissionFleetCoreShipFrameDrawStatus status,
    std::uint16_t frameIndex = 0) {
    return {status, frameIndex, {0, 0, {{0, 0, 0, 0}}}};
}

}  // namespace

MissionFleetCoreShipFrameDrawOutcome missionFleetDrawCoreShipAnimationFrame(
    const MissionFleetCoreShipAnimationView* animation,
    MissionFleetCoreRenderContext* screen,
    std::int32_t position[2],
    const MissionFleetCoreRenderRect* clipRect,
    std::int32_t elapsed,
    std::uint32_t color,
    std::uint32_t effect,
    MissionFleetCoreSpriteSlot1Dispatch dispatchSlot1,
    void* userData) {
    // Native 0x5849C770 returns before division when either the count at +0x0C
    // or screen argument is zero. The attached object's pointer itself is
    // checked by the 0x587B5DB0 caller.
    if (animation == nullptr || animation->frameCount == 0 || screen == nullptr) {
        return result(MissionFleetCoreShipFrameDrawStatus::emptyOrMissingScreen);
    }
    if (position == nullptr || clipRect == nullptr || dispatchSlot1 == nullptr) {
        return result(MissionFleetCoreShipFrameDrawStatus::invalidInputs);
    }

    // The mapped wrapper uses signed IDIV and the caller skips negative time.
    // Positive period is an invariant of valid records; zero faults natively.
    if (animation->framePeriod <= 0) {
        return result(MissionFleetCoreShipFrameDrawStatus::invalidFramePeriod);
    }
    if (elapsed < 0) {
        return result(MissionFleetCoreShipFrameDrawStatus::invalidElapsed);
    }

    const auto frameIndex = static_cast<std::uint16_t>(
        (elapsed / animation->framePeriod) % animation->frameCount);
    if (animation->frameRecords == nullptr ||
        animation->frameRecordCount < animation->frameCount ||
        animation->frameSprites == nullptr ||
        animation->frameSpriteCount < animation->frameCount) {
        return result(MissionFleetCoreShipFrameDrawStatus::missingFrameTable,
                      frameIndex);
    }

    void* const sprite = animation->frameSprites[frameIndex];
    if (sprite == nullptr) {
        return result(MissionFleetCoreShipFrameDrawStatus::missingSelectedSprite,
                      frameIndex);
    }

    const auto& frame = animation->frameRecords[frameIndex];
    position[0] = addX86(position[0], frame.offsetX);
    position[1] = addX86(position[1], frame.offsetY);
    MissionFleetCoreRenderRect localClip = *clipRect;

    MissionFleetCoreShipFrameDrawOutcome outcome = result(
        MissionFleetCoreShipFrameDrawStatus::dispatched, frameIndex);
    outcome.screenDispatch = missionFleetDispatchCoreSpriteDraw(
        sprite, screen, position[0], position[1], &localClip, color, effect,
        dispatchSlot1, userData);
    return outcome;
}

MissionFleetCoreShipFrameDrawOutcome missionFleetDrawCoreShipNodeSprite(
    const MissionFleetCoreShipRenderNodeView* node,
    MissionFleetCoreRenderContext* screen,
    const MissionFleetCoreRenderRect* inheritedClip,
    const MissionFleetCoreRenderOrigin* parentOrigin,
    MissionFleetCoreSpriteSlot1Dispatch dispatchSlot1,
    void* userData) {
    if (node == nullptr) {
        return result(MissionFleetCoreShipFrameDrawStatus::invalidInputs);
    }
    if ((node->flags24 & 0x0001u) == 0) {
        return result(MissionFleetCoreShipFrameDrawStatus::skippedByNodeFlag);
    }
    if (node->elapsed50 < 0) {
        return result(
            MissionFleetCoreShipFrameDrawStatus::skippedByNegativeNodeTime);
    }
    if (node->animation54 == nullptr ||
        reinterpret_cast<std::uintptr_t>(node->animation54) < 0x100u) {
        return result(MissionFleetCoreShipFrameDrawStatus::missingNodeAnimation);
    }
    if (screen == nullptr) {
        return result(MissionFleetCoreShipFrameDrawStatus::emptyOrMissingScreen);
    }
    if (parentOrigin == nullptr) {
        return result(MissionFleetCoreShipFrameDrawStatus::invalidInputs);
    }

    const std::int32_t position[2]{
        addX86(addX86(node->positionX04, node->anchorX0C),
               signedBits(parentOrigin->words[0])),
        addX86(addX86(node->positionY08, node->anchorY10),
               signedBits(parentOrigin->words[1])),
    };
    std::int32_t mutablePosition[2]{position[0], position[1]};
    return missionFleetDrawCoreShipAnimationFrame(
        node->animation54, screen, mutablePosition, inheritedClip,
        node->elapsed50, node->color28, node->effect2C, dispatchSlot1,
        userData);
}
