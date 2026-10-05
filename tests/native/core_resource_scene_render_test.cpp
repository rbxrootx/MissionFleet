#include "../../src/client-current/semantic/CoreResourceSceneRender.h"

#include <array>
#include <cstdlib>
#include <cstdio>
#include <vector>

namespace {

void check(bool condition, int line) {
    if (!condition) {
        std::fprintf(stderr, "Core resource-scene render check failed at line %d\n",
                     line);
        std::abort();
    }
}

#define require(condition) check((condition), __LINE__)

struct DrawLog {
    MissionFleetCoreRenderContext* expectedContext = nullptr;
    MissionFleetCoreRenderRect* expectedClip = nullptr;
    MissionFleetCoreRenderOrigin* expectedOrigin = nullptr;
    const MissionFleetCoreRenderRect* explicitClip = nullptr;
    const MissionFleetCoreRenderRect* previousClip = nullptr;
    const MissionFleetCoreRenderOrigin* previousOrigin = nullptr;
    bool clipWasCopied = false;
    bool originWasInitializedToZero = false;
    bool pointersStayedStable = true;
    MissionFleetCoreResourceSceneChild* mutateNextOn = nullptr;
    MissionFleetCoreResourceSceneChild* replacementNext = nullptr;
    std::vector<int> childIds;
    std::vector<std::array<std::uint32_t, 4>> clipValues;
    std::vector<std::array<std::uint32_t, 2>> originValues;
};

struct ChildData {
    DrawLog* log;
    int id;
};

void drawChild(MissionFleetCoreResourceSceneChild& child,
               MissionFleetCoreRenderContext* renderContext,
               MissionFleetCoreRenderRect* clipRect,
               MissionFleetCoreRenderOrigin* origin,
               void* userData) {
    auto& data = *static_cast<ChildData*>(userData);
    require(renderContext == data.log->expectedContext);
    require(clipRect == data.log->expectedClip);
    require(origin == data.log->expectedOrigin);
    require(child.userData == userData);
    if (data.log->previousClip != nullptr &&
        data.log->previousClip != clipRect) {
        data.log->pointersStayedStable = false;
    }
    if (data.log->previousOrigin != nullptr &&
        data.log->previousOrigin != origin) {
        data.log->pointersStayedStable = false;
    }
    data.log->previousClip = clipRect;
    data.log->previousOrigin = origin;
    data.log->childIds.push_back(data.id);
    data.log->clipValues.push_back({clipRect->words[0], clipRect->words[1],
                                    clipRect->words[2], clipRect->words[3]});
    data.log->originValues.push_back({origin->words[0], origin->words[1]});
    if (&child == data.log->mutateNextOn) {
        child.next48 = data.log->replacementNext;
    }
}

struct SceneSlotData {
    MissionFleetCoreResourceSceneRenderResult result =
        MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
    DrawLog* log;
};

void drawSceneSlot14(MissionFleetCoreResourceScene& scene,
                     MissionFleetCoreRenderContext& renderContext,
                     MissionFleetCoreRenderRect* clipRect,
                     MissionFleetCoreRenderOrigin* origin,
                     void* userData) {
    auto& data = *static_cast<SceneSlotData*>(userData);
    data.log->expectedContext = &renderContext;
    data.log->expectedClip = clipRect;
    data.log->expectedOrigin = origin;
    data.log->clipWasCopied = clipRect != data.log->explicitClip;
    data.log->originWasInitializedToZero =
        origin->words[0] == 0 && origin->words[1] == 0;
    data.result = missionFleetRenderCoreResourceSceneChildren(
        scene, &renderContext, clipRect, origin);
}

void testSceneDispatchCopiesExplicitRectAndSplitsPainterOrder() {
    DrawLog log;
    ChildData firstData{&log, 1};
    ChildData secondData{&log, 2};
    ChildData thirdData{&log, 3};
    ChildData fourthData{&log, 4};
    MissionFleetCoreResourceSceneChild first{
        0x00500000u, -4, nullptr, drawChild, &firstData};
    MissionFleetCoreResourceSceneChild second{
        0x00500010u, -1, &first, drawChild, &secondData};
    MissionFleetCoreResourceSceneChild third{
        0x00500020u, 0, &second, drawChild, &thirdData};
    MissionFleetCoreResourceSceneChild fourth{
        0x00500030u, 7, &third, drawChild, &fourthData};
    // The constructor order is irrelevant; the mapped list is already sorted.
    first.next48 = &second;
    second.next48 = &third;
    third.next48 = &fourth;
    fourth.next48 = nullptr;

    MissionFleetCoreResourceScene scene{1, &first};
    MissionFleetCoreRenderContext renderContext{{{11, 12, 13, 14}}};
    MissionFleetCoreRenderRect explicitClip{{21, 22, 23, 24}};
    log.explicitClip = &explicitClip;
    SceneSlotData slotData{MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead,
                           &log};

    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, &renderContext, &explicitClip, drawSceneSlot14,
                &slotData) ==
            MissionFleetCoreResourceSceneDispatchResult::InvokedSlot14);
    require(slotData.result ==
            MissionFleetCoreResourceSceneRenderResult::DispatchedChildren);
    require((log.childIds == std::vector<int>{1, 2, 3, 4}));
    require(log.clipWasCopied);
    require(log.originWasInitializedToZero);
    require(log.pointersStayedStable);
    require(log.clipValues.size() == 4);
    require(log.originValues.size() == 4);
    require(log.clipValues.front()[0] == 21);
    require(log.clipValues.front()[3] == 24);
    require(log.originValues.front()[0] == 0);
    require(log.originValues.front()[1] == 0);
}

