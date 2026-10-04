#pragma once

#include <cstdint>

// Portable callback adapter for the observed child +0x30 / flag +0x24 path.
// The adapter is not the original x86 child-object ABI.
struct MissionFleetNumberScreenChild {
    std::uint16_t flags;
    void (*notify)(void* receiver, int event, int zero, void* context) noexcept;
    void* context;
};

// Behavioral reconstructions of FUN_589072A0 and FUN_58907300. These do not
// replace the original instruction-stream byte matches.
extern "C" std::int32_t MissionFleet_StepNumberScreenUpper(
    void* receiver, std::int32_t step,
    const MissionFleetNumberScreenChild* child) noexcept;
extern "C" std::int32_t MissionFleet_StepNumberScreenLower(
    void* receiver, std::int32_t step,
    const MissionFleetNumberScreenChild* child) noexcept;
