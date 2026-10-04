#include "RuleTextWindow.h"

#include <cstring>

namespace {

constexpr std::size_t kStep = 0x47;
constexpr std::size_t kForwardThreshold = 0x545;

}  // namespace

extern "C" void MissionFleet_RuleTextBackward(
    MissionFleetRuleTextWindow* window,
    MissionFleetRuleTextCallbacks callbacks) noexcept {
    if (window->base == nullptr || window->current == nullptr) return;
    // For valid pointers inside one buffer, this is the original unsigned
    // comparison of base with current-0x47 without pointer underflow.
    const std::size_t offset = static_cast<std::size_t>(window->current - window->base);
    window->current = offset < kStep ? window->base : window->current - kStep;
    callbacks.setText(window->display, window->current, callbacks.context);
}

extern "C" void MissionFleet_RuleTextForward(
    MissionFleetRuleTextWindow* window,
    MissionFleetRuleTextCallbacks callbacks) noexcept {
    if (window->base == nullptr || window->current == nullptr) return;
    if (std::strlen(window->current) >= kForwardThreshold) {
        window->current += kStep;
    }
    callbacks.setText(window->display, window->current, callbacks.context);
}