void testContextClipFallbackAndLiveNextLinkRead() {
    DrawLog log;
    ChildData firstData{&log, 10};
    ChildData skippedData{&log, 11};
    ChildData replacementData{&log, 12};
    ChildData lastData{&log, 13};
    MissionFleetCoreResourceSceneChild first{
        0x00500000u, -2, nullptr, drawChild, &firstData};
    MissionFleetCoreResourceSceneChild skipped{
        0x00500010u, -1, nullptr, drawChild, &skippedData};
    MissionFleetCoreResourceSceneChild replacement{
        0x00500020u, 0, nullptr, drawChild, &replacementData};
    MissionFleetCoreResourceSceneChild last{
        0x00500030u, 5, nullptr, drawChild, &lastData};
    first.next48 = &skipped;
    skipped.next48 = &replacement;
    replacement.next48 = &last;

    MissionFleetCoreResourceScene scene{1, &first};
    MissionFleetCoreRenderContext renderContext{{{31, 32, 33, 34}}};
    SceneSlotData slotData{MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead,
                           &log};
    log.mutateNextOn = &first;
    log.replacementNext = &replacement;

    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, &renderContext, nullptr, drawSceneSlot14,
                &slotData) ==
            MissionFleetCoreResourceSceneDispatchResult::InvokedSlot14);
    require((log.childIds == std::vector<int>{10, 12, 13}));
    require(log.clipWasCopied);
    require(log.originWasInitializedToZero);
    require(log.pointersStayedStable);
    require(log.clipValues.front()[0] == 31);
    require(log.clipValues.front()[3] == 34);
    // FUN_587B5320 obtains child +0x48 after invoking the child's slot +0x14.
    require(first.next48 == &replacement);
}

void testContextFlagAndVtableCutoffGates() {
    DrawLog log;
    ChildData childData{&log, 20};
    MissionFleetCoreResourceSceneChild child{
        0x00500000u, 0, nullptr, drawChild, &childData};
    MissionFleetCoreResourceScene scene{0, &child};
    MissionFleetCoreRenderContext renderContext{{{1, 2, 3, 4}}};
    MissionFleetCoreRenderRect clip{{5, 6, 7, 8}};
    MissionFleetCoreRenderOrigin origin{{9, 10}};

    require(missionFleetRenderCoreResourceSceneChildren(
                scene, nullptr, &clip, &origin) ==
            MissionFleetCoreResourceSceneRenderResult::MissingContext);
    require(missionFleetRenderCoreResourceSceneChildren(
                scene, &renderContext, &clip, &origin) ==
            MissionFleetCoreResourceSceneRenderResult::RenderFlagClear);
    require(log.childIds.empty());

    scene.flags24 = 1;
    child.firstWord = 0x00010000u;
    require(missionFleetRenderCoreResourceSceneChildren(
                scene, &renderContext, &clip, &origin) ==
            MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead);
    require(scene.firstChild4C == nullptr);
    require(log.childIds.empty());

    MissionFleetCoreResourceSceneChild valid{
        0x00010001u, 0, nullptr, drawChild, &childData};
    MissionFleetCoreResourceSceneChild invalidSuffix{
        0x00010000u, -1, nullptr, drawChild, &childData};
    valid.next48 = &invalidSuffix;
    scene.firstChild4C = &valid;
    log.expectedContext = &renderContext;
    log.expectedClip = &clip;
    log.expectedOrigin = &origin;
    require(missionFleetRenderCoreResourceSceneChildren(
                scene, &renderContext, &clip, &origin) ==
            MissionFleetCoreResourceSceneRenderResult::DispatchedChildren);
    require((log.childIds == std::vector<int>{20}));
    require(scene.firstChild4C == &valid);
}

void testWrapperRejectsMissingInputs() {
    MissionFleetCoreResourceScene scene{1, nullptr};
    MissionFleetCoreRenderContext renderContext{{{1, 2, 3, 4}}};
    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, nullptr, nullptr, drawSceneSlot14, nullptr) ==
            MissionFleetCoreResourceSceneDispatchResult::MissingContext);
    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, &renderContext, nullptr, nullptr, nullptr) ==
            MissionFleetCoreResourceSceneDispatchResult::MissingSlot14);
}

}  // namespace

int main() {
    testSceneDispatchCopiesExplicitRectAndSplitsPainterOrder();
    testContextClipFallbackAndLiveNextLinkRead();
    testContextFlagAndVtableCutoffGates();
    testWrapperRejectsMissingInputs();
}
