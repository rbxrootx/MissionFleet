"""Stage repeated string-hash and fixed-table initialization primitives."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004e9e20", "hash", 66),
    ("game-server", "004ec3c0", "hash", 66),
    ("game-server", "004ecfa0", "hash", 66),
    ("save-server", "004c6490", "hash", 66),
    ("save-server", "004c92f0", "hash", 66),
    ("save-server", "004c9ed0", "hash", 66),
    ("game-server", "00434bd0", "table", 72),
    ("game-server", "0048be20", "table", 72),
    ("save-server", "0042e1d0", "table", 72),
)

HASH = (
    "push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
    "mov dword ptr [ebp-4], 0", "hash_loop:", "mov eax, dword ptr [ebp+8]",
    "movsx ecx, byte ptr [eax]", "test ecx, ecx", "je hash_done",
    "mov edx, dword ptr [ebp-4]", "shl edx, 5", "add edx, dword ptr [ebp-4]",
    "mov eax, dword ptr [ebp+8]", "movsx ecx, byte ptr [eax]", "add edx, ecx",
    "mov dword ptr [ebp-4], edx", "mov edx, dword ptr [ebp+8]", "add edx, 1",
    "mov dword ptr [ebp+8], edx", "jmp short hash_loop", "hash_done:",
    "mov eax, dword ptr [ebp-4]", "mov esp, ebp", "pop ebp", "ret 4",
)

TABLE = (
    "push ebp", "mov ebp, esp", "sub esp, 8",
    "mov dword ptr [ebp-8], 0cccccccch", "mov dword ptr [ebp-4], 0cccccccch",
    "mov dword ptr [ebp-8], ecx", "mov dword ptr [ebp-4], 0", "jmp short test_index",
    "next_index:", "mov eax, dword ptr [ebp-4]", "add eax, 1",
    "mov dword ptr [ebp-4], eax", "test_index:", "cmp dword ptr [ebp-4], 65536",
    "jge table_done", "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp-8]",
    "mov dword ptr [edx+ecx*4], 0", "jmp short next_index", "table_done:",
    "mov eax, dword ptr [ebp-8]", "mov esp, ebp", "pop ebp", "ret",
)


def render(address, kind):
    body = HASH if kind == "hash" else TABLE
    return (
        "// Exact recovered hash/table primitive.\n"
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
        source = f"src/{component}/matches/RecoveredHashTable{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
