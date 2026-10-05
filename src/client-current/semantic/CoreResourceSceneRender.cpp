#include "CoreResourceSceneRender.h"

#include <stdexcept>

namespace {

constexpr std::uint32_t kMinimumValidChildVtable = 0x00010000u;

void drawChild(MissionFleetCoreResourceSceneChild& child,
               MissionFleetCoreRenderContext& renderContext,
               MissionFleetCoreRenderRect* clipRect,
               MissionFleetCoreRenderOrigin* origin) {
    if (child.drawSlot14 == nullptr) {
        throw std::logic_error(
            "Core FUN_587B5320 requires a child vtable +0x14 target");
    }
    child.drawSlot14(child, renderContext, clipRect, origin, child.userData);
}
}  // namespace

MissionFleetCoreResourceSceneDispatchResult
missionFleetDispatchCoreResourceSceneDraw(
    MissionFleetCoreResourceScene& scene,
    MissionFleetCoreRenderContext* renderContext,
    const MissionFleetCoreRenderRect* optionalClipRect,
    MissionFleetCoreResourceSceneDrawSlot14 drawSceneSlot14,
    void* userData) {
    if (renderContext == nullptr) {
        return MissionFleetCoreResourceSceneDispatchResult::MissingContext;
    }
    if (drawSceneSlot14 == nullptr) {
        return MissionFleetCoreResourceSceneDispatchResult::MissingSlot14;
    }

    MissionFleetCoreRenderRect localClipRect =
        optionalClipRect != nullptr ? *optionalClipRect
                                    : renderContext->fallbackClipAt14;
    MissionFleetCoreRenderOrigin localOrigin{{0u, 0u}};
    drawSceneSlot14(scene, *renderContext, &localClipRect, &localOrigin,
                    userData);
    return MissionFleetCoreResourceSceneDispatchResult::InvokedSlot14;
}

MissionFleetCoreResourceSceneRenderResult
missionFleetRenderCoreResourceSceneChildren(
    MissionFleetCoreResourceScene& scene,
    MissionFleetCoreRenderContext* renderContext,
    MissionFleetCoreRenderRect* clipRect,
    MissionFleetCoreRenderOrigin* origin) {
    if (renderContext == nullptr) {
        return MissionFleetCoreResourceSceneRenderResult::MissingContext;
    }
    if ((scene.flags24 & 0x0001u) == 0) {
        return MissionFleetCoreResourceSceneRenderResult::RenderFlagClear;
    }

    auto* child = scene.firstChild4C;
    if (child == nullptr) {
        return MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
    }
    if (child->firstWord <= kMinimumValidChildVtable) {
        scene.firstChild4C = nullptr;
        return MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
    }

    bool dispatched = false;
    while (child != nullptr) {
        if (child->firstWord <= kMinimumValidChildVtable) {
            child = nullptr;
            break;
        }

        // FUN_587B5320 reads the signed key before the child call. A negative
        // key belongs to the first painter-order pass; the first nonnegative
        // child starts the second pass.
        if (child->signedOrderKey26 >= 0) {
            break;
        }

        drawChild(*child, *renderContext, clipRect, origin);
        dispatched = true;

        // The mapped code obtains child +0x48 after the virtual call. Keep
        // this load after the callback so callback-side link changes are seen.
        child = child->next48;
    }

    while (child != nullptr) {
        if (child->firstWord <= kMinimumValidChildVtable) {
            child = nullptr;
            break;
        }

        drawChild(*child, *renderContext, clipRect, origin);
        dispatched = true;
        child = child->next48;
    }

    return dispatched
               ? MissionFleetCoreResourceSceneRenderResult::DispatchedChildren
               : MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
}
