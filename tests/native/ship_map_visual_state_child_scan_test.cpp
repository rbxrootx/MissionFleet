#include "../../src/client-current/semantic/ShipMapVisualStateChildScan.h"

#include <cassert>
#include <cstdint>
#include <cstring>
#include <new>
#include <stdexcept>
#include <utility>
#include <vector>

namespace {
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
    std::vector<DrawCall> drawCalls;
    std::vector<RouteCall> routeCalls;
    std::vector<std::pair<std::uint32_t, void*>> allocationCalls;
    MissionFleetShipMapVisualNode* inspectOnRandom = nullptr;
    const std::uint8_t* expectedRecordOnRandom = nullptr;
    std::int32_t expectedValue64OnRandom = 0;
    std::size_t randomCall = 0;
    std::size_t allocationCall = 0;
};

void notify(std::uint32_t argument, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(argument == 0x19);
    fixture.order.push_back('N');
}

std::int32_t randValue(void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    if (fixture.inspectOnRandom != nullptr) {
        const auto& node = *fixture.inspectOnRandom;
        assert(node.vtable00 == 0x58996B40u);
        assert(node.record54 == fixture.expectedRecordOnRandom);
        assert(node.counter50 == 0 && node.mode2C == 0);
        assert(node.flags24 == 0xE00Fu);
        assert(node.value58 == 0xA5A5A5A5u);
        assert(node.value5C == 0x5A5A5A5Au);
        assert(node.value60 == -123456);
        assert(node.value64 == fixture.expectedValue64OnRandom);
        assert(node.copiedFields0CTo20[0] == 900u);
        assert(node.copiedFields0CTo20[5] == 905u);
        fixture.inspectOnRandom = nullptr;
    }
    const std::int32_t result = fixture.randomValues.at(fixture.randomCall++);
    fixture.order.push_back('R');
    return result;
}

MissionFleetShipMapVisualNode* allocateSecondaryStorage(
    std::uint32_t bytes, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(bytes == 0x68u);
    void* result = fixture.allocations.at(fixture.allocationCall++);
    fixture.allocationCalls.emplace_back(bytes, result);
    fixture.order.push_back('B');
    return result == nullptr ? nullptr : &fixture.secondaryNode;
}

MissionFleetShipMapVisualNode* allocateCandidateStorage(
    std::uint32_t nativeBytes, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(nativeBytes == 0x58u);
    void* const storage = fixture.allocations.at(fixture.allocationCall++);
    fixture.allocationCalls.emplace_back(nativeBytes, storage);
    fixture.order.push_back('A');
    return static_cast<MissionFleetShipMapVisualNode*>(storage);
}

void drawEffect(void* target, std::uint32_t x, std::uint32_t y,
                std::uint32_t color, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.drawCalls.push_back({target, x, y, color});
    fixture.order.push_back('D');
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
    notify, randValue, allocateCandidateStorage, allocateSecondaryStorage,
    drawEffect, drawRoute};

void setRecordFields(std::uint8_t* record, std::uint32_t base) {
    for (std::size_t i = 0; i < 6; ++i) {
        const std::uint32_t value = base + static_cast<std::uint32_t>(i);
        std::memcpy(record + 0x18 + i * sizeof(value), &value, sizeof(value));
    }
}

void setRecordDivisor(std::uint8_t* record, std::uint16_t divisor) {
    std::memcpy(record + 0x0C, &divisor, sizeof(divisor));
}

void checkMsvc90RandSequence() {
    MissionFleetMsvc90RandState state{};
    assert(missionFleetMsvc90Rand(state) == 41);
    assert(missionFleetMsvc90Rand(state) == 18467);
    assert(missionFleetMsvc90Rand(state) == 6334);
}

