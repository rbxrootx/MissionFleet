#include "LinkedNameLookup.h"

#include <cstring>

extern "C" void MissionFleet_SelectGlobalName(
    MissionFleetNameSelection* receiver,
    const MissionFleetNameManager* manager,
    const char* query) noexcept {
    if (query == nullptr || manager->head == nullptr) return;
    for (MissionFleetNameNode* node = manager->head; node != nullptr;
         node = node->next) {
        if (std::strcmp(node->name, query) == 0) {
            receiver->selected = node;
            return;
        }
        receiver->selected = nullptr;
    }
}

extern "C" MissionFleetNameNode* MissionFleet_FindReceiverName(
    MissionFleetNameNode* head,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept {
    for (MissionFleetNameNode* node = head; node != nullptr;
         node = node->next) {
        if (compare(query, node->name, context) == 0) return node;
    }
    return nullptr;
}

extern "C" MissionFleetNameNode* MissionFleet_FindNameAt64(
    const MissionFleetDualNameLists* receiver,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept {
    return MissionFleet_FindReceiverName(receiver->at64, query, compare, context);
}

extern "C" MissionFleetNameNode* MissionFleet_FindNameAt6C(
    const MissionFleetDualNameLists* receiver,
    const char* query,
    MissionFleetNameCompare compare,
    void* context) noexcept {
    return MissionFleet_FindReceiverName(receiver->at6C, query, compare, context);
}
