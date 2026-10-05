#include "ShipMapVisualSecondaryDestruction.h"

#include <stdexcept>

namespace {
void unlinkCircular(MissionFleetShipMapVisualNode& node) {
    auto* const owner = node.owner30;
    if (owner == nullptr) {
        return;
    }

    auto* const next = node.next38;
    if (next == &node) {
        owner->circularHead3C = nullptr;
    } else {
        auto* const previous = node.previous34;
        previous->next38 = next;
        next->previous34 = previous;
        if (owner->circularHead3C == &node) {
            owner->circularHead3C = next;
        }
    }
    node.next38 = &node;
    node.previous34 = &node;
    node.owner30 = nullptr;
}

void unlinkLinear(MissionFleetShipMapVisualNode& node) {
    auto* const owner = node.owner40;
    if (owner == nullptr) {
        return;
    }

    auto* const next = node.next48;
    auto* const previous = node.previous44;
    if (next == nullptr) {
        if (previous == nullptr) {
            owner->linearHead4C = nullptr;
        } else {
            previous->next48 = nullptr;
        }
    } else {
        next->previous44 = previous;
        if (previous == nullptr) {
            owner->linearHead4C = next;
        } else {
            previous->next48 = next;
        }
    }
    node.owner40 = nullptr;
    node.previous44 = nullptr;
    node.next48 = nullptr;
}

void unlinkChildren(MissionFleetShipMapVisualNode& receiver) {
    while (receiver.firstChild3C != nullptr) {
        auto* const child = receiver.firstChild3C;
        auto* const circularOwner = child->owner30;
        if (circularOwner != nullptr) {
            unlinkCircular(*child);
            receiver.firstChild3C = circularOwner->circularHead3C;
        }

        auto* const linearOwner = child->owner40;
        if (linearOwner != nullptr) {
            unlinkLinear(*child);
            receiver.firstChild4C = linearOwner->linearHead4C;
        }

        // With a malformed or non-owning child head, the mapped loop would
        // revisit the same node forever. Fail loudly in the semantic harness.
        if (receiver.firstChild3C == child) {
            throw std::logic_error(
                "FUN_58902D60 child owner view did not advance its +0x3C head");
        }
    }
}
}

void missionFleetDestroyShipMapVisualSecondary(
    MissionFleetShipMapVisualNode& receiver, std::uint32_t deletingFlag,
    const MissionFleetShipMapVisualSecondaryDestructionHooks& hooks,
    void* context) {
    // The derived deleting destructor installs its own vtable, delegates
    // through FUN_589038A0, then FUN_58902D60 changes it to the root base.
    receiver.vtable00 = 0x58996B40u;
    receiver.vtable00 = 0x5898CA74u;
    receiver.vtable00 = 0x589A24E4u;
    unlinkChildren(receiver);
    unlinkCircular(receiver);
    unlinkLinear(receiver);

    if ((deletingFlag & 1u) != 0) {
        if (hooks.releaseThunk == nullptr) {
            throw std::logic_error(
                "FUN_58788F60 requires the FUN_5897CC42 release-thunk hook");
        }
        hooks.releaseThunk(receiver, context);
    }
}
