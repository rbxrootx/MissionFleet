#include "../../src/client-current/semantic/CoreShipAnimationFrameDraw.h"
#include "../../src/client-current/semantic/CoreRgb16SpriteSlot1.h"

#include <climits>
#include <cstdlib>
#include <cstdio>
#include <cstdint>
#include <vector>

namespace {

void check(bool condition, int line, const char* expression) {
    if (!condition) {
        std::fprintf(stderr,
                     "Core ship animation frame check failed at line %d: %s\n",
                     line, expression);
        std::abort();
    }
}

#define require(condition) check((condition), __LINE__, #condition)

void putWord(std::vector<std::uint8_t>& bytes, std::uint16_t word) {
    bytes.push_back(static_cast<std::uint8_t>(word));
    bytes.push_back(static_cast<std::uint8_t>(word >> 8));
}

struct SpriteFixture {
    std::vector<std::uint8_t> payload;
    MissionFleetCoreRgb16SpriteView view;

    explicit SpriteFixture(std::uint16_t pixel) {
        putWord(payload, 0);  // No skipped bytes before the literal run.
        payload.push_back(0xA5);
        putWord(payload, 2);
        putWord(payload, pixel);
        putWord(payload, 0xFFFE);
        view = {MissionFleetCoreRgb16MaskFamily::firstFormat2Family,
                payload.data(), payload.size(), 1, 1};
    }
};

std::uint16_t readWord(const std::vector<std::uint8_t>& bytes, int x, int y,
                       int pitch) {
    const auto offset = static_cast<std::size_t>(y) * pitch +
                        static_cast<std::size_t>(x) * 2;
    return static_cast<std::uint16_t>(bytes[offset] |
                                      (static_cast<unsigned>(bytes[offset + 1]) << 8));
}

void testTimedFrameSpriteOffsetAndFramebufferComposition() {
    constexpr int pitch = 32;
    constexpr int height = 16;
    constexpr std::uint16_t seed = 0x4321;
    std::vector<std::uint8_t> pixels(pitch * height);
    for (std::size_t i = 0; i < pixels.size(); i += 2) {
        pixels[i] = static_cast<std::uint8_t>(seed);
        pixels[i + 1] = static_cast<std::uint8_t>(seed >> 8);
    }

    SpriteFixture red(0xF800);
    SpriteFixture green(0x07E0);
    SpriteFixture blue(0x001F);
    void* sprites[]{&red.view, &green.view, &blue.view};
    MissionFleetCoreShipAnimationFrame records[3]{};
    records[1].offsetX = -2;
    records[1].offsetY = 1;
    records[2].offsetX = 3;
    records[2].offsetY = -1;
    const MissionFleetCoreShipAnimationView animation{
        3, 10, records, 3, sprites, 3};

    MissionFleetCoreRenderContext screen{{{0, 0, 16, 16}}, 100, 200,
                                          pixels.data()};
    MissionFleetCoreRgb16TargetBinding target{
        pixels.size(), pitch, height,
        {MissionFleetRgb16BlitError::invalidGeometry, 0}};
    const MissionFleetCoreRenderRect clip{{100, 200, 116, 216}};

    struct ExpectedFrame {
        std::int32_t elapsed;
        std::int32_t x;
        std::int32_t y;
        int localX;
        int localY;
        std::uint16_t pixel;
    };
    const ExpectedFrame cases[] = {
        {0, 110, 210, 10, 10, 0xF800},
        {9, 110, 210, 10, 10, 0xF800},
        {10, 108, 211, 8, 11, 0x07E0},
        {20, 113, 209, 13, 9, 0x001F},
        {30, 110, 210, 10, 10, 0xF800},
    };

    for (const auto& expected : cases) {
        for (std::size_t i = 0; i < pixels.size(); i += 2) {
            pixels[i] = static_cast<std::uint8_t>(seed);
            pixels[i + 1] = static_cast<std::uint8_t>(seed >> 8);
        }
        std::int32_t position[2]{110, 210};
        const auto outcome = missionFleetDrawCoreShipAnimationFrame(
            &animation, &screen, position, &clip, expected.elapsed, 0x100, 0,
            missionFleetCoreRgb16SpriteSlot1Dispatch, &target);

        require(outcome.status == MissionFleetCoreShipFrameDrawStatus::dispatched);
        require(outcome.frameIndex ==
                static_cast<std::uint16_t>((expected.elapsed / 10) % 3));
        require(position[0] == expected.x && position[1] == expected.y);
        require(outcome.screenDispatch.screenLocalX == expected.localX);
        require(outcome.screenDispatch.screenLocalY == expected.localY);
        require(target.lastResult.error == MissionFleetRgb16BlitError::none);
        require(target.lastResult.copiedPixels == 1);
        require(readWord(pixels, expected.localX, expected.localY, pitch) ==
                expected.pixel);
        require(readWord(pixels, 0, 0, pitch) == seed);
    }
}

struct DispatchLog {
    int calls = 0;
    void* sprite = nullptr;
    std::int32_t x = 0;
    std::int32_t y = 0;
    std::uint32_t color = 0;
    std::uint32_t effect = 0;
};

void captureSlot1(void* sprite, void*, std::int32_t x, std::int32_t y,
                  const MissionFleetCoreRenderRect&, std::uint32_t color,
                  std::uint32_t effect, void* userData) {
    auto& log = *static_cast<DispatchLog*>(userData);
    ++log.calls;
    log.sprite = sprite;
    log.x = x;
    log.y = y;
    log.color = color;
    log.effect = effect;
}

void testX86PositionWrapAndArgumentForwarding() {
    std::uint8_t pixel = 0;
    int sprite = 0;
    MissionFleetCoreShipAnimationFrame record{};
    record.offsetX = 1;
    record.offsetY = -1;
    void* sprites[]{&sprite};
    const MissionFleetCoreShipAnimationView animation{
        1, 1, &record, 1, sprites, 1};
    MissionFleetCoreRenderContext screen{{{0, 0, 8, 8}}, 0, 0, &pixel};
    const MissionFleetCoreRenderRect clip{{0, 0, 8, 8}};
    std::int32_t position[2]{INT_MAX, INT_MIN};
    DispatchLog log;

    const auto outcome = missionFleetDrawCoreShipAnimationFrame(
        &animation, &screen, position, &clip, 0, 0x80, 0x101,
        captureSlot1, &log);

    require(outcome.status == MissionFleetCoreShipFrameDrawStatus::dispatched);
    require(position[0] == INT_MIN && position[1] == INT_MAX);
    require(log.calls == 1 && log.sprite == &sprite);
    require(log.x == INT_MIN && log.y == INT_MAX);
    require(log.color == 0x80 && log.effect == 0x101);
}

void testShipNodeGateAnchorAndParentPosition() {
    constexpr int pitch = 32;
    constexpr int height = 16;
    constexpr std::uint16_t seed = 0x2468;
    std::vector<std::uint8_t> pixels(pitch * height);
    for (std::size_t i = 0; i < pixels.size(); i += 2) {
        pixels[i] = static_cast<std::uint8_t>(seed);
        pixels[i + 1] = static_cast<std::uint8_t>(seed >> 8);
    }
    SpriteFixture green(0x07E0);
    MissionFleetCoreShipAnimationFrame record{};
    record.offsetX = 2;
    record.offsetY = -3;
    void* sprites[]{&green.view};
    const MissionFleetCoreShipAnimationView animation{
        1, 10, &record, 1, sprites, 1};
    MissionFleetCoreShipRenderNodeView node{
        1, 3, 4, 5, 6, 0, 0x100, 0, &animation};
    MissionFleetCoreRenderContext screen{{{0, 0, 16, 16}}, 10, 10,
                                          pixels.data()};
    MissionFleetCoreRgb16TargetBinding target{
        pixels.size(), pitch, height,
        {MissionFleetRgb16BlitError::invalidGeometry, 0}};
    const MissionFleetCoreRenderRect clip{{10, 10, 26, 26}};
    const MissionFleetCoreRenderOrigin parent{{7, 8}};

    const auto drawn = missionFleetDrawCoreShipNodeSprite(
        &node, &screen, &clip, &parent,
        missionFleetCoreRgb16SpriteSlot1Dispatch, &target);
    require(drawn.status == MissionFleetCoreShipFrameDrawStatus::dispatched);
    // (node position + attached anchor + parent origin) + frame offset.
    require(drawn.screenDispatch.screenLocalX == 7);
    require(drawn.screenDispatch.screenLocalY == 5);
    require(target.lastResult.error == MissionFleetRgb16BlitError::none);
    require(target.lastResult.copiedPixels == 1);
    require(readWord(pixels, 7, 5, pitch) == 0x07E0);
    const auto pixelOffset = static_cast<std::size_t>(5) * pitch + 7 * 2;
    auto resetPixel = [&]() {
        pixels[pixelOffset] = static_cast<std::uint8_t>(seed);
        pixels[pixelOffset + 1] = static_cast<std::uint8_t>(seed >> 8);
    };

    resetPixel();
    node.flags24 = 0;
    require(missionFleetDrawCoreShipNodeSprite(
                &node, &screen, &clip, &parent,
                missionFleetCoreRgb16SpriteSlot1Dispatch, &target).status ==
            MissionFleetCoreShipFrameDrawStatus::skippedByNodeFlag);
    require(readWord(pixels, 7, 5, pitch) == seed);

    resetPixel();
    node.flags24 = 1;
    node.elapsed50 = -1;
    require(missionFleetDrawCoreShipNodeSprite(
                &node, &screen, &clip, &parent,
                missionFleetCoreRgb16SpriteSlot1Dispatch, &target).status ==
            MissionFleetCoreShipFrameDrawStatus::skippedByNegativeNodeTime);
    require(readWord(pixels, 7, 5, pitch) == seed);

    resetPixel();
    node.elapsed50 = 0;
    node.animation54 = nullptr;
    require(missionFleetDrawCoreShipNodeSprite(
                &node, &screen, &clip, &parent,
                missionFleetCoreRgb16SpriteSlot1Dispatch, &target).status ==
            MissionFleetCoreShipFrameDrawStatus::missingNodeAnimation);
    require(readWord(pixels, 7, 5, pitch) == seed);
}

void testNoDrawAndInvalidRecordGuards() {
    std::uint8_t pixel = 0;
    int sprite = 0;
    MissionFleetCoreRenderContext screen{{{0, 0, 1, 1}}, 0, 0, &pixel};
    const MissionFleetCoreRenderRect clip{{0, 0, 1, 1}};
    std::int32_t position[2]{4, 5};
    DispatchLog log;

    const MissionFleetCoreShipAnimationView empty{0, 10, nullptr, 0,
                                                   nullptr, 0};
    require(missionFleetDrawCoreShipAnimationFrame(
                &empty, &screen, position, &clip, 0, 0, 0, captureSlot1,
                &log).status ==
            MissionFleetCoreShipFrameDrawStatus::emptyOrMissingScreen);
    const MissionFleetCoreShipAnimationView validButMissingTables{
        1, 10, nullptr, 0, nullptr, 0};
    require(missionFleetDrawCoreShipAnimationFrame(
                &validButMissingTables, &screen, position, &clip, 0, 0, 0,
                captureSlot1, &log).status ==
            MissionFleetCoreShipFrameDrawStatus::missingFrameTable);

    MissionFleetCoreShipAnimationFrame record{};
    void* oneSprite[]{&sprite};
    void* nullSprites[]{nullptr};
    const MissionFleetCoreShipAnimationView nullSprite{
        1, 10, &record, 1, nullSprites, 1};
    require(missionFleetDrawCoreShipAnimationFrame(
                &nullSprite, &screen, position, &clip, 0, 0, 0, captureSlot1,
                &log).status ==
            MissionFleetCoreShipFrameDrawStatus::missingSelectedSprite);
    const MissionFleetCoreShipAnimationView invalidPeriod{
        1, 0, &record, 1, oneSprite, 1};
    require(missionFleetDrawCoreShipAnimationFrame(
                &invalidPeriod, &screen, position, &clip, 0, 0, 0,
                captureSlot1, &log).status ==
            MissionFleetCoreShipFrameDrawStatus::invalidFramePeriod);
    
    const MissionFleetCoreShipAnimationView oneFrame{
        1, 10, &record, 1, oneSprite, 1};
    require(missionFleetDrawCoreShipAnimationFrame(
                &oneFrame, &screen, position, &clip, -1, 0, 0, captureSlot1,
                &log).status ==
            MissionFleetCoreShipFrameDrawStatus::invalidElapsed);
    require(missionFleetDrawCoreShipAnimationFrame(
                &oneFrame, nullptr, position, &clip, 0, 0, 0, captureSlot1,
                &log).status ==
            MissionFleetCoreShipFrameDrawStatus::emptyOrMissingScreen);
    require(missionFleetDrawCoreShipAnimationFrame(
                &oneFrame, &screen, nullptr, &clip, 0, 0, 0, captureSlot1,
                &log).status == MissionFleetCoreShipFrameDrawStatus::invalidInputs);

    require(log.calls == 0);
    require(position[0] == 4 && position[1] == 5);
}

}  // namespace

int main() {
    testTimedFrameSpriteOffsetAndFramebufferComposition();
    testX86PositionWrapAndArgumentForwarding();
    testShipNodeGateAnchorAndParentPosition();
    testNoDrawAndInvalidRecordGuards();
}
