"""Stage compact runtime and keyed-object initializers; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
RUNTIME = (("game-server", "004f11ba"), ("save-server", "004cf0ea"))
KEYED = (
    ("game-server", "00543faf"), ("game-server", "00544005"),
    ("game-server", "00544d7f"), ("game-server", "00544dd5"),
    ("save-server", "0053f0df"), ("save-server", "0053f135"),
    ("save-server", "0053feaf"), ("save-server", "0053ff05"),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address in RUNTIME + KEYED:
        if (component, address) in existing:
            continue
        size = 21 if (component, address) in RUNTIME else 22
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + size]
        source = f"src/{component}/matches/RecoveredRuntimeInitializer{address.upper()}.cpp"
        if size == 21:
            argument = operand_target(code, int(address, 16), {"offset": 4, "kind": "absolute"})
            import_slot = operand_target(code, int(address, 16), {"offset": 10, "kind": "absolute"})
            storage = operand_target(code, int(address, 16), {"offset": 15, "kind": "absolute"})
            declarations = [f'extern "C" char Argument{argument:08X};',
                            f'extern "C" void *Import{import_slot:08X};',
                            f'extern "C" char Storage{storage:08X};']
            body = ["push ebp", "mov ebp, esp", f"push offset Argument{argument:08X}",
                    f"call dword ptr [Import{import_slot:08X}]",
                    f"mov dword ptr [Storage{storage:08X}], eax", "pop ebp", "ret"]
            relocations = [
                {"offset": 4, "kind": "absolute", "symbol": f"_Argument{argument:08X}"},
                {"offset": 10, "kind": "absolute", "symbol": f"_Import{import_slot:08X}"},
                {"offset": 15, "kind": "absolute", "symbol": f"_Storage{storage:08X}"},
            ]
        else:
            key = int.from_bytes(code[4:8], "little")
            obj = operand_target(code, int(address, 16), {"offset": 11, "kind": "absolute"})
            target = operand_target(code, int(address, 16), {"offset": 16})
            declarations = [f'extern "C" char Object{obj:08X};', f'extern "C" void Target{target:08X}();']
            body = ["push ebp", "mov ebp, esp", f"push {key}", "push 0",
                    f"mov ecx, offset Object{obj:08X}", f"call Target{target:08X}", "pop ebp", "ret"]
            relocations = [
                {"offset": 11, "kind": "absolute", "symbol": f"_Object{obj:08X}"},
                {"offset": 16, "symbol": f"_Target{target:08X}"},
            ]
        text = "// Exact compact runtime/static-object initialization sequence.\n"
        text += "\n".join(declarations) + "\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join("    __asm " + line for line in body) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
