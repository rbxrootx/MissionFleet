"""Stage paired lock enter/leave cores used by registration and allocation."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004b51f0", "enter", 151), ("game-server", "004b5290", "leave", 22),
    ("save-server", "004708b0", "enter", 151), ("save-server", "00470950", "leave", 22),
)


def abs_target(code, address, offset):
    return operand_target(code, int(address, 16), {"offset": offset, "kind": "absolute"})


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
        if kind == "leave":
            table = abs_target(code, address, 9)
            imported = abs_target(code, address, 16)
            declarations = [f'extern "C" int Table{table:08X};', f'extern "C" void *Import{imported:08X};']
            body = ("push ebp", "mov ebp, esp", "mov eax, dword ptr [ebp+8]",
                    f"mov ecx, dword ptr [eax*4+Table{table:08X}]", "push ecx",
                    f"call dword ptr [Import{imported:08X}]", "pop ebp", "ret")
            relocations = [{"offset": 9, "kind": "absolute", "symbol": f"_Table{table:08X}"},
                           {"offset": 16, "kind": "absolute", "symbol": f"_Import{imported:08X}"}]
        else:
            table = abs_target(code, address, 10)
            source_line = abs_target(code, address, 23)
            create_import = abs_target(code, address, 87)
            wait_import = abs_target(code, address, 143)
            rel_offsets = (32, 51, 61, 113, 123)
            calls = {o: operand_target(code, int(address, 16), {"offset": o}) for o in rel_offsets}
            declarations = [f'extern "C" int Table{table:08X};', f'extern "C" int Source{source_line:08X};',
                            f'extern "C" void *Import{create_import:08X};', f'extern "C" void *Import{wait_import:08X};']
            declarations += [f'extern "C" void Call{v:08X}();' for v in sorted(set(calls.values()))]
            body = ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                    f"cmp dword ptr [eax*4+Table{table:08X}], 0", "jne lock_ready", "push 225",
                    f"push offset Source{source_line:08X}", "push 2", "push 24", f"call Call{calls[32]:08X}",
                    "add esp, 16", "mov dword ptr [ebp-4], eax", "cmp dword ptr [ebp-4], 0",
                    "jne retry_locked", "push 17", f"call Call{calls[51]:08X}", "add esp, 4",
                    "retry_locked:", "push 17", f"call Call{calls[61]:08X}", "add esp, 4",
                    "mov ecx, dword ptr [ebp+8]", f"cmp dword ptr [ecx*4+Table{table:08X}], 0",
                    "jne dispose", "mov edx, dword ptr [ebp-4]", "push edx",
                    f"call dword ptr [Import{create_import:08X}]", "mov eax, dword ptr [ebp+8]",
                    "mov ecx, dword ptr [ebp-4]", f"mov dword ptr [eax*4+Table{table:08X}], ecx",
                    "jmp short created", "dispose:", "push 2", "mov edx, dword ptr [ebp-4]", "push edx",
                    f"call Call{calls[113]:08X}", "add esp, 8", "created:", "push 17",
                    f"call Call{calls[123]:08X}", "add esp, 4", "lock_ready:",
                    "mov eax, dword ptr [ebp+8]", f"mov ecx, dword ptr [eax*4+Table{table:08X}]",
                    "push ecx", f"call dword ptr [Import{wait_import:08X}]", "mov esp, ebp", "pop ebp", "ret")
            relocations = [
                {"offset": o, "kind": "absolute", "symbol": f"_Table{table:08X}"} for o in (10, 74, 100, 136)
            ] + [
                {"offset": 23, "kind": "absolute", "symbol": f"_Source{source_line:08X}"},
                {"offset": 87, "kind": "absolute", "symbol": f"_Import{create_import:08X}"},
                {"offset": 143, "kind": "absolute", "symbol": f"_Import{wait_import:08X}"},
            ] + [{"offset": o, "symbol": f"_Call{calls[o]:08X}"} for o in rel_offsets]
            relocations.sort(key=lambda x: x["offset"])
        source = f"src/{component}/matches/RecoveredLockCore{address.upper()}.cpp"
        text = "// Exact recovered indexed lock core.\n" + "\n".join(declarations) + "\n"
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
