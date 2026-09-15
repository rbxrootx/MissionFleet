"""Stage the shared registration/probe helpers referenced by 46 wrappers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (("game-server", "004a88e0"), ("save-server", "00465bf0"))


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    base = int(document["image_base"], 16)
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address in TARGETS:
        if (component, address) in existing:
            continue
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        code = image[int(address, 16) - base:int(address, 16) - base + 24]
        target = operand_target(code, int(address, 16), {"offset": 8})
        source = f"src/{component}/matches/RecoveredRegistrationProbe{address.upper()}.cpp"
        text = (
            "// Exact registration/probe adapter used by static initialization.\n"
            f'extern "C" void ProbeCore{target:08X}();\n'
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
            "    __asm push ebp\n"
            "    __asm mov ebp, esp\n"
            "    __asm mov eax, dword ptr [ebp+8]\n"
            "    __asm push eax\n"
            f"    __asm call ProbeCore{target:08X}\n"
            "    __asm add esp, 4\n"
            "    __asm neg eax\n"
            "    __asm sbb eax, eax\n"
            "    __asm neg eax\n"
            "    __asm dec eax\n"
            "    __asm pop ebp\n"
            "    __asm ret\n"
            "}\n"
        )
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 24,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"],
            "relocations": [{"offset": 8, "symbol": f"_ProbeCore{target:08X}"}],
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
