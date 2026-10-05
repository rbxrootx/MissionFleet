#include "../../src/client-current/semantic/ShipMapVisualStateChildScan.h"

#include <cassert>
#include <cstdint>
#include <new>
#include <utility>
#include <vector>

namespace {
struct CandidateCall {
    void* allocated;
    const void* owner;
    const std::uint8_t* resource;
    std::uint32_t x;
    std::uint32_t y;
    std::uint16_t variant;
    MissionFleetShipMapVisualCandidateRef result;
};

struct SecondaryCall {
    void* allocated;
    const void* owner;
    const std::uint8_t* resource;
    std::uint32_t x;
    std::uint32_t y;
    std::uint16_t word26;
    std::uint32_t randomRemainder6;
};

struct DrawCall {
    void* target;
    std::uint32_t x;
    std::uint32_t y;
    std::uint32_t color;
};

struct RouteCall {
    std::uint32_t x;
    std::uint32_t y;
    std::uint32_t width;
    std::uint32_t height;
    std::uint32_t firstMode;
    std::uint32_t secondMode;
    std::uint16_t childFrame;
};

struct Fixture {
    std::vector<char> order;
    std::vector<std::int32_t> randomValues;
    std::vector<void*> allocations;
    std::array<MissionFleetShipMapVisualNode, 3> candidateNodes{};
    MissionFleetShipMapVisualNode secondaryNode{};
    std::vector<CandidateCall> candidateCalls;
    std::vector<SecondaryCall> secondaryCalls;
    std::vector<DrawCall> drawCalls;
    std::vector<RouteCall> routeCalls;
    std::vector<std::pair<std::uint32_t, void*>> allocationCalls;
    std::size_t randomCall = 0;
    std::size_t allocationCall = 0;
    std::size_t candidateCall = 0;
};

void notify(std::uint32_t argument, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(argument == 0x19);
    fixture.order.push_back('N');
}

std::int32_t randValue(void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    const std::int32_t result = fixture.randomValues.at(fixture.randomCall++);
    fixture.order.push_back('R');
    return result;
}

void* allocate(std::uint32_t bytes, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    void* result = fixture.allocations.at(fixture.allocationCall++);
    fixture.allocationCalls.emplace_back(bytes, result);
    fixture.order.push_back(bytes == 0x58 ? 'A' : 'B');
    return result;
}

MissionFleetShipMapVisualCandidateRef initializeCandidate(
    MissionFleetShipMapVisualStateChildScan&, void* allocated,
    const void* owner, const std::uint8_t* resource, std::uint32_t x,
    std::uint32_t y, std::uint16_t variant, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    auto* object = &fixture.candidateNodes.at(fixture.candidateCall++);
    fixture.candidateCalls.push_back(
        {allocated, owner, resource, x, y, variant, {object, x, y, variant}});
    fixture.order.push_back('I');
    return {object, x, y, variant};
}

void drawEffect(void* target, std::uint32_t x, std::uint32_t y,
                std::uint32_t color, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.drawCalls.push_back({target, x, y, color});
    fixture.order.push_back('D');
}

MissionFleetShipMapVisualNode* initializeSecondary(void* allocated, const void* owner,
                          const std::uint8_t* resource, std::uint32_t x,
                          std::uint32_t y, std::uint16_t word26,
                          std::uint32_t randomRemainder6, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.secondaryCalls.push_back(
        {allocated, owner, resource, x, y, word26, randomRemainder6});
    fixture.order.push_back('S');
    return &fixture.secondaryNode;
}

void drawRoute(MissionFleetShipMapVisualStateChildScan&, std::uint32_t x,
               std::uint32_t y, std::uint32_t width, std::uint32_t height,
               std::uint32_t firstMode, std::uint32_t secondMode,
               std::uint16_t childFrame, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.routeCalls.push_back(
        {x, y, width, height, firstMode, secondMode, childFrame});
    fixture.order.push_back('T');
}

const MissionFleetShipMapVisualStateChildScanHooks hooks{
    notify, randValue, allocate, initializeCandidate, drawEffect,
    initializeSecondary, drawRoute};

void checkMsvc90RandSequence() {
    MissionFleetMsvc90RandState state{};
    assert(missionFleetMsvc90Rand(state) == 41);
    assert(missionFleetMsvc90Rand(state) == 18467);
    assert(missionFleetMsvc90Rand(state) == 6334);
}

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
    assert(fixture.order.empty());
    assert(state.state60B0 == 0x400800AAu && state.counter6058 == 8);

