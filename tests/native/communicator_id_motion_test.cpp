#include "../../src/client-current/semantic/CommunicatorIdMotion.h"

#include <cassert>
#include <vector>

namespace {
struct Event {
    char kind;
    std::int32_t first = 0;
    std::int32_t second = 0;
    const void* child = nullptr;
};
struct Fixture { std::vector<Event> events; };

void batch(MissionFleetCommunicatorIdEventState&, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'B'});
}
void position(MissionFleetCommunicatorIdEventState&, std::int32_t dx,
              std::int32_t dy, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'P', dx, dy});
}
void height(MissionFleetCommunicatorIdEventState&, std::uint32_t value, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'H', static_cast<std::int32_t>(value)});
}
void width(MissionFleetCommunicatorIdEventState&, std::uint32_t value, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'W', static_cast<std::int32_t>(value)});
}
void refresh(MissionFleetCommunicatorIdEventState&, int argument, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'R', argument});
}
void parentEvent(MissionFleetCommunicatorIdEventState&, std::uint32_t code,
                 int argument, void* context) {
    static_cast<Fixture*>(context)->events.push_back(
        {'E', static_cast<std::int32_t>(code), argument});
}
void childTick(MissionFleetCommunicatorIdMotionChild& child, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'C', 0, 0, &child});
}

const MissionFleetCommunicatorIdMotionHooks hooks{
    batch, position, height, width, refresh, parentEvent, childTick};

void checkCounterGate() {
    MissionFleetCommunicatorIdEventState state{};
    Fixture fixture;
    state.counter106 = 299;
    missionFleetUpdateCommunicatorIdMotion(state, 0x0F, hooks, &fixture);
    assert(state.counter106 == 300 && fixture.events.empty());
    missionFleetUpdateCommunicatorIdMotion(state, 0x0F, hooks, &fixture);
    assert(state.counter106 == 0 && fixture.events.size() == 1);
    assert(fixture.events[0].kind == 'B');
    state.counter106 = 41;
    missionFleetUpdateCommunicatorIdMotion(state, 0x0E, hooks, &fixture);
    assert(state.counter106 == 0 && fixture.events.size() == 1);
    state.counter106 = 0xFFFF;
    missionFleetUpdateCommunicatorIdMotion(state, 0x0F, hooks, &fixture);
    assert(state.counter106 == 0 && fixture.events.size() == 1);
}

void checkMovementAndChildren() {
    MissionFleetCommunicatorIdEventState state{};
    Fixture fixture;
    MissionFleetCommunicatorIdMotionChild first{}, second{};
    first.next38 = &second;
    second.next38 = &first;
    state.children3C = &first;
    state.flags24 = 0x0104;
    state.target50 = 3;
    state.target54 = static_cast<std::uint32_t>(-3);
    state.height2C = 100;
    state.targetHeight5C = 170;
    state.width28 = 100;
    state.target58 = 10;
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.position4 == 1 && state.position8 == static_cast<std::uint32_t>(-1));
    assert(state.height2C == 132 && state.width28 == 68);
    assert(fixture.events.size() == 5);
    assert(fixture.events[0].kind == 'P' && fixture.events[0].first == 1 && fixture.events[0].second == -1);
    assert(fixture.events[1].kind == 'H' && fixture.events[1].first == 132);
    assert(fixture.events[2].kind == 'W' && fixture.events[2].first == 68);
    assert(fixture.events[3].kind == 'C' && fixture.events[3].child == &first);
    assert(fixture.events[4].kind == 'C' && fixture.events[4].child == &second);

    state.position4 = 0;
    state.position8 = 0;
    state.target50 = 7;
    state.target54 = static_cast<std::uint32_t>(-7);
    state.height2C = state.targetHeight5C;
    state.width28 = state.target58;
    fixture.events.clear();
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.position4 == 3 && state.position8 == static_cast<std::uint32_t>(-3));
    assert(fixture.events[0].kind == 'P' && fixture.events[0].first == 3 && fixture.events[0].second == -3);

    state.position4 = 0;
    state.position8 = 0;
    state.target50 = 8;
    state.target54 = static_cast<std::uint32_t>(-8);
    fixture.events.clear();
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.position4 == 2 && state.position8 == static_cast<std::uint32_t>(-2));
    assert(fixture.events[0].kind == 'P' && fixture.events[0].first == 2 && fixture.events[0].second == -2);
}

void checkCompletionModes() {
    MissionFleetCommunicatorIdEventState state{};
    Fixture fixture;
    state.flags24 = 0x0104;
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.flags24 == 0x0206);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'R');
    assert(fixture.events[0].first == 0);

    state.flags24 = 0x0405;
    fixture.events.clear();
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.flags24 == 0x0500 && fixture.events.empty());

    state.flags24 = 0x0204;
    state.transitionC8 = &fixture;
    fixture.events.clear();
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.transitionC8 == nullptr);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'E');
    assert(fixture.events[0].first == 0xEE4A && fixture.events[0].second == 0);

    state.flags24 = 0x0204;
    state.target50 = 100;
    fixture.events.clear();
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.position4 == 0 && fixture.events.empty());

    state.flags24 = 0x0104;
    state.target50 = 0;
    state.height2C = 10;
    state.targetHeight5C = 42;
    state.width28 = 42;
    state.target58 = 10;
    fixture.events.clear();
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.height2C == 42 && state.width28 == 10);
    assert(state.flags24 == 0x0206 && fixture.events.size() == 3);
    assert(fixture.events[0].kind == 'H' && fixture.events[0].first == 42);
    assert(fixture.events[1].kind == 'W' && fixture.events[1].first == 10);
    assert(fixture.events[2].kind == 'R');
}

void checkResetToMotion() {
    MissionFleetCommunicatorIdEventState state{};
    Fixture fixture;
    state.flags24 = 0x0004;
    state.position4 = 47;
    state.position8 = 61;
    state.target50 = 999;
    state.target54 = 999;
    state.width28 = 80;
    state.target58 = 80;
    missionFleetResetCommunicatorIdPosition(state);
    assert(state.target50 == 47 && state.target54 == 61);
    assert(state.target58 == 0 && state.flags24 == 0x0404);
    missionFleetUpdateCommunicatorIdMotion(state, 0, hooks, &fixture);
    assert(state.position4 == 47 && state.position8 == 61);
    assert(state.width28 == 48 && state.flags24 == 0x0404);
    assert(fixture.events.size() == 1 && fixture.events[0].kind == 'W');
}
}

int main() {
    checkCounterGate();
    checkMovementAndChildren();
    checkCompletionModes();
    checkResetToMotion();
}
