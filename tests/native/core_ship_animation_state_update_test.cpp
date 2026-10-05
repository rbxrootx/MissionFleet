#include "../../src/client-current/semantic/CoreShipAnimationStateUpdate.h"
#include "../../src/client-current/semantic/CoreRgb16SpriteSlot1.h"

#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <vector>

namespace {

void check(bool condition, int line, const char* expression) {
    if (!condition) {
        std::fprintf(stderr,
                     "Core ship animation state check failed at line %d: %s\n",
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
        putWord(payload, 0);
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

struct HookTrace {
    MissionFleetCoreShipAnimationStateNode* node = nullptr;
    std::vector<int> events;
    void* coordinateObject = nullptr;
    std::int32_t coordinateX = 0;
    std::int32_t coordinateY = 0;
    std::uint32_t selector = 0;
};

void callOptionalSlot8(void* object, void* userData) {
    auto& trace = *static_cast<HookTrace*>(userData);
    trace.events.push_back(object == trace.node->optionalObject64 ? 64 : 68);
    require(trace.node->transitionState5C == 0 ||
            trace.node->transitionState5C == 1 ||
            trace.node->transitionState5C == 2);
}

void callCoordinateHelper(void* object, std::int32_t x, std::int32_t y,
                          std::uint32_t selector, void* userData) {
    auto& trace = *static_cast<HookTrace*>(userData);
    trace.events.push_back(object == trace.node->optionalObject64 ? 164 : 168);
    trace.coordinateObject = object;
    trace.coordinateX = x;
    trace.coordinateY = y;
    trace.selector = selector;
}

MissionFleetCoreShipAnimationStateHooks hooksFor(HookTrace& trace,
                                                 std::uint32_t selector = 9) {
    return {selector, callOptionalSlot8, callCoordinateHelper, &trace};
}

void testResetAndStartDirectionWithOptionalCallbacks() {
    const auto* object64 = reinterpret_cast<void*>(std::uintptr_t{0x1000});
    MissionFleetCoreShipAnimationStateNode node{
        0x4, 500, 100, 8, -3, 7, nullptr, const_cast<void*>(object64),
        nullptr, nullptr};
    HookTrace trace;
    trace.node = &node;
    const auto hooks = hooksFor(trace, 25);

    missionFleetResetCoreShipAnimationState(node);
    require(node.frameCounter50 == 0);
    require(node.direction58 == 1);
    require(node.transitionState5C == 0);
    require(node.flags24 == 0x4 && node.positionX04 == 500 &&
            node.positionY08 == 100);

    node.frameCounter50 = 4;
    missionFleetStartCoreShipAnimationTransition(node, 1, hooks);
    require(node.transitionState5C == 2 && node.direction58 == 1);
    require(node.frameCounter50 == 4);
    require((trace.events == std::vector<int>{64, 164}));
    require(trace.coordinateObject == node.optionalObject64);
    require(trace.coordinateX == 100 && trace.coordinateY == 200);
    require(trace.selector == 25);

    trace.events.clear();
    missionFleetStartCoreShipAnimationTransition(node, 0, hooks);
    require(node.transitionState5C == 2 && node.direction58 == -1);
    require(node.frameCounter50 == 4);
    require((trace.events == std::vector<int>{64, 164}));
}

struct ChildTrace {
    std::vector<int>* events;
    int marker;
    MissionFleetCoreShipAnimationUpdateChild* rewriteTo = nullptr;
    bool clearOwnNext = false;
};

void updateChild(MissionFleetCoreShipAnimationUpdateChild& child,
                 void* userData) {
    auto& trace = *static_cast<ChildTrace*>(userData);
    trace.events->push_back(trace.marker);
    if (trace.clearOwnNext) child.next3C = trace.rewriteTo;
}

struct RenderTrace {
    std::vector<int>* events;
    MissionFleetCoreRgb16TargetBinding* target;
};

void drawSelectedSprite(void* sprite, void* targetPixels, std::int32_t x,
                        std::int32_t y,
                        const MissionFleetCoreRenderRect& clip,
                        std::uint32_t color, std::uint32_t effect,
                        void* userData) {
    auto& trace = *static_cast<RenderTrace*>(userData);
    trace.events->push_back(2);
    missionFleetCoreRgb16SpriteSlot1Dispatch(
        sprite, targetPixels, x, y, clip, color, effect, trace.target);
}

void testForwardCounterFeedsTheRgb16AnimationFrameRenderer() {
    SpriteFixture red(0xF800);
    SpriteFixture green(0x07E0);
    SpriteFixture blue(0x001F);
    void* spriteTable[]{&red.view, &green.view, &blue.view};
    MissionFleetCoreShipAnimationFrame frameTable[3]{};
    const MissionFleetCoreShipAnimationView animation{
        3, 1, frameTable, 3, spriteTable, 3};
    MissionFleetCoreShipAnimationStateNode node{
        0x4, 0, 0, 0, 1, 2, &animation, nullptr, nullptr, nullptr};
    HookTrace hookTrace;
    hookTrace.node = &node;
    const auto hooks = hooksFor(hookTrace);

    constexpr int pitch = 8;
    constexpr int height = 1;
    constexpr std::uint16_t seed = 0x1357;
    std::vector<std::uint8_t> pixels(pitch * height);
    MissionFleetCoreRenderContext screen{{{0, 0, 4, 1}}, 0, 0,
                                          pixels.data()};
    MissionFleetCoreRgb16TargetBinding target{
        pixels.size(), pitch, height,
        {MissionFleetRgb16BlitError::invalidGeometry, 0}};
    const MissionFleetCoreRenderRect clip{{0, 0, 4, 1}};
    std::vector<int> events;
    RenderTrace renderTrace{&events, &target};

    const std::uint16_t expectedPixels[]{0x07E0, 0x001F, 0x001F};
    for (std::size_t i = 0; i < 3; ++i) {
        const auto update = missionFleetUpdateCoreShipAnimationState(node, hooks);
        require(update.counterAfter ==
                static_cast<std::int32_t>(i < 2 ? i + 1 : 2));
        require(update.advancedCounter == (i < 2));
        require(update.reachedForwardEndpoint == (i == 2));
        require(node.transitionState5C == (i == 2 ? 1 : 2));

        for (std::size_t byte = 0; byte < pixels.size(); byte += 2) {
            pixels[byte] = static_cast<std::uint8_t>(seed);
            pixels[byte + 1] = static_cast<std::uint8_t>(seed >> 8);
        }
        std::int32_t position[2]{0, 0};
        const auto draw = missionFleetDrawCoreShipAnimationFrame(
            &animation, &screen, position, &clip, node.frameCounter50,
            0x100, 0, drawSelectedSprite, &renderTrace);
        require(draw.status == MissionFleetCoreShipFrameDrawStatus::dispatched);
        require(draw.frameIndex == static_cast<std::uint16_t>(i == 0 ? 1 : 2));
        require(target.lastResult.error == MissionFleetRgb16BlitError::none);
        require(target.lastResult.copiedPixels == 1);
        require(readWord(pixels, 0, 0, pitch) == expectedPixels[i]);
        require(readWord(pixels, 1, 0, pitch) == seed);
    }
}

void testReverseTerminalHooksPrecedeCircularChildTicks() {
    const auto* object64 = reinterpret_cast<void*>(std::uintptr_t{0x1000});
    const auto* object68 = reinterpret_cast<void*>(std::uintptr_t{0x2000});
    const MissionFleetCoreShipAnimationView animation{
        3, 1, nullptr, 0, nullptr, 0};
    MissionFleetCoreShipAnimationStateNode node{
        0x4, 500, 100, 0, -1, 2, &animation, const_cast<void*>(object64),
        const_cast<void*>(object68), nullptr};
    HookTrace trace;
    trace.node = &node;

    ChildTrace firstTrace{&trace.events, 1};
    ChildTrace secondTrace{&trace.events, 2};
    MissionFleetCoreShipAnimationUpdateChild first{
        0x00500000u, nullptr, updateChild, &firstTrace};
    MissionFleetCoreShipAnimationUpdateChild second{
        0x00500000u, &first, updateChild, &secondTrace};
    first.next3C = &second;
    node.firstChild3C = &first;

    const auto result = missionFleetUpdateCoreShipAnimationState(
        node, hooksFor(trace, 16));

    require(result.reachedReverseEndpoint);
    require(result.counterAfter == 0 && result.stateAfter == 0);
    require(node.transitionState5C == 0);
    require(result.childUpdates == 2);
    require((trace.events == std::vector<int>{64, 68, 168, 1, 2}));
    require(trace.coordinateObject == node.optionalObject68);
    require(trace.coordinateX == 100 && trace.coordinateY == 200);
    require(trace.selector == 16);

    trace.events.clear();
    node.frameCounter50 = 2;
    node.direction58 = 1;
    node.transitionState5C = 2;
    const auto forward = missionFleetUpdateCoreShipAnimationState(
        node, hooksFor(trace, 25));
    require(forward.reachedForwardEndpoint);
    require(forward.counterAfter == 2 && forward.stateAfter == 1);
    require((trace.events == std::vector<int>{64, 68, 168, 1, 2}));
    require(trace.coordinateObject == node.optionalObject68);
    require(trace.selector == 25);
}

void testReverseStepZeroDirectionAndFlagGate() {
    const MissionFleetCoreShipAnimationView animation{
        3, 1, nullptr, 0, nullptr, 0};
    MissionFleetCoreShipAnimationStateNode node{
        0x4, 0, 0, 2, -1, 2, &animation, nullptr, nullptr, nullptr};
    HookTrace trace;
    trace.node = &node;

    auto result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.advancedCounter && node.frameCounter50 == 1);
    result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.advancedCounter && node.frameCounter50 == 0);
    result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.reachedReverseEndpoint && node.transitionState5C == 0);

    node.transitionState5C = 2;
    node.direction58 = 0;
    node.frameCounter50 = 1;
    result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(!result.advancedCounter && !result.reachedReverseEndpoint);
    require(node.frameCounter50 == 1 && node.transitionState5C == 2);

    node.flags24 = 0;
    node.frameCounter50 = 9;
    result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.skippedByFlag);
    require(node.frameCounter50 == 9 && node.transitionState5C == 2);
}

