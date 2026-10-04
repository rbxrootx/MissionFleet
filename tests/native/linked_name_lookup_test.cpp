#include "../../src/client-current/semantic/LinkedNameLookup.h"

#include <cassert>
#include <cstring>
#include <iostream>

namespace {

struct CompareLog {
    int calls = 0;
    const char* lastQuery = nullptr;
    const char* lastCandidate = nullptr;
};

int compare(const char* query, const char* candidate,
            void* context) noexcept {
    auto& log = *static_cast<CompareLog*>(context);
    ++log.calls;
    log.lastQuery = query;
    log.lastCandidate = candidate;
    return std::strcmp(query, candidate);
}

void globalSelection() {
    MissionFleetNameNode second{"Bravo", nullptr};
    MissionFleetNameNode first{"Alpha", &second};
    MissionFleetNameNode stale{"Old", nullptr};
    MissionFleetNameManager manager{nullptr};
    MissionFleetNameSelection receiver{&stale};

    MissionFleet_SelectGlobalName(&receiver, &manager, "Alpha");
    assert(receiver.selected == &stale);  // Empty list preserves selection.
    manager.head = &first;
    MissionFleet_SelectGlobalName(&receiver, &manager, nullptr);
    assert(receiver.selected == &stale);  // Null query also preserves it.
    MissionFleet_SelectGlobalName(&receiver, &manager, "Bravo");
    assert(receiver.selected == &second);
    MissionFleet_SelectGlobalName(&receiver, &manager, "Missing");
    assert(receiver.selected == nullptr);  // Nonempty miss clears it.
}

void receiverLookup() {
    MissionFleetNameNode second{"Bravo", nullptr};
    MissionFleetNameNode first{"Alpha", &second};
    CompareLog log;
    assert(MissionFleet_FindReceiverName(nullptr, "Alpha", compare, &log) == nullptr);
    assert(log.calls == 0);
    assert(MissionFleet_FindReceiverName(&first, "Bravo", compare, &log) == &second);
    assert(log.calls == 2 && std::strcmp(log.lastQuery, "Bravo") == 0);
    assert(std::strcmp(log.lastCandidate, "Bravo") == 0);
    assert(MissionFleet_FindReceiverName(&first, "Missing", compare, &log) == nullptr);
    assert(log.calls == 4);
}

}  // namespace

int main() {
    globalSelection();
    receiverLookup();
    std::cout << "linked name lookup: passed\n";
}
