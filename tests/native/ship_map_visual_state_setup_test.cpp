#include "../../src/client-current/semantic/ShipMapVisualStateSetup.h"

#include <cassert>
#include <cstdint>
#include <vector>

namespace {
struct Event {
    char kind;
    void* pointer;
    std::uint32_t argument;
};

struct Fixture {
    std::vector<Event> events;
};

void refresh(MissionFleetShipMapVisualStateSetup&, std::uint32_t argument,
             void* context) {
    static_cast<Fixture*>(context)->events.push_back({'R', nullptr, argument});
}

const MissionFleetShipMapVisualStateSetupHooks hooks{refresh};

void fillRecord(MissionFleetShipMapVisualResourceRecord& record,
                std::uint32_t base) {
    for (std::uint32_t i = 0; i < 6; ++i) {
        record.fields18To2C[i] = base + i;
    }
}

void checkIndexedResourceSetupAndFlagClears() {
    MissionFleetShipMapVisualResourceRecord firstRecords[10]{};
    MissionFleetShipMapVisualResourceRecord secondRecords[3]{};
    for (std::uint32_t i = 0; i < 10; ++i) fillRecord(firstRecords[i], 100 + i * 10);
    for (std::uint32_t i = 0; i < 3; ++i) fillRecord(secondRecords[i], 500 + i * 10);

    MissionFleetShipMapVisualAnimationNode routeNodes[4]{};
    routeNodes[0].flags24 = 0xFFFFu;
    routeNodes[1].flags24 = 0x1235u;
    routeNodes[2].flags24 = 0x8001u;
    routeNodes[3].flags24 = 0xABCDu;
    MissionFleetShipMapVisualAnimationNode node60FC{};
    node60FC.flags24 = 0xFFFFu;
    MissionFleetShipMapVisualAnimationNode flaggedChild{};
    flaggedChild.flags24 = 0x8001u;
    MissionFleetShipMapVisualAnimationNode unflaggedChild{};
    MissionFleetShipMapVisualAnimationNode node12F4{};
    node12F4.flags24 = 0xFFFFu;
    MissionFleetShipMapVisualAnimationNode node12F8{};
    node12F8.flags24 = 0xFFFFu;
    node60FC.firstChild3C = &flaggedChild;
    flaggedChild.next38 = &unflaggedChild;
    flaggedChild.mode2C = 0xAAAAAAAAu;
    unflaggedChild.mode2C = 0xBBBBBBBBu;

    MissionFleetShipMapVisualStateSetup state{};
    state.state60B0 = 0x400800BBu;
    state.routeCursor605C = 21;
    state.routeDivisor6050 = 2; // quotient 10, then one subtract-nine => 1
    state.modeByte100C4 = 4;
    state.modeWord100C0A = 2; // clear two nodes; choose record index 3
    state.records60D0 = {10, firstRecords};
    state.records60D4 = {3, secondRecords};
    state.child60D8.frameValue50 = 999;
    state.child1470.frameValue50 = 998;
    state.child178.frameValue50 = 997;
    state.child178.copiedFields0CTo20[0] = 1234;
    state.child60FC = &node60FC;
    state.nodes60DC[0] = &routeNodes[0];
    state.nodes60DC[1] = &routeNodes[1];
    state.child12F4 = &node12F4;
    state.child12F8 = &node12F8;
    state.value603C = 7;
    state.value6040 = 8;

    Fixture fixture;
    const auto result = missionFleetSetupShipMapVisualState(state, hooks, &fixture);

    assert(result == MissionFleetShipMapVisualStateSetupResult::Applied);
    assert(fixture.events.size() == 1);
    assert(fixture.events[0].kind == 'R' && fixture.events[0].argument == 0);
    assert(state.pageIndex6054 == 1);
    assert(state.child60D8.record54 == &firstRecords[3]);
    assert(state.child60D8.frameValue50 == 50);
    assert(state.child60D8.copiedFields0CTo20[0] == 130 &&
           state.child60D8.copiedFields0CTo20[5] == 135);
    assert(state.child1470.record54 == &secondRecords[2]);
    assert(state.child1470.frameValue50 == 50);
    assert(state.child178.frameValue50 == 997 &&
           state.child178.copiedFields0CTo20[0] == 1234);
    assert(routeNodes[0].flags24 == 0xFFFE && routeNodes[1].flags24 == 0x1234);
    assert(node60FC.flags24 == 0xFFFE && node60FC.mode2C == 0x101u);
    assert(flaggedChild.flags24 == 0x8001u && flaggedChild.mode2C == 0x101u);
    assert(unflaggedChild.mode2C == 0xBBBBBBBBu);
    assert(node12F4.flags24 == 0xFFF0 && node12F8.flags24 == 0xFFF0);
    assert(state.value603C == 0 && state.value6040 == 0);
    assert(state.state60B0 == 0x401000BBu);
}

void checkSpecialThreeRecordMode() {
    MissionFleetShipMapVisualResourceRecord records[3]{};
    for (std::uint32_t i = 0; i < 3; ++i) fillRecord(records[i], 700 + i * 10);
    MissionFleetShipMapVisualStateSetup state{};
    state.state60B0 = 0x080000u;
    state.routeCursor605C = -7;
    state.routeDivisor6050 = 2; // signed IDIV truncates toward zero => -3
    state.modeByte100C4 = 9;
    state.modeWord100C0A = 7;
    state.word164 = 1;
    state.globalRecords58A24724 = {3, records};
    state.child60D8.frameValue50 = 11;
    state.child1470.frameValue50 = 12;
    state.child178.frameValue50 = 13;
    Fixture fixture;

    assert(missionFleetSetupShipMapVisualState(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateSetupResult::Applied);
    assert(state.pageIndex6054 == -3);
    assert(state.child60D8.record54 == &records[0] && state.child60D8.frameValue50 == 0);
    assert(state.child1470.record54 == &records[1] && state.child1470.frameValue50 == 0);
    assert(state.child178.record54 == &records[2] && state.child178.frameValue50 == 0);
    assert(state.child178.copiedFields0CTo20[0] == 720);
}

void checkMissingRecordsRetainCopiedFieldsAndSingleSubtract() {
    MissionFleetShipMapVisualStateSetup state{};
    state.state60B0 = 0x00080000u;
    state.routeCursor605C = 100;
    state.routeDivisor6050 = 1; // native path subtracts nine only once
    state.modeWord100C0A = 7;
    state.records60D0 = {0, nullptr};
    state.records60D4 = {2, nullptr};
    state.child60D8.copiedFields0CTo20[0] = 0xDEADBEEF;
    state.child1470.copiedFields0CTo20[0] = 0xCAFEBABE;
    Fixture fixture;

    assert(missionFleetSetupShipMapVisualState(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateSetupResult::Applied);
    assert(state.pageIndex6054 == 91);
    assert(state.child60D8.record54 == nullptr &&
           state.child60D8.copiedFields0CTo20[0] == 0xDEADBEEF);
    assert(state.child1470.record54 == nullptr &&
           state.child1470.copiedFields0CTo20[0] == 0xCAFEBABE);
    assert(state.child60D8.frameValue50 == 4550 && state.child1470.frameValue50 == 4550);
}

void checkInvalidDivisionAndWrongPhase() {
    MissionFleetShipMapVisualStateSetup state{};
    state.state60B0 = 0x00100000u;
    Fixture fixture;
    assert(missionFleetSetupShipMapVisualState(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateSetupResult::IgnoredPhase);
    assert(fixture.events.empty());

    state.state60B0 = 0x00080000u;
    state.routeDivisor6050 = 0;
    assert(missionFleetSetupShipMapVisualState(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateSetupResult::InvalidSignedDivision);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'R');
}
}

int main() {
    checkIndexedResourceSetupAndFlagClears();
    checkSpecialThreeRecordMode();
    checkMissingRecordsRetainCopiedFieldsAndSingleSubtract();
    checkInvalidDivisionAndWrongPhase();
}
