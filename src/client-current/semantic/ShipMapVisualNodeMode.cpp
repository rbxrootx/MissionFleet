#include "ShipMapVisualNodeMode.h"

namespace {
void applyMode(MissionFleetShipMapVisualNode& node, std::uint32_t mode) {
    node.mode2C = mode;

    auto* const head = node.firstChild3C;
    auto* child = head;
    while (child != nullptr) {
        if ((child->flags24 & 0x8000u) != 0) {
            applyMode(*child, mode);
        }

        child = child->next38;
        if (child == head) {
            break;
        }
    }
}
}

void missionFleetSetShipMapVisualNodeMode(
    MissionFleetShipMapVisualNode& receiver, std::uint32_t mode) {
    applyMode(receiver, mode);
}
