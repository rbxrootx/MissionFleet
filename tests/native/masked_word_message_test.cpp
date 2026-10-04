#include "../../src/client-current/semantic/MaskedWordMessage.h"

#include <cassert>

namespace {
struct Log {
    void* receiver;
    std::uint32_t message = 0;
    std::uint32_t shifted = 0;
    std::uint32_t packed = 0;
    unsigned calls = 0;
};

std::uint32_t send(void* receiver, std::uint32_t message,
                   std::uint32_t shifted, std::uint32_t packed,
                   const void* payload, std::uint32_t length,
                   std::uint32_t flags, void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    assert(receiver == log.receiver);
    assert(payload == nullptr && length == 0 && flags == 0);
    log.message = message;
    log.shifted = shifted;
    log.packed = packed;
    ++log.calls;
    return 0x1234u;
}
}

int main() {
    int receiver = 0;
    Log log{&receiver};
    constexpr std::uint32_t packed = 0x56D2EF55u;
    constexpr std::uint32_t shifted = 0xBEEF0000u;
    assert(missionFleetSendMaskedWordMessage(
        &receiver, 99, 0x12345678u, 0xABCDEFFFu, 0xDEADBEEFu,
        0, send, &log) == 0x1234u);
    assert(log.calls == 1 && log.message == 0x80020400u);
    assert(log.shifted == shifted && log.packed == packed);

    assert(missionFleetSendMaskedWordMessage(
        &receiver, 0, 0x12345678u, 0xABCDEFFFu, 0xDEADBEEFu,
        1, send, &log) == 0x1234u);
    assert(log.calls == 2 && log.message == 0x80020700u);
    assert(log.shifted == shifted && log.packed == packed);

    assert(missionFleetSendMaskedWordMessage(
        &receiver, 0, 0x12345678u, 0xABCDEFFFu, 0xDEADBEEFu,
        2, send, &log) == packed);
    assert(log.calls == 2);
    assert(missionFleetSendMaskedWordMessage(
        &receiver, 0, 0x12345678u, 0xABCDEFFFu, 0xDEADBEEFu,
        0xffffffffu, send, &log) == packed);
    assert(log.calls == 2);
}
