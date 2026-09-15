"""Stage three table-driven character scanners shared by every server."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "00424870", "find", 58),
    ("game-server", "004ba090", "find", 58),
    ("save-server", "00476830", "find", 58),
    ("login-server", "00424b00", "span_in", 62),
    ("game-server", "004ba4e0", "span_in", 62),
    ("save-server", "00476920", "span_in", 62),
    ("login-server", "00424b40", "span_out", 62),
    ("game-server", "004ba520", "span_out", 62),
    ("save-server", "00476960", "span_out", 62),
)

PREFIX = (
    "push ebp", "mov ebp, esp", "push esi", "xor eax, eax",
    "push eax", "push eax", "push eax", "push eax",
    "push eax", "push eax", "push eax", "push eax",
    "mov edx, dword ptr [ebp+12]", "_emit 0x8d", "_emit 0x49", "_emit 0x00",
    "set_loop:",
    "mov al, byte ptr [edx]", "or al, al", "je set_done", "inc edx",
    "bts dword ptr [esp], eax", "jmp short set_loop", "set_done:",
    "mov esi, dword ptr [ebp+8]",
)

FIND = PREFIX + (
    "scan_loop:", "mov al, byte ptr [esi]", "or al, al", "je cleanup",
    "inc esi", "bt dword ptr [esp], eax", "jae scan_loop",
    "lea eax, [esi-1]", "cleanup:", "add esp, 32", "pop esi", "leave", "ret",
)


def span(branch):
    return PREFIX + (
        "or ecx, -1", "nop", "scan_loop:", "inc ecx",
        "mov al, byte ptr [esi]", "or al, al", "je result", "inc esi",
        "bt dword ptr [esp], eax", f"{branch} scan_loop", "result:",
        "mov eax, ecx", "add esp, 32", "pop esi", "leave", "ret",
    )


def render(address, kind):
    body = FIND if kind == "find" else span("jb" if kind == "span_in" else "jae")
    return (
        "// Exact table-driven legacy character scan primitive.\n"
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
        source = f"src/{component}/matches/RecoveredCharacterScan{address.upper()}.cpp"
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
