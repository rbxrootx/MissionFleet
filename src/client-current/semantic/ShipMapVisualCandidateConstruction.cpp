#include "ShipMapVisualCandidateConstruction.h"

#include <cstring>
#include <stdexcept>

namespace {
std::int32_t signedWord(std::uint16_t bits) {
    std::int16_t value;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

void insertCircular(MissionFleetShipMapVisualNodeListOwner& owner,
                    MissionFleetShipMapVisualNode& child) {
    auto* const head = owner.circularHead3C;
    if (head == nullptr) {
        owner.circularHead3C = &child;
        child.owner30 = &owner;
        return;
    }

    const std::int32_t childKey = signedWord(child.word26);
    auto* current = head;
    do {
        if (signedWord(current->word26) > childKey) {
            auto* const previous = current->previous34;
            child.previous34 = previous;
            child.next38 = current;
            previous->next38 = &child;
            current->previous34 = &child;
            if (current == head) {
                owner.circularHead3C = &child;
            }
            child.owner30 = &owner;
            return;
        }
        current = current->next38;
    } while (current != head);

    // No greater key exists: insert at the end, immediately before the head.
    auto* const tail = head->previous34;
    child.previous34 = tail;
    child.next38 = head;
    tail->next38 = &child;
    head->previous34 = &child;
    child.owner30 = &owner;
}

void insertLinear(MissionFleetShipMapVisualNodeListOwner& owner,
                  MissionFleetShipMapVisualNode& child) {
    auto* current = owner.linearHead4C;
    if (current == nullptr) {
        owner.linearHead4C = &child;
        child.previous44 = nullptr;
        child.next48 = nullptr;
        child.owner40 = &owner;
        return;
    }

    const std::int32_t childKey = signedWord(child.word26);
    while (current != nullptr && signedWord(current->word26) <= childKey) {
        current = current->next48;
    }

    if (current == nullptr) {
        auto* tail = owner.linearHead4C;
        while (tail->next48 != nullptr) {
            tail = tail->next48;
        }
        tail->next48 = &child;
        child.previous44 = tail;
        child.next48 = nullptr;
    } else {
        auto* const previous = current->previous44;
        child.previous44 = previous;
        child.next48 = current;
        current->previous44 = &child;
        if (previous == nullptr) {
            owner.linearHead4C = &child;
        } else {
            previous->next48 = &child;
        }
    }
    child.owner40 = &owner;
}

void initializeNodeBase(MissionFleetShipMapVisualNode& node,
                        MissionFleetShipMapVisualNodeListOwner* owner,
                        std::uint32_t x04, std::uint32_t y08,
                        std::uint32_t right1C, std::uint32_t bottom20,
                        std::uint16_t word26) {
    node.vtable00 = 0x589A24E4u;
    node.value04 = x04;
    node.value08 = y08;
    node.copiedFields0CTo20[0] = 0;
    node.copiedFields0CTo20[1] = 0;
    node.copiedFields0CTo20[2] = 0;
    node.copiedFields0CTo20[3] = 0;
    node.copiedFields0CTo20[4] = right1C - x04;
    node.copiedFields0CTo20[5] = bottom20 - y08;

    // FUN_589031A0's OR/AND sequence has this constant result, independent
    // of the allocator's prior contents; avoid reading uninitialized storage.
    node.flags24 = 0xE00Fu;
    node.word26 = word26;
    node.value28 = 0x100u;
    node.mode2C = 0;
    node.owner30 = nullptr;
    node.previous34 = &node;
    node.next38 = &node;
    node.firstChild3C = nullptr;
    node.owner40 = nullptr;
    node.previous44 = nullptr;
    node.next48 = nullptr;
    node.firstChild4C = nullptr;

    if (owner != nullptr) {
        insertCircular(*owner, node);
        insertLinear(*owner, node);
    }
}

void initializeBaseAndRecord(MissionFleetShipMapVisualNode& node,
                             MissionFleetShipMapVisualNodeListOwner* owner,
                             const std::uint8_t* resourceRecord,
                             std::uint32_t x04, std::uint32_t y08,
                             std::uint16_t word26) {
    // FUN_58734A30 forwards these bounds and arguments to FUN_589031A0.
    initializeNodeBase(node, owner, x04, y08, 0, 0, word26);
    node.vtable00 = 0x5898CA74u;
    node.counter50 = 0;
    node.record54 = resourceRecord;
    if (resourceRecord != nullptr) {
        std::memcpy(node.copiedFields0CTo20, resourceRecord + 0x18,
                    sizeof(node.copiedFields0CTo20));
    }
}
}

MissionFleetShipMapVisualNode* missionFleetConstructShipMapVisualCandidate(
    MissionFleetShipMapVisualNode& storage,
    MissionFleetShipMapVisualNodeListOwner* owner,
    const std::uint8_t* resourceRecord, std::uint32_t x04,
    std::uint32_t y08, std::uint16_t word26) {
    initializeBaseAndRecord(storage, owner, resourceRecord, x04, y08,
                            word26);

    // FUN_58907C80 installs the derived object's vtable after the base helper.
    storage.vtable00 = 0x589A2988u;
    return &storage;
}

MissionFleetShipMapVisualNode* missionFleetConstructShipMapVisualSecondary(
    MissionFleetShipMapVisualNode& storage,
    MissionFleetShipMapVisualNodeListOwner* owner,
    const std::uint8_t* resourceRecord, std::uint32_t x04,
    std::uint32_t y08, std::uint16_t word26,
    MissionFleetShipMapVisualRand randFunction, void* context) {
    initializeBaseAndRecord(storage, owner, resourceRecord, x04, y08,
                            word26);

    // The mapped constructor writes this derived vtable and repeats the base
    // fields before copying the six record DWORDs a second time.
    storage.vtable00 = 0x58996B40u;
    storage.counter50 = 0;
    storage.record54 = resourceRecord;

    std::uint16_t divisorBits = 0;
    if (resourceRecord != nullptr) {
        std::memcpy(storage.copiedFields0CTo20, resourceRecord + 0x18,
                    sizeof(storage.copiedFields0CTo20));
        std::memcpy(&divisorBits, resourceRecord + 0x0C,
                    sizeof(divisorBits));
    }
    if (divisorBits == 0) {
        // The client executes x86 DIV with this zero divisor and raises a
        // divide error before calling rand() or writing the trailing fields.
        throw std::domain_error(
            "FUN_58789040 divides by the zero word at record +0x0C");
    }

    storage.value64 = 0x80 / static_cast<std::int32_t>(divisorBits);
    const std::int32_t randomValue =
        randFunction != nullptr ? randFunction(context) : 0;
    storage.value60 = -3;
    storage.value5C = 1;
    storage.value58 = 0;
    storage.mode2C = 0xFFFFFEFFu;
    storage.value64 += randomValue % 6;
    storage.flags24 = static_cast<std::uint16_t>(storage.flags24 & 0xBFFFu);
    storage.flags24 = static_cast<std::uint16_t>(storage.flags24 & 0xDFFFu);
    return &storage;
}
