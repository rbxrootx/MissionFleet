#include "PanelBaseTeardown.h"

extern "C" void MissionFleet_TeardownPanelBase(
    MissionFleetPanelBaseReceiver* receiver,
    MissionFleetPanelBaseCallbacks callbacks) noexcept {
    receiver->vtable = 0x5899A090u;
    if (receiver->sentinel != -1 && receiver->child != nullptr) {
        callbacks.releaseChild(receiver->child, 1, callbacks.context);
        receiver->child = nullptr;
    }
    callbacks.baseCleanup(receiver, callbacks.context);
}
