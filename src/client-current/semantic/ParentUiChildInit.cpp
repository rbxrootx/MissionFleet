#include "ParentUiChildInit.h"

#include <cstring>

namespace {
std::int32_t addWrap32(std::int32_t value, std::uint32_t delta) {
    const std::uint32_t bits = static_cast<std::uint32_t>(value) + delta;
    std::int32_t result;
    std::memcpy(&result, &bits, sizeof(result));
    return result;
}

void ensureChild(MissionFleetParentUiChildState& parent, void*& field,
                 MissionFleetParentUiChildSlot slot, std::size_t bytes,
                 std::int32_t x, std::int32_t y,
                 MissionFleetParentUiAllocate allocate,
                 MissionFleetParentUiConstruct construct, void* context) {
    void* allocation = allocate(bytes, context);
    field = allocation == nullptr ? nullptr
        : construct(slot, allocation, &parent, x, y, 0, 0, 0x40, context);
}
}

void missionFleetInitializeParentUiChildren(
    MissionFleetParentUiChildState& parent,
    MissionFleetParentUiAllocate allocate,
    MissionFleetParentUiConstruct construct,
    void* context) {
    parent.copy70 = parent.source64;
    parent.copy80 = parent.source74;
    if (parent.childD8 == nullptr) {
        ensureChild(parent, parent.childD8, MissionFleetParentUiChildSlot::D8,
                    0x120, addWrap32(parent.origin4, 0x37),
                    addWrap32(parent.origin8, static_cast<std::uint32_t>(-0xa0)),
                    allocate, construct, context);
    }
    if (parent.childDC == nullptr) {
        ensureChild(parent, parent.childDC, MissionFleetParentUiChildSlot::DC,
                    0x18c, 100, 100, allocate, construct, context);
    }
    if (parent.childE0 == nullptr) {
        ensureChild(parent, parent.childE0, MissionFleetParentUiChildSlot::E0,
                    0xa4, 0xd2, 0xbe, allocate, construct, context);
    }
    parent.flags24 = static_cast<std::uint16_t>(parent.flags24 | 0x000f);
}
