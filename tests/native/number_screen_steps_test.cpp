#include "../../src/client-current/semantic/CNumberScreenSteps.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <limits>

namespace {

struct Frame {
    std::array<std::uint8_t, 0x100> bytes{};
    int callbacks = 0;
    int event = -1;
    int zero = -1;
};

void set(Frame& frame, std::size_t offset, std::int32_t value) {
    std::memcpy(frame.bytes.data() + offset, &value, sizeof(value));
}

std::int32_t get(const Frame& frame, std::size_t offset) {
    std::int32_t value;
    std::memcpy(&value, frame.bytes.data() + offset, sizeof(value));
    return value;
}

void notify(void* receiver, int event, int zero, void* context) noexcept {
    auto& frame = *static_cast<Frame*>(context);
    assert(receiver == frame.bytes.data());
    ++frame.callbacks;
    frame.event = event;
    frame.zero = zero;
}

Frame initialized() {
    Frame frame;
    set(frame, 0x50, 0);
    set(frame, 0x54, 10);
    set(frame, 0x5C, 1);
    set(frame, 0x60, 7);
    set(frame, 0x64, 5);
    return frame;
}

void upper_bound_and_early_return() {
    Frame frame = initialized();
    MissionFleetNumberScreenChild child{0x20, notify, &frame};
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), 3, &child) == 3);
    assert(get(frame, 0x64) == 8);
    assert(get(frame, 0xE8) == 1 && get(frame, 0x68) == 7);
    assert(frame.callbacks == 1 && frame.event == 2 && frame.zero == 0);
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), 5, &child) == 2);
    assert(get(frame, 0x64) == 10 && frame.callbacks == 2);
    set(frame, 0xE8, 99);
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), 1, &child) == 0);
    assert(frame.callbacks == 2 && get(frame, 0xE8) == 99);
}

void lower_bound_and_early_return() {
    Frame frame = initialized();
    MissionFleetNumberScreenChild child{0x20, notify, &frame};
    assert(MissionFleet_StepNumberScreenLower(frame.bytes.data(), 3, &child) == 3);
    assert(get(frame, 0x64) == 2 && frame.callbacks == 1);
    assert(MissionFleet_StepNumberScreenLower(frame.bytes.data(), 10, &child) == 2);
    assert(get(frame, 0x64) == 0 && frame.callbacks == 2);
    set(frame, 0xE8, 99);
    assert(MissionFleet_StepNumberScreenLower(frame.bytes.data(), 1, &child) == 0);
    assert(frame.callbacks == 2 && get(frame, 0xE8) == 99);
}

void zero_and_opposite_direction_steps() {
    Frame frame = initialized();
    MissionFleetNumberScreenChild child{0x20, notify, &frame};
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), 0, &child) == 0);
    assert(get(frame, 0x64) == 5 && frame.callbacks == 1);
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), -7, &child) == -7);
    assert(get(frame, 0x64) == -2 && frame.callbacks == 2);
    set(frame, 0x64, 5);
    assert(MissionFleet_StepNumberScreenLower(frame.bytes.data(), -7, &child) == -7);
    assert(get(frame, 0x64) == 12 && frame.callbacks == 3);
}

void callback_gate_and_wrapping_arithmetic() {
    Frame frame = initialized();
    MissionFleetNumberScreenChild inactive{0, notify, &frame};
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), 1, &inactive) == 1);
    assert(frame.callbacks == 0 && get(frame, 0xE8) == 1);
    assert(MissionFleet_StepNumberScreenLower(frame.bytes.data(), 1, nullptr) == 1);
    assert(frame.callbacks == 0);

    set(frame, 0x54, std::numeric_limits<std::int32_t>::max());
    set(frame, 0x64, std::numeric_limits<std::int32_t>::max() - 1);
    assert(MissionFleet_StepNumberScreenUpper(frame.bytes.data(), 5, nullptr) == 5);
    assert(get(frame, 0x64) == std::numeric_limits<std::int32_t>::min() + 3);
}

}  // namespace

int main() {
    upper_bound_and_early_return();
    lower_bound_and_early_return();
    zero_and_opposite_direction_steps();
    callback_gate_and_wrapping_arithmetic();
    std::cout << "4 number-screen step scenarios passed\n";
}
