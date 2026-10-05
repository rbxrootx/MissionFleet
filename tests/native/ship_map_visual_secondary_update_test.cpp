#include "../../src/client-current/semantic/ShipMapVisualSecondaryUpdate.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <stdexcept>
#include <vector>

namespace {
struct Fixture {
    std::vector<char> order;
    std::vector<std::int32_t> randomValues;
    std::size_t randomIndex = 0;
    MissionFleetShipMapVisualNodeListOwner* expectedOwner = nullptr;
    MissionFleetShipMapVisualNode* expectedRemoved = nullptr;
    std::uint32_t deleteCalls = 0;
};

std::int32_t randValue(void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.order.push_back('R');
    return fixture.randomValues.at(fixture.randomIndex++);
}

void updateChild(MissionFleetShipMapVisualNode& child, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.order.push_back(static_cast<char>(child.value28));
}

void deleteSelf(MissionFleetShipMapVisualNode& receiver,
                std::uint32_t deletingFlag, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(&receiver == fixture.expectedRemoved);
    assert(deletingFlag == 1u);
    assert(receiver.owner30 == nullptr && receiver.owner40 == nullptr);
    assert(receiver.previous34 == &receiver && receiver.next38 == &receiver);
    assert(receiver.previous44 == nullptr && receiver.next48 == nullptr);
    assert(fixture.expectedOwner->circularHead3C != &receiver);
    assert(fixture.expectedOwner->linearHead4C != &receiver);
    ++fixture.deleteCalls;
    fixture.order.push_back('X');
}

const MissionFleetShipMapVisualSecondaryUpdateHooks hooks{
    randValue, updateChild, deleteSelf};

void setRecordLifetime(std::uint8_t* record, std::int32_t interval,
                      std::uint16_t frames) {
    std::memcpy(record + 0x08, &interval, sizeof(interval));
    std::memcpy(record + 0x0C, &frames, sizeof(frames));
}

void checkFlagGateAndNullRecordUpdate() {
    MissionFleetShipMapVisualNode root{};
    root.flags24 = 0;
    root.value58 = 4;
    root.value5C = 16;
    root.value08 = 20;
    root.value60 = -3;
    Fixture fixture{};
    const auto ignored = missionFleetUpdateShipMapVisualSecondary(
        root, hooks, &fixture);
    assert(ignored ==
           MissionFleetShipMapVisualSecondaryUpdateResult::IgnoredFlag);
    assert(root.value58 == 4 && root.value08 == 20);
    assert(fixture.order.empty());

    root.flags24 = 4;
    root.counter50 = 1000;
    const auto updated = missionFleetUpdateShipMapVisualSecondary(
        root, hooks, &fixture);
    assert(updated == MissionFleetShipMapVisualSecondaryUpdateResult::Updated);
    assert(root.value58 == 5 && root.counter50 == 1000);
    assert(root.value08 == 17);
    assert(fixture.order.empty());
}

void checkFrameCadenceDriftVerticalDeltaAndChildDispatch() {
    MissionFleetShipMapVisualNode root{};
    MissionFleetShipMapVisualNode flaggedChild{};
    MissionFleetShipMapVisualNode unflaggedChild{};
    std::array<std::uint8_t, 0x10> record{};
    setRecordLifetime(record.data(), 4, 2); // expiration threshold is 7

    root.flags24 = 4;
    root.record54 = record.data();
    root.value04 = 100;
    root.value08 = 200;
    root.value58 = 0;
    root.value5C = 3;
    root.value60 = -2;
    root.firstChild3C = &flaggedChild;
    flaggedChild.flags24 = 0x2000;
    flaggedChild.value04 = 10;
    flaggedChild.value08 = 20;
    flaggedChild.value28 = 'A';
    flaggedChild.next38 = &unflaggedChild;
    unflaggedChild.flags24 = 0;
    unflaggedChild.value04 = 30;
    unflaggedChild.value08 = 40;
    unflaggedChild.value28 = 'B';
    unflaggedChild.next38 = &flaggedChild;

    Fixture fixture{};
    fixture.randomValues = {2}; // drift = 1 - (2 % 3) = -1
    for (int frameTick = 1; frameTick <= 3; ++frameTick) {
        const auto result = missionFleetUpdateShipMapVisualSecondary(
            root, hooks, &fixture);
        assert(result == MissionFleetShipMapVisualSecondaryUpdateResult::Updated);
    }

    assert(root.value58 == 0 && root.counter50 == 1);
    assert(root.value04 == 99 && root.value08 == 194);
    assert(flaggedChild.value04 == 9 && flaggedChild.value08 == 14);
    assert(unflaggedChild.value04 == 30 && unflaggedChild.value08 == 40);
    assert(fixture.randomIndex == 1);
    const std::vector<char> expected{
        'A', 'B', 'A', 'B', 'R', 'A', 'B'};
    assert(fixture.order == expected);
}

void checkExpiryUnlinksBeforeDeletingDestructor() {
    MissionFleetShipMapVisualNodeListOwner owner{};
    MissionFleetShipMapVisualNode root{};
    MissionFleetShipMapVisualNode peer{};
    std::array<std::uint8_t, 0x10> record{};
    setRecordLifetime(record.data(), 4, 2); // threshold 4*2-1 = 7

    owner.circularHead3C = &root;
    root.owner30 = &owner;
    root.previous34 = &peer;
    root.next38 = &peer;
    peer.owner30 = &owner;
    peer.previous34 = &root;
    peer.next38 = &root;
    owner.linearHead4C = &root;
    root.owner40 = &owner;
    root.next48 = &peer;
    peer.owner40 = &owner;
    peer.previous44 = &root;

    root.flags24 = 4;
    root.counter50 = 7;
    root.value58 = 10;
    root.value08 = 55;
    root.record54 = record.data();
    Fixture fixture{};
    fixture.expectedOwner = &owner;
    fixture.expectedRemoved = &root;

    const auto result = missionFleetUpdateShipMapVisualSecondary(
        root, hooks, &fixture);
    assert(result == MissionFleetShipMapVisualSecondaryUpdateResult::Removed);
    assert(fixture.deleteCalls == 1);
    assert((fixture.order == std::vector<char>{'X'}));
    assert(owner.circularHead3C == &peer && peer.previous34 == &peer &&
           peer.next38 == &peer);
    assert(owner.linearHead4C == &peer && peer.previous44 == nullptr &&
           peer.next48 == nullptr);
    assert(root.value58 == 10 && root.value08 == 55);
}

void checkLifetimeThresholdWrapsBeforeSignedCompare() {
    MissionFleetShipMapVisualNodeListOwner owner{};
    MissionFleetShipMapVisualNode root{};
    std::array<std::uint8_t, 0x10> record{};
    setRecordLifetime(record.data(), 0x7FFFFFFF, 2);
    owner.circularHead3C = &root;
    owner.linearHead4C = &root;
    root.owner30 = &owner;
    root.previous34 = &root;
    root.next38 = &root;
    root.owner40 = &owner;
    root.record54 = record.data();
    root.flags24 = 4;
    root.counter50 = 0;

    Fixture fixture{};
    fixture.expectedOwner = &owner;
    fixture.expectedRemoved = &root;
    const auto result = missionFleetUpdateShipMapVisualSecondary(
        root, hooks, &fixture);
    // 2 * 0x7fffffff - 1 wraps to 0xfffffffd (-3), so signed 0 >= -3.
    assert(result == MissionFleetShipMapVisualSecondaryUpdateResult::Removed);
    assert(owner.circularHead3C == nullptr && owner.linearHead4C == nullptr);
}

void checkZeroTickDivisorRaisesX86DivideFaultModel() {
    MissionFleetShipMapVisualNode root{};
    root.flags24 = 4;
    root.value58 = 0;
    root.value5C = 0;
    Fixture fixture{};
    bool threw = false;
    try {
        (void)missionFleetUpdateShipMapVisualSecondary(root, hooks, &fixture);
    } catch (const std::domain_error&) {
        threw = true;
    }
    assert(threw && root.value58 == 1);
}
}

int main() {
    checkFlagGateAndNullRecordUpdate();
    checkFrameCadenceDriftVerticalDeltaAndChildDispatch();
    checkExpiryUnlinksBeforeDeletingDestructor();
    checkLifetimeThresholdWrapsBeforeSignedCompare();
    checkZeroTickDivisorRaisesX86DivideFaultModel();
}
