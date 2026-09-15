"""Stage the shared 306-byte descriptor core dispatcher."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (("login-server", "00429150"), ("game-server", "004c9ce0"), ("save-server", "00484720"))
ABSOLUTE_OFFSETS = (19, 31, 108, 155, 177, 185, 228, 286, 294)


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
        code = image[int(address, 16) - base:int(address, 16) - base + 306]
        values = {o: operand_target(code, int(address, 16), {"offset": o, "kind": "absolute"})
                  for o in ABSOLUTE_OFFSETS}
        table = values[19]
        primary = values[31]
        secondary = values[108]
        if values[177] != table or values[185] != primary or values[228] != secondary or values[286] != secondary or values[294] != primary:
            raise ValueError(f"unexpected dispatcher operand aliases at {component}:{address}")
        body = (
            "mov eax, dword ptr [esp+12]", "sub esp, 16", "and eax, 65535",
            "push ebx", "push esi", "push edi", "push ebp",
            f"mov ecx, dword ptr [eax*4+Table{table:08X}]", "mov edi, dword ptr [esp+36]",
            "push ecx", "push edi", f"call dword ptr [Import{primary:08X}]", "mov esi, eax",
            "mov ebx, dword ptr [esp+40]", "lea ecx, [esp+16]", "mov eax, dword ptr [ebx]",
            "mov edx, dword ptr [ebx+4]", "mov ebp, dword ptr [ebx+8]", "mov dword ptr [ecx], eax",
            "mov eax, dword ptr [ebx+12]", "mov dword ptr [ecx+4], edx", "mov dword ptr [ecx+8], ebp",
            "mov bp, word ptr [esp+52]", "mov dword ptr [ecx+12], eax", "mov eax, dword ptr [esp+20]",
            "inc eax", "test bp, 2", "mov dword ptr [esp+28], eax", "je flag_one",
            "lea eax, [esp+16]", "push 0", "push 0", "push 0", "push eax", "push 2", "push 0", "push 0", "push edi",
            f"call dword ptr [Import{secondary:08X}]", "flag_one:", "mov eax, dword ptr [ebx+12]",
            "mov dword ptr [esp+28], eax", "mov eax, dword ptr [esp+16]", "inc eax", "test bp, 1",
            "mov dword ptr [esp+24], eax", "je class_change", "lea eax, [esp+16]",
            "push 0", "push 0", "push 0", "push eax", "push 2", "push 0", "push 0", "push edi",
            f"call dword ptr [Import{secondary:08X}]", "class_change:", "mov ax, word ptr [esp+48]",
            "cmp word ptr [esp+44], ax", "je flag_four", "movzx eax, ax",
            f"mov ecx, dword ptr [eax*4+Table{table:08X}]", "push ecx", "push edi",
            f"call dword ptr [Import{primary:08X}]", "flag_four:", "mov eax, dword ptr [ebx+8]",
            "mov dword ptr [esp+24], eax", "dec eax", "test bp, 4", "mov dword ptr [esp+16], eax",
            "je flag_eight", "lea eax, [esp+16]", "push 0", "push 0", "push 0", "push eax",
            "push 2", "push 0", "push 0", "push edi", f"call dword ptr [Import{secondary:08X}]",
            "flag_eight:", "test bp, 8", "je restore_class", "mov eax, dword ptr [ebx]",
            "mov dword ptr [esp+16], eax", "mov eax, dword ptr [esp+28]", "dec eax",
            "test bp, 4096", "mov dword ptr [esp+20], eax", "je final_secondary",
            "sub dword ptr [esp+24], 2", "final_secondary:", "lea eax, [esp+16]",
            "push 0", "push 0", "push 0", "push eax", "push 2", "push 0", "push 0", "push edi",
            f"call dword ptr [Import{secondary:08X}]", "restore_class:", "push esi", "push edi",
            f"call dword ptr [Import{primary:08X}]", "pop ebp", "pop edi", "pop esi", "pop ebx",
            "add esp, 16", "ret",
        )
        source = f"src/{component}/matches/RecoveredDescriptorCore{address.upper()}.cpp"
        text = "// Exact recovered descriptor clipping/flag dispatcher.\n"
        text += f'extern "C" int Table{table:08X};\nextern "C" void *Import{primary:08X};\nextern "C" void *Import{secondary:08X};\n'
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        relocations = [{"offset": o, "kind": "absolute",
                        "symbol": (f"_Table{table:08X}" if o in (19, 177)
                                   else f"_Import{values[o]:08X}")}
                       for o in ABSOLUTE_OFFSETS]
        records.append({"component": component, "address": address, "size": 306,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
