#include "../../src/client-current/semantic/ShipMapVisualSecondaryDestruction.h"

#include <cassert>
#include <vector>

namespace {
struct Fixture {
    std::vector<char> order;
    MissionFleetShipMapVisualNode* expectedReceiver = nullptr;
    MissionFleetShipMapVisualNodeListOwner* externalOwner = nullptr;
    MissionFleetShipMapVisualNodeListOwner* childOwner = nullptr;
};

void releaseThunk(MissionFleetShipMapVisualNode& receiver, void* context) {
    auto& fixture = *static_cast<Fixture*>(context);
    assert(&receiver == fixture.expectedReceiver);
    assert(receiver.vtable00 == 0x589A24E4u);
    assert(receiver.firstChild3C == nullptr && receiver.firstChild4C == nullptr);
    assert(receiver.owner30 == nullptr && receiver.owner40 == nullptr);
    assert(fixture.externalOwner->circularHead3C == nullptr);
    assert(fixture.externalOwner->linearHead4C == nullptr);
    assert(fixture.childOwner->circularHead3C == nullptr);
    assert(fixture.childOwner->linearHead4C == nullptr);
    fixture.order.push_back('F');
}

void checkDerivedDestructorUnlinksChildrenAndReceiverBeforeRelease() {
    MissionFleetShipMapVisualNode receiver{};
    MissionFleetShipMapVisualNode childA{};
    MissionFleetShipMapVisualNode childB{};
    MissionFleetShipMapVisualNodeListOwner externalOwner{};
    MissionFleetShipMapVisualNodeListOwner childOwner{};

    // Receiver is the sole member of its external owner lists.
    externalOwner.circularHead3C = &receiver;
    externalOwner.linearHead4C = &receiver;
    receiver.owner30 = &externalOwner;
    receiver.previous34 = &receiver;
    receiver.next38 = &receiver;
    receiver.owner40 = &externalOwner;

    // Its two children share an owner view matching receiver +0x3C/+0x4C.
    receiver.firstChild3C = &childA;
    receiver.firstChild4C = &childA;
    childOwner.circularHead3C = &childA;
    childOwner.linearHead4C = &childA;
    childA.owner30 = &childOwner;
    childA.previous34 = &childB;
    childA.next38 = &childB;
    childA.owner40 = &childOwner;
    childA.next48 = &childB;
    childB.owner30 = &childOwner;
    childB.previous34 = &childA;
    childB.next38 = &childA;
    childB.owner40 = &childOwner;
    childB.previous44 = &childA;

    Fixture fixture{};
    fixture.expectedReceiver = &receiver;
    fixture.externalOwner = &externalOwner;
    fixture.childOwner = &childOwner;
    const MissionFleetShipMapVisualSecondaryDestructionHooks hooks{
        releaseThunk};
    missionFleetDestroyShipMapVisualSecondary(receiver, 1u, hooks, &fixture);

    assert((fixture.order == std::vector<char>{'F'}));
    assert(childA.owner30 == nullptr && childA.owner40 == nullptr);
    assert(childA.previous34 == &childA && childA.next38 == &childA);
    assert(childA.previous44 == nullptr && childA.next48 == nullptr);
    assert(childB.owner30 == nullptr && childB.owner40 == nullptr);
    assert(childB.previous34 == &childB && childB.next38 == &childB);
    assert(childB.previous44 == nullptr && childB.next48 == nullptr);
}

void checkNonDeletingDestructorSkipsReleaseThunk() {
    MissionFleetShipMapVisualNode receiver{};
    const MissionFleetShipMapVisualSecondaryDestructionHooks noRelease{};
    missionFleetDestroyShipMapVisualSecondary(receiver, 0u, noRelease, nullptr);
    assert(receiver.vtable00 == 0x589A24E4u);
}
}

int main() {
    checkDerivedDestructorUnlinksChildrenAndReceiverBeforeRelease();
    checkNonDeletingDestructorSkipsReleaseThunk();
}
