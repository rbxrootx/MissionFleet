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

void dualReceiverHeadsStayDistinct() {
    MissionFleetNameNode low{"Alpha", nullptr};
    MissionFleetNameNode high{"Bravo", nullptr};
    MissionFleetDualNameLists lists{&low, &high};
    CompareLog log;
    assert(MissionFleet_FindNameAt64(&lists, "Alpha", compare, &log) == &low);
    assert(MissionFleet_FindNameAt6C(&lists, "Bravo", compare, &log) == &high);
    assert(log.calls == 2);
    assert(MissionFleet_FindNameAt64(&lists, "Bravo", compare, &log) == nullptr);
    assert(MissionFleet_FindNameAt6C(&lists, "Alpha", compare, &log) == nullptr);
    assert(log.calls == 4);
}

void tokenReceiverHeadsStayDistinct() {
    MissionFleetNameNode low{"Port", nullptr};
    MissionFleetNameNode high{"Starboard", nullptr};
    MissionFleetTokenNameLists lists{&low, &high};
    CompareLog log;
    assert(MissionFleet_FindNameAt130(&lists, "Port", compare, &log) == &low);
    assert(MissionFleet_FindNameAt138(&lists, "Starboard", compare, &log) == &high);
    assert(log.calls == 2);
    assert(MissionFleet_FindNameAt130(&lists, "Starboard", compare, &log) == nullptr);
    assert(MissionFleet_FindNameAt138(&lists, "Port", compare, &log) == nullptr);
    assert(log.calls == 4);
    lists.at130 = nullptr;
    assert(MissionFleet_FindNameAt130(&lists, "Port", compare, &log) == nullptr);
    assert(log.calls == 4);
}

}  // namespace

int main() {
    globalSelection();
    receiverLookup();
    dualReceiverHeadsStayDistinct();
    tokenReceiverHeadsStayDistinct();
    std::cout << "linked name lookup: passed\n";
}
