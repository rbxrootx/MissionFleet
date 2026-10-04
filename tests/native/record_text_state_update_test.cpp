#include "../../src/client-current/semantic/RecordTextStateUpdate.h"

#include <array>
#include <cassert>

namespace {
struct Log {
    MissionFleetRecordTextState* receiver;
    const unsigned char* expectedSource;
    void* expectedChild;
    unsigned copyCalls = 0;
    unsigned readyCalls = 0;
    bool changeFlagsOnCopy = false;
};

void copy(void* child, const unsigned char* source, void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    assert(child == log.expectedChild && source == log.expectedSource);
    assert(log.receiver->pending == 0); // Pending is set after copying.
    ++log.copyCalls;
    if (log.changeFlagsOnCopy) log.receiver->flags = 0x2500;
}

std::uint32_t ready(MissionFleetRecordTextState* receiver,
                    void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    assert(receiver == log.receiver && receiver->pending == 1);
    ++log.readyCalls;
    return 0x12345678u;
}
}

int main() {
    int child = 0;
    std::array<unsigned char, 32> record{};
    record[12] = 'N';
    MissionFleetRecordTextState state{0x0400, 0, &child};
    Log log{&state, record.data() + 12, &child};

    assert(missionFleetUpdateRecordTextState(state, 0, 0, nullptr,
                                             copy, ready, &log) == 0x1f00u);
    assert(state.pending == 1 && log.copyCalls == 0 && log.readyCalls == 0);

    state.pending = 0;
    log.changeFlagsOnCopy = true;
    assert(missionFleetUpdateRecordTextState(state, 1, 0, record.data(),
                                             copy, ready, &log) == 0x12345678u);
    assert(log.copyCalls == 1 && log.readyCalls == 1);
    assert(state.flags == 0x2500); // Mask 0x1F00 accepts the low 0x0500.

    state.flags = 0x1500;
    state.pending = 0;
    log.changeFlagsOnCopy = false;
    assert(missionFleetUpdateRecordTextState(state, 0, 1, record.data(),
                                             copy, ready, &log) == 0x1f00u);
    assert(log.copyCalls == 2 && log.readyCalls == 1 && state.pending == 1);
}
