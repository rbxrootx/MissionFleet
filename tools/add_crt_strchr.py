"""Stage the shared optimized VC6 strchr implementation."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004b9fd0", 193),
    ("save-server", "00476770", 193),
)

BODY = (
    "xor eax, eax", "mov al, byte ptr [esp+8]", "push ebx", "mov ebx, eax",
    "shl eax, 8", "mov edx, dword ptr [esp+8]", "test edx, 3", "je aligned",
    "prefix:", "mov cl, byte ptr [edx]", "inc edx", "cmp cl, bl",
    # VC6 shares a return tail 0x10 bytes before this function; preserve its short jump.
    "_emit 074h", "_emit 0d1h", "test cl, cl", "je not_found",
    "test edx, 3", "jne prefix", "aligned:", "or ebx, eax", "push edi",
    "mov eax, ebx", "shl ebx, 10h", "push esi", "or ebx, eax", "word_loop:",
    "mov ecx, dword ptr [edx]", "mov edi, 07efefeffh", "mov eax, ecx",
    "mov esi, edi", "xor ecx, ebx", "add esi, eax", "add edi, ecx",
    "xor ecx, 0ffffffffh", "xor eax, 0ffffffffh", "xor ecx, edi", "xor eax, esi",
    "add edx, 4", "and ecx, 081010100h", "jne inspect",
    "and eax, 081010100h", "je word_loop", "and eax, 01010100h", "jne null_tail",
    "and esi, 080000000h", "jne word_loop", "null_tail:", "pop esi", "pop edi",
    "not_found:", "pop ebx", "xor eax, eax", "ret", "inspect:",
    "mov eax, dword ptr [edx-4]", "cmp al, bl", "je found0", "test al, al", "je null_tail",
    "cmp ah, bl", "je found1", "test ah, ah", "je null_tail", "shr eax, 10h",
    "cmp al, bl", "je found2", "test al, al", "je null_tail", "cmp ah, bl", "je found3",
    "test ah, ah", "je null_tail", "jmp word_loop", "found3:",
    "pop esi", "pop edi", "lea eax, [edx-1]", "pop ebx", "ret", "found2:",
    "lea eax, [edx-2]", "pop esi", "pop edi", "pop ebx", "ret", "found1:",
    "lea eax, [edx-3]", "pop esi", "pop edi", "pop ebx", "ret", "found0:",
    "lea eax, [edx-4]", "pop esi", "pop edi", "pop ebx", "ret",
    "int 3", "int 3", "int 3", "int 3", "push ebp",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact shared optimized VC6 strchr implementation.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCRTStrchr{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
