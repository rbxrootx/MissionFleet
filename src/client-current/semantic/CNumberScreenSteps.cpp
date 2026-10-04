#include "CNumberScreenSteps.h"
#include "CNumberScreenDigits.h"

#include <cstddef>
#include <cstdint>
#include <cstring>

namespace {

constexpr std::size_t kLowerBound = 0x50;
constexpr std::size_t kUpperBound = 0x54;
constexpr std::size_t kCurrent = 0x64;

std::int32_t load(const std::uint8_t* bytes, std::size_t offset) noexcept {
    std::int32_t value;
    std::memcpy(&value, bytes + offset, sizeof(value));
    return value;
}

void store(std::uint8_t* bytes, std::size_t offset, std::int32_t value) noexcept {
    std::memcpy(bytes + offset, &value, sizeof(value));
}

std::int32_t wrap(std::uint32_t bits) noexcept {
    std::int32_t result;
    std::memcpy(&result, &bits, sizeof(result));
    return result;
}

std::int32_t add(std::int32_t left, std::int32_t right) noexcept {
    return wrap(static_cast<std::uint32_t>(left) + static_cast<std::uint32_t>(right));
}

std::int32_t subtract(std::int32_t left, std::int32_t right) noexcept {
    return wrap(static_cast<std::uint32_t>(left) - static_cast<std::uint32_t>(right));
}

void finish(void* receiver, const MissionFleetNumberScreenChild* child) noexcept {
    if (child != nullptr && (child->flags & 0x20u) != 0) {
        child->notify(receiver, 2, 0, child->context);
    }
    MissionFleet_RebuildNumberScreenDigits(receiver);
}

}  // namespace

extern "C" std::int32_t MissionFleet_StepNumberScreenUpper(
    void* receiver, std::int32_t step,
    const MissionFleetNumberScreenChild* child) noexcept {
    auto* bytes = static_cast<std::uint8_t*>(receiver);
    const std::int32_t current = load(bytes, kCurrent);
    const std::int32_t upper = load(bytes, kUpperBound);
    if (current >= upper) return 0;

    std::int32_t applied = step;
    if (add(current, step) > upper) applied = subtract(upper, current);
    store(bytes, kCurrent, add(current, applied));
    finish(receiver, child);
    return applied;
}

extern "C" std::int32_t MissionFleet_StepNumberScreenLower(
    void* receiver, std::int32_t step,
    const MissionFleetNumberScreenChild* child) noexcept {
    auto* bytes = static_cast<std::uint8_t*>(receiver);
    const std::int32_t current = load(bytes, kCurrent);
    const std::int32_t lower = load(bytes, kLowerBound);
    if (current <= lower) return 0;

    std::int32_t applied = step;
    if (subtract(current, step) < lower) applied = subtract(current, lower);
    store(bytes, kCurrent, subtract(current, applied));
    finish(receiver, child);
    return applied;
}
