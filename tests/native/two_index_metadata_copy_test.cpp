#include "../../src/client-current/semantic/TwoIndexMetadataCopy.h"

#include <array>
#include <cassert>
#include <iostream>

namespace {

constexpr int kTableSize = 0x20B;

void checkCopies() {
    MissionFleetMetadataEntry low{{1, 2, 3, 4, 5, 6}};
    MissionFleetMetadataEntry high{{11, 12, 13, 14, 15, 16}};
    std::array<MissionFleetMetadataEntry*, kTableSize> table{};
    table[0x209] = &low;
    table[0x20A] = &high;
    MissionFleetMetadataManager manager{kTableSize, table.data()};
    MissionFleetMetadataChild child{};
    MissionFleetMetadataReceiver receiver{&child};

    MissionFleet_SelectAndCopyMetadata(&receiver, &manager, 1);
    assert(child.selected == &low);
    for (int i = 0; i != 6; ++i) assert(child.fields[i] == low.fields[i]);

    MissionFleet_SelectAndCopyMetadata(&receiver, &manager, 0);
    assert(child.selected == &high);
    for (int i = 0; i != 6; ++i) assert(child.fields[i] == high.fields[i]);
}

void checkGatesAndPreservedFields() {
    MissionFleetMetadataEntry stale{{9, 9, 9, 9, 9, 9}};
    MissionFleetMetadataChild child{&stale, {7, 7, 7, 7, 7, 7}};
    MissionFleetMetadataReceiver receiver{&child};
    MissionFleetMetadataManager manager{0x20A, nullptr};

    MissionFleet_SelectAndCopyMetadata(&receiver, nullptr, 0);
    assert(child.selected == &stale && child.fields[0] == 7);
    MissionFleet_SelectAndCopyMetadata(&receiver, &manager, 0);
    assert(child.selected == nullptr && child.fields[0] == 7);

    child.selected = &stale;
    manager.count = 0x20B;
    MissionFleet_SelectAndCopyMetadata(&receiver, &manager, 0);
    assert(child.selected == nullptr && child.fields[5] == 7);

    receiver.child = nullptr;
    child.selected = &stale;
    MissionFleet_SelectAndCopyMetadata(&receiver, &manager, 0);
    assert(child.selected == &stale);
}

}  // namespace

int main() {
    checkCopies();
    checkGatesAndPreservedFields();
    std::cout << "two-index metadata copy: passed\n";
}