void checkCandidateConstructorAndSortedOwnerLists() {
    MissionFleetShipMapVisualNodeListOwner owner{};
    MissionFleetShipMapVisualNode nodes[4]{};
    nodes[0].flags24 = 0xFFFFu;
    const std::int16_t keys[4] = {5, -2, 5, 1};
    std::uint8_t record[0x40]{};
    setRecordFields(record, 700);

    for (std::size_t i = 0; i < 4; ++i) {
        auto* const result = missionFleetConstructShipMapVisualCandidate(
            nodes[i], &owner, i == 0 ? record : nullptr,
            static_cast<std::uint32_t>(100 + i),
            static_cast<std::uint32_t>(200 + i),
            static_cast<std::uint16_t>(keys[i]));
        assert(result == &nodes[i]);
        assert(nodes[i].vtable00 == 0x589A2988u);
        assert(nodes[i].counter50 == 0 && nodes[i].value28 == 0x100u);
        assert(nodes[i].mode2C == 0 && nodes[i].flags24 == 0xE00Fu);
        assert(nodes[i].firstChild3C == nullptr &&
               nodes[i].firstChild4C == nullptr);
        assert(nodes[i].value04 == 100u + i && nodes[i].value08 == 200u + i);
        assert(nodes[i].word26 == static_cast<std::uint16_t>(keys[i]));
    }

    assert(owner.circularHead3C == &nodes[1]);
    assert(nodes[1].next38 == &nodes[3] && nodes[3].next38 == &nodes[0]);
    assert(nodes[0].next38 == &nodes[2] && nodes[2].next38 == &nodes[1]);
    assert(nodes[1].previous34 == &nodes[2] && nodes[2].previous34 == &nodes[0]);
    assert(nodes[0].previous34 == &nodes[3] && nodes[3].previous34 == &nodes[1]);
    assert(owner.linearHead4C == &nodes[1]);
    assert(nodes[1].previous44 == nullptr && nodes[1].next48 == &nodes[3]);
    assert(nodes[3].previous44 == &nodes[1] && nodes[3].next48 == &nodes[0]);
    assert(nodes[0].previous44 == &nodes[3] && nodes[0].next48 == &nodes[2]);
    assert(nodes[2].previous44 == &nodes[0] && nodes[2].next48 == nullptr);
    for (const auto& node : nodes) {
        assert(node.owner30 == &owner && node.owner40 == &owner);
    }
    assert(nodes[0].record54 == record);
    for (std::size_t i = 0; i < 6; ++i) {
        assert(nodes[0].copiedFields0CTo20[i] == 700u + i);
    }

    MissionFleetShipMapVisualNode unowned{};
    missionFleetConstructShipMapVisualCandidate(
        unowned, nullptr, nullptr, 123u, 456u, 7u);
    assert(unowned.owner30 == nullptr && unowned.owner40 == nullptr);
    assert(unowned.previous34 == &unowned && unowned.next38 == &unowned);
    assert(unowned.copiedFields0CTo20[0] == 0 &&
           unowned.copiedFields0CTo20[4] == 0u - 123u &&
           unowned.copiedFields0CTo20[5] == 0u - 456u);
    assert(unowned.record54 == nullptr);
}

