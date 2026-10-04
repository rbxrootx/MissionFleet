#include "MaskedWordMessage.h"

std::uint32_t missionFleetSendMaskedWordMessage(
    void* receiver, std::uint32_t /*unused*/, std::uint32_t upperWord,
    std::uint32_t lowerWord, std::uint32_t shiftedWord,
    std::uint32_t selector, MissionFleetSendMaskedWordMessage send,
    void* context) noexcept {
    const std::uint32_t packed =
        (((upperWord & 0xffffu) ^ 0xaau) << 16) |
        ((lowerWord & 0xffffu) ^ 0xaau);
    const std::uint32_t shifted = shiftedWord << 16;
    if (selector > 1) return packed;
    const std::uint32_t message = selector == 0 ? 0x80020400u : 0x80020700u;
    return send(receiver, message, shifted, packed, nullptr, 0u, 0u, context);
}