    state.state60B0 = 0x00040000u;
    state.selectedByGlobal58A247F8 = true;
    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(fixture.order.size() == 1 && fixture.order[0] == 'N');
}

void checkThrottleSkipsScanButAdvancesCounter() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x00040000u;
    state.gateValue60B4 = 1;
    state.counter6058 = 4;
    state.objectX4 = state.referenceX50 = 100;
    state.objectY8 = state.referenceY54 = 200;
    Fixture fixture;
    fixture.randomValues = {6}; // rand()%3 == 0: skip the 32 entries

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::ScanDeferred);
    assert(state.counter6058 == 5 && state.state60B0 == 0x00040000u);
    assert(fixture.order.size() == 2 && fixture.order[0] == 'N' &&
           fixture.order[1] == 'R');
}

void checkCandidateScanAndPostScanConstruction() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x01040000u;
    state.gateValue60B4 = 1;
    state.counter6058 = 3;
    state.objectX4 = state.referenceX50 = 100;
    state.objectY8 = state.referenceY54 = 200;
    state.value42AC = -10;
    MissionFleetShipMapVisualCandidateEntry entries[3]{
        {1, 2, 3}, {100, 200, 6}, {300, 400, 9}};
    state.entries17C[0] = &entries[0];
    state.entries17C[7] = &entries[1];
    state.entries17C[31] = &entries[2];
    std::uint8_t table246F0[0x600]{};
    std::uint8_t table246F4[0x100]{};
    state.resourceTable246F0 = table246F0;
    state.resourceTableCount246F0 = 24;
    state.resourceTable246F4 = table246F4;
    state.resourceTableCount246F4 = 4;
    state.globalRecord10524 = reinterpret_cast<void*>(0x9990u);

    Fixture fixture;
    // Phase gate; three entry gates; y/x jitter for slots 7 and 31;
    // post-scan table choice; FUN_58789040's rand()%6.
    fixture.randomValues = {2, 0, 1, 10, 19, 3, 4, 5, 6, 17};
    fixture.allocations = {reinterpret_cast<void*>(0xA0u),
                           reinterpret_cast<void*>(0xB0u),
                           reinterpret_cast<void*>(0xC0u),
                           reinterpret_cast<void*>(0xD0u)};
    MissionFleetShipMapVisualNode flaggedChild{};
    MissionFleetShipMapVisualNode unflaggedSibling{};
    MissionFleetShipMapVisualNode nestedFlaggedChild{};
    fixture.candidateNodes[0].firstChild3C = &flaggedChild;
    flaggedChild.flags24 = 0x8000u;
    flaggedChild.next38 = &unflaggedSibling;
    flaggedChild.firstChild3C = &nestedFlaggedChild;
    nestedFlaggedChild.flags24 = 0x8000u;
    nestedFlaggedChild.next38 = &nestedFlaggedChild;
    unflaggedSibling.mode2C = 0xDEADBEEFu;
    unflaggedSibling.next38 = &flaggedChild;

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::ScanCompleted);
    assert(state.counter6058 == 4 && state.state60B0 == 0x01040000u);
    assert(fixture.randomCall == 10 && fixture.allocationCall == 4);
    assert(fixture.candidateCalls.size() == 3);

    const auto& first = fixture.candidateCalls[0];
    const auto& last = fixture.candidateCalls[1];
    const auto& postScan = fixture.candidateCalls[2];
    assert(first.allocated == reinterpret_cast<void*>(0xA0u));
    assert(first.owner == &state && first.resource == table246F0 + 0x480);
    assert(first.x == 91 && first.y == 200 && first.variant == 90);
    assert(last.allocated == reinterpret_cast<void*>(0xB0u));
    assert(last.owner == &state && last.resource == table246F0 + 0x480);
    assert(last.x == 305 && last.y == 406 && last.variant == 90);
    assert(postScan.allocated == reinterpret_cast<void*>(0xC0u));
    assert(postScan.owner == state.globalRecord10524);
    assert(postScan.resource == table246F4 + 0x80);
    assert(postScan.x == 305 && postScan.y == 406 && postScan.variant == 91);

    assert(fixture.allocationCalls.size() == 4);
    assert(fixture.allocationCalls[0].first == 0x58);
    assert(fixture.allocationCalls[1].first == 0x58);
    assert(fixture.allocationCalls[2].first == 0x58);
    assert(fixture.allocationCalls[3].first == 0x68);
    assert(fixture.secondaryCalls.size() == 1);
    const auto& secondary = fixture.secondaryCalls[0];
    assert(secondary.allocated == reinterpret_cast<void*>(0xD0u));
    assert(secondary.owner == state.globalRecord10524);
    assert(secondary.resource == table246F0 + 0x5C0);
    assert(secondary.x == 305 && secondary.y == 401 && secondary.word26 == 90);
    assert(secondary.randomRemainder6 == 5);

    assert(fixture.candidateNodes[0].mode2C == 0x102u);
    assert(flaggedChild.mode2C == 0x102u && nestedFlaggedChild.mode2C == 0x102u);
    assert(unflaggedSibling.mode2C == 0xDEADBEEFu);
    assert(fixture.candidateNodes[1].mode2C == 0x102u);
    assert(fixture.candidateNodes[2].mode2C == 0x102u);
    assert(fixture.secondaryNode.mode2C == 0xFFFFFEFFu);
}

