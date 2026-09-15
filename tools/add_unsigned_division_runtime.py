"""Stage shared unsigned 64-bit division and remainder runtime helpers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "0041e7f0", "div", 104),
    ("game-server", "004ac4e0", "div", 104),
    ("save-server", "00478dc0", "div", 104),
    ("login-server", "0041e860", "rem", 117),
    ("game-server", "004ac460", "rem", 117),
    ("save-server", "00478e30", "rem", 117),
)

DIVIDE = (
    "push ebx", "push esi", "mov eax, dword ptr [esp+24]", "or eax, eax",
    "jne large_divisor", "mov ecx, dword ptr [esp+20]", "mov eax, dword ptr [esp+16]",
    "xor edx, edx", "div ecx", "mov ebx, eax", "mov eax, dword ptr [esp+12]",
    "div ecx", "mov edx, ebx", "jmp short quotient_done", "large_divisor:",
    "mov ecx, eax", "mov ebx, dword ptr [esp+20]", "mov edx, dword ptr [esp+16]",
    "mov eax, dword ptr [esp+12]", "normalize:", "shr ecx, 1", "rcr ebx, 1",
    "shr edx, 1", "rcr eax, 1", "or ecx, ecx", "jne normalize", "div ebx",
    "mov esi, eax", "mul dword ptr [esp+24]", "mov ecx, eax",
    "mov eax, dword ptr [esp+20]", "mul esi", "add edx, ecx", "jb decrement",
    "cmp edx, dword ptr [esp+16]", "ja decrement", "jb quotient_ready",
    "cmp eax, dword ptr [esp+12]", "jbe quotient_ready", "decrement:", "dec esi",
    "quotient_ready:", "xor edx, edx", "mov eax, esi", "quotient_done:",
    "pop esi", "pop ebx", "ret 16",
)

REMAINDER = (
    "push ebx", "mov eax, dword ptr [esp+20]", "or eax, eax", "jne large_divisor",
    "mov ecx, dword ptr [esp+16]", "mov eax, dword ptr [esp+12]", "xor edx, edx",
    "div ecx", "mov eax, dword ptr [esp+8]", "div ecx", "mov eax, edx",
    "xor edx, edx", "jmp short remainder_done", "large_divisor:", "mov ecx, eax",
    "mov ebx, dword ptr [esp+16]", "mov edx, dword ptr [esp+12]",
    "mov eax, dword ptr [esp+8]", "normalize:", "shr ecx, 1", "rcr ebx, 1",
    "shr edx, 1", "rcr eax, 1", "or ecx, ecx", "jne normalize", "div ebx",
    "mov ecx, eax", "mul dword ptr [esp+20]", "xchg ecx, eax",
    "mul dword ptr [esp+16]", "add edx, ecx", "jb subtract_divisor",
    "cmp edx, dword ptr [esp+12]", "ja subtract_divisor", "jb subtract_dividend",
    "cmp eax, dword ptr [esp+8]", "jbe subtract_dividend", "subtract_divisor:",
    "sub eax, dword ptr [esp+16]", "sbb edx, dword ptr [esp+20]", "subtract_dividend:",
    "sub eax, dword ptr [esp+8]", "sbb edx, dword ptr [esp+12]", "neg edx",
    "neg eax", "sbb edx, 0", "remainder_done:", "pop ebx", "ret 16",
)


def render(address, kind):
    body = DIVIDE if kind == "div" else REMAINDER
    return (
        "// Exact VC6 unsigned 64-bit division runtime primitive.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        + "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredUnsignedDivision{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
