#include "../../src/client-current/semantic/OutboundTextNotice.h"

#include <cassert>
#include <cstring>

namespace {
struct Log {
    void* expectedReceiver;
    const char* measured = nullptr;
    const char* payload = nullptr;
    std::uint32_t message = 0;
    std::uint32_t first = 0;
    std::uint32_t second = 0;
    std::uint32_t bytes = 0;
    std::uint32_t flags = 1;
    unsigned lengthCalls = 0;
    unsigned sendCalls = 0;
};

std::uint32_t lengthOf(const char* text, void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    log.measured = text;
    ++log.lengthCalls;
    return static_cast<std::uint32_t>(std::strlen(text));
}

int send(void* receiver, std::uint32_t message, std::uint32_t first,
         std::uint32_t second, const char* payload, std::uint32_t bytes,
         std::uint32_t flags, void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    assert(receiver == log.expectedReceiver);
    log.payload = payload;
    log.message = message;
    log.first = first;
    log.second = second;
    log.bytes = bytes;
    log.flags = flags;
    ++log.sendCalls;
    return 37;
}
}

int main() {
    int receiver = 0;
    const char fallback[] = "fallback";
    const char supplied[] = "hello";
    Log log{&receiver};
    assert(missionFleetSendTextNotice(&receiver, supplied, 12, 34, fallback,
                                      lengthOf, send, &log) == 37);
    assert(log.lengthCalls == 1 && log.sendCalls == 1);
    assert(log.measured == supplied && log.payload == supplied);
    assert(log.message == 0x80010FA0u && log.first == 12 && log.second == 34);
    assert(log.bytes == 6 && log.flags == 0);

    assert(missionFleetSendTextNotice(&receiver, nullptr, 56, 78, fallback,
                                      lengthOf, send, &log) == 37);
    assert(log.lengthCalls == 2 && log.sendCalls == 2);
    assert(log.measured == fallback && log.payload == fallback);
    assert(log.first == 56 && log.second == 78 && log.bytes == 9);

    const char empty[] = "";
    assert(missionFleetSendTextNotice(&receiver, empty, 0, 0, fallback,
                                      lengthOf, send, &log) == 37);
    assert(log.measured == empty && log.payload == empty);
    assert(log.bytes == 1 && log.sendCalls == 3);
}
