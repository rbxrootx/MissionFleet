#include "OutboundTextNotice.h"

#include <cstring>
#include <vector>

int missionFleetSendTextNotice(void* receiver, const char* text,
                               std::uint32_t first, std::uint32_t second,
                               const char* fallback, MissionFleetTextLength length,
                               MissionFleetSendNotice send, void* context) noexcept {
    const char* selected = text != nullptr ? text : fallback;
    const std::uint32_t bytes = length(selected, context) + 1u;
    return send(receiver, 0x80010FA0u, first, second, selected, bytes, 0u,
                context);
}

void missionFleetSendRecordText(void* receiver, std::uint32_t globalValue,
                                const void* recordHeader8, const char* text,
                                MissionFleetTextLength length,
                                MissionFleetSendNotice send, void* context) {
    const std::uint32_t textLength = length(text, context);
    const std::uint32_t textBytes = textLength + 1u;
    std::vector<char> payload(static_cast<std::size_t>(textLength) + 9u);
    std::memcpy(payload.data(), recordHeader8, 8u);
    std::memcpy(payload.data() + 8u, text, textBytes);
    (void)send(receiver, 0x80010F0Eu, globalValue, 0u, payload.data(),
               textLength + 9u, 0u, context);
}
