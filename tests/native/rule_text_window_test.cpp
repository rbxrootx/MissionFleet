#include "../../src/client-current/semantic/RuleTextWindow.h"

#include <cassert>
#include <iostream>
#include <string>

namespace {

struct Recorder {
    void* display;
    const char* lastText = nullptr;
    int calls = 0;
};

void setText(void* display, const char* text, void* context) noexcept {
    auto& recorder = *static_cast<Recorder*>(context);
    assert(display == recorder.display);
    recorder.lastText = text;
    ++recorder.calls;
}

void forwardThresholdAndBackwardClamp() {
    std::string text(0x545 + 0x47, 'x');
    int displayObject = 0;
    MissionFleetRuleTextWindow window{text.c_str(), text.c_str(), &displayObject};
    Recorder recorder{&displayObject};
    MissionFleetRuleTextCallbacks callbacks{setText, &recorder};

    MissionFleet_RuleTextForward(&window, callbacks);
    assert(window.current == window.base + 0x47 && recorder.calls == 1);
    assert(recorder.lastText == window.current);

    // Exactly 0x545 bytes remain, so a second step is permitted.
    MissionFleet_RuleTextForward(&window, callbacks);
    assert(window.current == window.base + 0x8E && recorder.calls == 2);

    // Now fewer than 0x545 bytes remain: still refresh, no advancement.
    MissionFleet_RuleTextForward(&window, callbacks);
    assert(window.current == window.base + 0x8E && recorder.calls == 3);

    MissionFleet_RuleTextBackward(&window, callbacks);
    assert(window.current == window.base + 0x47);
    MissionFleet_RuleTextBackward(&window, callbacks);
    assert(window.current == window.base);
    window.current = window.base + 12;
    MissionFleet_RuleTextBackward(&window, callbacks);
    assert(window.current == window.base && recorder.calls == 6);
}

void nullGates() {
    std::string text(0x600, 'y');
    int displayObject = 0;
    Recorder recorder{&displayObject};
    MissionFleetRuleTextCallbacks callbacks{setText, &recorder};
    MissionFleetRuleTextWindow window{nullptr, text.c_str(), &displayObject};
    MissionFleet_RuleTextBackward(&window, callbacks);
    MissionFleet_RuleTextForward(&window, callbacks);
    assert(recorder.calls == 0);
    window.base = text.c_str();
    window.current = nullptr;
    MissionFleet_RuleTextBackward(&window, callbacks);
    MissionFleet_RuleTextForward(&window, callbacks);
    assert(recorder.calls == 0);
}

}  // namespace

int main() {
    forwardThresholdAndBackwardClamp();
    nullGates();
    std::cout << "rule text window: passed\n";
}
