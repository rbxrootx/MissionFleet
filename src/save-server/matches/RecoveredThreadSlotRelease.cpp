// Release a slot across every thread record while holding the manager lock.
// Delete each stored object, clear its entry, then mark the slot unallocated.
struct RecoveredThreadEntry00543457 {
    int reserved;
    RecoveredThreadEntry00543457 *next;
    int count;
    void **values;
};
class RecoveredOwnedSlotObject00543457 {
public:
    virtual ~RecoveredOwnedSlotObject00543457();
};
class RecoveredThreadList00543457 {
public:
    RecoveredThreadEntry00543457 *Head();
};
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *);
extern "C" char File00676984;
extern "C" int __stdcall Assert00528D40(const char *, int);
class RecoveredThreadSlots00543BAE {
    int tlsIndex;
    int reserved1;
    int nextSlot;
    int slotCount;
    unsigned __int64 *slots;
    RecoveredThreadList00543457 threads;
    unsigned char criticalSection[24];
public:
    void Release(int slot);
};
void RecoveredThreadSlots00543BAE::Release(int slot)
{
    EnterCriticalSection(criticalSection);
    do {
        if ((slot == 0 || slot >= slotCount) &&
            Assert00528D40(&File00676984, 0xe5))
            __asm int 3
    } while (0);
    do {
        if (slots == 0 && Assert00528D40(&File00676984, 0xe6))
            __asm int 3
    } while (0);
    do {
        if ((slots[slot] & 1) == 0 &&
            Assert00528D40(&File00676984, 0xe7))
            __asm int 3
    } while (0);
    for (RecoveredThreadEntry00543457 *entry = threads.Head();
         entry != 0; entry = entry->next) {
        if (slot < entry->count) {
            RecoveredOwnedSlotObject00543457 *object =
                static_cast<RecoveredOwnedSlotObject00543457 *>(entry->values[slot]);
            if (object != 0)
                delete object;
            entry->values[slot] = 0;
        }
    }
    slots[slot] &= ~1UL;
    LeaveCriticalSection(criticalSection);
}
