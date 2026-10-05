#pragma once

#include "ShipMapVisualCandidateConstruction.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>

struct MissionFleetShipMapVisualCandidateEntry {
    std::uint32_t value04 = 0;
    std::uint32_t value08 = 0;
    std::uint16_t word26 = 0;
};

struct MissionFleetShipMapVisualProjection {
    std::int32_t left14 = 0;
    std::int32_t top18 = 0;
    std::int32_t right1C = 0;
    std::int32_t bottom20 = 0;
    std::int32_t scale114 = 1;
    std::int32_t referenceX50 = 0;
    std::int32_t referenceY54 = 0;
    std::uint32_t effectColor = 0;
};

struct MissionFleetShipMapProjectedPoint {
    std::uint32_t x = 0;
    std::uint32_t y = 0;
};

// MSVCR90.dll's rand() implementation used by the installed client. The
// caller owns the seed because the original stores this state per CRT thread
// and may change it through srand().
struct MissionFleetMsvc90RandState {
    std::uint32_t holdRand = 1;
};

std::int32_t missionFleetMsvc90Rand(MissionFleetMsvc90RandState& state);

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
    std::int16_t value42AC = 0;
    const std::uint8_t* resourceTable246F0 = nullptr;
    std::int32_t resourceTableCount246F0 = 0;
    const std::uint8_t* resourceTable246F4 = nullptr;
    std::int32_t resourceTableCount246F4 = 0;
    // Semantic views of the two owner objects passed to FUN_58907C80. Each
    // view models only the child heads at offsets +0x3C and +0x4C.
    MissionFleetShipMapVisualNodeListOwner ownerLists{};
    MissionFleetShipMapVisualNodeListOwner* globalRecord10524 = nullptr;
    MissionFleetShipMapVisualProjection projection{};
    const void* const* effectTargetTable31810 = nullptr;
    std::int32_t effectTargetCount31810 = 0;
    void* postScanEffectTarget604C = nullptr;
    std::uint16_t child60D8Word26 = 0;
    bool drawCandidateEffects589C8EDC = false;
    bool drawRouteEffect589C9040 = false;
    std::array<const MissionFleetShipMapVisualCandidateEntry*, 32> entries17C{};
};

struct MissionFleetShipMapVisualStateChildScanHooks {
    // FUN_587E5A60 is called with the single observed argument 0x19.
    void (*notify587E5A60)(std::uint32_t argument, void* context) = nullptr;
    // Both call sites at 0x588DB6A1 and 0x588DB6E4 resolve through
    // DAT_5898C1F0 to the zero-argument MSVCR90 rand() export.
    std::int32_t (*rand5897CC36)(void* context) = nullptr;
    // The native request is 0x58 bytes, but the host semantic node contains
    // host-width pointers. This adapter returns semantic storage for that
    // request; constructor behavior is modeled directly below.
    MissionFleetShipMapVisualNode* (*allocateCandidateStorage5897CC4E)(
        std::uint32_t nativeBytes, void* context) = nullptr;
    // DAT_5898C200 resolves to MSVCR90 operator new(unsigned int).
    void* (*operatorNew5897CC4E)(std::uint32_t bytes, void* context) = nullptr;
    // FUN_587B7400 receives this target with projected x/y and the observed
    // global effect color. The renderer's visual output remains external.
    void (*drawEffect587B7400)(void* target, std::uint32_t x,
                               std::uint32_t y, std::uint32_t color,
                               void* context) = nullptr;
    // FUN_58789040 constructs the 0x68-byte post-scan object. The model passes
    // the rand()%6 value consumed by its constructor.
    MissionFleetShipMapVisualNode* (*initializeSecondary58789040)(
        void* allocated, const void* constructionOwner,
        const std::uint8_t* selectedResourceRecord, std::uint32_t x04,
        std::uint32_t y08, std::uint16_t word26,
        std::uint32_t randomRemainder6, void* context) = nullptr;
    // FUN_588D7DC0 receives the final candidate coordinates and child frame.
    void (*drawRouteEffect588D7DC0)(
        MissionFleetShipMapVisualStateChildScan& receiver,
        std::uint32_t x04, std::uint32_t y08, std::uint32_t width,
        std::uint32_t height, std::uint32_t firstMode,
        std::uint32_t secondMode, std::uint16_t childFrame,
        void* context) = nullptr;
};

enum class MissionFleetShipMapVisualStateChildScanResult {
    IgnoredPhase,
    WaitingForGate,
    ScanDeferred,
    ScanCompleted,
    AdvancedToSetup,
    InvalidProjection,
};

std::optional<MissionFleetShipMapProjectedPoint> missionFleetProjectShipMapVisualPosition(
    const MissionFleetShipMapVisualProjection& projection,
    std::uint32_t objectX, std::uint32_t objectY);

MissionFleetShipMapVisualStateChildScanResult missionFleetScanShipMapVisualStateChildren(
    MissionFleetShipMapVisualStateChildScan& state,
    const MissionFleetShipMapVisualStateChildScanHooks& hooks, void* context);