void testCircularListSentinelAndSavedNextSemantics() {
    const MissionFleetCoreShipAnimationView animation{
        0, 1, nullptr, 0, nullptr, 0};
    MissionFleetCoreShipAnimationStateNode node{
        0x4, 0, 0, 5, 0, 0, &animation, nullptr, nullptr, nullptr};
    HookTrace trace;
    trace.node = &node;

    ChildTrace firstTrace{&trace.events, 1};
    ChildTrace secondTrace{&trace.events, 2};
    MissionFleetCoreShipAnimationUpdateChild first{
        0x00500000u, nullptr, updateChild, &firstTrace};
    MissionFleetCoreShipAnimationUpdateChild second{
        0x00500000u, &first, updateChild, &secondTrace};
    first.next3C = &second;
    firstTrace.clearOwnNext = true;
    firstTrace.rewriteTo = nullptr;
    node.firstChild3C = &first;

    auto result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.childUpdates == 2);
    require((trace.events == std::vector<int>{1, 2}));

    trace.events.clear();
    MissionFleetCoreShipAnimationUpdateChild sentinel{
        0x00010000u, nullptr, updateChild, &secondTrace};
    node.firstChild3C = &sentinel;
    result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.clearedInvalidChildHead);
    require(node.firstChild3C == nullptr && trace.events.empty());

    node.firstChild3C = &first;
    first.next3C = &sentinel;
    firstTrace.clearOwnNext = false;
    result = missionFleetUpdateCoreShipAnimationState(node, hooksFor(trace));
    require(result.childUpdates == 1 && result.stoppedAtInvalidChild);
    require(node.firstChild3C == &first);
    require((trace.events == std::vector<int>{1}));
}

void testX86CounterWrap() {
    const MissionFleetCoreShipAnimationView emptyAnimation{
        0, 1, nullptr, 0, nullptr, 0};
    MissionFleetCoreShipAnimationStateNode node{
        0x4, 0, 0, INT32_MAX, 1, 2, &emptyAnimation, nullptr, nullptr,
        nullptr};
    HookTrace trace;
    trace.node = &node;

    const auto result = missionFleetUpdateCoreShipAnimationState(
        node, hooksFor(trace));
    require(result.advancedCounter);
    require(node.frameCounter50 == INT32_MIN);
}

}  // namespace

int main() {
    testResetAndStartDirectionWithOptionalCallbacks();
    testForwardCounterFeedsTheRgb16AnimationFrameRenderer();
    testReverseTerminalHooksPrecedeCircularChildTicks();
    testReverseStepZeroDirectionAndFlagGate();
    testCircularListSentinelAndSavedNextSemantics();
    testX86CounterWrap();
}
