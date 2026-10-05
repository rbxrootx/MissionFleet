#include "ShipMapRouteDescendantMovement.h"

namespace {
constexpr std::uint16_t kPropagatePositionDelta = 0x2000u;

void applyDelta(MissionFleetShipMapRouteDescendant& receiver,
                std::uint32_t deltaX, std::uint32_t deltaY) {
    // The original uses DWORD ADD instructions, so unsigned addition preserves
    // the observed modulo-2^32 coordinate behavior without signed UB.
    receiver.position4 += deltaX;
    receiver.position8 += deltaY;

    auto* const head = receiver.firstChild3C;
    if (head == nullptr) {
        return;
    }

    auto* child = head;
    do {
        if ((child->flags24 & kPropagatePositionDelta) != 0) {
            applyDelta(*child, deltaX, deltaY);
        }

        child = child->next38;
        // The mapped loop handles both a circular list (back to head) and a
        // null-terminated list. It does not impose an independent node limit.
    } while (child != nullptr && child != head);
}
}

void missionFleetApplyShipMapRouteDescendantDelta(
    MissionFleetShipMapRouteDescendant& receiver, std::uint32_t deltaX,
    std::uint32_t deltaY) {
    applyDelta(receiver, deltaX, deltaY);
}
