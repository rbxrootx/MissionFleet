#include "../../src/client-current/semantic/ShipMapVisualStateTail.h"

#include <cassert>
#include <cstdint>
#include <vector>

namespace {
struct Event {
    char kind;
    const void* pointer;
    std::uint32_t first;
    std::uint32_t second;
};

struct Fixture {
    std::vector<Event> events;
};

void handler(const void* object, std::uint16_t value, void* context) {
    static_cast<Fixture*>(context)->events.push_back(
        {'H', object, value, 0});
}

void tick(MissionFleetShipMapVisualStateTail&, std::uint32_t selector,
          std::uint32_t argument, void* context) {
    static_cast<Fixture*>(context)->events.push_back(
        {'T', nullptr, selector, argument});
}

void reset(void* child, std::uint32_t argument, void* context) {
    static_cast<Fixture*>(context)->events.push_back(
        {'R', child, argument, 0});
}

void finish(void* manager, MissionFleetShipMapVisualStateTail&,
            std::uint32_t first, std::uint32_t second, void* context) {
    static_cast<Fixture*>(context)->events.push_back(
        {'F', manager, first, second});
}

const MissionFleetShipMapVisualStateTailHooks hooks{
    handler, tick, reset, finish};

void checkHandlerSetupPhase() {
    int objects[4]{};
    const void* handlers[] = {&objects[0], &objects[1], &objects[2], &objects[3]};
    MissionFleetShipMapVisualStateTail state{};
    state.state60B0 = 0x401000AAu;
    state.parentField9C = 77;
    state.selectionFlag34 = 1;
    state.inputWord350 = 0xBEEF;
    state.handlerIndex354 = 3;
    state.handlerObjects354 = handlers;
    state.handlerObjectCount = 4;

    Fixture fixture;
    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.parentField9C == 0 && state.selectionFlag34 == 0);
    assert(state.state60B0 == 0x402000AAu);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'H');
    assert(fixture.events[0].pointer == handlers[3]);
    assert(fixture.events[0].first == 0xBEEF);
}

void checkFrameTickSelectionAndWrap() {
    MissionFleetShipMapVisualStateTail state{};
    state.state60B0 = 0x40200000u;
    state.frameCounter60D8 = 0xFFFFFFFFu;
    state.frameCounter1470 = 2;
    state.frameCounter178 = 4;
    state.controlMode4 = 0xE9;
    state.word164 = 3;
    Fixture fixture;

    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.frameCounter60D8 == 0 && state.frameCounter1470 == 3 &&
           state.frameCounter178 == 5);
    assert(state.state60B0 == 0x40200000u);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'T');
    assert(fixture.events[0].first == 0x4F && fixture.events[0].second == 0x400000);

    state.controlMode4 = 9;
    state.word164 = 0;
    fixture.events.clear();
    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(fixture.events.size() == 1 && fixture.events[0].first == 0x31);
}

void checkFinishAndTerminalCondition() {
    int child{};
    int manager{};
    MissionFleetShipMapVisualStateTail state{};
    state.state60B0 = 0x40400055u;
    state.child60D8 = &child;
    state.globalManager58A2459C = &manager;
    Fixture fixture;

    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.state60B0 == 0x40FF0055u);
    assert(fixture.events.size() == 2);
    assert(fixture.events[0].kind == 'R' && fixture.events[0].pointer == &child &&
           fixture.events[0].first == 0);
    assert(fixture.events[1].kind == 'F' && fixture.events[1].pointer == &manager &&
           fixture.events[1].first == 1 && fixture.events[1].second == 1);

    state.state60B0 = 0x40FF0000u;
    state.globalDword21C34 = 0;
    state.globalWord105F0 = 7;
    state.value664C = 9999;
    state.state6090 = 42;
    state.value6648 = 55;
    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.state6090 == 0x60000u && state.value6648 == 0);

    state.value664C = 10000;
    state.state6090 = 42;
    state.value6648 = 55;
    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.state6090 == 42 && state.value6648 == 55);

    state.value664C = 9999;
    state.globalDword21C34 = 1;
    state.state6090 = 42;
    state.value6648 = 55;
    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.state6090 == 42 && state.value6648 == 55);

    state.globalDword21C34 = 0;
    state.globalWord105F0 = 6;
    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.state6090 == 42 && state.value6648 == 55);
}

void checkUnrecognizedPhaseDoesNothing() {
    MissionFleetShipMapVisualStateTail state{};
    state.state60B0 = 0x40700000u;
    state.parentField9C = 1;
    state.selectionFlag34 = 2;
    state.frameCounter60D8 = 3;
    Fixture fixture;

    missionFleetUpdateShipMapVisualStateTail(state, hooks, &fixture);
    assert(state.state60B0 == 0x40700000u);
    assert(state.parentField9C == 1 && state.selectionFlag34 == 2);
    assert(state.frameCounter60D8 == 3 && fixture.events.empty());
}
}

int main() {
    checkHandlerSetupPhase();
    checkFrameTickSelectionAndWrap();
    checkFinishAndTerminalCondition();
    checkUnrecognizedPhaseDoesNothing();
}
