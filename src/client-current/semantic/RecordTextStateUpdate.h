#pragma once

#include <cstdint>

// Portable normal-path model of Main.dll FUN_58847a50. These fields describe
// observed operations, not the original receiver's full binary layout.
struct MissionFleetRecordTextState {
    std::uint16_t flags; // original receiver +0x24
    std::uint8_t pending; // original receiver +0xA0
    void* textChild; // original receiver +0x94
};

using MissionFleetCopyRecordText =
    void (*)(void* child, const unsigned char* source, void* context) noexcept;
using MissionFleetRecordTextReady =
    std::uint32_t (*)(MissionFleetRecordTextState*, void* context) noexcept;

std::uint32_t missionFleetUpdateRecordTextState(
    MissionFleetRecordTextState& receiver, std::uint32_t first,
    std::uint32_t second, const unsigned char* record,
    MissionFleetCopyRecordText copy, MissionFleetRecordTextReady ready,
    void* context) noexcept;
