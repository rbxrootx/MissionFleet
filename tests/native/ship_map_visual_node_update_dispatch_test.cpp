#include "../../src/client-current/semantic/ShipMapVisualNodeUpdateDispatch.h"

#include <cassert>
#include <stdexcept>
#include <vector>

namespace {
struct Fixture {
    std::vector<char> order;
    MissionFleetShipMapVisualNode* severNextOn = nullptr;
    MissionFleetShipMapVisualNode* owner = nullptr;
    MissionFleetShipMapVisualNode* newHead = nullptr;
    MissionFleetShipMapVisualNode* changeHeadOn = nullptr;
};

void updateChild(MissionFleetShipMapVisualNode& child, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.order.push_back(static_cast<char>(child.value28));
    if (&child == fixture.severNextOn) {
        child.next38 = nullptr;
    }
    if (&child == fixture.changeHeadOn) {
        fixture.owner->firstChild3C = fixture.newHead;
    }
}

void checkOwnerFlagAndEmptyHeadGates() {
    MissionFleetShipMapVisualNode owner{};
    MissionFleetShipMapVisualNode child{};
    owner.firstChild3C = &child;
    child.next38 = &child;
    Fixture fixture{};

    const auto disabled = missionFleetDispatchShipMapVisualNodeUpdates(
        owner, nullptr, &fixture);
    assert(disabled ==
           MissionFleetShipMapVisualNodeUpdateDispatchResult::IgnoredFlag);
    assert(fixture.order.empty());

    owner.flags24 = 0x0004u;
    owner.firstChild3C = nullptr;
    const auto empty = missionFleetDispatchShipMapVisualNodeUpdates(
        owner, nullptr, &fixture);
    assert(empty ==
           MissionFleetShipMapVisualNodeUpdateDispatchResult::Empty);
    assert(fixture.order.empty());
}

void checkCircularOrderAndNextLinkSnapshot() {
    MissionFleetShipMapVisualNode owner{};
    MissionFleetShipMapVisualNode first{};
    MissionFleetShipMapVisualNode second{};
    MissionFleetShipMapVisualNode third{};
    owner.flags24 = 0x0004u;
    owner.firstChild3C = &first;
    first.value28 = 'A';
    second.value28 = 'B';
    third.value28 = 'C';
    first.next38 = &second;
    second.next38 = &third;
    third.next38 = &first;

    Fixture fixture{};
    fixture.severNextOn = &first;
    const auto result = missionFleetDispatchShipMapVisualNodeUpdates(
        owner, updateChild, &fixture);

    assert(result ==
           MissionFleetShipMapVisualNodeUpdateDispatchResult::Dispatched);
    assert((fixture.order == std::vector<char>{'A', 'B', 'C'}));
}

void checkOwnerHeadIsComparedBeforeEachCallback() {
    MissionFleetShipMapVisualNode owner{};
    MissionFleetShipMapVisualNode first{};
    MissionFleetShipMapVisualNode second{};
    owner.flags24 = 0x0004u;
    owner.firstChild3C = &first;
    first.value28 = 'A';
    second.value28 = 'B';
    first.next38 = &second;
    second.next38 = &first;

    Fixture fixture{};
    fixture.owner = &owner;
    fixture.newHead = &second;
    fixture.changeHeadOn = &first;
    (void)missionFleetDispatchShipMapVisualNodeUpdates(
        owner, updateChild, &fixture);

    // The mapped function compares the captured next pointer with the
    // owner's live head before each callback; after the head moves to B, A
    // receives one final callback before the traversal returns.
    assert((fixture.order == std::vector<char>{'A', 'B', 'A'}));
}

void checkNullTerminatedOrderAndMissingHook() {
    MissionFleetShipMapVisualNode owner{};
    MissionFleetShipMapVisualNode first{};
    MissionFleetShipMapVisualNode last{};
    owner.flags24 = 0x0004u;
    owner.firstChild3C = &first;
    first.value28 = 'X';
    first.next38 = &last;
    last.value28 = 'Y';

    Fixture fixture{};
    const auto result = missionFleetDispatchShipMapVisualNodeUpdates(
        owner, updateChild, &fixture);
    assert(result ==
           MissionFleetShipMapVisualNodeUpdateDispatchResult::Dispatched);
    assert((fixture.order == std::vector<char>{'X', 'Y'}));

    fixture.order.clear();
    bool threw = false;
    try {
        (void)missionFleetDispatchShipMapVisualNodeUpdates(owner, nullptr,
                                                           &fixture);
    } catch (const std::logic_error&) {
        threw = true;
    }
    assert(threw && fixture.order.empty());
}
}

int main() {
    checkOwnerFlagAndEmptyHeadGates();
    checkCircularOrderAndNextLinkSnapshot();
    checkOwnerHeadIsComparedBeforeEachCallback();
    checkNullTerminatedOrderAndMissingHook();
}
