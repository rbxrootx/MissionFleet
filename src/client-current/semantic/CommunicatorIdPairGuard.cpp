#include "CommunicatorIdPairGuard.h"

std::uint32_t missionFleetGuardCommunicatorIdPair(
    const MissionFleetCommunicatorIdPairReceiver& receiver,
    const void* first, const void* second,
    const MissionFleetCommunicatorIdPairHooks& hooks, void* context) {
    bool found = false;
    for (auto* node = receiver.head64; node != nullptr; node = node->next54) {
        if (node->first78 == first && node->second7C == second &&
            node->flag9E != 0) {
            found = true;
        }
    }
    if (found) return 0;
    void* ui = hooks.getMessageUi(context);
    return hooks.dispatchMessage(ui, 0x208, 0, 0, 0, context);
}
