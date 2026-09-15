"""Stage the registration-vector append helpers behind static registration."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (("game-server", "004a8820"), ("save-server", "00465b30"))
RELATIVE = (5, 18, 63, 81, 98, 168)
ABSOLUTE = (12, 27, 33, 47, 57, 75, 108, 114, 128, 137, 143, 154, 163)


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
        code = image[int(address, 16) - base:int(address, 16) - base + 179]
        rel = {o: operand_target(code, int(address, 16), {"offset": o}) for o in RELATIVE}
        absolute = {o: operand_target(code, int(address, 16), {"offset": o, "kind": "absolute"}) for o in ABSOLUTE}
        declarations = [f'extern "C" void Call{v:08X}();' for v in sorted(set(rel.values()))]
        declarations += [f'extern "C" int Data{v:08X};' for v in sorted(set(absolute.values()))]
        d = absolute
        c = rel
        body = (
            "push ebp", "mov ebp, esp", "push ecx", f"call Call{c[5]:08X}", "push 2",
            f"mov eax, dword ptr [Data{d[12]:08X}]", "push eax", f"call Call{c[18]:08X}",
            "add esp, 8", f"mov ecx, dword ptr [Data{d[27]:08X}]",
            f"sub ecx, dword ptr [Data{d[33]:08X}]", "add ecx, 4", "cmp eax, ecx", "jae capacity_ready",
            "push 104", f"push offset Data{d[47]:08X}", "push 2", "push 2",
            f"mov edx, dword ptr [Data{d[57]:08X}]", "push edx", f"call Call{c[63]:08X}",
            "add esp, 8", "add eax, 16", "push eax", f"mov eax, dword ptr [Data{d[75]:08X}]",
            "push eax", f"call Call{c[81]:08X}", "add esp, 20", "mov dword ptr [ebp-4], eax",
            "cmp dword ptr [ebp-4], 0", "jne allocation_ready", f"call Call{c[98]:08X}",
            "xor eax, eax", "jmp short finished", "allocation_ready:",
            f"mov ecx, dword ptr [Data{d[108]:08X}]", f"sub ecx, dword ptr [Data{d[114]:08X}]",
            "sar ecx, 2", "mov edx, dword ptr [ebp-4]", "lea eax, [edx+ecx*4]",
            f"mov dword ptr [Data{d[128]:08X}], eax", "mov ecx, dword ptr [ebp-4]",
            f"mov dword ptr [Data{d[137]:08X}], ecx", "capacity_ready:",
            f"mov edx, dword ptr [Data{d[143]:08X}]", "mov eax, dword ptr [ebp+8]",
            "mov dword ptr [edx], eax", f"mov ecx, dword ptr [Data{d[154]:08X}]", "add ecx, 4",
            f"mov dword ptr [Data{d[163]:08X}], ecx", f"call Call{c[168]:08X}",
            "mov eax, dword ptr [ebp+8]", "finished:", "mov esp, ebp", "pop ebp", "ret",
        )
        source = f"src/{component}/matches/RecoveredRegistrationVector{address.upper()}.cpp"
        text = "// Exact recovered static-registration vector append operation.\n"
        text += "\n".join(declarations) + "\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        relocations = ([{"offset": o, "symbol": f"_Call{rel[o]:08X}"} for o in RELATIVE]
                       + [{"offset": o, "kind": "absolute", "symbol": f"_Data{absolute[o]:08X}"}
                          for o in ABSOLUTE])
        records.append({"component": component, "address": address, "size": 179,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": sorted(relocations, key=lambda x: x["offset"])})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
