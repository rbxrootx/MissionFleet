#include "../../src/client-current/semantic/ShipMapRouteChildUpdate.h"

#include <cassert>
#include <cstdint>
#include <vector>

namespace {
struct Event {
    char kind;
    std::uint32_t first;
};

struct Fixture {
    std::vector<Event> events;
    const MissionFleetShipMapRouteRecord* resolvedRecord = nullptr;
};

const MissionFleetShipMapRouteRecord* resolve(std::uint32_t index, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.events.push_back({'L', index});
    return fixture.resolvedRecord;
}

const MissionFleetShipMapRouteChildHooks hooks{resolve};

void checkPhasesAndPositionPropagation() {
    MissionFleetShipMapRouteRecord records[3]{};
    records[0].word0C = 1;
    records[1].word0C = 2;
    records[2].word0C = 1;
    for (std::uint32_t i = 0; i < 6; ++i) {
        records[1].copiedFields18To2C[i] = 20 + i;
        records[2].copiedFields18To2C[i] = 30 + i;
    }
    MissionFleetShipMapRouteRecord resolved{};
    resolved.word0C = 1;
    for (std::uint32_t i = 0; i < 6; ++i) {
        resolved.copiedFields18To2C[i] = 40 + i;
    }

    MissionFleetShipMapRouteDescendant flagged{5, 6, 0x2000, nullptr, nullptr};
    MissionFleetShipMapRouteDescendant unflagged{100, 200, 0, nullptr, nullptr};
    MissionFleetShipMapRouteDescendant nestedUnflagged{300, 400, 0, nullptr, nullptr};
    MissionFleetShipMapRouteDescendant nestedFlagged{7, 8, 0x2000, nullptr, nullptr};
    flagged.next38 = &unflagged;
    unflagged.next38 = &flagged;
    flagged.firstChild3C = &nestedUnflagged;
    nestedUnflagged.next38 = &nestedFlagged;

    MissionFleetShipMapRouteVisual child{};
    child.position4 = 100;
    child.position8 = 200;
    child.descendants3C = &flagged;
    for (auto& value : child.copiedFields0CTo20) value = 99;

    const MissionFleetShipMapRouteOffset offsets[2]{{10, 20}, {35, 50}};
    MissionFleetShipMapRouteChildState state{};
    state.objectX4 = 1000;
    state.objectY8 = 2000;
    state.selection23C = {1, 1};
    state.routeOffsetIndex605C = 1;
    state.records190 = records;
    state.recordCount160 = 3;
    state.availableRecordCapacity = 3;
    state.routeOffsets17BC = offsets;
    state.availableRouteOffsetCount = 2;
    state.child146C = &child;

    Fixture fixture;
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x50000000u && child.counter50 == 0);
    assert(child.record54 == &records[1]);
    for (std::uint32_t i = 0; i < 6; ++i) {
        assert(child.copiedFields0CTo20[i] == 20 + i);
    }
    assert(child.position4 == 1035 && child.position8 == 1950);
    assert(fixture.events.empty());
    assert(flagged.position4 == 940 && flagged.position8 == 1756);
    assert(unflagged.position4 == 100 && unflagged.position8 == 200);
    assert(nestedUnflagged.position4 == 300 && nestedUnflagged.position8 == 400);
    assert(nestedFlagged.position4 == 942 && nestedFlagged.position8 == 1758);

    // word +0x0C is tested at exactly word*3-1; the next record is installed,
    // but the counter is retained when phase 0x50000000 advances.
    child.counter50 = 5;
    fixture.events.clear();
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x70000000u && child.counter50 == 5);
    assert(child.record54 == &records[2] && child.copiedFields0CTo20[0] == 30);
    assert(fixture.events.empty());
    assert(flagged.position4 == 940 && flagged.position8 == 1756);
    assert(nestedFlagged.position4 == 942 && nestedFlagged.position8 == 1758);

    // While the selection flag is set, phase 0x70000000 only increments.
    fixture.events.clear();
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x70000000u && child.counter50 == 6);
    assert(fixture.events.empty());

    // Clearing the flag calls the unresolved index+2 resource lookup.
    state.selection23C.flag34 = 0;
    fixture.resolvedRecord = &resolved;
    fixture.events.clear();
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'L');
    assert(fixture.events[0].first == 3);
    assert(state.phase609C == 0x60000000u && child.counter50 == 0);
    assert(child.record54 == &resolved && child.copiedFields0CTo20[0] == 40);

    // The final phase takes three calls for word=1: 0->1->2, then clears.
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x60000000u && child.counter50 == 1);
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x60000000u && child.counter50 == 2);
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0 && child.counter50 == 2);
}

void checkNullRecordsUnknownPhaseAndWrappedCoordinates() {
    MissionFleetShipMapRouteRecord record{};
    record.copiedFields18To2C[0] = 0x12345678u;
    MissionFleetShipMapRouteDescendant wrappedDescendant{
        0xFFFFFFFCu, 0x20u, 0x2000u, nullptr, nullptr};
    MissionFleetShipMapRouteVisual child{};
    child.copiedFields0CTo20[0] = 0xAABBCCDDu;
    child.descendants3C = &wrappedDescendant;
    MissionFleetShipMapRouteOffset offset{35, 50};
    MissionFleetShipMapRouteChildState state{};
    state.phase609C = 0;
    state.selection23C = {1, 99}; // outside both the declared count and buffer
    state.records190 = &record;
    state.recordCount160 = 1;
    state.availableRecordCapacity = 1;
    state.routeOffsets17BC = &offset;
    state.availableRouteOffsetCount = 1;
    state.routeOffsetIndex605C = 0;
    state.child146C = &child;

    Fixture fixture;
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x50000000u && child.counter50 == 0);
    assert(child.record54 == nullptr);
    assert(child.copiedFields0CTo20[0] == 0xAABBCCDDu);

    // A null record reads as word zero, whose x86 32-bit terminal value is -1.
    child.counter50 = 0xFFFFFFFFu;
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x70000000u);
    assert(child.counter50 == 0xFFFFFFFFu && child.record54 == nullptr);
    assert(child.copiedFields0CTo20[0] == 0xAABBCCDDu);

    // Unknown phase values still run the evidenced position update. Coordinate
    // additions/subtractions and movement deltas wrap as x86 DWORD operations.
    state.phase609C = 0x12340000u;
    state.objectX4 = 0xFFFFFFF0u;
    state.objectY8 = 5;
    state.selection23C.flag34 = 0;
    child.position4 = 10;
    child.position8 = 10;
    // Reset after the earlier setup-phase route updates so this assertion
    // isolates the wrapped delta supplied by the final call.
    wrappedDescendant.position4 = 0xFFFFFFFCu;
    wrappedDescendant.position8 = 0x20u;
    fixture.events.clear();
    missionFleetUpdateShipMapRouteChild(state, hooks, &fixture);
    assert(state.phase609C == 0x12340000u);
    assert(child.position4 == 19 && child.position8 == 0xFFFFFFD3u);
    assert(fixture.events.empty());
    assert(wrappedDescendant.position4 == 5 &&
           wrappedDescendant.position8 == 0xFFFFFFE9u);
}
}

int main() {
    checkPhasesAndPositionPropagation();
    checkNullRecordsUnknownPhaseAndWrappedCoordinates();
}
