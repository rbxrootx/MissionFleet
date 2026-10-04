#pragma once

#include <cstdint>

using MissionFleetSendMaskedWordMessage = std::uint32_t (*)(
    void* receiver, std::uint32_t message, std::uint32_t shifted,
    std::uint32_t packed, const void* payload, std::uint32_t length,
    std::uint32_t flags, void* context) noexcept;

// Portable normal-path model of Main.dll FUN_587b9760.
std::uint32_t missionFleetSendMaskedWordMessage(
    void* receiver, std::uint32_t unused, std::uint32_t upperWord,
    std::uint32_t lowerWord, std::uint32_t shiftedWord,
    std::uint32_t selector, MissionFleetSendMaskedWordMessage send,
    void* context) noexcept;
