#include "../../src/client-current/semantic/ShipMapVisualSpriteBundleRender.h"

#include <cassert>
#include <cstdint>
#include <vector>

namespace {
struct Fixture {
    std::vector<char> order;
    const MissionFleetShipMapVisualPoint* expectedOrigin = nullptr;
    const std::uint8_t* expectedRecord = nullptr;
};

void drawChild(MissionFleetShipMapVisualNode& child,
               std::uint32_t argument1, std::uint32_t argument2,
               const MissionFleetShipMapVisualPoint* origin, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(argument1 == 0x12345678u);
    assert(argument2 == 0x87654321u);
    assert(origin == fixture.expectedOrigin);
    fixture.order.push_back(static_cast<char>(child.value04));
}

void drawSprite(
    const std::uint8_t* record,
    MissionFleetShipMapVisualSpriteBundleInvocation& invocation,
    void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(record == fixture.expectedRecord);
    assert(invocation.argument1 == 0x12345678u);
    assert(invocation.point.x == 5u); // verifies x wraps modulo 2^32
    assert(invocation.point.y == 37u);
    assert(invocation.argument2 == 0x87654321u);
    assert(invocation.frame50 == 0x10203040u);
    assert(invocation.value28 == 0xA1B2C3D4u);
    assert(invocation.mode2C == 0xFFEEDDCCu);
    fixture.order.push_back('D');
}

const MissionFleetShipMapVisualSpriteBundleRenderHooks hooks{
    drawChild, drawSprite};

void checkGatesSuppressAllDispatch() {
    MissionFleetShipMapVisualNode root{};
    MissionFleetShipMapVisualNode child{};
    root.firstChild4C = &child;
    child.value04 = 'C';
    root.flags24 = 0;
    root.counter50 = 0;
    Fixture fixture{};
    missionFleetRenderShipMapVisualSpriteBundle(
        root, 0x12345678u, 0x87654321u, nullptr, hooks, &fixture);
    assert(fixture.order.empty());

    root.flags24 = 1;
    root.counter50 = 0xFFFFFFFFu; // signed negative, matching `jl`
    missionFleetRenderShipMapVisualSpriteBundle(
        root, 0x12345678u, 0x87654321u, nullptr, hooks, &fixture);
    assert(fixture.order.empty());
}

void checkSignedPrefixSpriteArgumentsAndCursorOrder() {
    MissionFleetShipMapVisualNode root{};
    MissionFleetShipMapVisualNode negativeA{};
    MissionFleetShipMapVisualNode negativeB{};
    MissionFleetShipMapVisualNode nonnegativeA{};
    MissionFleetShipMapVisualNode lateNegative{};
    MissionFleetShipMapVisualNode nonnegativeB{};
    const auto* const record = reinterpret_cast<const std::uint8_t*>(
        static_cast<std::uintptr_t>(0x100));
    MissionFleetShipMapVisualPoint origin{0xFFFFFFF8u, 20u};

    root.flags24 = 1;
    root.counter50 = 0x10203040u;
    root.record54 = record;
    root.value04 = 8;
    root.value08 = 10;
    root.copiedFields0CTo20[0] = 5;
    root.copiedFields0CTo20[1] = 7;
    root.value28 = 0xA1B2C3D4u;
    root.mode2C = 0xFFEEDDCCu;
    negativeA.value04 = 'a';
    negativeA.word26 = static_cast<std::uint16_t>(-2);
    negativeA.next48 = &negativeB;
    negativeB.value04 = 'b';
    negativeB.word26 = static_cast<std::uint16_t>(-1);
    negativeB.next48 = &nonnegativeA;
    nonnegativeA.value04 = 'c';
    nonnegativeA.word26 = 0;
    nonnegativeA.next48 = &lateNegative;
    lateNegative.value04 = 'e';
    lateNegative.word26 = static_cast<std::uint16_t>(-3);
    lateNegative.next48 = &nonnegativeB;
    nonnegativeB.value04 = 'd';
    nonnegativeB.word26 = 1;
    root.firstChild4C = &negativeA;

    Fixture fixture{};
    fixture.expectedOrigin = &origin;
    fixture.expectedRecord = record;
    missionFleetRenderShipMapVisualSpriteBundle(
        root, 0x12345678u, 0x87654321u, &origin, hooks, &fixture);
    const std::vector<char> expected{'a', 'b', 'D', 'c', 'e', 'd'};
    assert(fixture.order == expected);
}

void checkLowRecordAddressSkipsSpriteAndPreservesChildren() {
    MissionFleetShipMapVisualNode root{};
    MissionFleetShipMapVisualNode child{};
    child.value04 = 'c';
    root.flags24 = 1;
    root.counter50 = 0;
    root.record54 = reinterpret_cast<const std::uint8_t*>(
        static_cast<std::uintptr_t>(1));
    root.firstChild4C = &child;

    Fixture fixture{};
    fixture.expectedOrigin = nullptr;
    missionFleetRenderShipMapVisualSpriteBundle(
        root, 0x12345678u, 0x87654321u, nullptr, hooks, &fixture);
    const std::vector<char> expected{'c'};
    assert(fixture.order == expected);
}
}

int main() {
    checkGatesSuppressAllDispatch();
    checkSignedPrefixSpriteArgumentsAndCursorOrder();
    checkLowRecordAddressSkipsSpriteAndPreservesChildren();
}
