#include "OutboundTextNotice.h"

int missionFleetSendTextNotice(void* receiver, const char* text,
                               std::uint32_t first, std::uint32_t second,
                               const char* fallback, MissionFleetTextLength length,
                               MissionFleetSendNotice send, void* context) noexcept {
    const char* selected = text != nullptr ? text : fallback;
    const std::uint32_t bytes = length(selected, context) + 1u;
    return send(receiver, 0x80010FA0u, first, second, selected, bytes, 0u,
                context);
}
