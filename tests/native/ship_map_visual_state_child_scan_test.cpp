#include "../../src/client-current/semantic/ShipMapVisualStateChildScan.h"

#include <cassert>
#include <cstdint>
#include <vector>

namespace {
struct Event {
    char kind;
    std::size_t index;
    std::uint32_t value;
    void* pointer;
};

struct Fixture {
    std::vector<Event> events;
    std::int32_t sample = 1;
    std::vector<std::uint32_t> entryFlags;
    std::vector<void*> candidates;
    std::size_t entryCall = 0;
    std::size_t candidateCall = 0;
};

void notify(std::uint32_t argument, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'N', 0, argument, nullptr});
}

std::int32_t sample(MissionFleetShipMapVisualStateChildScan&, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.events.push_back({'S', 0, static_cast<std::uint32_t>(fixture.sample), nullptr});
    return fixture.sample;
}

std::uint32_t entryGate(MissionFleetShipMapVisualStateChildScan&,
                       const MissionFleetShipMapVisualCandidateEntry&,
                       std::size_t index, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.events.push_back({'E', index, 0, nullptr});
    return fixture.entryFlags[fixture.entryCall++];
}

void* processCandidate(MissionFleetShipMapVisualStateChildScan&,
                       const MissionFleetShipMapVisualCandidateEntry&,
                       std::size_t index, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    void* result = fixture.candidates[fixture.candidateCall++];
    fixture.events.push_back({'C', index, 0, result});
    return result;
}

void processLast(MissionFleetShipMapVisualStateChildScan&, void* candidate,
                 void* context) {
    static_cast<Fixture*>(context)->events.push_back({'P', 0, 0, candidate});
}

const MissionFleetShipMapVisualStateChildScanHooks hooks{
    notify, sample, entryGate, processCandidate, processLast};

void checkProximitySelectionAndNoGateAdvance() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x400400AAu;
    state.referenceX50 = 900; // strict boundary: not in range
    state.objectX4 = 0;
    state.referenceY54 = 0;
    state.objectY8 = 0;
    state.gateValue60B4 = 0;
    state.counter6058 = 8;
    Fixture fixture;

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(fixture.events.empty());
    assert(state.state60B0 == 0x400800AAu && state.counter6058 == 8);

    state.state60B0 = 0x00040000u;
    state.selectedByGlobal58A247F8 = true;
    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'N' &&
           fixture.events[0].value == 0x19);
}

void checkThrottleSkipsScanButAdvancesCounter() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x00040000u;
    state.gateValue60B4 = 1;
    state.counter6058 = 4;
    state.objectX4 = 100;
    state.referenceX50 = 100;
    state.objectY8 = 200;
    state.referenceY54 = 200;
    Fixture fixture;
    fixture.sample = -6; // signed remainder zero => do not scan entries

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::ScanDeferred);
    assert(state.counter6058 == 5 && state.state60B0 == 0x00040000u);
    assert(fixture.events.size() == 2 && fixture.events[0].kind == 'N' &&
           fixture.events[1].kind == 'S');
}

void checkFixedScanLowBitAndLastCandidate() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x01040000u;
    state.gateValue60B4 = 1;
    state.counter6058 = 3;
    MissionFleetShipMapVisualCandidateEntry entries[3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    state.entries17C[0] = &entries[0];
    state.entries17C[7] = &entries[1];
    state.entries17C[31] = &entries[2];

    int first{}, last{};
    Fixture fixture;
    fixture.sample = 2;
    fixture.entryFlags = {0x80000000u, 0x80000001u, 3u};
    fixture.candidates = {&first, &last};

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::ScanCompleted);
    assert(state.counter6058 == 4 && state.state60B0 == 0x01040000u);
    assert(fixture.entryCall == 3 && fixture.candidateCall == 2);
    assert(fixture.events.size() == 8);
    assert(fixture.events[0].kind == 'N' && fixture.events[1].kind == 'S');
    assert(fixture.events[2].kind == 'E' && fixture.events[2].index == 0);
    assert(fixture.events[3].kind == 'E' && fixture.events[3].index == 7);
    assert(fixture.events[4].kind == 'C' && fixture.events[4].index == 7 &&
           fixture.events[4].pointer == &first);
    assert(fixture.events[5].kind == 'E' && fixture.events[5].index == 31);
    assert(fixture.events[6].kind == 'C' && fixture.events[6].index == 31 &&
           fixture.events[6].pointer == &last);
    assert(fixture.events[7].kind == 'P' && fixture.events[7].pointer == &last);
}

void checkCounterTransitionAndWord164Gate() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x40040055u;
    state.gateValue60B4 = 1;
    state.word164 = 1;
    state.counter6058 = 9;
    Fixture fixture;
    fixture.sample = 1;

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(state.counter6058 == 0 && state.state60B0 == 0x40080055u);
    assert(fixture.events.size() == 2 && fixture.events[1].kind == 'S');

    state.state60B0 = 0x00040000u;
    state.counter6058 = 0xFFFFFFFEu; // increment => -1, then reset and advance
    fixture.events.clear();
    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(state.counter6058 == 0 && state.state60B0 == 0x00080000u);
}
}

int main() {
    checkProximitySelectionAndNoGateAdvance();
    checkThrottleSkipsScanButAdvancesCounter();
    checkFixedScanLowBitAndLastCandidate();
    checkCounterTransitionAndWord164Gate();
}
