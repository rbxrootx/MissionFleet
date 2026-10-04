#include "../../src/client-current/semantic/CommunicatorIdPairGuard.h"

#include <cassert>
#include <cstdint>
#include <vector>

namespace {
struct Call {
    char kind;
    void* ui;
    std::uint32_t id, first, second, third;
};
struct Fixture {
    int uiToken = 0;
    std::vector<Call> calls;
};

void* getMessageUi(void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.calls.push_back({'G', nullptr, 0, 0, 0, 0});
    return &fixture.uiToken;
}

std::uint32_t dispatchMessage(void* ui, std::uint32_t id,
                              std::uint32_t first, std::uint32_t second,
                              std::uint32_t third, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    fixture.calls.push_back({'D', ui, id, first, second, third});
    return 0x12345678;
}
}

int main() {
    int firstKey = 0, secondKey = 0, otherKey = 0;
    MissionFleetCommunicatorIdPairReceiver receiver{};
    Fixture fixture;
    const MissionFleetCommunicatorIdPairHooks hooks{getMessageUi, dispatchMessage};
    const auto guard = [&](const void* first, const void* second) {
        return missionFleetGuardCommunicatorIdPair(
            receiver, first, second, hooks, &fixture);
    };

    // Empty list opens the original message path and returns its result.
    assert(guard(&firstKey, &secondKey) == 0x12345678);
    assert(fixture.calls.size() == 2);
    assert(fixture.calls[0].kind == 'G');
    assert(fixture.calls[1].kind == 'D' && fixture.calls[1].ui == &fixture.uiToken);
    assert(fixture.calls[1].id == 0x208 && fixture.calls[1].first == 0);
    assert(fixture.calls[1].second == 0 && fixture.calls[1].third == 0);

    MissionFleetCommunicatorIdPairNode inactive{}, wrongFirst{}, wrongSecond{}, active{};
    inactive.first78 = &firstKey;
    inactive.second7C = &secondKey;
    inactive.flag9E = 0;
    inactive.next54 = &wrongFirst;
    wrongFirst.first78 = &otherKey;
    wrongFirst.second7C = &secondKey;
    wrongFirst.flag9E = 1;
    wrongFirst.next54 = &wrongSecond;
    wrongSecond.first78 = &firstKey;
    wrongSecond.second7C = &otherKey;
    wrongSecond.flag9E = 1;
    wrongSecond.next54 = &active;
    active.first78 = &firstKey;
    active.second7C = &secondKey;
    active.flag9E = 2;
    receiver.head64 = &inactive;

    fixture.calls.clear();
    assert(guard(&firstKey, &secondKey) == 0);
    assert(fixture.calls.empty());

    // Matching fields without an active flag do not suppress the message.
    inactive.next54 = nullptr;
    assert(guard(&firstKey, &secondKey) == 0x12345678);
    assert(fixture.calls.size() == 2);

    // Either mismatched field also leaves the message path active.
    receiver.head64 = &wrongFirst;
    wrongFirst.next54 = &wrongSecond;
    wrongSecond.next54 = nullptr;
    fixture.calls.clear();
    assert(guard(&firstKey, &secondKey) == 0x12345678);
    assert(fixture.calls.size() == 2);
}
