#include "EightSlotNodeCleanup.h"

extern "C" void MissionFleet_CleanupEightNodeSlots(
    MissionFleetCleanupSlot* slots,
    MissionFleetCleanupCallbacks callbacks) noexcept {
    for (int index = 0; index != 8; ++index) {
        MissionFleetCleanupSlot& slot = slots[index];
        for (MissionFleetCleanupNode* node = slot.head; node != nullptr;
             node = node->next) {
            callbacks.visitPayload(node->payload, callbacks.context);
        }

        // The original code reloads the slot head for the second pass.
        for (MissionFleetCleanupNode* node = slot.head; node != nullptr;) {
            MissionFleetCleanupNode* next = node->next;
            callbacks.releaseNode(node, 1, callbacks.context);
            node = next;
        }
        slot.head = nullptr;
        slot.field4 = 0;
        slot.field8 = 0;
    }
}
