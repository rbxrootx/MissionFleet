"""Stage paired process-local data accessors; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "005424e0"),
                               ("save-server", "0053d6d0"),
                               ("game-server", "005639c0"),
                               ("save-server", "005698c0")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 70]
        factory = operand_target(code, int(address, 16),
                                 {"offset": 13, "kind": "absolute"})
        get_data = operand_target(code, int(address, 16), {"offset": 21})
        file_address = operand_target(code, int(address, 16),
                                      {"offset": 40, "kind": "absolute"})
        assert_address = operand_target(code, int(address, 16), {"offset": 45})
        source = f"src/{component}/matches/RecoveredProcessLocalAccessor{address.upper()}.cpp"
        (ROOT / source).write_text(f'''// Retrieve process-local MFC data through the supplied factory and assert it exists.
extern "C" char Factory{factory:08X};
extern "C" void GetData{get_data:08X}();
extern "C" char File{file_address:08X};
extern "C" void Assert{assert_address:08X}();
extern "C" __declspec(naked) void *Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm push offset Factory{factory:08X}
    __asm mov ecx, dword ptr [ebp-8]
    __asm call GetData{get_data:08X}
    __asm mov dword ptr [ebp-4], eax
    __asm check_data:
    __asm cmp dword ptr [ebp-4], 0
    __asm jne data_ready
    __asm push 0ceh
    __asm push offset File{file_address:08X}
    __asm call Assert{assert_address:08X}
    __asm test eax, eax
    __asm je data_ready
    __asm int 3
    __asm data_ready:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne check_data
    __asm mov eax, dword ptr [ebp-4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 70,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"],
            "relocations": [
                {"offset": 13, "kind": "absolute", "symbol": f"_Factory{factory:08X}"},
                {"offset": 21, "symbol": f"_GetData{get_data:08X}"},
                {"offset": 40, "kind": "absolute", "symbol": f"_File{file_address:08X}"},
                {"offset": 45, "symbol": f"_Assert{assert_address:08X}"},
            ],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
