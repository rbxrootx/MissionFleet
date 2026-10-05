#include "../../src/client-current/semantic/CoreSpriteScreenDispatch.h"

#include <climits>
#include <cstdlib>
#include <cstdio>

namespace {

void check(bool condition, int line, const char* expression) {
    if (!condition) {
        std::fprintf(stderr,
                     "Core sprite-screen dispatch check failed at line %d: %s\n",
                     line, expression);
        std::abort();
    }
}

#define require(condition) check((condition), __LINE__, #condition)

struct Slot1Log {
    void* expectedSprite = nullptr;
    void* expectedPixels = nullptr;
    std::int32_t expectedX = 0;
    std::int32_t expectedY = 0;
    MissionFleetCoreRenderRect expectedClip{{0, 0, 0, 0}};
    std::uint32_t expectedColor = 0;
    std::uint32_t expectedEffect = 0;
    int calls = 0;
};

void drawSlot1(void* sprite,
               void* targetPixels,
               std::int32_t x,
               std::int32_t y,
               const MissionFleetCoreRenderRect& clip,
               std::uint32_t color,
               std::uint32_t effect,
               void* userData) {
    auto& log = *static_cast<Slot1Log*>(userData);
    require(sprite == log.expectedSprite);
    require(targetPixels == log.expectedPixels);
    require(x == log.expectedX);
    require(y == log.expectedY);
    require(clip.words[0] == log.expectedClip.words[0]);
    require(clip.words[1] == log.expectedClip.words[1]);
    require(clip.words[2] == log.expectedClip.words[2]);
    require(clip.words[3] == log.expectedClip.words[3]);
    require(color == log.expectedColor);
    require(effect == log.expectedEffect);
    ++log.calls;
}

void testViewportClampAndOriginTranslation() {
    int pixels = 0;
    int sprite = 0;
    MissionFleetCoreRenderContext screen{{{10, 20, 90, 80}}, 100, 200,
                                          &pixels};
    MissionFleetCoreRenderRect requested{{90, 180, 210, 300}};
    Slot1Log log;
    log.expectedSprite = &sprite;
    log.expectedPixels = &pixels;
    log.expectedX = 50;
    log.expectedY = 50;
    log.expectedClip = {{10, 20, 90, 80}};
    log.expectedColor = 0x80;
    log.expectedEffect = 0x101;

    const auto result = missionFleetDispatchCoreSpriteDraw(
        &sprite, &screen, 150, 250, &requested, log.expectedColor,
        log.expectedEffect, drawSlot1, &log);

    require(log.calls == 1);
    require(result.screenLocalX == 50);
    require(result.screenLocalY == 50);
    require(result.screenLocalClip.words[0] == 10);
    require(result.screenLocalClip.words[1] == 20);
    require(result.screenLocalClip.words[2] == 90);
    require(result.screenLocalClip.words[3] == 80);
    require(requested.words[0] == 90 && requested.words[3] == 300);
}

void testAlreadyClippedRectangleIsStillTranslated() {
    int pixels = 0;
    int sprite = 0;
    MissionFleetCoreRenderContext screen{{{10, 20, 90, 80}}, 100, 200,
                                          &pixels};
    MissionFleetCoreRenderRect requested{{115, 225, 160, 260}};
    Slot1Log log;
    log.expectedSprite = &sprite;
    log.expectedPixels = &pixels;
    log.expectedX = 15;
    log.expectedY = 25;
    log.expectedClip = {{15, 25, 60, 60}};
    log.expectedColor = 7;
    log.expectedEffect = 9;

    const auto result = missionFleetDispatchCoreSpriteDraw(
        &sprite, &screen, 115, 225, &requested, 7, 9, drawSlot1, &log);
    require(log.calls == 1);
    require(result.screenLocalClip.words[0] == 15);
    require(result.screenLocalClip.words[1] == 25);
    require(result.screenLocalClip.words[2] == 60);
    require(result.screenLocalClip.words[3] == 60);
}

void testInvertedClipIsForwardedWithoutDispatcherReject() {
    int pixels = 0;
    int sprite = 0;
    MissionFleetCoreRenderContext screen{{{10, 20, 90, 80}}, 100, 200,
                                          &pixels};
    MissionFleetCoreRenderRect requested{{130, 240, 120, 230}};
    Slot1Log log;
    log.expectedSprite = &sprite;
    log.expectedPixels = &pixels;
    log.expectedX = -50;
    log.expectedY = -150;
    log.expectedClip = {{30, 40, 20, 30}};
    log.expectedColor = 3;
    log.expectedEffect = 4;

    const auto result = missionFleetDispatchCoreSpriteDraw(
        &sprite, &screen, 50, 50, &requested, 3, 4, drawSlot1, &log);
    require(log.calls == 1);
    require(result.screenLocalClip.words[0] == 30);
    require(result.screenLocalClip.words[2] == 20);
}

void testViewportAndPositionUseX86DwordWraparound() {
    int pixels = 0;
    int sprite = 0;
    MissionFleetCoreRenderContext screen{{{1, 2, 3, 4}}, INT_MAX, INT_MIN,
                                          &pixels};
    MissionFleetCoreRenderRect requested{{
        INT_MAX, static_cast<std::uint32_t>(INT_MIN), INT_MAX, INT_MAX}};
    Slot1Log log;
    log.expectedSprite = &sprite;
    log.expectedPixels = &pixels;
    log.expectedX = 1;
    log.expectedY = -1;
    log.expectedClip = {{0, 2, 3, 4}};
    log.expectedColor = 5;
    log.expectedEffect = 6;

    const auto result = missionFleetDispatchCoreSpriteDraw(
        &sprite, &screen, INT_MIN, INT_MAX, &requested, 5, 6, drawSlot1,
        &log);
    require(log.calls == 1);
    require(result.screenLocalClip.words[0] == 0);
    require(result.screenLocalClip.words[1] == 2);
    require(result.screenLocalClip.words[2] == 3);
    require(result.screenLocalClip.words[3] == 4);
}

struct SceneBridgeData {
    MissionFleetCoreResourceSceneRenderResult result =
        MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
};

void drawSceneSlot14(MissionFleetCoreResourceScene& scene,
                     MissionFleetCoreRenderContext& screen,
                     MissionFleetCoreRenderRect* clip,
                     MissionFleetCoreRenderOrigin* origin,
                     void* userData) {
    auto& data = *static_cast<SceneBridgeData*>(userData);
    data.result = missionFleetRenderCoreResourceSceneChildren(
        scene, &screen, clip, origin);
}

void testSceneNodeScreenAndVirtualSlot1Composition() {
    int pixels = 0;
    int sprite = 0;
    MissionFleetCoreRenderContext screen{{{10, 20, 90, 80}}, 100, 200,
                                          &pixels};
    MissionFleetCoreRenderRect explicitClip{{90, 180, 210, 300}};
    Slot1Log slotLog;
    slotLog.expectedSprite = &sprite;
    slotLog.expectedPixels = &pixels;
    slotLog.expectedX = 50;
    slotLog.expectedY = 50;
    slotLog.expectedClip = {{10, 20, 90, 80}};
    slotLog.expectedColor = 0x80;
    slotLog.expectedEffect = 0x101;

    MissionFleetCoreRenderNodeState node{
        1, nullptr, 145, 245, 5, 5, slotLog.expectedColor,
        slotLog.expectedEffect, &sprite};
    MissionFleetCoreSpriteScreenDispatchBinding screenDispatch{
        drawSlot1, &slotLog};
    MissionFleetCoreRenderNodeBinding nodeBinding{
        &node, missionFleetCoreSpriteDrawBridge, &screenDispatch};
    MissionFleetCoreResourceSceneChild nodeEntry{
        0x00500000u, 0, nullptr, missionFleetRenderCoreNodeSlot14,
        &nodeBinding};
    MissionFleetCoreResourceScene scene{1, &nodeEntry};
    SceneBridgeData sceneData;

    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, &screen, &explicitClip, drawSceneSlot14, &sceneData) ==
            MissionFleetCoreResourceSceneDispatchResult::InvokedSlot14);
    require(sceneData.result ==
            MissionFleetCoreResourceSceneRenderResult::DispatchedChildren);
    require(slotLog.calls == 1);
}

}  // namespace

int main() {
    testViewportClampAndOriginTranslation();
    testAlreadyClippedRectangleIsStillTranslated();
    testInvertedClipIsForwardedWithoutDispatcherReject();
    testViewportAndPositionUseX86DwordWraparound();
    testSceneNodeScreenAndVirtualSlot1Composition();
}
