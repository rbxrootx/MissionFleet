"""Stage repeated bounded-length and numeric-group normalization routines."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004ba3e0", "bounded", 80),
    ("game-server", "004babf0", "bounded", 80),
    ("save-server", "004761f0", "bounded", 80),
    ("save-server", "00476710", "bounded", 80),
    ("game-server", "004c2da0", "grouping", 125),
    ("game-server", "004c3160", "grouping", 125),
    ("save-server", "0047dcd0", "grouping", 125),
    ("save-server", "0047e090", "grouping", 125),
)

BOUNDED = (
    "push ebp", "mov ebp, esp", "sub esp, 8", "mov eax, dword ptr [ebp+12]",
    "mov dword ptr [ebp-8], eax", "mov ecx, dword ptr [ebp+8]",
    "mov dword ptr [ebp-4], ecx", "scan_loop:", "mov edx, dword ptr [ebp-8]",
    "mov eax, dword ptr [ebp-8]", "sub eax, 1", "mov dword ptr [ebp-8], eax",
    "test edx, edx", "je scan_done", "mov ecx, dword ptr [ebp-4]",
    "movsx edx, byte ptr [ecx]", "test edx, edx", "je scan_done",
    "mov eax, dword ptr [ebp-4]", "add eax, 1", "mov dword ptr [ebp-4], eax",
    "jmp short scan_loop", "scan_done:", "mov ecx, dword ptr [ebp-4]",
    "movsx edx, byte ptr [ecx]", "test edx, edx", "jne limit_reached",
    "mov eax, dword ptr [ebp-4]", "sub eax, dword ptr [ebp+8]", "jmp short result",
    "limit_reached:", "mov eax, dword ptr [ebp+12]", "result:",
    "mov esp, ebp", "pop ebp", "ret",
)

GROUPING = (
    "push ebp", "mov ebp, esp", "push ecx", "main_loop:",
    "mov eax, dword ptr [ebp+8]", "movsx ecx, byte ptr [eax]", "test ecx, ecx",
    "je done", "mov edx, dword ptr [ebp+8]", "movsx eax, byte ptr [edx]",
    "cmp eax, 48", "jl nondigit", "mov ecx, dword ptr [ebp+8]",
    "movsx edx, byte ptr [ecx]", "cmp edx, 57", "jg nondigit",
    "mov eax, dword ptr [ebp+8]", "movsx ecx, byte ptr [eax]", "sub ecx, 48",
    "mov edx, dword ptr [ebp+8]", "mov byte ptr [edx], cl",
    "mov eax, dword ptr [ebp+8]", "add eax, 1", "mov dword ptr [ebp+8], eax",
    "jmp short continue_loop", "nondigit:", "mov ecx, dword ptr [ebp+8]",
    "movsx edx, byte ptr [ecx]", "cmp edx, 59", "jne advance",
    "mov eax, dword ptr [ebp+8]", "mov dword ptr [ebp-4], eax", "shift_loop:",
    "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp-4]",
    "mov al, byte ptr [edx+1]", "mov byte ptr [ecx], al",
    "mov ecx, dword ptr [ebp-4]", "add ecx, 1", "mov dword ptr [ebp-4], ecx",
    "mov edx, dword ptr [ebp-4]", "movsx eax, byte ptr [edx]", "test eax, eax",
    "jne shift_loop", "jmp short continue_loop", "advance:",
    "mov ecx, dword ptr [ebp+8]", "add ecx, 1", "mov dword ptr [ebp+8], ecx",
    "continue_loop:", "jmp main_loop", "done:", "mov esp, ebp", "pop ebp", "ret",
)


def render(address, kind):
    body = BOUNDED if kind == "bounded" else GROUPING
    return ("// Exact recovered text normalization primitive.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
            + "\n".join(f"    __asm {line}" for line in body) + "\n}\n")


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredTextNormalization{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
