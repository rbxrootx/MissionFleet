#pragma once

#include <cstddef>
#include <cstdint>

// Normal-path model of installed Main.dll FUN_5881DE10. Field suffixes are
// offsets in the original 32-bit receiver, not offsets in this portable struct.
struct MissionFleetParentUiChildState {
    std::int32_t origin4 = 0;
    std::int32_t origin8 = 0;
    std::uint32_t source64 = 0;
    std::uint32_t source74 = 0;
    std::uint32_t copy70 = 0;
    std::uint32_t copy80 = 0;
    std::uint16_t flags24 = 0;
    void* childD8 = nullptr;
    void* childDC = nullptr;
    void* childE0 = nullptr;
};

enum class MissionFleetParentUiChildSlot { D8, DC, E0 };
using MissionFleetParentUiAllocate = void* (*)(std::size_t bytes, void* context);
using MissionFleetParentUiConstruct = void* (*)(
    MissionFleetParentUiChildSlot slot, void* allocation,
    MissionFleetParentUiChildState* parent, std::int32_t x, std::int32_t y,
    std::int32_t arg3, std::int32_t arg4, std::int32_t flags, void* context);

void missionFleetInitializeParentUiChildren(
    MissionFleetParentUiChildState& parent,
    MissionFleetParentUiAllocate allocate,
    MissionFleetParentUiConstruct construct,
    void* context);
