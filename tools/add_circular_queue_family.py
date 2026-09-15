"""Stage the repeated circular-queue push/pop family."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = [
    ("game-server", "0048bfc0", "pop", 131, 4),
    ("save-server", "0042e3d0", "pop", 131, 4),
    ("game-server", "0048c160", "pop", 131, 8),
    ("save-server", "0042e570", "pop", 131, 8),
    ("game-server", "0048c050", "push", 144, 4),
    ("save-server", "0042e460", "push", 144, 4),
]


def pop_body(stride):
    return (
        "push ebp", "mov ebp, esp", "sub esp, 0ch",
        "mov dword ptr [ebp-0ch], 0cccccccch",
        "mov dword ptr [ebp-8], 0cccccccch",
        "mov dword ptr [ebp-4], 0cccccccch",
        "mov dword ptr [ebp-8], ecx", "mov eax, dword ptr [ebp-8]",
        "mov ecx, dword ptr [eax+10h]", "mov dword ptr [ebp-4], ecx",
        "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [ebp-8]",
        "mov ecx, dword ptr [edx+10h]", "cmp ecx, dword ptr [eax+0ch]",
        "je select", "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+4]",
        "sub eax, 1", "mov ecx, dword ptr [ebp-8]",
        "cmp dword ptr [ecx+10h], eax", "jne increment",
        "mov dword ptr [ebp-0ch], 0", "jmp update", "increment:",
        "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+10h]",
        "add eax, 1", "mov dword ptr [ebp-0ch], eax", "update:",
        "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ebp-0ch]",
        "mov dword ptr [ecx+10h], edx", "mov eax, dword ptr [ebp-8]",
        "mov ecx, dword ptr [eax+8]", "sub ecx, 1",
        "mov edx, dword ptr [ebp-8]", "mov dword ptr [edx+8], ecx", "select:",
        "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax+14h]",
        "mov edx, dword ptr [ebp-4]", f"lea eax, [ecx+edx*{stride}]",
        "mov esp, ebp", "pop ebp", "ret",
    )


def push_body():
    return (
        "push ebp", "mov ebp, esp", "sub esp, 0ch",
        "mov dword ptr [ebp-0ch], 0cccccccch",
        "mov dword ptr [ebp-8], 0cccccccch",
        "mov dword ptr [ebp-4], 0cccccccch",
        "mov dword ptr [ebp-8], ecx", "mov eax, dword ptr [ebp-8]",
        "mov ecx, dword ptr [eax+0ch]", "mov dword ptr [ebp-4], ecx",
        "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+4]", "sub eax, 1",
        "mov ecx, dword ptr [ebp-8]", "cmp dword ptr [ecx+0ch], eax",
        "jne increment", "mov dword ptr [ebp-0ch], 0", "jmp update",
        "increment:", "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+0ch]",
        "add eax, 1", "mov dword ptr [ebp-0ch], eax", "update:",
        "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ebp-0ch]",
        "mov dword ptr [ecx+0ch], edx", "mov eax, dword ptr [ebp-8]",
        "mov ecx, dword ptr [ebp-0ch]", "cmp ecx, dword ptr [eax+10h]",
        "je full", "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+14h]",
        "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp+8]",
        "mov edx, dword ptr [edx]", "mov dword ptr [eax+ecx*4], edx",
        "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax+8]", "add ecx, 1",
        "mov edx, dword ptr [ebp-8]", "mov dword ptr [edx+8], ecx",
        "mov eax, 1", "jmp done", "full:", "xor eax, eax", "done:",
        "mov esp, ebp", "pop ebp", "ret 4",
    )


def render(address, kind, stride):
    body = pop_body(stride) if kind == "pop" else push_body()
    lines = "\n".join(f"    __asm {line}" for line in body)
    return ("// Exact recovered circular-queue operation.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size, stride in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCircularQueue{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, stride), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
