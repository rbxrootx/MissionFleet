"""Stage a broad family of paired game/save leaf accessors and flag helpers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
PAIRS = []


def pair(game, save, kind, size, *args):
    PAIRS.extend((("game-server", game, kind, size, args), ("save-server", save, kind, size, args)))


pair("00531975", "0052573e", "setter", 22, 12)
pair("0053e032", "0052da92", "setter", 22, 60)
pair("00552834", "005512a4", "setter", 22, 116)
pair("004fab60", "004d9c60", "typecheck", 22)
pair("004a3bc0", "004601d0", "zero", 24)
pair("0053148e", "0052528e", "divide", 24, 3600)
pair("005314cc", "005252cc", "divide", 24, 60)
pair("00531476", "00525276", "divide", 24, 86400)
pair("0053473c", "005284bd", "nested_word", 25, 24)
pair("00534755", "005284d6", "nested_word", 25, 26)
pair("0053470a", "0052848b", "nested_word", 25, 28)
pair("00534723", "005284a4", "nested_word", 25, 30)
pair("00531916", "005256df", "inverse_flag", 25, 20, 1)
pair("0053192f", "005256f8", "inverse_flag", 25, 20, 4)
pair("00524642", "00516ec2", "setter", 25, 128)
pair("00426a60", "0042c260", "debug_word", 25)
pair("0048b475", "0042d825", "constant8", 25)
pair("005318fc", "005256c5", "boolean_flag", 26, 20, 1)
pair("00533d6f", "00527b38", "boolean_flag", 26, 104, 1)
pair("00533dbd", "00527b86", "boolean_flag", 26, 104, 2)
pair("00533da3", "00527b6c", "boolean_flag", 26, 104, 4)
pair("00533d89", "00527b52", "boolean_flag", 26, 104, 8)
pair("00533dd7", "00527ba0", "boolean_flag", 26, 104, 16)
pair("00533df1", "00527bba", "boolean_flag", 26, 104, 32)
pair("00533cf3", "00527abc", "boolean_flag", 26, 104, 64)


def body(kind, args):
    if kind == "setter":
        (offset,) = args
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
                f"mov dword ptr [eax+{offset}], ecx", "mov esp, ebp", "pop ebp", "ret 4")
    if kind == "typecheck":
        return ("push ebp", "mov ebp, esp", "mov eax, dword ptr [ebp+8]", "xor ecx, ecx",
                "cmp dword ptr [eax+4], 514", "sete cl", "mov eax, ecx", "pop ebp", "ret")
    if kind == "zero":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "xor ecx, ecx", "cmp dword ptr [eax], 0",
                "sete cl", "mov eax, ecx", "mov esp, ebp", "pop ebp", "ret")
    if kind == "divide":
        (divisor,) = args
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "mov eax, dword ptr [eax]", "cdq",
                f"mov ecx, {divisor}", "idiv ecx", "mov esp, ebp", "pop ebp", "ret")
    if kind == "nested_word":
        (offset,) = args
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax]",
                "mov edx, dword ptr [ecx+92]", "xor eax, eax", f"mov ax, word ptr [edx+{offset}]",
                "mov esp, ebp", "pop ebp", "ret")
    if kind in ("inverse_flag", "boolean_flag"):
        offset, mask = args
        tail = ("neg eax", "sbb eax, eax", "inc eax") if kind == "inverse_flag" else ("neg eax", "sbb eax, eax", "neg eax")
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", f"mov eax, dword ptr [eax+{offset}]",
                f"and eax, {mask}", *tail, "mov esp, ebp", "pop ebp", "ret")
    if kind == "debug_word":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
                "mov dword ptr [ebp-4], ecx", "mov eax, dword ptr [ebp-4]",
                "mov ax, word ptr [eax+2]", "mov esp, ebp", "pop ebp", "ret")
    if kind == "constant8":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
                "mov dword ptr [ebp-4], ecx", "mov eax, 8", "mov esp, ebp", "pop ebp", "ret 4")
    raise ValueError(kind)


def render(address, kind, args):
    return ("// Exact recovered paired leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
            + "\n".join(f"    __asm {line}" for line in body(kind, args)) + "\n}\n")


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size, args in PAIRS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredPairedLeaf{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
