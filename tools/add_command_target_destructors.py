"""Stage paired command-target base destructors; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
OPERANDS = ((6, "absolute", "Handler"), (36, "absolute", "Vtable"),
            (83, "absolute", "File"), (88, "relative", "Assert"),
            (114, "relative", "BaseDestroy"))
BODY = '''
push ebp
mov ebp, esp
push -1
push offset {Handler}
mov eax, dword ptr fs:[0]
push eax
mov dword ptr fs:[0], esp
push ecx
push ebx
push esi
push edi
mov dword ptr [ebp-10h], ecx
mov eax, dword ptr [ebp-10h]
mov dword ptr [eax], offset {Vtable}
mov dword ptr [ebp-4], 0
mov ecx, dword ptr [ebp-10h]
cmp dword ptr [ecx+10h], 0
je map_done
mov ecx, dword ptr [ebp-10h]
add ecx, 10h
mov edx, dword ptr [ebp-10h]
mov eax, dword ptr [edx+10h]
call dword ptr [eax+1ch]
map_done:
check_refcount:
mov ecx, dword ptr [ebp-10h]
cmp dword ptr [ecx+4], 1
jle refcount_done
push 34h
push offset {File}
call {Assert}
test eax, eax
je refcount_done
int 3
refcount_done:
xor edx, edx
test edx, edx
jne check_refcount
mov dword ptr [ebp-4], -1
mov ecx, dword ptr [ebp-10h]
call {BaseDestroy}
mov ecx, dword ptr [ebp-0ch]
mov dword ptr fs:[0], ecx
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
'''


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    records = []
    for component, address in (("game-server", "004f7d3b"),
                               ("save-server", "004d6ddb")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 135]
        names, declarations, relocations = {}, [], []
        for offset, kind, role in OPERANDS:
            target = operand_target(code, int(address, 16), {"offset": offset, "kind": kind})
            name = f"{role}{target:08X}"
            names[role] = name
            declarations.append(f'extern "C" char {name};' if kind == "absolute"
                                else f'extern "C" void {name}();')
            relocations.append({"offset": offset, "kind": kind, "symbol": "_" + name})
        source = f"src/{component}/matches/RecoveredCommandTargetDestructor.cpp"
        text = "// Exact x86 command-target teardown with SEH and debug refcount validation.\n"
        text += "\n".join(declarations) + "\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join("    __asm " + line for line in BODY.format(**names).strip().splitlines())
        text += "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": 135,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
