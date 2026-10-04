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

struct CountedVisit {
    MissionFleetCountedChildList* list;
    std::vector<MissionFleetLinkedChildNode*> nodes;
};

void releaseCountedNode(MissionFleetLinkedChildNode* node, int one, void* context) {
    auto& visit = *static_cast<CountedVisit*>(context);
    assert(one == 1);
    assert(visit.list->field140 != nullptr); // Clear follows callback.
    visit.nodes.push_back(node);
    node->previous = nullptr; // The saved link controls the next iteration.
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

    // The sibling function preserves everything when count is nonpositive,
    // even if the tail points at a node.
    MissionFleetCountedChildList inactive{&first, &second,
                                          reinterpret_cast<void*>(1), 0};
    CountedVisit inactiveVisit{&inactive, {}};
    missionFleetTeardownCountedChildren(inactive, releaseCountedNode,
                                        &inactiveVisit);
    assert(inactiveVisit.nodes.empty());
    assert(inactive.head == &first && inactive.tail == &second);
    assert(inactive.field140 == reinterpret_cast<void*>(1));

    inactive.count = -1;
    missionFleetTeardownCountedChildren(inactive, releaseCountedNode,
                                        &inactiveVisit);
    assert(inactiveVisit.nodes.empty());
    assert(inactive.head == &first && inactive.tail == &second);
    assert(inactive.field140 == reinterpret_cast<void*>(1) && inactive.count == -1);

    MissionFleetCountedChildList missingTail{&first, nullptr,
                                             reinterpret_cast<void*>(1), 2};
    CountedVisit missingVisit{&missingTail, {}};
    missionFleetTeardownCountedChildren(missingTail, releaseCountedNode,
                                        &missingVisit);
    assert(missingVisit.nodes.empty());
    assert(missingTail.head == &first && missingTail.count == 2);
    assert(missingTail.field140 == reinterpret_cast<void*>(1));

    second.previous = &first;
    MissionFleetCountedChildList bounded{&first, &second,
                                         reinterpret_cast<void*>(1), 1};
    CountedVisit boundedVisit{&bounded, {}};
    missionFleetTeardownCountedChildren(bounded, releaseCountedNode,
                                        &boundedVisit);
    assert((boundedVisit.nodes == std::vector<MissionFleetLinkedChildNode*>{&second}));
    assert(bounded.head == nullptr && bounded.tail == nullptr && bounded.count == 0);
    assert(bounded.field140 == nullptr);

    second.previous = &first;
    MissionFleetCountedChildList exhaustive{&first, &second,
                                            reinterpret_cast<void*>(1), 3};
    CountedVisit exhaustiveVisit{&exhaustive, {}};
    missionFleetTeardownCountedChildren(exhaustive, releaseCountedNode,
                                        &exhaustiveVisit);
    assert((exhaustiveVisit.nodes == std::vector<MissionFleetLinkedChildNode*>{&second, &first}));
    assert(exhaustive.head == nullptr && exhaustive.tail == nullptr);
    assert(exhaustive.field140 == nullptr && exhaustive.count == 0);
}
