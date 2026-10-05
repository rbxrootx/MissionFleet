#include "../../src/client-current/semantic/ShipMapRouteChildUpdate.h"

#include <cassert>
#include <cstdint>

namespace {
void checkPhasesAndPositionPropagation() {
    MissionFleetShipMapRouteRecord records[4]{};
    records[0].word0C = 1;
    records[1].word0C = 2;
    records[2].word0C = 1;
    for (std::uint32_t i = 0; i < 6; ++i) {
        records[1].copiedFields18To2C[i] = 20 + i;
        records[2].copiedFields18To2C[i] = 30 + i;
        records[3].copiedFields18To2C[i] = 40 + i;
    }
    records[3].word0C = 1;

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
    state.recordCount160 = 4;
    state.availableRecordCapacity = 4;
    state.routeOffsets17BC = offsets;
    state.availableRouteOffsetCount = 2;
    state.child146C = &child;

    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x50000000u && child.counter50 == 0);
    assert(child.record54 == &records[1]);
    for (std::uint32_t i = 0; i < 6; ++i) {
        assert(child.copiedFields0CTo20[i] == 20 + i);
    }
    assert(child.position4 == 1035 && child.position8 == 1950);
    assert(flagged.position4 == 940 && flagged.position8 == 1756);
    assert(unflagged.position4 == 100 && unflagged.position8 == 200);
    assert(nestedUnflagged.position4 == 300 && nestedUnflagged.position8 == 400);
    assert(nestedFlagged.position4 == 942 && nestedFlagged.position8 == 1758);

    // word +0x0C is tested at exactly word*3-1; the next record is installed,
    // but the counter is retained when phase 0x50000000 advances.
    child.counter50 = 5;
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x70000000u && child.counter50 == 5);
    assert(child.record54 == &records[2] && child.copiedFields0CTo20[0] == 30);
    assert(flagged.position4 == 940 && flagged.position8 == 1756);
    assert(nestedFlagged.position4 == 942 && nestedFlagged.position8 == 1758);

    // While the selection flag is set, phase 0x70000000 only increments.
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x70000000u && child.counter50 == 6);

    // Clearing the flag loads selection index+2 through FUN_587317E0.
    state.selection23C.flag34 = 0;
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x60000000u && child.counter50 == 0);
    assert(child.record54 == &records[3] && child.copiedFields0CTo20[0] == 40);

    // The final phase takes three calls for word=1: 0->1->2, then clears.
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x60000000u && child.counter50 == 1);
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x60000000u && child.counter50 == 2);
    missionFleetUpdateShipMapRouteChild(state);
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

    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x50000000u && child.counter50 == 0);
    assert(child.record54 == nullptr);
    assert(child.copiedFields0CTo20[0] == 0xAABBCCDDu);

    // A null record reads as word zero, whose x86 32-bit terminal value is -1.
    child.counter50 = 0xFFFFFFFFu;
    missionFleetUpdateShipMapRouteChild(state);
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
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x12340000u);
    assert(child.position4 == 19 && child.position8 == 0xFFFFFFD3u);
    assert(wrappedDescendant.position4 == 5 &&
           wrappedDescendant.position8 == 0xFFFFFFE9u);

    // The +2 DWORD addition wraps. FUN_587317E0 then rejects the signed
    // negative index without changing the child's copied fields.
    state.phase609C = 0x70000000u;
    state.selection23C.index68 = 0xFFFFFFFDu;
    state.child146C->record54 = &record;
    state.child146C->counter50 = 77;
    missionFleetUpdateShipMapRouteChild(state);
    assert(state.phase609C == 0x60000000u && child.counter50 == 0);
    assert(child.record54 == nullptr &&
           child.copiedFields0CTo20[0] == 0xAABBCCDDu);
}
}

int main() {
    checkPhasesAndPositionPropagation();
    checkNullRecordsUnknownPhaseAndWrappedCoordinates();
}
