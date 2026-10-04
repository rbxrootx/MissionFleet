#pragma once

#include <cstdint>

using MissionFleetSimpleSender = std::uint32_t (*)(
    void* receiver, std::uint32_t message, std::uint32_t first,
    std::uint32_t second, const void* payload, std::uint32_t length,
    std::uint32_t flags, void* context) noexcept;

// Portable normal-path models of Main.dll FUN_587b9190, FUN_587b9270,
// and FUN_587b9e10. Their instruction-identical sources are separate.
std::uint32_t missionFleetSendEmptySignal(void* receiver,
                                          MissionFleetSimpleSender send,
                                          void* context) noexcept;
std::uint32_t missionFleetSendPairNotice(void* receiver,
                                         const std::uint32_t* pair,
                                         MissionFleetSimpleSender send,
                                         void* context) noexcept;
std::uint32_t missionFleetSendScalarNotice(void* receiver,
                                           std::uint32_t value,
                                           MissionFleetSimpleSender send,
                                           void* context) noexcept;
