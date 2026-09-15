"""Stage paired vtable initializers; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "0048d7c0"),
                               ("save-server", "00449db0"),
                               ("game-server", "005309a7"),
                               ("save-server", "005247a7")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 20]
        vtable = operand_target(code, int(address, 16),
                                {"offset": 12, "kind": "absolute"})
        source = f"src/{component}/matches/RecoveredVtableInitializer{address.upper()}.cpp"
        (ROOT / source).write_text(f'''// Original x86 member ABI: ECX is the object under construction.
// Initialize only its leading vtable pointer and return with EAX unchanged.
extern "C" char Vtable{vtable:08X};
extern "C" __declspec(naked) void Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax], offset Vtable{vtable:08X}
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 20,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"],
            "relocations": [{"offset": 12, "kind": "absolute",
                             "symbol": f"_Vtable{vtable:08X}"}],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
