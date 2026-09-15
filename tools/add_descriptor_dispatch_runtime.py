"""Stage the shared 111-byte descriptor/bitmask dispatcher."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "00429290"),
    ("game-server", "004c9e20"),
    ("save-server", "00484860"),
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
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        code = image[int(address, 16) - base:int(address, 16) - base + 111]
        first = operand_target(code, int(address, 16), {"offset": 63})
        second = operand_target(code, int(address, 16), {"offset": 98})
        if first != second:
            raise ValueError(f"dispatcher calls differ at {component}:{address}")
        body = (
            "mov ecx, dword ptr [esp+8]", "sub esp, 16",
            "_emit 0x8d", "_emit 0x54", "_emit 0x24", "_emit 0x00",
            "push esi", "push edi", "mov eax, dword ptr [ecx]",
            "mov esi, dword ptr [ecx+4]", "mov edi, dword ptr [ecx+8]",
            "mov dword ptr [edx], eax", "mov eax, dword ptr [ecx+12]",
            "mov dword ptr [edx+4], esi", "mov dword ptr [edx+8], edi",
            "mov di, word ptr [esp+36]", "mov dword ptr [edx+12], eax", "mov ax, di",
            "lea edx, [esp+8]", "and ax, 15", "mov esi, dword ptr [esp+28]",
            "push eax", "push 1", "push 7", "push edx", "push esi",
            f"call Dispatch{first:08X}", "dec dword ptr [esp+28]", "dec dword ptr [esp+32]",
            "lea ecx, [esp+28]", "inc dword ptr [esp+36]", "inc dword ptr [esp+40]",
            "add esp, 20", "push edi", "push 0", "push 2", "push ecx", "push esi",
            f"call Dispatch{first:08X}", "add esp, 20", "pop edi", "pop esi",
            "add esp, 16", "ret",
        )
        source = f"src/{component}/matches/RecoveredDescriptorDispatch{address.upper()}.cpp"
        text = "// Exact recovered descriptor/bitmask dispatch sequence.\n"
        text += f'extern "C" void Dispatch{first:08X}();\n'
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": 111,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": [
                            {"offset": 63, "symbol": f"_Dispatch{first:08X}"},
                            {"offset": 98, "symbol": f"_Dispatch{first:08X}"},
                        ]})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
