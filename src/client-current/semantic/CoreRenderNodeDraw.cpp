#include "CoreRenderNodeDraw.h"

#include <cstring>
#include <stdexcept>

namespace {

constexpr std::uint32_t kMinimumValidChildVtable = 0x00010000u;

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

bool validChild(const MissionFleetCoreResourceSceneChild& child) {
    return child.firstWord > kMinimumValidChildVtable;
}

void dispatchChild(MissionFleetCoreResourceSceneChild& child,
                   MissionFleetCoreRenderContext* renderTarget,
                   MissionFleetCoreRenderRect* clipRect,
                   MissionFleetCoreRenderOrigin* origin) {
    if (child.drawSlot14 == nullptr) {
        throw std::logic_error(
            "Core FUN_587B5F40 requires a child vtable +0x14 target");
    }
    child.drawSlot14(child, renderTarget, clipRect, origin, child.userData);
}

}  // namespace

MissionFleetCoreRenderNodeDrawOutcome missionFleetDrawCoreRenderNode(
    MissionFleetCoreRenderNodeState& node,
    MissionFleetCoreRenderContext* renderTarget,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin,
    MissionFleetCoreSpriteDispatch dispatchSprite,
    void* spriteContext) {
    MissionFleetCoreRenderNodeDrawOutcome outcome{};
    if ((node.flags24 & 0x0001u) == 0) {
        outcome.skippedByFlag = true;
        return outcome;
    }

    auto* child = node.firstChild4C;
    if (child != nullptr && !validChild(*child)) {
        node.firstChild4C = nullptr;
        child = nullptr;
        outcome.clearedInvalidHead = true;
    }

    // Negative order keys are painted before this node's own sprite.
    while (child != nullptr) {
        if (!validChild(*child)) {
            child = nullptr;
            outcome.stoppedAtInvalidChild = true;
            break;
        }
        if (child->signedOrderKey26 >= 0) {
            break;
        }

        dispatchChild(*child, renderTarget, clipRect, origin);
        ++outcome.childDispatches;
        // The native code calls the child first, then fetches its +0x48 link.
        child = child->next48;
    }

    if (node.sprite50 != nullptr) {
        if (clipRect == nullptr || origin == nullptr) {
            throw std::logic_error(
                "Core FUN_587B5F40 dereferences clip and origin for a sprite");
        }
        if (dispatchSprite == nullptr) {
            throw std::logic_error(
                "Core FUN_587B5F40 requires the sprite draw bridge");
        }

        const std::int32_t x = addX86(
            addX86(node.positionX04, node.anchorX0C),
            signedBits(origin->words[0]));
        const std::int32_t y = addX86(
            addX86(node.positionY08, node.anchorY10),
            signedBits(origin->words[1]));
        MissionFleetCoreRenderRect localClipRect = *clipRect;
        dispatchSprite(node.sprite50, renderTarget, x, y, &localClipRect,
                       node.color28, node.effect2C, spriteContext);
        outcome.spriteDispatched = true;
    }

    // The native second pass drains the remaining list without checking the
    // key again; each link is read after that child's virtual call.
    while (child != nullptr) {
        if (!validChild(*child)) {
            outcome.stoppedAtInvalidChild = true;
            break;
        }
        dispatchChild(*child, renderTarget, clipRect, origin);
        ++outcome.childDispatches;
        child = child->next48;
    }

    return outcome;
}

void missionFleetRenderCoreNodeSlot14(
    MissionFleetCoreResourceSceneChild& nodeEntry,
    MissionFleetCoreRenderContext* renderTarget,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin,
    void* nodeBinding) {
    if (nodeBinding == nullptr) {
        throw std::logic_error(
            "Core render-node slot adapter requires a semantic binding");
    }
    (void)nodeEntry;
    auto& binding = *static_cast<MissionFleetCoreRenderNodeBinding*>(nodeBinding);
    if (binding.state == nullptr) {
        throw std::logic_error(
            "Core render-node slot adapter requires a semantic state view");
    }
    const auto outcome = missionFleetDrawCoreRenderNode(
        *binding.state, renderTarget, clipRect, origin, binding.dispatchSprite,
        binding.spriteContext);
    (void)outcome;
}
