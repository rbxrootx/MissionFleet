#include "../../src/client-current/semantic/BoundedScalarAdjustment.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>

namespace {

void check(std::int32_t current, std::uint16_t bound,
           std::int32_t expected) {
    std::array<unsigned char, 0x300> receiver{};
    std::memcpy(receiver.data() + 0x230, &current, sizeof(current));
    std::memcpy(receiver.data() + 0x2DE, &bound, sizeof(bound));
    MissionFleet_AdjustBoundedScalar(receiver.data());
    std::int32_t actual;
    std::memcpy(&actual, receiver.data() + 0x230, sizeof(actual));
    assert(actual == expected);
    std::uint16_t unchangedBound;
    std::memcpy(&unchangedBound, receiver.data() + 0x2DE, sizeof(unchangedBound));
    assert(unchangedBound == bound);
}

}  // namespace

int main() {
    check(100, 100, 100);           // Equal: both comparisons settle at bound.
    check(-5, 100, 100);            // Below: first pass replaces with bound.
    check(101, 100, 99);           // Just above: both percentage passes matter.
    check(102, 100, 100);          // Farther above: second pass clamps to bound.
    check(501, 500, 499);
    check(1000, 500, 500);
    check(30000000, 100, -13382168);  // Wrapped x86 multiply is observable.
    std::cout << "bounded scalar adjustment: passed\n";
}
