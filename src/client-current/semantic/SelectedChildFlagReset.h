#pragma once

#include <cstdint>

// Portable field model for FUN_58782790. This is not the original x86 layout.
struct MissionFleetFlagChild {
    std::uint16_t flags;
};

struct MissionFleetSelectedObject {
    std::uint16_t flags;                // Original receiver +0x24.
    std::uint32_t field50;             // Original receiver +0x50.
    std::uint32_t fieldE8;             // Original receiver +0xE8.
    MissionFleetFlagChild* first[3];   // Original +0xBC, +0xC0, +0xC4.
    MissionFleetFlagChild* second[2];  // Original +0xC8, +0xCC.
    MissionFleetFlagChild* final;      // Original +0xD0; required non-null.
};

extern "C" void MissionFleet_ResetSelectedChildFlags(
    MissionFleetSelectedObject* receiver) noexcept;