void checkSecondaryConstructorAndDivideFault() {
    MissionFleetShipMapVisualNodeListOwner owner{};
    MissionFleetShipMapVisualNode storage{};
    storage.value58 = 0xA5A5A5A5u;
    storage.value5C = 0x5A5A5A5Au;
    storage.value60 = -123456;
    storage.value64 = 0x12345678;
    std::uint8_t record[0x40]{};
    setRecordFields(record, 900);
    setRecordDivisor(record, 16);
    Fixture fixture;
    fixture.randomValues = {17};
    fixture.inspectOnRandom = &storage;
    fixture.expectedRecordOnRandom = record;
    fixture.expectedValue64OnRandom = 8;

    assert(missionFleetConstructShipMapVisualSecondary(
               storage, &owner, record, 123, 456, 0x1234, randValue,
               &fixture) == &storage);
    assert(fixture.randomCall == 1 && fixture.order.size() == 1 &&
           fixture.order[0] == 'R');
    assert(storage.vtable00 == 0x58996B40u);
    assert(storage.value04 == 123 && storage.value08 == 456);
    assert(storage.word26 == 0x1234);
    assert(storage.counter50 == 0 && storage.record54 == record);
    for (std::size_t i = 0; i < 6; ++i) {
        assert(storage.copiedFields0CTo20[i] == 900u + i);
    }
    assert(storage.value58 == 0 && storage.value5C == 1 &&
           storage.value60 == -3 && storage.value64 == 13);
    assert(storage.mode2C == 0xFFFFFEFFu && storage.flags24 == 0x800Fu);
    assert(owner.circularHead3C == &storage && owner.linearHead4C == &storage);
    assert(storage.owner30 == &owner && storage.owner40 == &owner);

    MissionFleetShipMapVisualNode invalidStorage{};
    invalidStorage.value64 = 0x12345678;
    std::uint8_t invalidRecord[0x40]{};
    setRecordFields(invalidRecord, 1200);
    Fixture invalidFixture;
    invalidFixture.randomValues = {41};
    bool threwDivideFault = false;
    try {
        (void)missionFleetConstructShipMapVisualSecondary(
            invalidStorage, nullptr, invalidRecord, 1, 2, 3, randValue,
            &invalidFixture);
    } catch (const std::domain_error&) {
        threwDivideFault = true;
    }
    assert(threwDivideFault);
    assert(invalidFixture.randomCall == 0);
    assert(invalidStorage.vtable00 == 0x58996B40u);
    assert(invalidStorage.record54 == invalidRecord);
    assert(invalidStorage.value64 == 0x12345678);
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
    setRecordFields(table246F0 + 0x480, 1000);
    setRecordDivisor(table246F0 + 0x5C0, 16);
    setRecordFields(table246F4 + 0x80, 2000);
    MissionFleetShipMapVisualNodeListOwner globalOwnerLists{};
    state.globalRecord10524 = &globalOwnerLists;

    Fixture fixture;
    // Phase gate; three entry gates; y/x jitter for slots 7 and 31;
    // post-scan table choice; FUN_58789040 internally calls rand()%6.
    fixture.randomValues = {2, 0, 1, 10, 19, 3, 4, 5, 6, 17};
    fixture.allocations = {&fixture.candidateNodes[0],
                           &fixture.candidateNodes[1],
                           &fixture.candidateNodes[2],
                           reinterpret_cast<void*>(0xD0u)};

    assert(missionFleetScanShipMapVisualStateChildren(state, hooks, &fixture) ==
           MissionFleetShipMapVisualStateChildScanResult::ScanCompleted);
    assert(state.counter6058 == 4 && state.state60B0 == 0x01040000u);
    assert(fixture.randomCall == 10 && fixture.allocationCall == 4);

    assert(fixture.allocationCalls.size() == 4);
    assert(fixture.allocationCalls[0].first == 0x58);
    assert(fixture.allocationCalls[1].first == 0x58);
    assert(fixture.allocationCalls[2].first == 0x58);
    assert(fixture.allocationCalls[3].first == 0x68);
    assert(fixture.allocationCalls[3].second == reinterpret_cast<void*>(0xD0u));
    assert(fixture.order.size() >= 4);
    assert(fixture.order[fixture.order.size() - 4] == 'A');
    assert(fixture.order[fixture.order.size() - 3] == 'R');
    assert(fixture.order[fixture.order.size() - 2] == 'B');
    assert(fixture.order[fixture.order.size() - 1] == 'R');

    const auto& first = fixture.candidateNodes[0];
    const auto& last = fixture.candidateNodes[1];
    const auto& postScan = fixture.candidateNodes[2];
    assert(first.value04 == 91 && first.value08 == 200 && first.word26 == 90);
    assert(last.value04 == 305 && last.value08 == 406 && last.word26 == 90);
    assert(postScan.value04 == 305 && postScan.value08 == 406 &&
           postScan.word26 == 91);
    assert(first.vtable00 == 0x589A2988u && last.vtable00 == 0x589A2988u &&
           postScan.vtable00 == 0x589A2988u);
    assert(first.counter50 == 0 && last.counter50 == 0 && postScan.counter50 == 0);
    assert(first.record54 == table246F0 + 0x480 &&
           last.record54 == table246F0 + 0x480 &&
           postScan.record54 == table246F4 + 0x80);
    for (std::size_t i = 0; i < 6; ++i) {
        assert(first.copiedFields0CTo20[i] == 1000u + i);
        assert(last.copiedFields0CTo20[i] == 1000u + i);
        assert(postScan.copiedFields0CTo20[i] == 2000u + i);
    }
    assert(first.owner30 == &state.ownerLists && first.owner40 == &state.ownerLists);
    assert(last.owner30 == &state.ownerLists && last.owner40 == &state.ownerLists);
    assert(state.ownerLists.circularHead3C == &first);
    assert(first.next38 == &last && last.next38 == &first);
    assert(first.previous34 == &last && last.previous34 == &first);
    assert(state.ownerLists.linearHead4C == &first);
    assert(first.next48 == &last && last.previous44 == &first &&
           last.next48 == nullptr);
    assert(postScan.owner30 == &globalOwnerLists &&
           postScan.owner40 == &globalOwnerLists);
    assert(fixture.secondaryNode.owner30 == &globalOwnerLists &&
           fixture.secondaryNode.owner40 == &globalOwnerLists);
    assert(globalOwnerLists.circularHead3C == &fixture.secondaryNode);
    assert(fixture.secondaryNode.next38 == &postScan &&
           postScan.previous34 == &fixture.secondaryNode);
    assert(postScan.next38 == &fixture.secondaryNode &&
           fixture.secondaryNode.previous34 == &postScan);
    assert(globalOwnerLists.linearHead4C == &fixture.secondaryNode &&
           fixture.secondaryNode.previous44 == nullptr &&
           fixture.secondaryNode.next48 == &postScan);
    assert(postScan.previous44 == &fixture.secondaryNode &&
           postScan.next48 == nullptr);

    assert(fixture.candidateNodes[0].mode2C == 0x102u);
    assert(first.flags24 == 0xE00Fu && last.flags24 == 0xE00Fu &&
           postScan.flags24 == 0xE00Fu);
    assert(first.firstChild3C == nullptr && last.firstChild3C == nullptr &&
           postScan.firstChild3C == nullptr);
    assert(fixture.candidateNodes[1].mode2C == 0x102u);
    assert(fixture.candidateNodes[2].mode2C == 0x102u);
    assert(fixture.secondaryNode.vtable00 == 0x58996B40u);
    assert(fixture.secondaryNode.value04 == 305 &&
           fixture.secondaryNode.value08 == 401 &&
           fixture.secondaryNode.word26 == 90);
    assert(fixture.secondaryNode.record54 == table246F0 + 0x5C0);
    assert(fixture.secondaryNode.value58 == 0 &&
           fixture.secondaryNode.value5C == 1 &&
           fixture.secondaryNode.value60 == -3 &&
           fixture.secondaryNode.value64 == 13);
    assert(fixture.secondaryNode.flags24 == 0x800Fu);
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
    std::uint8_t resourceTable[0x600]{};
    state.resourceTable246F0 = resourceTable;
    state.resourceTableCount246F0 = 24;
    setRecordDivisor(resourceTable + 0x5C0, 16);
    fixture.allocations = {&fixture.candidateNodes[0],
                           &fixture.candidateNodes[1],
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
    fixture.allocations = {&fixture.candidateNodes[0],
                           &fixture.candidateNodes[1],
                           reinterpret_cast<void*>(0xA2u)};
    fixture.randomValues = {1, 1, 0, 0, 0, 0};

    bool threwDivideFault = false;
    try {
        (void)missionFleetScanShipMapVisualStateChildren(state, hooks,
                                                         &fixture);
    } catch (const std::domain_error&) {
        threwDivideFault = true;
    }
    assert(threwDivideFault);
    assert(fixture.candidateNodes[0].record54 == nullptr);
    assert(fixture.candidateNodes[1].record54 == nullptr);
    assert(fixture.candidateNodes[0].copiedFields0CTo20[0] == 0);
    assert(fixture.candidateNodes[0].copiedFields0CTo20[4] == 0u - 20u);
    assert(fixture.candidateNodes[0].copiedFields0CTo20[5] == 0u - 30u);
    assert(fixture.randomCall == 5);
    assert(fixture.allocationCall == 3);
    assert(fixture.allocationCalls[2].first == 0x68);
    assert(fixture.secondaryNode.record54 == nullptr);
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
    checkCandidateConstructorAndSortedOwnerLists();
    checkSecondaryConstructorAndDivideFault();
    checkProximitySelectionAndNoGateAdvance();
    checkThrottleSkipsScanButAdvancesCounter();
    checkCandidateScanAndPostScanConstruction();
    checkOptionalEffectsProjectionAndRouteArguments();
    checkResourceTableRequiresMoreThanEighteenRecords();
    checkAllocationFailureMatchesThrowingOperatorNew();
    checkModeUpdateTraversesNullTerminatedFlaggedChildren();
    checkCounterTransitionAndWord164Gate();
}
