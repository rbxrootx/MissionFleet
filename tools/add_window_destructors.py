"""Stage paired MFC window destructors; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
OPERANDS = (
    (6, "absolute", "Handler"), (35, "absolute", "Vtable"),
    (58, "absolute", "Global1"), (67, "absolute", "Global2"),
    (76, "absolute", "Global3"), (85, "absolute", "Global4"),
    (92, "absolute", "WarningText"), (97, "relative", "Warn"),
    (108, "relative", "DestroyWindow"), (205, "relative", "BaseDestroy"),
)

BODY = '''
push ebp
mov ebp, esp
push -1
push offset {Handler}
mov eax, dword ptr fs:[0]
push eax
mov dword ptr fs:[0], esp
sub esp, 10h
mov dword ptr [ebp-18h], ecx
mov eax, dword ptr [ebp-18h]
mov dword ptr [eax], offset {Vtable}
mov dword ptr [ebp-4], 0
mov ecx, dword ptr [ebp-18h]
cmp dword ptr [ecx+1ch], 0
je warning_done
cmp dword ptr [ebp-18h], offset {Global1}
je warning_done
cmp dword ptr [ebp-18h], offset {Global2}
je warning_done
cmp dword ptr [ebp-18h], offset {Global3}
je warning_done
cmp dword ptr [ebp-18h], offset {Global4}
je warning_done
push offset {WarningText}
call {Warn}
add esp, 4
mov ecx, dword ptr [ebp-18h]
call {DestroyWindow}
warning_done:
mov edx, dword ptr [ebp-18h]
mov eax, dword ptr [edx+34h]
mov dword ptr [ebp-14h], eax
mov ecx, dword ptr [ebp-14h]
mov dword ptr [ebp-10h], ecx
cmp dword ptr [ebp-10h], 0
je null_owned
push 1
mov edx, dword ptr [ebp-10h]
mov eax, dword ptr [edx]
mov ecx, dword ptr [ebp-10h]
call dword ptr [eax+4]
mov dword ptr [ebp-1ch], eax
jmp owned_done
null_owned:
mov dword ptr [ebp-1ch], 0
owned_done:
mov ecx, dword ptr [ebp-18h]
cmp dword ptr [ecx+38h], 0
je parent_done
mov edx, dword ptr [ebp-18h]
mov eax, dword ptr [edx+38h]
mov ecx, dword ptr [eax+24h]
cmp ecx, dword ptr [ebp-18h]
jne parent_done
mov edx, dword ptr [ebp-18h]
mov eax, dword ptr [edx+38h]
mov dword ptr [eax+24h], 0
parent_done:
mov dword ptr [ebp-4], -1
mov ecx, dword ptr [ebp-18h]
call {BaseDestroy}
mov ecx, dword ptr [ebp-0ch]
mov dword ptr fs:[0], ecx
mov esp, ebp
pop ebp
ret
'''


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    records = []
    for component, address in (("game-server", "004f272f"),
                               ("save-server", "004d065f")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 223]
        names, declarations, relocations = {}, [], []
        for offset, kind, role in OPERANDS:
            target = operand_target(code, int(address, 16), {"offset": offset, "kind": kind})
            name = f"{role}{target:08X}"
            names[role] = name
            declarations.append(f'extern "C" char {name};' if kind == "absolute"
                                else f'extern "C" void {name}();')
            relocations.append({"offset": offset, "kind": kind, "symbol": "_" + name})
        source = f"src/{component}/matches/RecoveredWindowDestructor.cpp"
        text = "// Exact x86 MFC window teardown, including SEH and global-window exemptions.\n"
        text += "\n".join(declarations) + "\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join("    __asm " + line for line in BODY.format(**names).strip().splitlines())
        text += "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 223,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"], "relocations": relocations,
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
