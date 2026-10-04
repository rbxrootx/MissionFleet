#include "../../src/client-current/semantic/ParentUiChildInit.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <limits>
#include <vector>

namespace {
struct Event {
    char kind;
    std::size_t bytes;
    MissionFleetParentUiChildSlot slot;
    void* allocation;
    MissionFleetParentUiChildState* parent;
    std::int32_t x, y, arg3, arg4, flags;
};
struct Fixture {
    std::vector<Event> events;
    std::array<int, 3> memory{};
    std::size_t allocationIndex = 0;
    std::size_t failAllocation = 3;
    MissionFleetParentUiChildSlot nullConstructor = MissionFleetParentUiChildSlot::D8;
    bool constructorReturnsNull = false;
};

void* allocate(std::size_t bytes, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    const std::size_t index = fixture.allocationIndex++;
    fixture.events.push_back({'A', bytes, MissionFleetParentUiChildSlot::D8,
                              nullptr, nullptr, 0, 0, 0, 0, 0});
    return index == fixture.failAllocation ? nullptr : &fixture.memory.at(index);
}

void* construct(MissionFleetParentUiChildSlot slot, void* allocation,
                MissionFleetParentUiChildState* parent,
                std::int32_t x, std::int32_t y, std::int32_t arg3,
                std::int32_t arg4, std::int32_t flags, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.events.push_back({'C', 0, slot, allocation, parent,
                              x, y, arg3, arg4, flags});
    return fixture.constructorReturnsNull && slot == fixture.nullConstructor
        ? nullptr : allocation;
}
}

int main() {
    MissionFleetParentUiChildState parent{};
    parent.origin4 = 200;
    parent.origin8 = 300;
    parent.source64 = 0x11223344;
    parent.source74 = 0x55667788;
    parent.flags24 = 0x1200;
    Fixture fixture;
    missionFleetInitializeParentUiChildren(parent, allocate, construct, &fixture);
    assert(parent.copy70 == 0x11223344 && parent.copy80 == 0x55667788);
    assert(parent.flags24 == 0x120f);
    assert(parent.childD8 == &fixture.memory[0]);
    assert(parent.childDC == &fixture.memory[1]);
    assert(parent.childE0 == &fixture.memory[2]);
    assert(fixture.events.size() == 6);
    assert(fixture.events[0].kind == 'A' && fixture.events[0].bytes == 0x120);
    assert(fixture.events[1].kind == 'C' && fixture.events[1].slot == MissionFleetParentUiChildSlot::D8);
    assert(fixture.events[1].parent == &parent && fixture.events[1].allocation == &fixture.memory[0]);
    assert(fixture.events[1].x == 255 && fixture.events[1].y == 140);
    assert(fixture.events[2].kind == 'A' && fixture.events[2].bytes == 0x18c);
    assert(fixture.events[3].kind == 'C' && fixture.events[3].slot == MissionFleetParentUiChildSlot::DC);
    assert(fixture.events[3].x == 100 && fixture.events[3].y == 100);
    assert(fixture.events[4].kind == 'A' && fixture.events[4].bytes == 0xa4);
    assert(fixture.events[5].kind == 'C' && fixture.events[5].slot == MissionFleetParentUiChildSlot::E0);
    assert(fixture.events[5].x == 0xd2 && fixture.events[5].y == 0xbe);
    for (const Event& event : fixture.events) {
        if (event.kind == 'C') assert(event.arg3 == 0 && event.arg4 == 0 && event.flags == 0x40);
    }

    // Existing children are left intact, but the copies and flags still update.
    fixture.events.clear();
    parent.source64 = 7;
    parent.flags24 = 0x8000;
    missionFleetInitializeParentUiChildren(parent, allocate, construct, &fixture);
    assert(fixture.events.empty());
    assert(parent.copy70 == 7 && parent.flags24 == 0x800f);

    // A failed allocation or constructor does not prevent later child attempts.
    parent.childD8 = parent.childDC = parent.childE0 = nullptr;
    fixture = Fixture{};
    fixture.failAllocation = 0;
    fixture.constructorReturnsNull = true;
    fixture.nullConstructor = MissionFleetParentUiChildSlot::DC;
    missionFleetInitializeParentUiChildren(parent, allocate, construct, &fixture);
    assert(parent.childD8 == nullptr && parent.childDC == nullptr);
    assert(parent.childE0 == &fixture.memory[2]);
    assert(fixture.events.size() == 5);
    assert(fixture.events[0].kind == 'A' && fixture.events[1].kind == 'A');
    assert(fixture.events[2].kind == 'C' && fixture.events[3].kind == 'A');
    assert(fixture.events[4].kind == 'C' && fixture.events[4].slot == MissionFleetParentUiChildSlot::E0);

    // x86 coordinate arithmetic wraps at 32 bits even at the signed boundary.
    parent.childD8 = nullptr;
    parent.childDC = &fixture.memory[1];
    parent.childE0 = &fixture.memory[2];
    parent.origin4 = std::numeric_limits<std::int32_t>::max();
    parent.origin8 = std::numeric_limits<std::int32_t>::min();
    fixture = Fixture{};
    missionFleetInitializeParentUiChildren(parent, allocate, construct, &fixture);
    assert(fixture.events.size() == 2);
    assert(fixture.events[1].x == std::numeric_limits<std::int32_t>::min() + 0x36);
    assert(fixture.events[1].y == std::numeric_limits<std::int32_t>::max() - 0x9f);
}
