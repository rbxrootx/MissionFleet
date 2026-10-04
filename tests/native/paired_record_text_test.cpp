#include "../../src/client-current/semantic/PairedRecordText.h"

#include <array>
#include <cassert>
#include <utility>
#include <vector>

namespace {
using Call = std::pair<void*, const char*>;

void copy(void* child, const char* text, void* context) noexcept {
    static_cast<std::vector<Call>*>(context)->emplace_back(child, text);
}
}

int main() {
    int c6C = 0, c70 = 0, c74 = 0, c78 = 0;
    MissionFleetPairedRecordTextReceiver receiver{&c6C, &c70, &c74, &c78};
    std::array<unsigned char, 0x60> record{};
    record[0x2d] = 'A';
    record[0x0c] = 'B';
    const char fallback[] = "";
    std::vector<Call> calls;

    missionFleetUpdateFirstRecordTextPair(receiver, record.data(), fallback,
                                          copy, &calls);
    assert(calls.size() == 2);
    assert(calls[0] == Call(&c6C, reinterpret_cast<const char*>(record.data() + 0x2d)));
    assert(calls[1] == Call(&c70, reinterpret_cast<const char*>(record.data() + 0x0c)));

    calls.clear();
    missionFleetUpdateFirstRecordTextPair(receiver, nullptr, fallback,
                                          copy, &calls);
    assert(calls.size() == 2);
    assert(calls[0] == Call(&c6C, fallback) && calls[1] == Call(&c70, fallback));

    calls.clear();
    missionFleetUpdateSecondRecordTextPair(receiver, record.data(), fallback,
                                           copy, &calls);
    assert(calls.size() == 2);
    assert(calls[0] == Call(&c74, reinterpret_cast<const char*>(record.data() + 0x2d)));
    assert(calls[1] == Call(&c78, reinterpret_cast<const char*>(record.data() + 0x0c)));

    calls.clear();
    missionFleetUpdateSecondRecordTextPair(receiver, nullptr, fallback,
                                           copy, &calls);
    assert(calls.size() == 2);
    assert(calls[0] == Call(&c74, fallback) && calls[1] == Call(&c78, fallback));
}
