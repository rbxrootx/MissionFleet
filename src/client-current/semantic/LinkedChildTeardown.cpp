#include "LinkedChildTeardown.h"

int missionFleetTeardownLinkedChildren(MissionFleetLinkedChildList& list,
                                       MissionFleetReleaseLinkedChild release,
                                       void* context) {
    auto* node = list.tail;
    int visited = 0;
    while (node != nullptr) {
        // The original reads +0x50 before the virtual release callback.
        auto* previous = node->previous;
        release(node, 1, context);
        ++visited;
        if (previous == nullptr || visited == list.count) {
            list.field144 = nullptr;
            list.tail = nullptr;
            list.head = nullptr;
            list.count = 0;
        }
        node = previous;
    }
    list.tail = nullptr;
    list.head = nullptr;
    list.count = 0;
    return 0;
}
