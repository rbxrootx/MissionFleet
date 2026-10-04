#include "../../src/client-current/semantic/CommunicatorIdEvent.h"

#include <cassert>
#include <vector>

namespace {
struct Event {
    char kind;
    const void* first;
    const void* second;
    int value;
};
struct Fixture { std::vector<Event> events; };

void invokeNodeAction(void* action, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'N', action, nullptr, 0});
}
void selfVirtual08(MissionFleetCommunicatorIdEventState* state, void* context) {
    missionFleetResetCommunicatorIdPosition(*state);
    static_cast<Fixture*>(context)->events.push_back({'S', state, nullptr, 0});
}
void childVirtual04(void* child, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'C', child, nullptr, 0});
}
void globalDispatch(void* receiver, const void* resource, int argument, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'G', receiver, resource, argument});
}
void refresh(MissionFleetCommunicatorIdEventState* state, int toggle, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'F', state, nullptr, toggle});
}
void openResource(MissionFleetCommunicatorIdEventState*, const void* first,
                  const void* second, void* context) {
    static_cast<Fixture*>(context)->events.push_back({'O', first, second, 0});
}
}

int main() {
    int controls[9]{}, child{}, receiver{}, resources[3]{}, actions[2]{}, unknown{};
    MissionFleetCommunicatorIdEventState state{};
    state.controlD4 = &controls[0];
    state.controlD8 = &controls[1];
    state.controlDC = &controls[2];
    state.controlCC = &controls[3];
    state.controlD0 = &controls[4];
    state.controlE8 = &controls[5];
    state.controlEC = &controls[6];
    state.control118 = &controls[7];
    state.control11C = &controls[8];
    state.child114 = &child;
    state.globalReceiver588 = &receiver;
    state.resource450 = &resources[0];
    state.resource4A0 = &resources[1];
    state.resource4A4 = &resources[2];
    state.position4 = 0x12345678u;
    state.position8 = 0x87654321u;
    state.target50 = 9;
    state.target54 = 10;
    state.target58 = 0xC8;
    state.flags24 = 0x1805;
    Fixture fixture;
    const MissionFleetCommunicatorIdEventHooks hooks{
        invokeNodeAction, selfVirtual08, childVirtual04, globalDispatch,
        refresh, openResource};
    const auto fire = [&](void* target, unsigned type = 2) {
        const auto result = missionFleetDispatchCommunicatorIdEvent(
            state, target, type, 0xdeadbeef, hooks, &fixture);
        assert(result == 0);
    };

    fire(state.controlD4, 1);
    fire(&unknown);
    assert(fixture.events.empty());
    assert(state.target50 == 9 && state.target54 == 10);
    assert(state.target58 == 0xC8 && state.flags24 == 0x1805);

    MissionFleetCommunicatorIdNode first{}, second{}, third{};
    first.next54 = &second;
    first.actionA4 = &actions[0];
    third.actionA4 = &actions[1];
    state.list6C = &first;
    state.list64 = &third;
    fire(state.controlD4);
    assert(fixture.events.size() == 3);
    assert(fixture.events[0].kind == 'N' && fixture.events[0].first == &actions[0]);
    assert(fixture.events[1].kind == 'N' && fixture.events[1].first == &actions[1]);
    assert(fixture.events[2].kind == 'S' && fixture.events[2].first == &state);
    assert(state.target50 == state.position4 && state.target54 == state.position8);
    assert(state.target58 == 0 && state.flags24 == 0x0405);

    fixture.events.clear();
    fire(state.controlD8);
    fire(state.controlDC);
    assert(fixture.events.size() == 2);
    assert(fixture.events[0].kind == 'C' && fixture.events[0].first == &child);
    assert(fixture.events[1].kind == 'G' && fixture.events[1].first == &receiver);
    assert(fixture.events[1].second == &resources[0] && fixture.events[1].value == 0);

    fixture.events.clear();
    state.modeF6 = 0;
    fire(state.controlCC);
    fire(state.controlD0);
    state.modeF6 = 1;
    fire(state.controlCC);
    fire(state.controlD0);
    assert(fixture.events.size() == 2);
    assert(fixture.events[0].kind == 'F' && fixture.events[0].value == 1);
    assert(fixture.events[1].kind == 'F' && fixture.events[1].value == 1);

    fixture.events.clear();
    fire(state.controlE8);
    fire(state.controlEC);
    assert(fixture.events.size() == 2);
    assert(fixture.events[0].kind == 'O' && fixture.events[0].first == &resources[1]);
    assert(fixture.events[0].second == nullptr);
    assert(fixture.events[1].kind == 'O' && fixture.events[1].first == &resources[1]);
    assert(fixture.events[1].second == &resources[2]);

    MissionFleetCommunicatorIdNode left{}, middle{}, right{};
    middle.previous50 = &left;
    middle.next54 = &right;
    left.next54 = &middle;
    right.previous50 = &middle;
    state.modeF6 = 0;
    state.selected100 = &middle;
    state.indexFA = 1;
    state.limitF2 = 8;
    fixture.events.clear();
    fire(state.control118);
    assert(state.selected100 == &left && state.indexFA == 0);
    fire(state.control118);
    assert(state.selected100 == &left && state.indexFA == 0);
    fire(state.control11C);
    assert(state.selected100 == &middle && state.indexFA == 1);
    assert(fixture.events.size() == 2);
    assert(fixture.events[0].kind == 'F' && fixture.events[0].value == 0);
    assert(fixture.events[1].kind == 'F' && fixture.events[1].value == 0);
    state.indexFA = 3; // limitF2 - 5: forward is blocked at the boundary.
    fire(state.control11C);
    assert(state.selected100 == &middle && state.indexFA == 3);
    assert(fixture.events.size() == 2);

    state.modeF6 = 1;
    state.selectedFC = &middle;
    state.indexF8 = 2;
    state.limitF0 = 9;
    fire(state.control11C);
    assert(state.selectedFC == &right && state.indexF8 == 3);
    assert(fixture.events.size() == 3);
    assert(fixture.events[2].kind == 'F' && fixture.events[2].value == 0);
    state.modeF6 = 2;
    fire(state.control118);
    assert(state.selectedFC == &right && fixture.events.size() == 3);
}
