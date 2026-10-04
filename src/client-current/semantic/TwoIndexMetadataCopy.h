#pragma once

#include <cstdint>

// Portable field model for FUN_5884D870; these are not x86 binary layouts.
struct MissionFleetMetadataEntry {
    std::uint32_t fields[6];  // Original entry +0x10..+0x24.
};

struct MissionFleetMetadataChild {
    MissionFleetMetadataEntry* selected;  // Original child +0x50.
    std::uint32_t fields[6];               // Original child +0xC..+0x20.
};

struct MissionFleetMetadataReceiver {
    MissionFleetMetadataChild* child;  // Original receiver +0x80.
};

struct MissionFleetMetadataManager {
    std::int32_t count;                  // Original manager +0x164.
    MissionFleetMetadataEntry** table;   // Original manager +0x18C.
};

extern "C" void MissionFleet_SelectAndCopyMetadata(
    MissionFleetMetadataReceiver* receiver,
    MissionFleetMetadataManager* manager,
    std::int32_t selector) noexcept;
