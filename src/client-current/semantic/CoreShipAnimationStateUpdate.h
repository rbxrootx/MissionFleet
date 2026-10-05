#pragma once

#include "CoreShipAnimationFrameDraw.h"

#include <cstdint>

struct MissionFleetCoreShipAnimationUpdateChild;

using MissionFleetCoreShipAnimationChildUpdate = void (*)(
    MissionFleetCoreShipAnimationUpdateChild& child,
    void* userData);

// Portable view of the child objects reached through the derived node's
// circular update list at +0x3C. This is not the original ABI declaration.
struct MissionFleetCoreShipAnimationUpdateChild {
    std::uint32_t firstWord;
    MissionFleetCoreShipAnimationUpdateChild* next3C;
    MissionFleetCoreShipAnimationChildUpdate updateSlot0C;
    void* userData;
};

// Fields directly read or written by Core.dll!0x58534B00,
// 0x58534D30, and 0x58534E80. Descriptive names remain semantic labels.
struct MissionFleetCoreShipAnimationStateNode {
    std::uint16_t flags24;
    std::int32_t positionX04;
    std::int32_t positionY08;
    std::int32_t frameCounter50;
    std::int32_t direction58;
    std::int32_t transitionState5C;
    const MissionFleetCoreShipAnimationView* animation54;
    void* optionalObject64;
    void* optionalObject68;
    MissionFleetCoreShipAnimationUpdateChild* firstChild3C;
};

using MissionFleetCoreShipAnimationSlot8 = void (*)(
    void* object,
    void* userData);

using MissionFleetCoreShipAnimationCoordinateHelper = void (*)(
    void* object,
    std::int32_t x,
    std::int32_t y,
    std::uint32_t selector,
    void* userData);

// selector58962090 is supplied by the emulator for the mapped global at
// 0x58962090. The downstream meaning of that selector and the optional object
// types are not established by the current evidence.
struct MissionFleetCoreShipAnimationStateHooks {
    std::uint32_t selector58962090;
    MissionFleetCoreShipAnimationSlot8 callSlot8;
    MissionFleetCoreShipAnimationCoordinateHelper callCoordinateHelper;
    void* userData;
};

struct MissionFleetCoreShipAnimationUpdateOutcome {
    std::int32_t counterBefore;
    std::int32_t counterAfter;
    std::int32_t stateBefore;
    std::int32_t stateAfter;
    std::uint32_t childUpdates;
    bool skippedByFlag;
    bool advancedCounter;
    bool reachedForwardEndpoint;
    bool reachedReverseEndpoint;
    bool clearedInvalidChildHead;
    bool stoppedAtInvalidChild;
};

// Exact field writes from Core.dll!0x58534D30.
void missionFleetResetCoreShipAnimationState(
    MissionFleetCoreShipAnimationStateNode& node);

// Semantic port of Core.dll!0x58534E80. A zero argument starts reverse
// playback; any nonzero value starts forward playback. Optional object +0x64
// dispatch remains behind the captured slot/helper callbacks above.
void missionFleetStartCoreShipAnimationTransition(
    MissionFleetCoreShipAnimationStateNode& node,
    std::int32_t directionArgument,
    const MissionFleetCoreShipAnimationStateHooks& hooks);

// Semantic port of Core.dll!0x58534B00. Counter transitions and the circular
// child-update walk follow the mapped callback order. The child list is
// assumed to be well formed and circular, as the native function assumes.
MissionFleetCoreShipAnimationUpdateOutcome
missionFleetUpdateCoreShipAnimationState(
    MissionFleetCoreShipAnimationStateNode& node,
    const MissionFleetCoreShipAnimationStateHooks& hooks);
