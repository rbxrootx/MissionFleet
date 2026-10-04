#include "../../src/client-current/semantic/SelectedChildFlagReset.h"

#include <cassert>
#include <cstdint>
#include <iostream>

int main() {
    MissionFleetFlagChild first0{0xFFFF};
    MissionFleetFlagChild first2{0x0003};
    MissionFleetFlagChild second1{0x8001};
    MissionFleetFlagChild final{0x0005};
    MissionFleetSelectedObject object{
        0xFFFF, 0x11223344, 0x55667788,
        {&first0, nullptr, &first2}, {nullptr, &second1}, &final};

    MissionFleet_ResetSelectedChildFlags(&object);
    assert(object.flags == 0xFFFA);  // Only bits 2 and 0 cleared.
    assert(object.field50 == 0 && object.fieldE8 == 0);
    assert(first0.flags == 0xFFFE);
    assert(first2.flags == 0x0002);
    assert(second1.flags == 0x8000);
    assert(final.flags == 0x0004);
    assert(object.first[1] == nullptr && object.second[0] == nullptr);

    // Repeated resets leave cleared bits unchanged and preserve all others.
    MissionFleet_ResetSelectedChildFlags(&object);
    assert(object.flags == 0xFFFA && final.flags == 0x0004);
    std::cout << "selected child flag reset: passed\n";
}
