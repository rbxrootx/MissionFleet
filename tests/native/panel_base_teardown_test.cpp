#include "../../src/client-current/semantic/PanelBaseTeardown.h"

#include <cassert>
#include <iostream>
#include <vector>

namespace {

struct Recorder {
    MissionFleetPanelBaseReceiver* receiver;
    void* expectedChild;
    std::vector<char> calls;
};

void releaseChild(void* child, int one, void* context) noexcept {
    auto& recorder = *static_cast<Recorder*>(context);
    assert(one == 1 && child == recorder.expectedChild);
    assert(recorder.receiver->vtable == 0x5899A090u);
    assert(recorder.receiver->child == child);  // Clear happens after callback.
    recorder.calls.push_back('C');
}

void baseCleanup(MissionFleetPanelBaseReceiver* receiver,
                 void* context) noexcept {
    auto& recorder = *static_cast<Recorder*>(context);
    assert(receiver == recorder.receiver);
    assert(receiver->vtable == 0x5899A090u);
    recorder.calls.push_back('B');
    receiver->vtable = 0x5898C500u;  // Observed in the matched base callee.
}

void check(std::int32_t sentinel, bool hasChild,
           bool shouldRelease) {
    int childObject = 7;
    MissionFleetPanelBaseReceiver receiver{
        0, hasChild ? static_cast<void*>(&childObject) : nullptr, sentinel};
    Recorder recorder{&receiver, &childObject, {}};
    MissionFleet_TeardownPanelBase(
        &receiver, {releaseChild, baseCleanup, &recorder});
    if (shouldRelease) {
        assert((recorder.calls == std::vector<char>{'C', 'B'}));
        assert(receiver.child == nullptr);
    } else {
        assert((recorder.calls == std::vector<char>{'B'}));
        assert(receiver.child == (hasChild ? static_cast<void*>(&childObject) : nullptr));
    }
    assert(receiver.vtable == 0x5898C500u);
}

}  // namespace

int main() {
    check(0, true, true);
    check(-1, true, false);
    check(0, false, false);
    std::cout << "panel base teardown: passed\n";
}
