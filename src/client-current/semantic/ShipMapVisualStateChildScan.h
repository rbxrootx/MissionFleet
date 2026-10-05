#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

struct MissionFleetShipMapVisualCandidateEntry {
    std::uint32_t value04 = 0;
    std::uint32_t value08 = 0;
    std::uint16_t word26 = 0;
};

// Evidence-backed control-flow model for phase 0x040000 in
// Main.dll FUN_588DB610. Fields retain source offsets where meanings are open.
struct MissionFleetShipMapVisualStateChildScan {
    std::uint32_t state60B0 = 0;
    std::uint32_t gateValue60B4 = 0;
    std::uint32_t counter6058 = 0; // raw bits; native comparisons are signed
    std::uint16_t word164 = 0;
    std::uint32_t objectX4 = 0;
    std::uint32_t objectY8 = 0;
    std::uint32_t referenceX50 = 0;
    std::uint32_t referenceY54 = 0;
    bool selectedByGlobal58A247F8 = false;
    std::array<const MissionFleetShipMapVisualCandidateEntry*, 32> entries17C{};
};

struct MissionFleetShipMapVisualStateChildScanHooks {
    // FUN_587E5A60 is called with the single observed argument 0x19.
    void (*notify587E5A60)(std::uint32_t argument, void* context) = nullptr;
    // The indirect call at 0x588DB6A1 gates the scan by signed remainder / 3.
    std::int32_t (*sampleIndirectState5897CC36)(
        MissionFleetShipMapVisualStateChildScan& receiver, void* context) = nullptr;
    // The no-stack-argument thunk at 0x588DB6E4 is used only through bit 0.
    // Entry/index are test-adapter context; the thunk's runtime receiver/target
    // is still unresolved from the mapped callsite.
    std::uint32_t (*entryGate5897CC36)(
        MissionFleetShipMapVisualStateChildScan& receiver,
        const MissionFleetShipMapVisualCandidateEntry& entry,
        std::size_t index, void* context) = nullptr;
    // Models the opaque construction/update block after an entry passes its
    // low-bit gate. The block includes runtime-resolved callbacks.
    void* (*processCandidate)(MissionFleetShipMapVisualStateChildScan& receiver,
                              const MissionFleetShipMapVisualCandidateEntry& entry,
                              std::size_t index, void* context) = nullptr;
    // Runs only when the last produced candidate pointer remains non-null and
    // +0x164 is still zero after the scan.
    void (*processLastCandidate)(MissionFleetShipMapVisualStateChildScan& receiver,
                                 void* candidate, void* context) = nullptr;
};

enum class MissionFleetShipMapVisualStateChildScanResult {
    IgnoredPhase,
    WaitingForGate,
    ScanDeferred,
    ScanCompleted,
    AdvancedToSetup,
};

MissionFleetShipMapVisualStateChildScanResult missionFleetScanShipMapVisualStateChildren(
    MissionFleetShipMapVisualStateChildScan& state,
    const MissionFleetShipMapVisualStateChildScanHooks& hooks, void* context);
