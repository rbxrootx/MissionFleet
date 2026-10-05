#include "../../src/client-current/semantic/CoreResourceSceneRender.h"
#include "../../src/client-current/semantic/CoreRenderNodeDraw.h"
#include "../../src/client-current/semantic/CoreRgb16SpriteSlot1.h"

#include <cstdlib>
#include <cstdio>
#include <cstdint>
#include <vector>

namespace {
void check(bool condition, int line, const char* expression) {
    if (!condition) {
        std::fprintf(stderr,
                     "Core RGB16 slot-1 integration check failed at line %d: %s\n",
                     line, expression);
        std::abort();
    }
}

#define require(condition) check((condition), __LINE__, #condition)

void putWord(std::vector<std::uint8_t>& bytes, std::uint16_t word) {
    bytes.push_back(static_cast<std::uint8_t>(word));
    bytes.push_back(static_cast<std::uint8_t>(word >> 8));
}

std::uint16_t readWord(const std::vector<std::uint8_t>& bytes, int x, int y,
                       int pitch) {
    const auto offset = static_cast<std::size_t>(y) * pitch +
                        static_cast<std::size_t>(x) * 2;
    return static_cast<std::uint16_t>(bytes[offset] |
                                      (static_cast<unsigned>(bytes[offset + 1]) << 8));
}

struct SceneData {
    MissionFleetCoreResourceSceneRenderResult result =
        MissionFleetCoreResourceSceneRenderResult::EmptyOrInvalidHead;
};

void drawSceneSlot14(MissionFleetCoreResourceScene& scene,
                     MissionFleetCoreRenderContext& screen,
                     MissionFleetCoreRenderRect* clip,
                     MissionFleetCoreRenderOrigin* origin,
                     void* userData) {
    auto& data = *static_cast<SceneData*>(userData);
    data.result = missionFleetRenderCoreResourceSceneChildren(
        scene, &screen, clip, origin);
}

void drawScene(MissionFleetCoreResourceScene& scene,
               MissionFleetCoreRenderContext& screen,
               MissionFleetCoreRenderRect& clip,
               SceneData& data) {
    require(missionFleetDispatchCoreResourceSceneDraw(
                scene, &screen, &clip, drawSceneSlot14, &data) ==
            MissionFleetCoreResourceSceneDispatchResult::InvokedSlot14);
    require(data.result ==
            MissionFleetCoreResourceSceneRenderResult::DispatchedChildren);
}

void testSceneToOpaqueFramebufferWritesAndClipping() {
    // Two literal runs: one red word at sprite x=0, then one blue word at x=2
    // with a transparent middle pixel. Span control/length layout is from the
    // byte-matched Core slot-1 reader.
    std::vector<std::uint8_t> payload;
    putWord(payload, 0); payload.push_back(0x7F); putWord(payload, 2);
    putWord(payload, 0xF800);
    putWord(payload, 2); payload.push_back(0x12); putWord(payload, 2);
    putWord(payload, 0x001F);
    putWord(payload, 0xFFFE);
    MissionFleetCoreRgb16SpriteView sprite{
        MissionFleetCoreRgb16MaskFamily::firstFormat2Family,
        payload.data(), payload.size(), 3, 1};

    constexpr int pitch = 10;
    constexpr int targetHeight = 3;
    constexpr std::uint16_t seed = 0x1234;
    std::vector<std::uint8_t> pixels(pitch * targetHeight);
    for (std::size_t offset = 0; offset < pixels.size(); offset += 2) {
        pixels[offset] = static_cast<std::uint8_t>(seed);
        pixels[offset + 1] = static_cast<std::uint8_t>(seed >> 8);
    }
    MissionFleetCoreRenderContext screen{{{0, 0, 5, 3}}, 2, 1,
                                          pixels.data()};
    MissionFleetCoreRgb16TargetBinding target{
        pixels.size(), pitch, targetHeight,
        {MissionFleetRgb16BlitError::invalidGeometry, 0}};
    MissionFleetCoreSpriteScreenDispatchBinding screenBinding{
        missionFleetCoreRgb16SpriteSlot1Dispatch, &target};
    MissionFleetCoreRenderNodeState node{
        1, nullptr, 3, 2, 0, 0, 0x100, 0, &sprite};
    MissionFleetCoreRenderNodeBinding nodeBinding{
        &node, missionFleetCoreSpriteDrawBridge, &screenBinding};
    MissionFleetCoreResourceSceneChild nodeEntry{
        0x00500000u, 0, nullptr, missionFleetRenderCoreNodeSlot14,
        &nodeBinding};
    MissionFleetCoreResourceScene scene{1, &nodeEntry};
    SceneData sceneData;
    MissionFleetCoreRenderRect fullClip{{2, 1, 7, 4}};

    drawScene(scene, screen, fullClip, sceneData);
    require(target.lastResult.error == MissionFleetRgb16BlitError::none);
    require(target.lastResult.copiedPixels == 2);
    require(readWord(pixels, 1, 1, pitch) == 0xF800);
    require(readWord(pixels, 2, 1, pitch) == seed);
    require(readWord(pixels, 3, 1, pitch) == 0x001F);
    require(readWord(pixels, 0, 1, pitch) == seed);
    require(readWord(pixels, 4, 1, pitch) == seed);

    // Clip to the blue run only; the red source word must leave the surface
    // unchanged because the screen dispatcher translated the clip to local x=2.
    for (std::size_t offset = 0; offset < pixels.size(); offset += 2) {
        pixels[offset] = static_cast<std::uint8_t>(seed);
        pixels[offset + 1] = static_cast<std::uint8_t>(seed >> 8);
    }
    MissionFleetCoreRenderRect blueOnlyClip{{4, 1, 6, 4}};
    drawScene(scene, screen, blueOnlyClip, sceneData);
    require(target.lastResult.error == MissionFleetRgb16BlitError::none);
    require(target.lastResult.copiedPixels == 1);
    require(readWord(pixels, 1, 1, pitch) == seed);
    require(readWord(pixels, 2, 1, pitch) == seed);
    require(readWord(pixels, 3, 1, pitch) == 0x001F);
}

void testSceneToRgb565EffectWrite() {
    std::vector<std::uint8_t> payload;
    putWord(payload, 0); payload.push_back(0xA5); putWord(payload, 2);
    putWord(payload, 0xF81F);
    putWord(payload, 0xFFFE);
    MissionFleetCoreRgb16SpriteView sprite{
        MissionFleetCoreRgb16MaskFamily::firstFormat2Family,
        payload.data(), payload.size(), 1, 1};

    constexpr int pitch = 8;
    constexpr int targetHeight = 2;
    std::vector<std::uint8_t> pixels(pitch * targetHeight, 0);
    pixels[pitch + 2] = 0xE7;
    pixels[pitch + 3] = 0x39;  // RGB565 destination 0x39E7 at x=1,y=1.
    MissionFleetCoreRenderContext screen{{{0, 0, 4, 2}}, 0, 0,
                                          pixels.data()};
    MissionFleetCoreRgb16TargetBinding target{
        pixels.size(), pitch, targetHeight,
        {MissionFleetRgb16BlitError::invalidGeometry, 0}};
    MissionFleetCoreSpriteScreenDispatchBinding screenBinding{
        missionFleetCoreRgb16SpriteSlot1Dispatch, &target};
    MissionFleetCoreRenderNodeState node{
        1, nullptr, 1, 1, 0, 0, 0x80, 0x101, &sprite};
    MissionFleetCoreRenderNodeBinding nodeBinding{
        &node, missionFleetCoreSpriteDrawBridge, &screenBinding};
    MissionFleetCoreResourceSceneChild nodeEntry{
        0x00500000u, 0, nullptr, missionFleetRenderCoreNodeSlot14,
        &nodeBinding};
    MissionFleetCoreResourceScene scene{1, &nodeEntry};
    SceneData sceneData;
    MissionFleetCoreRenderRect fullClip{{0, 0, 4, 2}};

    drawScene(scene, screen, fullClip, sceneData);
    require(target.lastResult.error == MissionFleetRgb16BlitError::none);
    require(target.lastResult.copiedPixels == 1);
    require(readWord(pixels, 1, 1, pitch) == 0xD8E0);
    require(readWord(pixels, 0, 1, pitch) == 0);
    require(readWord(pixels, 2, 1, pitch) == 0);
}

void testUnsupportedSiblingAndUntracedArgumentPairsDoNotWrite() {
    std::vector<std::uint8_t> payload;
    putWord(payload, 0); payload.push_back(0); putWord(payload, 2);
    putWord(payload, 0xFFFF);
    putWord(payload, 0xFFFE);
    std::vector<std::uint8_t> pixels(8, 0x44);
    const auto before = pixels;
    MissionFleetCoreRgb16TargetBinding target{
        pixels.size(), 4, 1,
        {MissionFleetRgb16BlitError::none, 0}};
    MissionFleetCoreRenderRect clip{{0, 0, 2, 1}};
    MissionFleetCoreRgb16SpriteView sprite{
        MissionFleetCoreRgb16MaskFamily::alternateFormat2Family,
        payload.data(), payload.size(), 1, 1};

    const auto sibling = missionFleetBlitCoreRgb16SpriteSlot1(
        &sprite, pixels.data(), 0, 0, clip, 0x100, 0, target);
    require(sibling.error == MissionFleetRgb16BlitError::unsupportedMode);
    require(pixels == before);

    sprite.maskFamily = MissionFleetCoreRgb16MaskFamily::firstFormat2Family;
    const auto unknownPair = missionFleetBlitCoreRgb16SpriteSlot1(
        &sprite, pixels.data(), 0, 0, clip, 0x80, 0, target);
    require(unknownPair.error == MissionFleetRgb16BlitError::unsupportedMode);
    require(pixels == before);
}
}

int main() {
    testSceneToOpaqueFramebufferWritesAndClipping();
    testSceneToRgb565EffectWrite();
    testUnsupportedSiblingAndUntracedArgumentPairsDoNotWrite();
}
