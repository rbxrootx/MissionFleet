"""Stage paired thread-slot release implementations; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    pairs = (("game-server", "005483b7", "00548B0E"),
             ("save-server", "00543457", "00543BAE"))
    for component, address, owner_address in pairs:
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 306]
        file_address = operand_target(code, int(address, 16),
                                      {"offset": 48, "kind": "absolute"})
        assert_address = operand_target(code, int(address, 16), {"offset": 53})
        head_address = operand_target(code, int(address, 16), {"offset": 155})
        class_name = f"RecoveredThreadSlots{owner_address}"
        list_name = f"RecoveredThreadList{address.upper()}"
        source = f"src/{component}/matches/RecoveredThreadSlotRelease.cpp"
        (ROOT / source).write_text(f'''// Release a slot across every thread record while holding the manager lock.
// Delete each stored object, clear its entry, then mark the slot unallocated.
struct RecoveredThreadEntry{address.upper()} {{
    int reserved;
    RecoveredThreadEntry{address.upper()} *next;
    int count;
    void **values;
}};
class RecoveredOwnedSlotObject{address.upper()} {{
public:
    virtual ~RecoveredOwnedSlotObject{address.upper()}();
}};
class {list_name} {{
public:
    RecoveredThreadEntry{address.upper()} *Head();
}};
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *);
extern "C" char File{file_address:08X};
extern "C" int __stdcall Assert{assert_address:08X}(const char *, int);
class {class_name} {{
    int tlsIndex;
    int reserved1;
    int nextSlot;
    int slotCount;
    unsigned __int64 *slots;
    {list_name} threads;
    unsigned char criticalSection[24];
public:
    void Release(int slot);
}};
void {class_name}::Release(int slot)
{{
    EnterCriticalSection(criticalSection);
    do {{
        if ((slot == 0 || slot >= slotCount) &&
            Assert{assert_address:08X}(&File{file_address:08X}, 0xe5))
            __asm int 3
    }} while (0);
    do {{
        if (slots == 0 && Assert{assert_address:08X}(&File{file_address:08X}, 0xe6))
            __asm int 3
    }} while (0);
    do {{
        if ((slots[slot] & 1) == 0 &&
            Assert{assert_address:08X}(&File{file_address:08X}, 0xe7))
            __asm int 3
    }} while (0);
    for (RecoveredThreadEntry{address.upper()} *entry = threads.Head();
         entry != 0; entry = entry->next) {{
        if (slot < entry->count) {{
            RecoveredOwnedSlotObject{address.upper()} *object =
                static_cast<RecoveredOwnedSlotObject{address.upper()} *>(entry->values[slot]);
            if (object != 0)
                delete object;
            entry->values[slot] = 0;
        }}
    }}
    slots[slot] &= ~1UL;
    LeaveCriticalSection(criticalSection);
}}
''', encoding="ascii")
        relocations = [
            {"offset": 21, "kind": "absolute", "symbol": "__imp__EnterCriticalSection@4"},
            {"offset": 48, "kind": "absolute", "symbol": f"_File{file_address:08X}"},
            {"offset": 53, "symbol": f"_Assert{assert_address:08X}@8"},
            {"offset": 83, "kind": "absolute", "symbol": f"_File{file_address:08X}"},
            {"offset": 88, "symbol": f"_Assert{assert_address:08X}@8"},
            {"offset": 128, "kind": "absolute", "symbol": f"_File{file_address:08X}"},
            {"offset": 133, "symbol": f"_Assert{assert_address:08X}@8"},
            {"offset": 155, "symbol": f"?Head@{list_name}@@QAEPAVRecoveredThreadEntry{address.upper()}@@XZ"},
            {"offset": 293, "kind": "absolute", "symbol": "__imp__LeaveCriticalSection@4"},
        ]
        records.append({
            "component": component, "address": address, "size": 306,
            "source": source, "symbol": f"?Release@{class_name}@@QAEXH@Z",
            "flags": ["/Od", "/GX-"], "relocations": relocations,
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
