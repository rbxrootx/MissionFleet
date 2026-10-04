#include "../../src/client-current/semantic/CNumberScreenDigits.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <limits>
#include <vector>

namespace {

using Buffer = std::array<std::uint8_t, 0x100>;

void set(Buffer& bytes, std::size_t offset, std::int32_t value) {
    std::memcpy(bytes.data() + offset, &value, sizeof(value));
}

std::int32_t get(const Buffer& bytes, std::size_t offset) {
    std::int32_t value;
    std::memcpy(&value, bytes.data() + offset, sizeof(value));
    return value;
}

void check(std::int32_t value, std::int32_t width,
           const std::vector<std::int32_t>& digits, bool negative) {
    Buffer bytes{};
    set(bytes, 0x5C, width);
    set(bytes, 0x60, value);
    set(bytes, 0x64, 0x12345678);
    set(bytes, 0x68, 0x24681357);
    MissionFleet_RebuildNumberScreenDigits(bytes.data());
    assert(get(bytes, 0xE8) == static_cast<std::int32_t>(digits.size()));
    assert(get(bytes, 0x64) == (negative ? 11 : 0x12345678));
    for (std::size_t index = 0; index < digits.size(); ++index) {
        assert(get(bytes, 0x68 + index * 4) == digits[index]);
    }
    if (digits.empty()) assert(get(bytes, 0x68) == 0x24681357);
}

}  // namespace

int main() {
    check(123, 0, {1, 2, 3}, false);
    check(-42, 0, {4, 2}, true);
    check(7, 4, {10, 10, 10, 7}, false);
    check(0, 3, {10, 10, 0}, false);
    check(0, 0, {}, false);
    check(std::numeric_limits<std::int32_t>::min(), 0,
          {-2, -1, -4, -7, -4, -8, -3, -6, -4, -8}, true);
    std::cout << "6 number-screen behavior cases passed\n";
}
