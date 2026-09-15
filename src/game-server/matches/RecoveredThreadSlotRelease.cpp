// Release a slot across every thread record while holding the manager lock.
// Delete each stored object, clear its entry, then mark the slot unallocated.
struct RecoveredThreadEntry005483B7 {
    int reserved;
    RecoveredThreadEntry005483B7 *next;
    int count;
    void **values;
};
class RecoveredOwnedSlotObject005483B7 {
public:
    virtual ~RecoveredOwnedSlotObject005483B7();
};
class RecoveredThreadList005483B7 {
public:
    RecoveredThreadEntry005483B7 *Head();
};
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *);
extern "C" char File005CA28C;
extern "C" int __stdcall Assert00534A00(const char *, int);
class RecoveredThreadSlots00548B0E {
    int tlsIndex;
    int reserved1;
    int nextSlot;
    int slotCount;
    unsigned __int64 *slots;
    RecoveredThreadList005483B7 threads;
    unsigned char criticalSection[24];
public:
    void Release(int slot);
};
void RecoveredThreadSlots00548B0E::Release(int slot)
{
    EnterCriticalSection(criticalSection);
    do {
        if ((slot == 0 || slot >= slotCount) &&
            Assert00534A00(&File005CA28C, 0xe5))
            __asm int 3
    } while (0);
    do {
        if (slots == 0 && Assert00534A00(&File005CA28C, 0xe6))
            __asm int 3
    } while (0);
    do {
        if ((slots[slot] & 1) == 0 &&
            Assert00534A00(&File005CA28C, 0xe7))
            __asm int 3
    } while (0);
    for (RecoveredThreadEntry005483B7 *entry = threads.Head();
         entry != 0; entry = entry->next) {
        if (slot < entry->count) {
            RecoveredOwnedSlotObject005483B7 *object =
                static_cast<RecoveredOwnedSlotObject005483B7 *>(entry->values[slot]);
            if (object != 0)
                delete object;
            entry->values[slot] = 0;
        }
    }
    slots[slot] &= ~1UL;
    LeaveCriticalSection(criticalSection);
}
