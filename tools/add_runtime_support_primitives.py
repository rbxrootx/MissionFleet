"""Stage stack-probe and SEH runtime support shared by all server images."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "0041ef00", "stack_probe", 47),
    ("game-server", "004a97c0", "stack_probe", 47),
    ("save-server", "00465fa0", "stack_probe", 47),
    ("login-server", "0041e38d", "seh_unwind", 45),
    ("game-server", "004a8b50", "seh_unwind", 45),
    ("save-server", "00464e30", "seh_unwind", 45),
)

STACK_PROBE = (
    "push ecx", "cmp eax, 4096", "lea ecx, [esp+8]", "jb final_page",
    "probe_page:", "sub ecx, 4096", "sub eax, 4096", "test dword ptr [ecx], eax",
    "cmp eax, 4096", "jae probe_page", "final_page:", "sub ecx, eax",
    "mov eax, esp", "test dword ptr [ecx], eax", "mov esp, ecx",
    "mov ecx, dword ptr [eax]", "mov eax, dword ptr [eax+4]", "push eax", "ret",
)

SEH_UNWIND = (
    "push ebp", "mov ebp, esp", "push ecx", "push ebx", "push esi", "push edi",
    "mov eax, dword ptr [ebp+12]", "add eax, 12", "mov dword ptr [ebp-4], eax",
    "mov ebx, dword ptr fs:[0]", "mov eax, dword ptr [ebx]",
    "mov dword ptr fs:[0], eax", "mov eax, dword ptr [ebp+8]",
    "mov ebx, dword ptr [ebp+12]", "mov esp, dword ptr [ebx-4]",
    "mov ebp, dword ptr [ebp-4]", "jmp eax",
)


def render(address, kind):
    body = STACK_PROBE if kind == "stack_probe" else SEH_UNWIND
    return (
        "// Exact shared compiler runtime support primitive.\n"
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
        source = f"src/{component}/matches/RecoveredRuntimeSupport{address.upper()}.cpp"
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
