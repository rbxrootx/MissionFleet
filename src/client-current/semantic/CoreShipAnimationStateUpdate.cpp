#include "CoreShipAnimationStateUpdate.h"

#include <cstring>
#include <stdexcept>

namespace {

constexpr std::uint32_t kMinimumValidChildVtable = 0x00010000u;

std::int32_t signedBits(std::uint32_t bits) {
    std::int32_t value;
    static_assert(sizeof(value) == sizeof(bits), "x86 DWORD must be 32 bits");
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

std::int32_t addX86(std::int32_t left, std::int32_t right) {
    return signedBits(static_cast<std::uint32_t>(left) +
                      static_cast<std::uint32_t>(right));
}

std::int32_t subtractX86(std::int32_t left, std::int32_t right) {
    return signedBits(static_cast<std::uint32_t>(left) -
                      static_cast<std::uint32_t>(right));
}

void callSlot8(void* object,
               const MissionFleetCoreShipAnimationStateHooks& hooks) {
    if (object == nullptr) return;
    if (hooks.callSlot8 == nullptr) {
        throw std::logic_error(
            "Core ship-animation callback requires optional object's slot +0x08");
    }
    hooks.callSlot8(object, hooks.userData);
}

void callCoordinateHelper(
    void* object,
    const MissionFleetCoreShipAnimationStateNode& node,
    const MissionFleetCoreShipAnimationStateHooks& hooks) {
    if (hooks.callCoordinateHelper == nullptr) {
        throw std::logic_error(
            "Core ship-animation callback requires the mapped coordinate helper");
    }
    hooks.callCoordinateHelper(
        object, subtractX86(node.positionX04, 400),
        subtractX86(300, node.positionY08), hooks.selector58962090,
        hooks.userData);
}

void notifyStartedTransition(
    MissionFleetCoreShipAnimationStateNode& node,
    const MissionFleetCoreShipAnimationStateHooks& hooks) {
    if (node.optionalObject64 == nullptr) return;
    callSlot8(node.optionalObject64, hooks);
    // The native code reloads +0x64 after the slot call and passes that object
    // as ECX to 0x5856DBC0.
    callCoordinateHelper(node.optionalObject64, node, hooks);
}

void notifyTerminalTransition(
    MissionFleetCoreShipAnimationStateNode& node,
    const MissionFleetCoreShipAnimationStateHooks& hooks) {
    callSlot8(node.optionalObject64, hooks);
    if (node.optionalObject68 == nullptr) return;
    callSlot8(node.optionalObject68, hooks);
    // Position, object pointer, and the global selector are read after the
    // virtual callback in the mapped endpoint branch.
    callCoordinateHelper(node.optionalObject68, node, hooks);
}

bool validChild(const MissionFleetCoreShipAnimationUpdateChild& child) {
    return child.firstWord > kMinimumValidChildVtable;
}

void updateChild(MissionFleetCoreShipAnimationUpdateChild& child) {
    if (child.updateSlot0C == nullptr) {
        throw std::logic_error(
            "Core ship-animation update requires child vtable slot +0x0C");
    }
    child.updateSlot0C(child, child.userData);
}

}  // namespace

void missionFleetResetCoreShipAnimationState(
    MissionFleetCoreShipAnimationStateNode& node) {
    node.frameCounter50 = 0;
    node.direction58 = 1;
    node.transitionState5C = 0;
}

void missionFleetStartCoreShipAnimationTransition(
    MissionFleetCoreShipAnimationStateNode& node,
    std::int32_t directionArgument,
    const MissionFleetCoreShipAnimationStateHooks& hooks) {
    node.transitionState5C = 2;
    node.direction58 = directionArgument == 0 ? -1 : 1;
    notifyStartedTransition(node, hooks);
}

MissionFleetCoreShipAnimationUpdateOutcome
missionFleetUpdateCoreShipAnimationState(
    MissionFleetCoreShipAnimationStateNode& node,
    const MissionFleetCoreShipAnimationStateHooks& hooks) {
    MissionFleetCoreShipAnimationUpdateOutcome outcome{
        node.frameCounter50,
        node.frameCounter50,
        node.transitionState5C,
        node.transitionState5C,
        0,
        false,
        false,
        false,
        false,
        false,
        false,
    };

    // The mapped callback returns immediately when bit 2 is clear, including
    // skipping its circular child-update list.
    if ((node.flags24 & 0x0004u) == 0) {
        outcome.skippedByFlag = true;
        return outcome;
    }

    if (node.transitionState5C == 2) {
        if (node.direction58 < 0) {
            if (node.frameCounter50 == 0) {
                node.transitionState5C = 0;
                outcome.reachedReverseEndpoint = true;
                notifyTerminalTransition(node, hooks);
            } else {
                node.frameCounter50 = addX86(node.frameCounter50,
                                             node.direction58);
                outcome.advancedCounter = true;
            }
        } else if (node.direction58 > 0) {
            // FUN_584C9DE0 returns the attached record's uint16 count or zero.
            const std::uint32_t frameCount = node.animation54 == nullptr
                ? 0u
                : static_cast<std::uint32_t>(node.animation54->frameCount);
            const std::uint32_t lastFrame = frameCount - 1u;
            if (static_cast<std::uint32_t>(node.frameCounter50) == lastFrame) {
                node.transitionState5C = 1;
                outcome.reachedForwardEndpoint = true;
                notifyTerminalTransition(node, hooks);
            } else {
                node.frameCounter50 = addX86(node.frameCounter50,
                                             node.direction58);
                outcome.advancedCounter = true;
            }
        }
        // A zero direction leaves the transition state/counter unchanged.
    }

    if (node.firstChild3C != nullptr &&
        !validChild(*node.firstChild3C)) {
        node.firstChild3C = nullptr;
        outcome.clearedInvalidChildHead = true;
    }

    auto* child = node.firstChild3C;
    while (child != nullptr) {
        if (!validChild(*child)) {
            outcome.stoppedAtInvalidChild = true;
            break;
        }

        // The native accessor reads the next link before the virtual update
        // call. Preserve that order so callback link edits affect later steps
        // only when the saved next object itself is changed.
        auto* const next = child->next3C;
        if (next == node.firstChild3C) {
            updateChild(*child);
            ++outcome.childUpdates;
            break;
        }

        updateChild(*child);
        ++outcome.childUpdates;
        child = next;
    }

    outcome.counterAfter = node.frameCounter50;
    outcome.stateAfter = node.transitionState5C;
    return outcome;
}
