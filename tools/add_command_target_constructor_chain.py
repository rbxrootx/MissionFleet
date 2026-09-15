"""Stage the paired command-target base constructor chain."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "00530990", "base", 23),
    ("save-server", "00524790", "base", 23),
    ("game-server", "004f7ce0", "command", 91),
    ("save-server", "004d6d80", "command", 91),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    base_address = int(document["image_base"], 16)
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        code = image[int(address, 16) - base_address:int(address, 16) - base_address + size]
        if kind == "base":
            vtable = operand_target(code, int(address, 16), {"offset": 12, "kind": "absolute"})
            declarations = [f'extern "C" int Vtable{vtable:08X};']
            body = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                    "mov eax, dword ptr [ebp-4]", f"mov dword ptr [eax], offset Vtable{vtable:08X}",
                    "mov eax, dword ptr [ebp-4]", "mov esp, ebp", "pop ebp", "ret")
            relocations = [{"offset": 12, "kind": "absolute", "symbol": f"_Vtable{vtable:08X}"}]
        else:
            parent = operand_target(code, int(address, 16), {"offset": 11})
            vtable = operand_target(code, int(address, 16), {"offset": 20, "kind": "absolute"})
            declarations = [f'extern "C" void Parent{parent:08X}();', f'extern "C" int Vtable{vtable:08X};']
            body = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                    "mov ecx, dword ptr [ebp-4]", f"call Parent{parent:08X}",
                    "mov eax, dword ptr [ebp-4]", f"mov dword ptr [eax], offset Vtable{vtable:08X}",
                    "mov ecx, dword ptr [ebp-4]", "mov dword ptr [ecx+4], 1",
                    "mov edx, dword ptr [ebp-4]", "mov dword ptr [edx+8], 0",
                    "mov eax, dword ptr [ebp-4]", "mov dword ptr [eax+12], 0",
                    "mov ecx, dword ptr [ebp-4]", "mov dword ptr [ecx+16], 0",
                    "mov edx, dword ptr [ebp-4]", "mov dword ptr [edx+20], 1",
                    "mov eax, dword ptr [ebp-4]", "mov dword ptr [eax+24], 0",
                    "mov eax, dword ptr [ebp-4]", "mov esp, ebp", "pop ebp", "ret")
            relocations = [{"offset": 11, "symbol": f"_Parent{parent:08X}"},
                           {"offset": 20, "kind": "absolute", "symbol": f"_Vtable{vtable:08X}"}]
        source = f"src/{component}/matches/RecoveredCommandCtor{address.upper()}.cpp"
        text = "// Exact recovered command-target constructor chain.\n" + "\n".join(declarations) + "\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
