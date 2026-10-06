#include "SimpleOutboundMessages.h"

std::uint32_t missionFleetSendEmptySignal(void* receiver,
                                          MissionFleetSimpleSender send,
                                          void* context) noexcept {
    return send(receiver, 0x80010F01u, 0u, 0u, nullptr, 0u, 0u, context);
}

std::uint32_t missionFleetSendPairNotice(void* receiver,
                                         const std::uint32_t* pair,
                                         MissionFleetSimpleSender send,
                                         void* context) noexcept {
    return send(receiver, 0x80010F06u, pair[0], pair[1], nullptr, 0u, 0u,
                context);
}

std::uint32_t missionFleetSendBattleRecordPayload(
    void* receiver, std::uint32_t first, std::uint32_t payloadUnits,
    const void* payload, MissionFleetSimpleSender send, void* context) noexcept {
    return send(receiver, 0x80010F12u, first, payloadUnits, payload,
                payloadUnits * 8u, 0u, context);
}

std::uint32_t missionFleetSendScalarNotice(void* receiver,
                                           std::uint32_t value,
                                           MissionFleetSimpleSender send,
                                           void* context) noexcept {
    return send(receiver, 0x8001312Bu, value, 0u, nullptr, 0u, 0u, context);
}