void checkOptionalEffectsProjectionAndRouteArguments() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x00040000u;
    state.gateValue60B4 = 1;
    state.drawCandidateEffects589C8EDC = true;
    state.drawRouteEffect589C9040 = true;
    state.objectX4 = 10000;
    state.objectY8 = 20000;
    state.projection = {0, 0, 200, 100, 1, 5, 7, 0x12345678u};
    const void* effectTargets[11]{};
    effectTargets[10] = reinterpret_cast<void*>(0xEEEEu);
    state.effectTargetTable31810 = effectTargets;
    state.effectTargetCount31810 = 11;
    state.postScanEffectTarget604C = reinterpret_cast<void*>(0xDDDDu);
    state.child60D8Word26 = 6;
    MissionFleetShipMapVisualCandidateEntry entry{10, 20, 1};
    state.entries17C[0] = &entry;

    Fixture fixture;
    fixture.randomValues = {1, 1, 0, 0, 3, 2, 17};
    fixture.allocations = {reinterpret_cast<void*>(0xC0u),
                           reinterpret_cast<void*>(0xC1u),
                           reinterpret_cast<void*>(0xC2u)};

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::ScanCompleted);
    assert(fixture.randomCall == 7 && fixture.drawCalls.size() == 2);
    const std::uint32_t projectedX = static_cast<std::uint32_t>(-90005);
    const std::uint32_t projectedY = 30007;
    assert(fixture.drawCalls[0].target == reinterpret_cast<void*>(0xEEEEu));
    assert(fixture.drawCalls[0].x == projectedX &&
           fixture.drawCalls[0].y == projectedY &&
           fixture.drawCalls[0].color == 0x12345678u);
    assert(fixture.drawCalls[1].target == reinterpret_cast<void*>(0xDDDDu));
    assert(fixture.drawCalls[1].x == projectedX &&
           fixture.drawCalls[1].y == projectedY);
    assert(fixture.routeCalls.size() == 1);
    assert(fixture.routeCalls[0].x == 20 && fixture.routeCalls[0].y == 30);
    assert(fixture.routeCalls[0].width == 10 &&
           fixture.routeCalls[0].height == 0x28);
    assert(fixture.routeCalls[0].firstMode == 3 &&
           fixture.routeCalls[0].secondMode == 7 &&
           fixture.routeCalls[0].childFrame == 7);
}

