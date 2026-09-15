"""Stage compact import forwarders and static initializers; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
SPECS = (
    ("login-server", "0040fc20", "import"),
    ("login-server", "00409710", "object"),
    ("game-server", "004d1df5", "store"),
    ("game-server", "005478ef", "object"),
    ("game-server", "00547b31", "store"),
    ("save-server", "004a2f45", "store"),
    ("save-server", "0054281f", "object"),
    ("save-server", "00542a61", "store"),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    records = []
    for component, address, shape in SPECS:
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        size = 14 if shape == "import" else 15
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + size]
        declarations, relocations = [], []
        if shape == "import":
            slot = operand_target(code, int(address, 16), {"offset": 7, "kind": "absolute"})
            declarations.append(f'extern "C" void *Import{slot:08X};')
            body = ["mov eax, dword ptr [esp+4]", "push eax",
                    f"call dword ptr [Import{slot:08X}]", "ret 4"]
            relocations.append({"offset": 7, "kind": "absolute", "symbol": f"_Import{slot:08X}"})
        elif shape == "object":
            obj = operand_target(code, int(address, 16), {"offset": 4, "kind": "absolute"})
            target = operand_target(code, int(address, 16), {"offset": 9})
            declarations += [f'extern "C" char Object{obj:08X};', f'extern "C" void Target{target:08X}();']
            body = ["push ebp", "mov ebp, esp", f"mov ecx, offset Object{obj:08X}",
                    f"call Target{target:08X}", "pop ebp", "ret"]
            relocations += [{"offset": 4, "kind": "absolute", "symbol": f"_Object{obj:08X}"},
                            {"offset": 9, "symbol": f"_Target{target:08X}"}]
        else:
            target = operand_target(code, int(address, 16), {"offset": 4})
            storage = operand_target(code, int(address, 16), {"offset": 9, "kind": "absolute"})
            declarations += [f'extern "C" void Target{target:08X}();', f'extern "C" char Storage{storage:08X};']
            body = ["push ebp", "mov ebp, esp", f"call Target{target:08X}",
                    f"mov dword ptr [Storage{storage:08X}], eax", "pop ebp", "ret"]
            relocations += [{"offset": 4, "symbol": f"_Target{target:08X}"},
                            {"offset": 9, "kind": "absolute", "symbol": f"_Storage{storage:08X}"}]
        source = f"src/{component}/matches/RecoveredCompactInitializer{address.upper()}.cpp"
        text = "// Exact compact x86 forwarding/initialization sequence.\n"
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
