#include "SelectedChildFlagReset.h"

extern "C" void MissionFleet_ResetSelectedChildFlags(
    MissionFleetSelectedObject* receiver) noexcept {
    receiver->flags &= static_cast<std::uint16_t>(~0x0004u);
    receiver->flags &= static_cast<std::uint16_t>(~0x0001u);
    receiver->field50 = 0;
    receiver->fieldE8 = 0;

    for (MissionFleetFlagChild* child : receiver->first) {
        if (child != nullptr) child->flags &= static_cast<std::uint16_t>(~0x0001u);
    }
    for (MissionFleetFlagChild* child : receiver->second) {
        if (child != nullptr) child->flags &= static_cast<std::uint16_t>(~0x0001u);
    }
    // The original function dereferences +0xD0 unconditionally.
    receiver->final->flags &= static_cast<std::uint16_t>(~0x0001u);
}
