"""Stage compact probe-result initializers; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "005223d9"),
    ("game-server", "00526b03"),
    ("game-server", "0052e373"),
    ("save-server", "00519383"),
    ("save-server", "0051c8c9"),
    ("save-server", "0051d583"),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    base = int(document["image_base"], 16)
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address in TARGETS:
        if (component, address) in existing:
            continue
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        code = code[int(address, 16) - base:int(address, 16) - base + 23]
        descriptor = operand_target(code, int(address, 16), {"offset": 4, "kind": "absolute"})
        probe = operand_target(code, int(address, 16), {"offset": 9})
        storage = operand_target(code, int(address, 16), {"offset": 17, "kind": "absolute"})
        byte_result = code[16] == 0xA2
        storage_type = "char" if byte_result else "void *"
        register = "al" if byte_result else "eax"
        source = f"src/{component}/matches/RecoveredProbeInitializer{address.upper()}.cpp"
        text = (
            "// Exact static probe-result initialization sequence.\n"
            f'extern "C" char Descriptor{descriptor:08X};\n'
            f'extern "C" void Probe{probe:08X}();\n'
            f'extern "C" {storage_type} Storage{storage:08X};\n'
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
            "    __asm push ebp\n"
            "    __asm mov ebp, esp\n"
            f"    __asm push offset Descriptor{descriptor:08X}\n"
            f"    __asm call Probe{probe:08X}\n"
            "    __asm add esp, 4\n"
            f"    __asm mov Storage{storage:08X}, {register}\n"
            "    __asm pop ebp\n"
            "    __asm ret\n"
            "}\n"
        )
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({
            "component": component,
            "address": address,
            "size": 23,
            "source": source,
            "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"],
            "relocations": [
                {"offset": 4, "kind": "absolute", "symbol": f"_Descriptor{descriptor:08X}"},
                {"offset": 9, "symbol": f"_Probe{probe:08X}"},
                {"offset": 17, "kind": "absolute", "symbol": f"_Storage{storage:08X}"},
            ],
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
