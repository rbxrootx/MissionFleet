#include "../../src/client-current/semantic/LinkedChildTeardown.h"

#include <cassert>
#include <vector>

namespace {
struct Visit {
    MissionFleetLinkedChildList* list;
    std::vector<MissionFleetLinkedChildNode*> nodes;
    std::vector<bool> field144Visible;
};

void releaseNode(MissionFleetLinkedChildNode* node, int one, void* context) {
    auto& visit = *static_cast<Visit*>(context);
    assert(one == 1);
    visit.nodes.push_back(node);
    visit.field144Visible.push_back(visit.list->field144 != nullptr);
    node->previous = nullptr; // Proves that traversal uses the saved link.
}
}

int main() {
    MissionFleetLinkedChildList empty{nullptr, nullptr,
                                      reinterpret_cast<void*>(1), 7};
    Visit emptyVisit{&empty, {}, {}};
    assert(missionFleetTeardownLinkedChildren(empty, releaseNode, &emptyVisit) == 0);
    assert(empty.head == nullptr && empty.tail == nullptr && empty.count == 0);
    assert(empty.field144 == reinterpret_cast<void*>(1));
    assert(emptyVisit.nodes.empty());

    MissionFleetLinkedChildNode first{nullptr};
    MissionFleetLinkedChildNode second{&first};
    MissionFleetLinkedChildList early{&first, &second,
                                      reinterpret_cast<void*>(1), 1};
    Visit earlyVisit{&early, {}, {}};
    assert(missionFleetTeardownLinkedChildren(early, releaseNode, &earlyVisit) == 0);
    assert((earlyVisit.nodes == std::vector<MissionFleetLinkedChildNode*>{&second, &first}));
    assert((earlyVisit.field144Visible == std::vector<bool>{true, false}));
    assert(early.head == nullptr && early.tail == nullptr && early.count == 0);
    assert(early.field144 == nullptr);

    second.previous = &first;
    MissionFleetLinkedChildList last{&first, &second,
                                     reinterpret_cast<void*>(1), -1};
    Visit lastVisit{&last, {}, {}};
    assert(missionFleetTeardownLinkedChildren(last, releaseNode, &lastVisit) == 0);
    assert((lastVisit.field144Visible == std::vector<bool>{true, true}));
    assert(last.field144 == nullptr);
}
