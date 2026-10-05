#pragma once

#include <cstddef>
#include <cstdint>

// Evidence-backed normal-path model for phases 0x100000 through 0xFF0000 of
// Main.dll FUN_588DB610. Field names retain source offsets where semantics
// are not established.
struct MissionFleetShipMapVisualStateTail {
    std::uint32_t state60B0 = 0;
    std::uint32_t parentField9C = 0;       // *(this + 0x6028) + 0x9C
    std::uint32_t selectionFlag34 = 0;     // *(this + 0x23C) + 0x34
    std::uint16_t inputWord350 = 0;
    std::uint8_t handlerIndex354 = 0;
    const void* const* handlerObjects354 = nullptr;
    std::size_t handlerObjectCount = 0;

    std::uint32_t frameCounter60D8 = 0;
    std::uint32_t frameCounter1470 = 0;
    std::uint32_t frameCounter178 = 0;
    std::uint8_t controlMode4 = 0;         // *(this + 0x100C) + 4
    std::uint16_t word164 = 0;
    void* child60D8 = nullptr;
    void* globalManager58A2459C = nullptr;

    std::uint32_t state6090 = 0;
    std::uint32_t value6648 = 0;
    std::uint32_t value664C = 0;
    std::uint32_t globalDword21C34 = 0;
    std::uint16_t globalWord105F0 = 0;
};

struct MissionFleetShipMapVisualStateTailHooks {
    // FUN_587898D0 is called with ECX from the global handler table and the
    // zero-extended word at receiver +0x350.
    void (*handler587898D0)(const void* handlerObject, std::uint16_t value,
                            void* context) = nullptr;
    // FUN_588D65C0 receives (receiver, selector, 0x400000).
    void (*tick588D65C0)(MissionFleetShipMapVisualStateTail& receiver,
                         std::uint32_t selector, std::uint32_t argument,
                         void* context) = nullptr;
    // FUN_587315F0 receives the child at +0x60D8 and argument 0.
    void (*reset587315F0)(void* child, std::uint32_t argument,
                          void* context) = nullptr;
    // FUN_587F21E0 receives the global manager as ECX and (receiver,1,1).
    void (*finish587F21E0)(void* globalManager,
                           MissionFleetShipMapVisualStateTail& receiver,
                           std::uint32_t first, std::uint32_t second,
                           void* context) = nullptr;
};

void missionFleetUpdateShipMapVisualStateTail(
    MissionFleetShipMapVisualStateTail& state,
    const MissionFleetShipMapVisualStateTailHooks& hooks, void* context);
