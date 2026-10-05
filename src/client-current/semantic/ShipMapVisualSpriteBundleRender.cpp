#include "ShipMapVisualSpriteBundleRender.h"

#include <cstring>
#include <stdexcept>

namespace {
std::int32_t signedDword(std::uint32_t bits) {
    std::int32_t value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

std::int16_t signedWord(std::uint16_t bits) {
    std::int16_t value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

bool nativeRecordAddressPassesTest(const std::uint8_t* record) {
    const auto address = reinterpret_cast<std::uintptr_t>(record);
    // FUN_589038C0 is x86 and tests the low 32-bit address against
    // 0xFFFFFF00. Truncating preserves that predicate in the host model.
    const auto nativeAddress = static_cast<std::uint32_t>(address);
    return (nativeAddress & 0xFFFFFF00u) != 0;
}

void dispatchChild(MissionFleetShipMapVisualNode& child,
                   std::uint32_t argument1, std::uint32_t argument2,
                   const MissionFleetShipMapVisualPoint* origin,
                   const MissionFleetShipMapVisualSpriteBundleRenderHooks& hooks,
                   void* context) {
    if (hooks.drawChild == nullptr) {
        throw std::logic_error(
            "FUN_589038C0 requires a child vtable +0x14 hook");
    }
    hooks.drawChild(child, argument1, argument2, origin, context);
}
}

void missionFleetRenderShipMapVisualSpriteBundle(
    MissionFleetShipMapVisualNode& receiver,
    std::uint32_t argument1, std::uint32_t argument2,
    const MissionFleetShipMapVisualPoint* origin,
    const MissionFleetShipMapVisualSpriteBundleRenderHooks& hooks,
    void* context) {
    if ((receiver.flags24 & 1u) == 0 || signedDword(receiver.counter50) < 0) {
        return;
    }

    // The owner list is sorted by signed word26. The native first pass stops
    // at the first nonnegative key, retaining that node as the second-pass
    // cursor; it does not rescan or filter the list after drawing the receiver.
    auto* child = receiver.firstChild4C;
    while (child != nullptr && signedWord(child->word26) < 0) {
        dispatchChild(*child, argument1, argument2, origin, hooks, context);
        child = child->next48;
    }

    if (nativeRecordAddressPassesTest(receiver.record54)) {
        if (origin == nullptr) {
            throw std::invalid_argument(
                "FUN_589038C0 reads the supplied point before drawing");
        }
        if (hooks.drawSprite == nullptr) {
            throw std::logic_error(
                "FUN_589038C0 requires a FUN_5873A5D0 draw hook");
        }

        MissionFleetShipMapVisualSpriteBundleInvocation invocation{};
        invocation.argument1 = argument1;
        invocation.point.x = receiver.copiedFields0CTo20[0] +
                             receiver.value04 + origin->x;
        invocation.point.y = receiver.copiedFields0CTo20[1] +
                             receiver.value08 + origin->y;
        invocation.argument2 = argument2;
        invocation.frame50 = receiver.counter50;
        invocation.value28 = receiver.value28;
        invocation.mode2C = receiver.mode2C;
        hooks.drawSprite(receiver.record54, invocation, context);
    }

    while (child != nullptr) {
        dispatchChild(*child, argument1, argument2, origin, hooks, context);
        child = child->next48;
    }
}