void checkResourceTableRequiresMoreThanEighteenRecords() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x00040000u;
    state.gateValue60B4 = 1;
    MissionFleetShipMapVisualCandidateEntry entry{10, 20, 1};
    state.entries17C[0] = &entry;
    std::uint8_t resourceTable[0x500]{};
    state.resourceTable246F0 = resourceTable;
    state.resourceTableCount246F0 = 18;
    Fixture fixture;
    fixture.randomValues = {1, 1, 0, 0};
    fixture.allocations = {reinterpret_cast<void*>(0xD0u)};
    fixture.allocations = {reinterpret_cast<void*>(0xA0u),
                           reinterpret_cast<void*>(0xA1u),
                           reinterpret_cast<void*>(0xA2u)};
    fixture.randomValues = {1, 1, 0, 0, 0, 0};

    (void)missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture);
    assert(fixture.candidateCalls.size() == 2);
    assert(fixture.candidateCalls[0].resource == nullptr);
    assert(fixture.randomCall == 6);
}

void checkAllocationFailureMatchesThrowingOperatorNew() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x00040000u;
    state.gateValue60B4 = 1;
    MissionFleetShipMapVisualCandidateEntry entry{10, 20, 1};
    state.entries17C[0] = &entry;
    Fixture fixture;
    fixture.randomValues = {1, 1};
    fixture.allocations = {nullptr};

    bool threwBadAlloc = false;
    try {
        (void)missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture);
    } catch (const std::bad_alloc&) {
        threwBadAlloc = true;
    }
    assert(threwBadAlloc);
    assert(fixture.randomCall == 2);
}

void checkModeUpdateTraversesNullTerminatedFlaggedChildren() {
    MissionFleetShipMapVisualNode root{};
    MissionFleetShipMapVisualNode flagged{};
    MissionFleetShipMapVisualNode unflagged{};
    root.firstChild3C = &flagged;
    flagged.flags24 = 0x8000u;
    flagged.next38 = &unflagged;
    flagged.mode2C = 0x11111111u;
    unflagged.next38 = nullptr;
    unflagged.mode2C = 0x22222222u;

    missionFleetSetShipMapVisualNodeMode(root, 0xFFFFFEFFu);
    assert(root.mode2C == 0xFFFFFEFFu);
    assert(flagged.mode2C == 0xFFFFFEFFu);
    assert(unflagged.mode2C == 0x22222222u);
}

void checkCounterTransitionAndWord164Gate() {
    MissionFleetShipMapVisualStateChildScan state{};
    state.state60B0 = 0x40040055u;
    state.gateValue60B4 = 1;
    state.word164 = 1;
    state.counter6058 = 9;
    Fixture fixture;
    fixture.randomValues = {1};

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(state.counter6058 == 0 && state.state60B0 == 0x40080055u);
    assert(fixture.randomCall == 1);

    state.state60B0 = 0x00040000u;
    state.counter6058 = 0xFFFFFFFEu; // increment => -1, then reset and advance
    fixture.randomValues = {1};
    fixture.randomCall = 0;
    fixture.order.clear();
    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::AdvancedToSetup);
    assert(state.counter6058 == 0 && state.state60B0 == 0x00080000u);
}
}

int main() {
    checkMsvc90RandSequence();
    checkProximitySelectionAndNoGateAdvance();
    checkThrottleSkipsScanButAdvancesCounter();
    checkCandidateScanAndPostScanConstruction();
    checkOptionalEffectsProjectionAndRouteArguments();
    checkResourceTableRequiresMoreThanEighteenRecords();
    checkAllocationFailureMatchesThrowingOperatorNew();
    checkModeUpdateTraversesNullTerminatedFlaggedChildren();
    checkCounterTransitionAndWord164Gate();
}
