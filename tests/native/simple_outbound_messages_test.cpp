#include "../../src/client-current/semantic/SimpleOutboundMessages.h"

#include <cassert>

namespace {
struct Log {
    void* receiver;
    std::uint32_t message = 0;
    std::uint32_t first = 0;
    std::uint32_t second = 0;
    const void* payload = nullptr;
    std::uint32_t length = 0;
    std::uint32_t flags = 0;
    unsigned calls = 0;
};

std::uint32_t send(void* receiver, std::uint32_t message,
                   std::uint32_t first, std::uint32_t second,
                   const void* payload, std::uint32_t length,
                   std::uint32_t flags, void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    assert(receiver == log.receiver);
    log.message = message;
    log.first = first;
    log.second = second;
    log.payload = payload;
    log.length = length;
    log.flags = flags;
    ++log.calls;
    return 0xABC000u + log.calls;
}
}

int main() {
    int receiver = 0;
    Log log{&receiver};
    assert(missionFleetSendEmptySignal(&receiver, send, &log) == 0xABC001u);
    assert(log.calls == 1 && log.message == 0x80010F01u);
    assert(log.first == 0 && log.second == 0);
    assert(log.payload == nullptr && log.length == 0 && log.flags == 0);

    const std::uint32_t pair[2] = {0x12345678u, 0x90ABCDEFu};
    assert(missionFleetSendPairNotice(&receiver, pair, send, &log) == 0xABC002u);
    assert(log.calls == 2 && log.message == 0x80010F06u);
    assert(log.first == pair[0] && log.second == pair[1]);
    assert(log.payload == nullptr && log.length == 0 && log.flags == 0);

    const std::uint8_t recordPayload[24] = {};
    assert(missionFleetSendBattleRecordPayload(&receiver, 0, 3,
                                               recordPayload, send, &log)
           == 0xABC003u);
    assert(log.calls == 3 && log.message == 0x80010F12u);
    assert(log.first == 0 && log.second == 3);
    assert(log.payload == recordPayload && log.length == 24 && log.flags == 0);

    assert(missionFleetSendScalarNotice(&receiver, 0xFEDCBA98u,
                                        send, &log) == 0xABC004u);
    assert(log.calls == 4 && log.message == 0x8001312Bu);
    assert(log.first == 0xFEDCBA98u && log.second == 0);
    assert(log.payload == nullptr && log.length == 0 && log.flags == 0);
}
