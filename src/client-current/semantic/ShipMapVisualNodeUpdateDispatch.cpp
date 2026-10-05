#include "ShipMapVisualNodeUpdateDispatch.h"

#include <stdexcept>

MissionFleetShipMapVisualNodeUpdateDispatchResult
missionFleetDispatchShipMapVisualNodeUpdates(
    MissionFleetShipMapVisualNode& receiver,
    MissionFleetShipMapVisualChildUpdate updateChild, void* context) {
    if ((receiver.flags24 & 0x0004u) == 0) {
        return MissionFleetShipMapVisualNodeUpdateDispatchResult::IgnoredFlag;
    }

    auto* child = receiver.firstChild3C;
    if (child == nullptr) {
        return MissionFleetShipMapVisualNodeUpdateDispatchResult::Empty;
    }

    while (child != nullptr) {
        // FUN_58903040 loads +0x38 before calling the child's virtual +0x0C.
        auto* const next = child->next38;
        const bool lastChild = next == receiver.firstChild3C;
        if (updateChild == nullptr) {
            throw std::logic_error(
                "FUN_58903040 requires a child vtable +0x0C hook");
        }
        updateChild(*child, context);

        // The mapped loop supports a circular list and also returns after
        // updating a node whose +0x38 link is null. It compares against the
        // owner's current head before the callback, so callbacks may mutate
        // the list without changing this iteration's continuation decision.
        if (lastChild || next == nullptr) {
            return MissionFleetShipMapVisualNodeUpdateDispatchResult::Dispatched;
        }
        child = next;
    }

    return MissionFleetShipMapVisualNodeUpdateDispatchResult::Dispatched;
}
