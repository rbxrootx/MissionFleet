#include "TwoIndexMetadataCopy.h"

extern "C" void MissionFleet_SelectAndCopyMetadata(
    MissionFleetMetadataReceiver* receiver,
    MissionFleetMetadataManager* manager,
    std::int32_t selector) noexcept {
    MissionFleetMetadataChild* child = receiver->child;
    if (child == nullptr || manager == nullptr) return;

    const std::int32_t index = selector == 0 ? 0x20A : 0x209;
    MissionFleetMetadataEntry* entry = nullptr;
    if (manager->count > index && manager->table != nullptr) {
        entry = manager->table[index];
    }
    child->selected = entry;
    if (entry == nullptr) return;

    for (int field = 0; field != 6; ++field) {
        child->fields[field] = entry->fields[field];
    }
}
