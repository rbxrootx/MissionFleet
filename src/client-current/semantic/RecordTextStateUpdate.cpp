#include "RecordTextStateUpdate.h"

std::uint32_t missionFleetUpdateRecordTextState(
    MissionFleetRecordTextState& receiver, std::uint32_t first,
    std::uint32_t second, const unsigned char* record,
    MissionFleetCopyRecordText copy, MissionFleetRecordTextReady ready,
    void* context) noexcept {
    if (first != 0 || second != 0) {
        copy(receiver.textChild, record + 0x0c, context);
    }
    receiver.pending = 1;
    if ((receiver.flags & 0x1f00u) == 0x0500u) {
        return ready(&receiver, context);
    }
    return 0x1f00u;
}
