"""Stage the shared VC6 memset and strlen implementations."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "0041eae0", "memset", 88),
    ("game-server", "004a9370", "memset", 88),
    ("save-server", "004658c0", "memset", 88),
    ("login-server", "0041eb40", "strlen", 123),
    ("game-server", "004a93d0", "strlen", 123),
    ("save-server", "00465740", "strlen", 123),
)

MEMSET = (
    "mov edx, dword ptr [esp+12]", "mov ecx, dword ptr [esp+4]", "test edx, edx",
    "je empty", "xor eax, eax", "mov al, byte ptr [esp+8]", "push edi", "mov edi, ecx",
    "cmp edx, 4", "jb tail", "neg ecx", "and ecx, 3", "je aligned",
    "sub edx, ecx", "prefix_loop:", "mov byte ptr [edi], al", "inc edi", "dec ecx",
    "jne prefix_loop", "aligned:", "mov ecx, eax", "shl eax, 8", "add eax, ecx",
    "mov ecx, eax", "shl eax, 16", "add eax, ecx", "mov ecx, edx", "and edx, 3",
    "shr ecx, 2", "je tail", "rep stosd", "test edx, edx", "je finish",
    "tail:", "mov byte ptr [edi], al", "inc edi", "dec edx", "jne tail",
    "finish:", "mov eax, dword ptr [esp+8]", "pop edi", "ret",
    "empty:", "mov eax, dword ptr [esp+4]", "ret",
)

STRLEN = (
    "mov ecx, dword ptr [esp+4]", "test ecx, 3", "je word_loop",
    "byte_loop:", "mov al, byte ptr [ecx]", "inc ecx", "test al, al", "je byte_zero",
    "test ecx, 3", "jne byte_loop", "_emit 0x05", "_emit 0x00", "_emit 0x00",
    "_emit 0x00", "_emit 0x00", "word_loop:", "mov eax, dword ptr [ecx]",
    "mov edx, 07efefeffh", "add edx, eax", "xor eax, -1", "xor eax, edx",
    "add ecx, 4", "test eax, 081010100h", "je word_loop",
    "mov eax, dword ptr [ecx-4]", "test al, al", "je zero0", "test ah, ah", "je zero1",
    "test eax, 00ff0000h", "je zero2", "test eax, 0ff000000h", "je byte_zero",
    "jmp short word_loop", "byte_zero:", "lea eax, [ecx-1]", "mov ecx, dword ptr [esp+4]",
    "sub eax, ecx", "ret", "zero2:", "lea eax, [ecx-2]", "mov ecx, dword ptr [esp+4]",
    "sub eax, ecx", "ret", "zero1:", "lea eax, [ecx-3]", "mov ecx, dword ptr [esp+4]",
    "sub eax, ecx", "ret", "zero0:", "lea eax, [ecx-4]", "mov ecx, dword ptr [esp+4]",
    "sub eax, ecx", "ret",
)


def render(address, kind):
    body = MEMSET if kind == "memset" else STRLEN
    return (
        "// Exact shared VC6 memory/string runtime primitive.\n"
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
        source = f"src/{component}/matches/RecoveredMemoryString{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
