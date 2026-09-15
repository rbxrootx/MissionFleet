"""Stage paired constructors with the highest unresolved incoming reference counts."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0048d200", "class_init", 25),
    ("save-server", "004495b0", "class_init", 25),
    ("game-server", "004f1379", "object", 61),
    ("save-server", "004cf2a9", "object", 61),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    base = int(document["image_base"], 16)
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        code = image[int(address, 16) - base:int(address, 16) - base + size]
        if kind == "class_init":
            target = operand_target(code, int(address, 16), {"offset": 12})
            declarations = [f'extern "C" void Target{target:08X}();']
            body = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                    "mov eax, dword ptr [ebp+8]", "push eax", f"call Target{target:08X}",
                    "mov eax, dword ptr [ebp-4]", "mov esp, ebp", "pop ebp", "ret 4")
            relocations = [{"offset": 12, "symbol": f"_Target{target:08X}"}]
        else:
            base_ctor = operand_target(code, int(address, 16), {"offset": 11})
            vtable = operand_target(code, int(address, 16), {"offset": 20, "kind": "absolute"})
            clear = operand_target(code, int(address, 16), {"offset": 36})
            declarations = [f'extern "C" void Base{base_ctor:08X}();',
                            f'extern "C" int Vtable{vtable:08X};',
                            f'extern "C" void Clear{clear:08X}();']
            body = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                    "mov ecx, dword ptr [ebp-4]", f"call Base{base_ctor:08X}",
                    "mov eax, dword ptr [ebp-4]", f"mov dword ptr [eax], offset Vtable{vtable:08X}",
                    "push 32", "push 0", "mov ecx, dword ptr [ebp-4]", "add ecx, 28",
                    "push ecx", f"call Clear{clear:08X}", "add esp, 12",
                    "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [ebp+8]",
                    "mov dword ptr [edx+28], eax", "mov eax, dword ptr [ebp-4]",
                    "mov esp, ebp", "pop ebp", "ret 4")
            relocations = [{"offset": 11, "symbol": f"_Base{base_ctor:08X}"},
                           {"offset": 20, "kind": "absolute", "symbol": f"_Vtable{vtable:08X}"},
                           {"offset": 36, "symbol": f"_Clear{clear:08X}"}]
        source = f"src/{component}/matches/RecoveredHighReferenceCtor{address.upper()}.cpp"
        text = "// Exact recovered high-reference constructor.\n" + "\n".join(declarations) + "\n"
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
