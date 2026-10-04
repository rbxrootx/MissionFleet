#pragma once

// Portable normal-path models of Main.dll FUN_588338e0 and FUN_58833930.
// The fields name observed offsets, not a recovered complete class layout.
struct MissionFleetPairedRecordTextReceiver {
    void* child6C;
    void* child70;
    void* child74;
    void* child78;
};

using MissionFleetCopyPairedText =
    void (*)(void* child, const char* text, void* context) noexcept;

void missionFleetUpdateFirstRecordTextPair(
    const MissionFleetPairedRecordTextReceiver& receiver,
    const unsigned char* record, const char* fallback,
    MissionFleetCopyPairedText copy, void* context) noexcept;
void missionFleetUpdateSecondRecordTextPair(
    const MissionFleetPairedRecordTextReceiver& receiver,
    const unsigned char* record, const char* fallback,
    MissionFleetCopyPairedText copy, void* context) noexcept;
