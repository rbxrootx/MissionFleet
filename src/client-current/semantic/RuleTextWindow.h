#pragma once

// Portable normal-path model for FUN_588AA0D0 and FUN_588AA120.
// Pointers must refer to the same live, NUL-terminated byte buffer.
struct MissionFleetRuleTextWindow {
    const char* base;     // Original receiver +0xA0.
    const char* current;  // Original receiver +0xA4.
    void* display;        // Original receiver +0xA8.
};

struct MissionFleetRuleTextCallbacks {
    void (*setText)(void* display, const char* text, void* context) noexcept;
    void* context;
};

extern "C" void MissionFleet_RuleTextBackward(
    MissionFleetRuleTextWindow* window,
    MissionFleetRuleTextCallbacks callbacks) noexcept;
extern "C" void MissionFleet_RuleTextForward(
    MissionFleetRuleTextWindow* window,
    MissionFleetRuleTextCallbacks callbacks) noexcept;
