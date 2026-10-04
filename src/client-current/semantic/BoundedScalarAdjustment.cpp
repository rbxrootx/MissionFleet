#include "BoundedScalarAdjustment.h"

#include <cstdint>
#include <cstring>

namespace {

constexpr unsigned int kCurrent = 0x230;
constexpr unsigned int kBound = 0x2DE;

std::int32_t loadCurrent(const unsigned char* bytes) noexcept {
    std::int32_t result;
    std::memcpy(&result, bytes + kCurrent, sizeof(result));
    return result;
}

std::uint16_t loadBound(const unsigned char* bytes) noexcept {
    std::uint16_t result;
    std::memcpy(&result, bytes + kBound, sizeof(result));
    return result;
}

void storeCurrent(unsigned char* bytes, std::int32_t value) noexcept {
    std::memcpy(bytes + kCurrent, &value, sizeof(value));
}

std::int32_t scaled(std::int32_t value, std::uint32_t percent) noexcept {
    const std::uint32_t bits = static_cast<std::uint32_t>(value) * percent;
    std::int32_t wrapped;
    std::memcpy(&wrapped, &bits, sizeof(wrapped));
    return wrapped / 100;  // x86 signed division truncates toward zero.
}

}  // namespace

extern "C" void MissionFleet_AdjustBoundedScalar(void* receiver) noexcept {
    auto* bytes = static_cast<unsigned char*>(receiver);
    const std::int32_t bound = loadBound(bytes);
    std::int32_t current = loadCurrent(bytes);
    if (current > bound) {
        current = scaled(current, 99);
    } else {
        current = bound;
    }
    storeCurrent(bytes, current);

    // Original instructions reload +0x230 before this second comparison.
    current = loadCurrent(bytes);
    if (current < bound) {
        current = scaled(current, 101);
    } else {
        current = bound;
    }
    storeCurrent(bytes, current);
}
