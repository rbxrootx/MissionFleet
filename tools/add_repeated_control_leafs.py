"""Stage repeated control, table, and UTF-16 leaf functions."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []


def add(component, address, kind, size, *args):
    TARGETS.append((component, address, kind, size, args))


def pair(game, save, kind, size, *args):
    add("game-server", game, kind, size, *args)
    add("save-server", save, kind, size, *args)


add("save-server", "00436810", "init_flag", 33)
add("save-server", "0043d6b0", "init_flag", 33)
pair("004ee7d0", "004d5c60", "control_unknown", 33)
pair("00490932", "0044cf62", "get_window", 35)
add("game-server", "0047ac50", "indexed_const", 36, 0)
add("game-server", "0047acb0", "indexed_const", 36, 0)
add("game-server", "0047ac20", "indexed_const", 36, 1)
add("game-server", "0047ac80", "indexed_const", 36, 1)
add("save-server", "00435990", "utf16_copy", 38)
add("save-server", "004359f0", "utf16_copy", 38)


def body(kind, args):
    local = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx")
    debug = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
             "mov dword ptr [ebp-4], ecx")
    end = ("mov esp, ebp", "pop ebp", "ret")
    if kind == "init_flag":
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
                "mov dword ptr [ebp-4], 0", "mov eax, dword ptr [ebp-4]", "or al, 1",
                "mov dword ptr [ebp-4], eax", "mov eax, dword ptr [ebp+8]") + end[:-1] + ("ret 4",)
    if kind == "control_unknown":
        return local + ("mov eax, dword ptr [ebp-4]", "cmp dword ptr [eax+56], 0",
                        "jne present", "xor eax, eax", "jmp done", "present:",
                        "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx+56]",
                        "mov eax, dword ptr [edx+76]", "done:") + end
    if kind == "get_window":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                "sub eax, 76", "mov dword ptr [ebp-4], eax", "mov ecx, dword ptr [ebp-4]",
                "mov edx, dword ptr [ecx+28]", "mov eax, dword ptr [ebp+12]",
                "mov ecx, dword ptr [edx+28]", "mov dword ptr [eax], ecx", "xor eax, eax") + end[:-1] + ("ret 8",)
    if kind == "indexed_const":
        (value,) = args
        return debug + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+12]",
                        "mov edx, dword ptr [ebp+8]", f"mov dword ptr [ecx+edx*4], {value}") + end[:-1] + ("ret 4",)
    if kind == "utf16_copy":
        return ("mov ecx, dword ptr [esp+8]", "mov edx, dword ptr [esp+4]",
                "mov eax, dword ptr [esp+12]", "sub ecx, edx", "sar ecx, 1", "test ecx, ecx",
                "jle done", "push esi", "sub edx, eax", "copy:", "mov si, word ptr [edx+eax]",
                "mov word ptr [eax], si", "add eax, 2", "dec ecx", "jne copy", "pop esi",
                "done:", "ret")
    raise ValueError(kind)


def render(address, kind, args):
    lines = "\n".join(f"    __asm {line}" for line in body(kind, args))
    return ("// Exact recovered repeated control/table leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size, args in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredControlLeaf{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
