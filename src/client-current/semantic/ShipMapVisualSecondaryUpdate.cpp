#include "ShipMapVisualSecondaryUpdate.h"

#include <cstring>
#include <limits>
#include <stdexcept>

namespace {
constexpr std::uint16_t kPropagateCoordinateDelta = 0x2000u;
constexpr std::uint16_t kUpdateEnabled = 0x0004u;

std::int32_t signedDword(std::uint32_t bits) {
    std::int32_t value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

void addX(MissionFleetShipMapVisualNode& receiver, std::uint32_t delta) {
    receiver.value04 += delta;
    auto* const head = receiver.firstChild3C;
    auto* child = head;
    while (child != nullptr) {
        if ((child->flags24 & kPropagateCoordinateDelta) != 0) {
            addX(*child, delta);
        }
        child = child->next38;
        if (child == head) {
            break;
        }
    }
}

void addY(MissionFleetShipMapVisualNode& receiver, std::uint32_t delta) {
    receiver.value08 += delta;
    auto* const head = receiver.firstChild3C;
    auto* child = head;
    while (child != nullptr) {
        if ((child->flags24 & kPropagateCoordinateDelta) != 0) {
            addY(*child, delta);
        }
        child = child->next38;
        if (child == head) {
            break;
        }
    }
}

std::int32_t divideSignedX86(std::uint32_t dividendBits,
                             std::uint32_t divisorBits) {
    const std::int32_t dividend = signedDword(dividendBits);
    const std::int32_t divisor = signedDword(divisorBits);
    if (divisor == 0 ||
        (dividend == std::numeric_limits<std::int32_t>::min() &&
         divisor == -1)) {
        throw std::domain_error("FUN_58788F90 executes a faulting x86 IDIV");
    }
    return dividend / divisor;
}

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

void updateCircularChildren(
    MissionFleetShipMapVisualNode& receiver,
    const MissionFleetShipMapVisualSecondaryUpdateHooks& hooks,
    void* context) {
    auto* const head = receiver.firstChild3C;
    auto* child = head;
    while (child != nullptr) {
        // FUN_58903040 captures the next link before its virtual call.
        auto* const next = child->next38;
        if (hooks.updateChild == nullptr) {
            throw std::logic_error(
                "FUN_58788F90 requires a child vtable +0x0C hook");
        }
        hooks.updateChild(*child, context);
        if (next == head || next == nullptr) {
            return;
        }
        child = next;
    }
}
}

MissionFleetShipMapVisualSecondaryUpdateResult
missionFleetUpdateShipMapVisualSecondary(
    MissionFleetShipMapVisualNode& receiver,
    const MissionFleetShipMapVisualSecondaryUpdateHooks& hooks,
    void* context) {
    if ((receiver.flags24 & kUpdateEnabled) == 0) {
        return MissionFleetShipMapVisualSecondaryUpdateResult::IgnoredFlag;
    }

    if (receiver.record54 != nullptr) {
        std::int32_t frameInterval = 0;
        std::uint16_t frameCount = 0;
        std::memcpy(&frameInterval, receiver.record54 + 0x08,
                    sizeof(frameInterval));
        std::memcpy(&frameCount, receiver.record54 + 0x0C,
                    sizeof(frameCount));
        const std::uint32_t durationBits =
            static_cast<std::uint32_t>(frameCount) *
                static_cast<std::uint32_t>(frameInterval) -
            1u;
        if (signedDword(receiver.counter50) >= signedDword(durationBits)) {
            // The original unlinks both memberships before virtual slot +0
            // runs its deleting-destructor path.
            unlinkCircular(receiver);
            unlinkLinear(receiver);
            if (hooks.deleteSelf == nullptr) {
                throw std::logic_error(
                    "FUN_58788F90 requires a deleting-destructor hook");
            }
            hooks.deleteSelf(receiver, 1u, context);
            return MissionFleetShipMapVisualSecondaryUpdateResult::Removed;
        }
    }

    receiver.value58 += 1u;
    if (divideSignedX86(receiver.value58, receiver.value5C) != 0) {
        receiver.counter50 += 1u;
        receiver.value58 = 0;
        if (hooks.randValue == nullptr) {
            throw std::logic_error("FUN_58788F90 requires its rand() hook");
        }
        const std::int32_t drift = 1 - hooks.randValue(context) % 3;
        addX(receiver, static_cast<std::uint32_t>(drift));
    }

    addY(receiver, static_cast<std::uint32_t>(receiver.value60));
    updateCircularChildren(receiver, hooks, context);
    return MissionFleetShipMapVisualSecondaryUpdateResult::Updated;
}
