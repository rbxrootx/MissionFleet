#include "PairedRecordText.h"

namespace {
void updatePair(void* firstChild, void* secondChild,
                const unsigned char* record, const char* fallback,
                MissionFleetCopyPairedText copy, void* context) noexcept {
    const char* first = record != nullptr
        ? reinterpret_cast<const char*>(record + 0x2d) : fallback;
    const char* second = record != nullptr
        ? reinterpret_cast<const char*>(record + 0x0c) : fallback;
    copy(firstChild, first, context);
    copy(secondChild, second, context);
}
}

void missionFleetUpdateFirstRecordTextPair(
    const MissionFleetPairedRecordTextReceiver& receiver,
    const unsigned char* record, const char* fallback,
    MissionFleetCopyPairedText copy, void* context) noexcept {
    updatePair(receiver.child6C, receiver.child70, record, fallback, copy, context);
}

void missionFleetUpdateSecondRecordTextPair(
    const MissionFleetPairedRecordTextReceiver& receiver,
    const unsigned char* record, const char* fallback,
    MissionFleetCopyPairedText copy, void* context) noexcept {
    updatePair(receiver.child74, receiver.child78, record, fallback, copy, context);
}
