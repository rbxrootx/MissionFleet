#include "CNumberScreenDigits.h"

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>

namespace {

constexpr std::size_t kWidth = 0x5C;
constexpr std::size_t kValue = 0x60;
constexpr std::size_t kSign = 0x64;
constexpr std::size_t kDigits = 0x68;
constexpr std::size_t kDigitCount = 0xE8;

std::int32_t load(const std::uint8_t* bytes, std::size_t offset) noexcept {
    std::int32_t value;
    std::memcpy(&value, bytes + offset, sizeof(value));
    return value;
}

void store(std::uint8_t* bytes, std::size_t offset, std::int32_t value) noexcept {
    std::memcpy(bytes + offset, &value, sizeof(value));
}

}  // namespace

extern "C" void MissionFleet_RebuildNumberScreenDigits(void* receiver) noexcept {
    static_assert(sizeof(std::int32_t) == 4, "Main.dll uses 32-bit fields");
    auto* bytes = static_cast<std::uint8_t*>(receiver);
    const std::int32_t original = load(bytes, kValue);

    // x86 NEG leaves INT_MIN unchanged; avoid signed-overflow UB in C++.
    std::int32_t magnitude = original;
    if (magnitude < 0 && magnitude != std::numeric_limits<std::int32_t>::min()) {
        magnitude = -magnitude;
    }

    const std::int32_t requested_width = load(bytes, kWidth);
    std::int32_t count = 0;
    if (requested_width > 0) {
        count = requested_width;
    } else if (magnitude != 0) {
        std::int32_t quotient = magnitude;
        do {
            quotient /= 10;
            ++count;
        } while (quotient != 0);
    }
    store(bytes, kDigitCount, count);

    for (std::int32_t index = count - 1; index >= 0; --index) {
        const std::int32_t digit = (index != count - 1 && magnitude == 0)
            ? 10 : magnitude % 10;
        store(bytes, kDigits + static_cast<std::size_t>(index) * 4, digit);
        magnitude /= 10;
    }
    if (original < 0) {
        store(bytes, kSign, 11);
    }
}
