"""Stage shared legacy runtime primitives for all three server images."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "0041e7b0", "allmul", 52),
    ("game-server", "004ac400", "allmul", 52),
    ("save-server", "00470a80", "allmul", 52),
    ("login-server", "004254d0", "strncmp", 56),
    ("game-server", "004a9780", "strncmp", 56),
    ("save-server", "00477360", "strncmp", 56),
)

ALLMUL = (
    "mov eax, dword ptr [esp+8]", "mov ecx, dword ptr [esp+16]",
    "or ecx, eax", "mov ecx, dword ptr [esp+12]", "jne hard_case",
    "mov eax, dword ptr [esp+4]", "mul ecx", "ret 16", "hard_case:",
    "push ebx", "mul ecx", "mov ebx, eax", "mov eax, dword ptr [esp+8]",
    "mul dword ptr [esp+20]", "add ebx, eax", "mov eax, dword ptr [esp+8]",
    "mul ecx", "add edx, ebx", "pop ebx", "ret 16",
)

STRNCMP = (
    "push ebp", "mov ebp, esp", "push edi", "push esi", "push ebx",
    "mov ecx, dword ptr [ebp+16]", "jecxz result", "mov ebx, ecx",
    "mov edi, dword ptr [ebp+8]", "mov esi, edi", "xor eax, eax",
    "repne scasb", "neg ecx", "add ecx, ebx", "mov edi, esi",
    "mov esi, dword ptr [ebp+12]", "repe cmpsb", "mov al, byte ptr [esi-1]",
    "xor ecx, ecx", "cmp al, byte ptr [edi-1]", "ja differing",
    "je result", "dec ecx", "dec ecx", "differing:", "not ecx",
    "result:", "mov eax, ecx", "pop ebx", "pop esi", "pop edi", "leave", "ret",
)


def render(address, kind):
    body = ALLMUL if kind == "allmul" else STRNCMP
    return (
        "// Exact shared legacy runtime primitive.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        + "\n".join(f"    __asm {line}" for line in body)
        + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredRuntimePrimitive{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({
            "component": component, "address": address, "size": size,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"], "relocations": [],
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
