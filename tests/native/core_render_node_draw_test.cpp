#include "../../src/client-current/semantic/CoreRenderNodeDraw.h"

#include <climits>
#include <cstdlib>
#include <cstdio>
#include <vector>

namespace {

void check(bool condition, int line, const char* expression) {
    if (!condition) {
        std::fprintf(stderr,
                     "Core render-node draw check failed at line %d: %s\n",
                     line, expression);
        std::abort();
    }
}

#define require(condition) check((condition), __LINE__, #condition)

struct DrawLog {
    MissionFleetCoreRenderContext* expectedTarget = nullptr;
    MissionFleetCoreRenderRect* expectedClip = nullptr;
    MissionFleetCoreRenderOrigin* expectedOrigin = nullptr;
    std::vector<int> events;
    std::vector<int> childIds;
    MissionFleetCoreResourceSceneChild* mutateNextOn = nullptr;
    MissionFleetCoreResourceSceneChild* replacementNext = nullptr;
    void* expectedSprite = nullptr;
    std::uint32_t expectedColor = 0;
    std::uint32_t expectedEffect = 0;
    std::int32_t expectedX = 0;
    std::int32_t expectedY = 0;
    bool spriteClipWasCopied = false;
    bool spriteClipValuesMatch = false;
};

struct ChildData {
    DrawLog* log;
    int id;
};

void drawChild(MissionFleetCoreResourceSceneChild& child,
               MissionFleetCoreRenderContext* renderTarget,
               MissionFleetCoreRenderRect* clipRect,
               MissionFleetCoreRenderOrigin* origin,
               void* userData) {
    auto& data = *static_cast<ChildData*>(userData);
    require(renderTarget == data.log->expectedTarget);
    require(clipRect == data.log->expectedClip);
    require(origin == data.log->expectedOrigin);
    data.log->events.push_back(data.id);
    data.log->childIds.push_back(data.id);
    if (&child == data.log->mutateNextOn) {
        child.next48 = data.log->replacementNext;
    }
}

void drawSprite(void* sprite,
                MissionFleetCoreRenderContext* renderTarget,
                std::int32_t x,
                std::int32_t y,
                MissionFleetCoreRenderRect* localClipRect,
                std::uint32_t color,
                std::uint32_t effect,
                void* userData) {
    auto& log = *static_cast<DrawLog*>(userData);
    require(renderTarget == log.expectedTarget);
    require(localClipRect != log.expectedClip);
    log.events.push_back(100);
    log.spriteClipWasCopied = true;
    log.spriteClipValuesMatch =
        localClipRect->words[0] == log.expectedClip->words[0] &&
        localClipRect->words[1] == log.expectedClip->words[1] &&
        localClipRect->words[2] == log.expectedClip->words[2] &&
        localClipRect->words[3] == log.expectedClip->words[3];
    require(sprite == log.expectedSprite);
    require(x == log.expectedX);
    require(y == log.expectedY);
    require(color == log.expectedColor);
    require(effect == log.expectedEffect);
}

MissionFleetCoreResourceSceneChild makeChild(int id, std::int16_t key,
                                             ChildData& data) {
    return MissionFleetCoreResourceSceneChild{
        0x00500000u + static_cast<std::uint32_t>(id * 0x10), key, nullptr,
        drawChild, &data};
}

void testNegativeChildrenOwnSpriteThenNonnegativeChildren() {
    DrawLog log;
    ChildData aData{&log, 1};
    ChildData bData{&log, 2};
    ChildData cData{&log, 3};
    ChildData dData{&log, 4};
    auto a = makeChild(1, -5, aData);
    auto b = makeChild(2, -1, bData);
    auto c = makeChild(3, 0, cData);
    auto d = makeChild(4, 9, dData);
    a.next48 = &b;
    b.next48 = &c;
    c.next48 = &d;

    MissionFleetCoreRenderContext target{};
    MissionFleetCoreRenderRect clip{{11, 12, 13, 14}};
    MissionFleetCoreRenderOrigin origin{{3, 10}};
    int spriteObject = 0;
    log.expectedTarget = &target;
    log.expectedClip = &clip;
    log.expectedOrigin = &origin;
    log.expectedSprite = &spriteObject;
    log.expectedX = 83;
    log.expectedY = 13;
    log.expectedColor = 0xAABBCCDDu;
    log.expectedEffect = 0x10203040u;

    MissionFleetCoreRenderNodeState node{
        1, &a, 100, -5, -20, 8, log.expectedColor, log.expectedEffect,
        &spriteObject};
    const auto outcome = missionFleetDrawCoreRenderNode(
        node, &target, &clip, &origin, drawSprite, &log);

    require((log.events == std::vector<int>{1, 2, 100, 3, 4}));
    require((log.childIds == std::vector<int>{1, 2, 3, 4}));
    require(log.spriteClipWasCopied);
    require(log.spriteClipValuesMatch);
    require(outcome.childDispatches == 4);
    require(outcome.spriteDispatched);
    require(!outcome.clearedInvalidHead);
    require(!outcome.stoppedAtInvalidChild);
    require(!outcome.skippedByFlag);
}

void testReadsChildLinkAfterCallbackAndWrapsX86Coordinates() {
    DrawLog log;
    ChildData firstData{&log, 10};
    ChildData skippedData{&log, 11};
    ChildData replacementData{&log, 12};
    auto first = makeChild(10, -1, firstData);
    auto skipped = makeChild(11, -1, skippedData);
    auto replacement = makeChild(12, 0, replacementData);
    first.next48 = &skipped;
    skipped.next48 = &replacement;

    MissionFleetCoreRenderContext target{};
    MissionFleetCoreRenderRect clip{{1, 2, 3, 4}};
    MissionFleetCoreRenderOrigin origin{{0xFFFFFFFFu, 1u}};
    int spriteObject = 0;
    log.expectedTarget = &target;
    log.expectedClip = &clip;
    log.expectedOrigin = &origin;
    log.expectedSprite = &spriteObject;
    log.expectedX = INT_MAX;
    log.expectedY = 7;
    log.expectedColor = 8;
    log.expectedEffect = 9;
    log.mutateNextOn = &first;
    log.replacementNext = &replacement;

    MissionFleetCoreRenderNodeState node{
        1, &first, INT_MIN, -2, 0, 8, 8, 9, &spriteObject};
    const auto outcome = missionFleetDrawCoreRenderNode(
        node, &target, &clip, &origin, drawSprite, &log);

    require((log.events == std::vector<int>{10, 100, 12}));
    require(first.next48 == &replacement);
    require(outcome.childDispatches == 2);
    require(outcome.spriteDispatched);
}

void testFlagAndInvalidListGates() {
    DrawLog log;
    MissionFleetCoreRenderContext target{};
    MissionFleetCoreRenderRect clip{{1, 2, 3, 4}};
    MissionFleetCoreRenderOrigin origin{{5, 6}};
    log.expectedTarget = &target;
    log.expectedClip = &clip;
    log.expectedOrigin = &origin;
    int spriteObject = 0;
    log.expectedSprite = &spriteObject;

    MissionFleetCoreResourceSceneChild invalidHead{
        0x00010000u, 0, nullptr, nullptr, nullptr};
    MissionFleetCoreRenderNodeState disabled{
        0, &invalidHead, 0, 0, 0, 0, 0, 0, &spriteObject};
    auto outcome = missionFleetDrawCoreRenderNode(
        disabled, &target, &clip, &origin, drawSprite, &log);
    require(outcome.skippedByFlag);
    require(disabled.firstChild4C == &invalidHead);
    require(log.events.empty());

    MissionFleetCoreRenderNodeState invalid{
        1, &invalidHead, 0, 0, 0, 0, 0, 0, nullptr};
    outcome = missionFleetDrawCoreRenderNode(
        invalid, &target, &clip, &origin, drawSprite, &log);
    require(outcome.clearedInvalidHead);
    require(invalid.firstChild4C == nullptr);
    require(!outcome.stoppedAtInvalidChild);
}

void testInvalidTailStopsAfterSprite() {
    DrawLog log;
    ChildData validData{&log, 20};
    auto valid = makeChild(20, 0, validData);
    MissionFleetCoreResourceSceneChild invalidTail{
        0x00010000u, 0, nullptr, drawChild, &validData};
    valid.next48 = &invalidTail;

    MissionFleetCoreRenderContext target{};
    MissionFleetCoreRenderRect clip{{4, 3, 2, 1}};
    MissionFleetCoreRenderOrigin origin{{0, 0}};
    int spriteObject = 0;
    log.expectedTarget = &target;
    log.expectedClip = &clip;
    log.expectedOrigin = &origin;
    log.expectedSprite = &spriteObject;
    log.expectedX = 6;
    log.expectedY = 8;
    log.expectedColor = 6;
    log.expectedEffect = 7;

    MissionFleetCoreRenderNodeState node{
        1, &valid, 2, 3, 4, 5, 6, 7, &spriteObject};
    const auto outcome = missionFleetDrawCoreRenderNode(
        node, &target, &clip, &origin, drawSprite, &log);
    require((log.events == std::vector<int>{100, 20}));
    require(outcome.childDispatches == 1);
    require(outcome.spriteDispatched);
    require(outcome.stoppedAtInvalidChild);
}

void testNullPassThroughWhenNoOwnSprite() {
    DrawLog log;
    ChildData childData{&log, 30};
    auto child = makeChild(30, 0, childData);
    log.expectedTarget = nullptr;
    log.expectedClip = nullptr;
    log.expectedOrigin = nullptr;
    MissionFleetCoreRenderNodeState node{1, &child, 0, 0, 0, 0, 0, 0,
                                          nullptr};
    const auto outcome = missionFleetDrawCoreRenderNode(
        node, nullptr, nullptr, nullptr, nullptr, nullptr);
    require((log.events == std::vector<int>{30}));
    require(outcome.childDispatches == 1);
    require(!outcome.spriteDispatched);
}

void testSceneSlotAdapterUsesBoundSpriteBridge() {
    DrawLog log;
    MissionFleetCoreRenderContext target{};
    MissionFleetCoreRenderRect clip{{7, 8, 9, 10}};
    MissionFleetCoreRenderOrigin origin{{1, 2}};
    int spriteObject = 0;
    log.expectedTarget = &target;
    log.expectedClip = &clip;
    log.expectedOrigin = &origin;
    log.expectedSprite = &spriteObject;
    log.expectedX = 6;
    log.expectedY = 13;
    log.expectedColor = 11;
    log.expectedEffect = 12;
    MissionFleetCoreRenderNodeState node{
        1, nullptr, 3, 4, 2, 7, 11, 12, &spriteObject};
    MissionFleetCoreRenderNodeBinding binding{&node, drawSprite, &log};
    MissionFleetCoreResourceSceneChild entry{
        0x00500000u, 0, nullptr, missionFleetRenderCoreNodeSlot14, &binding};

    missionFleetRenderCoreNodeSlot14(entry, &target, &clip, &origin, &binding);
    require((log.events == std::vector<int>{100}));
    require(log.spriteClipWasCopied);
    require(log.spriteClipValuesMatch);
}

struct SceneSlotData {
    DrawLog* log;
    MissionFleetCoreRenderRect* explicitClip;
    MissionFleetCoreResourceSceneRenderResult result =
        MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
    bool wrapperCopiedClip = false;
    bool wrapperZeroedOrigin = false;
};

void drawSceneSlot14(MissionFleetCoreResourceScene& scene,
                     MissionFleetCoreRenderContext& renderTarget,
                     MissionFleetCoreRenderRect* clipRect,
                     MissionFleetCoreRenderOrigin* origin,
                     void* userData) {
    auto& data = *static_cast<SceneSlotData*>(userData);
    data.log->expectedTarget = &renderTarget;
    data.log->expectedClip = clipRect;
    data.log->expectedOrigin = origin;
    data.wrapperCopiedClip = clipRect != data.explicitClip;
    data.wrapperZeroedOrigin = origin->words[0] == 0 && origin->words[1] == 0;
    data.result = missionFleetRenderCoreResourceSceneChildren(
        scene, &renderTarget, clipRect, origin);
}

void testComposedFrameSceneToRenderNodePath() {
    DrawLog log;
    MissionFleetCoreRenderContext target{{{1, 2, 3, 4}}};
    MissionFleetCoreRenderRect explicitClip{{31, 32, 33, 34}};
    int spriteObject = 0;
    log.expectedSprite = &spriteObject;
    log.expectedX = 17;
    log.expectedY = 23;
    log.expectedColor = 0x1234u;
    log.expectedEffect = 0x5678u;

    MissionFleetCoreRenderNodeState node{
        1, nullptr, 15, 20, 2, 3, log.expectedColor, log.expectedEffect,
        &spriteObject};
    MissionFleetCoreRenderNodeBinding binding{&node, drawSprite, &log};
    MissionFleetCoreResourceSceneChild nodeEntry{
        0x00500000u, 0, nullptr, missionFleetRenderCoreNodeSlot14, &binding};
    MissionFleetCoreResourceScene scene{1, &nodeEntry};
    SceneSlotData sceneData{&log, &explicitClip};

    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, &target, &explicitClip, drawSceneSlot14, &sceneData) ==
            MissionFleetCoreResourceSceneDispatchResult::InvokedSlot14);
    require(sceneData.result ==
            MissionFleetCoreResourceSceneRenderResult::DispatchedChildren);
    require(sceneData.wrapperCopiedClip);
    require(sceneData.wrapperZeroedOrigin);
    require((log.events == std::vector<int>{100}));
    require(log.spriteClipWasCopied);
    require(log.spriteClipValuesMatch);
}

}  // namespace

int main() {
    testNegativeChildrenOwnSpriteThenNonnegativeChildren();
    testReadsChildLinkAfterCallbackAndWrapsX86Coordinates();
    testFlagAndInvalidListGates();
    testInvalidTailStopsAfterSprite();
    testNullPassThroughWhenNoOwnSprite();
    testSceneSlotAdapterUsesBoundSpriteBridge();
    testComposedFrameSceneToRenderNodePath();
}
