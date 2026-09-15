"""Stage clean allocator bridges and runtime-message exit helpers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004aacc0", "free", 41),
    ("game-server", "004aa230", "malloc", 35),
    ("save-server", "004667c0", "malloc_local", 44),
    ("game-server", "004acd40", "message_exit", 45),
    ("save-server", "00466390", "message_exit", 45),
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
        if kind == "free":
            offsets = (6, 22, 32)
            calls = {o: operand_target(code, int(address, 16), {"offset": o}) for o in offsets}
            declarations = [f'extern "C" void Call{v:08X}();' for v in sorted(set(calls.values()))]
            body = ("push ebp", "mov ebp, esp", "push 9", f"call Call{calls[6]:08X}", "add esp, 4",
                    "mov eax, dword ptr [ebp+12]", "push eax", "mov ecx, dword ptr [ebp+8]", "push ecx",
                    f"call Call{calls[22]:08X}", "add esp, 8", "push 9", f"call Call{calls[32]:08X}",
                    "add esp, 4", "pop ebp", "ret")
            relocations = [{"offset": o, "symbol": f"_Call{calls[o]:08X}"} for o in offsets]
        elif kind.startswith("malloc"):
            absolute_offset = 16 if kind == "malloc" else 17
            call_offset = 26 if kind == "malloc" else 27
            heap = operand_target(code, int(address, 16), {"offset": absolute_offset, "kind": "absolute"})
            target = operand_target(code, int(address, 16), {"offset": call_offset})
            declarations = [f'extern "C" int Heap{heap:08X};', f'extern "C" void Target{target:08X}();']
            prefix = ("push ebp", "mov ebp, esp") + (("push ecx",) if kind == "malloc_local" else ())
            body = prefix + (
                "mov eax, dword ptr [ebp+20]", "push eax", "mov ecx, dword ptr [ebp+16]", "push ecx",
                "mov edx, dword ptr [ebp+12]", "push edx", f"mov eax, dword ptr [Heap{heap:08X}]",
                "push eax", "mov ecx, dword ptr [ebp+8]", "push ecx", f"call Target{target:08X}",
                "add esp, 20",
            )
            if kind == "malloc_local":
                body += ("mov dword ptr [ebp-4], eax", "mov eax, dword ptr [ebp-4]", "mov esp, ebp")
            body += ("pop ebp", "ret")
            relocations = [{"offset": absolute_offset, "kind": "absolute", "symbol": f"_Heap{heap:08X}"},
                           {"offset": call_offset, "symbol": f"_Target{target:08X}"}]
        else:
            state = operand_target(code, int(address, 16), {"offset": 5, "kind": "absolute"})
            first = operand_target(code, int(address, 16), {"offset": 13})
            second = operand_target(code, int(address, 16), {"offset": 22})
            imported = operand_target(code, int(address, 16), {"offset": 36, "kind": "absolute"})
            declarations = [f'extern "C" int State{state:08X};', f'extern "C" void Call{first:08X}();',
                            f'extern "C" void Call{second:08X}();', f'extern "C" void *Import{imported:08X};']
            body = ("push ebp", "mov ebp, esp", f"cmp dword ptr [State{state:08X}], 1", "jne report",
                    f"call Call{first:08X}", "report:", "mov eax, dword ptr [ebp+8]", "push eax",
                    f"call Call{second:08X}", "add esp, 4", "push 255", f"call dword ptr [Import{imported:08X}]",
                    "add esp, 4", "pop ebp", "ret")
            relocations = [{"offset": 5, "kind": "absolute", "symbol": f"_State{state:08X}"},
                           {"offset": 13, "symbol": f"_Call{first:08X}"},
                           {"offset": 22, "symbol": f"_Call{second:08X}"},
                           {"offset": 36, "kind": "absolute", "symbol": f"_Import{imported:08X}"}]
        source = f"src/{component}/matches/RecoveredAllocatorSupport{address.upper()}.cpp"
        text = "// Exact recovered allocator/runtime support bridge.\n" + "\n".join(declarations) + "\n"
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
