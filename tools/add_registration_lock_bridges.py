"""Stage registration lock adapters and the MFC class-registration bridge."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004b0620", "lock", 15), ("game-server", "004b0630", "lock", 15),
    ("save-server", "0046a180", "lock", 15), ("save-server", "0046a190", "lock", 15),
    ("game-server", "004fb3c4", "bridge", 47), ("save-server", "004da4c4", "bridge", 47),
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
        if kind == "lock":
            target = operand_target(code, int(address, 16), {"offset": 6})
            declarations = [f'extern "C" void Target{target:08X}();']
            body = ("push ebp", "mov ebp, esp", "push 13", f"call Target{target:08X}",
                    "add esp, 4", "pop ebp", "ret")
            relocations = [{"offset": 6, "symbol": f"_Target{target:08X}"}]
        else:
            offsets = (5, 15, 30, 37)
            calls = {o: operand_target(code, int(address, 16), {"offset": o}) for o in offsets}
            declarations = [f'extern "C" void Call{v:08X}();' for v in sorted(set(calls.values()))]
            body = ("push ebp", "mov ebp, esp", "push ecx", f"call Call{calls[5]:08X}",
                    "mov dword ptr [ebp-4], eax", "push 0", f"call Call{calls[15]:08X}",
                    "mov eax, dword ptr [ebp+8]", "push eax", "mov ecx, dword ptr [ebp-4]",
                    "add ecx, 28", f"call Call{calls[30]:08X}", "push 0",
                    f"call Call{calls[37]:08X}", "mov esp, ebp", "pop ebp", "ret 4")
            relocations = [{"offset": o, "symbol": f"_Call{calls[o]:08X}"} for o in offsets]
        source = f"src/{component}/matches/RecoveredRegistrationBridge{address.upper()}.cpp"
        text = "// Exact recovered class-registration synchronization bridge.\n"
        text += "\n".join(declarations) + "\n"
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
