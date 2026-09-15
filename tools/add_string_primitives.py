"""Stage byte-matching string primitives shared by all three servers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "00424b80", "rchr", 39),
    ("game-server", "004b52d0", "rchr", 39),
    ("save-server", "00470990", "rchr", 39),
    ("login-server", "00424ad0", "reverse", 48),
    ("game-server", "004ba430", "reverse", 48),
    ("save-server", "00476870", "reverse", 48),
)

RCHR = (
    "push ebp", "mov ebp, esp", "push edi", "mov edi, dword ptr [ebp+8]",
    "xor eax, eax", "or ecx, -1",
    "repne scasb", "inc ecx", "neg ecx", "dec edi", "mov al, byte ptr [ebp+12]",
    "std", "repne scasb", "inc edi", "cmp byte ptr [edi], al", "je absent",
    "xor eax, eax", "jmp done", "absent:", "mov eax, edi", "done:", "cld",
    "pop edi", "leave", "ret",
)

REVERSE = (
    "push ebp", "mov ebp, esp", "push edi", "push esi",
    "mov edi, dword ptr [ebp+8]", "mov edx, edi", "mov esi, edi",
    "xor eax, eax", "or ecx, -1", "repne scasb", "cmp ecx, -2", "je done",
    "dec edi", "dec edi", "swap_loop:", "cmp esi, edi", "jae done",
    "mov ah, byte ptr [esi]", "mov al, byte ptr [edi]",
    "mov byte ptr [esi], al", "mov byte ptr [edi], ah",
    "inc esi", "dec edi", "jmp short swap_loop", "done:",
    "mov eax, edx", "pop esi", "pop edi", "leave", "ret",
)


def source_text(address, kind):
    # Label placement is kept explicit because the original compiler used short branches.
    body = RCHR if kind == "rchr" else REVERSE
    return (
        "// Exact legacy string primitive recovered from the server runtime.\n"
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
        source = f"src/{component}/matches/RecoveredStringPrimitive{address.upper()}.cpp"
        (ROOT / source).write_text(source_text(address, kind), encoding="ascii")
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
