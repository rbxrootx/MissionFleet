#include "../../src/client-current/semantic/EightSlotNodeCleanup.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <iostream>
#include <vector>

namespace {

struct Event {
    char kind;
    std::uintptr_t value;
};

struct Recorder {
    std::vector<Event> events;
    MissionFleetCleanupSlot* firstSlot = nullptr;
    MissionFleetCleanupNode* replacementHead = nullptr;
    bool replaceHead = false;
};

void visitPayload(void* payload, void* context) noexcept {
    auto& recorder = *static_cast<Recorder*>(context);
    recorder.events.push_back({'P', reinterpret_cast<std::uintptr_t>(payload)});
    if (recorder.replaceHead && payload == reinterpret_cast<void*>(1)) {
        recorder.firstSlot->head = recorder.replacementHead;
    }
}

void releaseNode(MissionFleetCleanupNode* node, int one, void* context) noexcept {
    auto& recorder = *static_cast<Recorder*>(context);
    assert(one == 1);
    recorder.events.push_back({'N', reinterpret_cast<std::uintptr_t>(node->payload)});
    node->next = nullptr;  // The caller must have saved next already.
}

void assertEvents(const std::vector<Event>& actual,
                  const std::vector<Event>& expected) {
    assert(actual.size() == expected.size());
    for (std::size_t i = 0; i != expected.size(); ++i) {
        assert(actual[i].kind == expected[i].kind);
        assert(actual[i].value == expected[i].value);
    }
}

void ordinaryTraversal() {
    MissionFleetCleanupNode second{nullptr, reinterpret_cast<void*>(2)};
    MissionFleetCleanupNode first{&second, reinterpret_cast<void*>(1)};
    MissionFleetCleanupNode last{nullptr, reinterpret_cast<void*>(7)};
    std::array<MissionFleetCleanupSlot, 8> slots{};
    for (auto& slot : slots) slot = {nullptr, 11, 12, 13};
    slots[0].head = &first;
    slots[7].head = &last;
    Recorder recorder;
    MissionFleet_CleanupEightNodeSlots(slots.data(),
                                       {visitPayload, releaseNode, &recorder});
    assertEvents(recorder.events, {{'P', 1}, {'P', 2}, {'N', 1}, {'N', 2},
                                   {'P', 7}, {'N', 7}});
    for (const auto& slot : slots) {
        assert(slot.head == nullptr && slot.field4 == 0 && slot.field8 == 0);
        assert(slot.fieldC == 13);
    }
}

void secondPassReloadsHead() {
    MissionFleetCleanupNode original{nullptr, reinterpret_cast<void*>(1)};
    MissionFleetCleanupNode replacement{nullptr, reinterpret_cast<void*>(9)};
    std::array<MissionFleetCleanupSlot, 8> slots{};
    slots[0].head = &original;
    Recorder recorder;
    recorder.firstSlot = &slots[0];
    recorder.replacementHead = &replacement;
    recorder.replaceHead = true;
    MissionFleet_CleanupEightNodeSlots(slots.data(),
                                       {visitPayload, releaseNode, &recorder});
    assertEvents(recorder.events, {{'P', 1}, {'N', 9}});
}

}  // namespace

int main() {
    ordinaryTraversal();
    secondPassReloadsHead();
    std::cout << "eight-slot node cleanup: passed\n";
}
