#pragma once

#include <cstdint>

using MissionFleetSimpleSender = std::uint32_t (*)(
    void* receiver, std::uint32_t message, std::uint32_t first,
    std::uint32_t second, const void* payload, std::uint32_t length,
    std::uint32_t flags, void* context) noexcept;

// Portable normal-path models of Main.dll FUN_587b9190, FUN_587b9270,
// FUN_587b92b0, and FUN_587b9e10. Their instruction-identical sources are
// separate. The 0x587b92b0 model preserves the observed * 8 length conversion;
// the wire meaning of that unit count is not established.
std::uint32_t missionFleetSendEmptySignal(void* receiver,
                                          MissionFleetSimpleSender send,
                                          void* context) noexcept;
std::uint32_t missionFleetSendPairNotice(void* receiver,
                                         const std::uint32_t* pair,
                                         MissionFleetSimpleSender send,
                                         void* context) noexcept;
std::uint32_t missionFleetSendBattleRecordPayload(
    void* receiver, std::uint32_t first, std::uint32_t payloadUnits,
    const void* payload, MissionFleetSimpleSender send, void* context) noexcept;
std::uint32_t missionFleetSendScalarNotice(void* receiver,
                                           std::uint32_t value,
                                           MissionFleetSimpleSender send,
                                           void* context) noexcept;
