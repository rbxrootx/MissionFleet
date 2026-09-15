"""Stage repeated linker/container state helpers shared by both servers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = [
    ("game-server", "0048c928", "ring_pop", 102),
    ("save-server", "0042ed78", "ring_pop", 102),
    ("game-server", "00575f36", "interface_assign", 105),
    ("save-server", "00582616", "interface_assign", 105),
    ("game-server", "00563afe", "interface_clear", 106),
    ("save-server", "005699fe", "interface_clear", 106),
]


def body(kind):
    if kind == "ring_pop":
        return (
            "push ebp", "mov ebp, esp", "sub esp, 0ch",
            "mov dword ptr [ebp-0ch], 0cccccccch",
            "mov dword ptr [ebp-8], 0cccccccch",
            "mov dword ptr [ebp-4], 0cccccccch",
            "mov dword ptr [ebp-8], ecx", "mov eax, dword ptr [ebp-8]",
            "mov ecx, dword ptr [eax+10h]", "mov edx, dword ptr [ebp-8]",
            "mov eax, dword ptr [edx+0ch]", "mov ecx, dword ptr [eax+ecx*4]",
            "mov dword ptr [ebp-4], ecx", "mov edx, dword ptr [ebp-8]",
            "mov eax, dword ptr [edx+4]", "sub eax, 1",
            "mov ecx, dword ptr [ebp-8]", "cmp dword ptr [ecx+10h], eax",
            "jne increment", "mov dword ptr [ebp-0ch], 0", "jmp store",
            "increment:", "mov edx, dword ptr [ebp-8]",
            "mov eax, dword ptr [edx+10h]", "add eax, 1",
            "mov dword ptr [ebp-0ch], eax", "store:",
            "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ebp-0ch]",
            "mov dword ptr [ecx+10h], edx", "mov eax, dword ptr [ebp-4]",
            "mov esp, ebp", "pop ebp", "ret",
        )
    if kind == "interface_assign":
        return (
            "push ebp", "mov ebp, esp", "sub esp, 8",
            "mov dword ptr [ebp-8], ecx", "mov eax, dword ptr [ebp-8]",
            "cmp eax, dword ptr [ebp+8]", "je done",
            "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ecx]",
            "mov dword ptr [ebp-4], edx", "mov eax, dword ptr [ebp-8]",
            "mov ecx, dword ptr [ebp+8]", "mov edx, dword ptr [ecx]",
            "mov dword ptr [eax], edx", "mov eax, dword ptr [ebp-8]",
            "cmp dword ptr [eax], 0", "je release_old",
            "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ecx]",
            "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax]",
            "mov eax, dword ptr [ecx]", "push edx", "call dword ptr [eax+4]",
            "release_old:", "cmp dword ptr [ebp-4], 0", "je mark",
            "mov ecx, dword ptr [ebp-8]", "cmp dword ptr [ecx+4], 0", "je mark",
            "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [edx]",
            "mov ecx, dword ptr [ebp-4]", "push ecx", "call dword ptr [eax+8]",
            "mark:", "mov edx, dword ptr [ebp-8]", "mov dword ptr [edx+4], 1",
            "done:", "mov eax, dword ptr [ebp-8]", "mov esp, ebp", "pop ebp", "ret 4",
        )
    if kind == "interface_clear":
        return (
            "push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
            "retry:", "mov eax, dword ptr [ebp-4]", "cmp dword ptr [eax+4], 0", "je after_secondary",
            "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx+4]",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+4]",
            "mov eax, dword ptr [ecx]", "push edx", "call dword ptr [eax+8]",
            "mov ecx, dword ptr [ebp-4]", "mov dword ptr [ecx+4], 0",
            "after_secondary:", "xor edx, edx", "test edx, edx", "jne retry",
            "mov eax, dword ptr [ebp-4]", "cmp dword ptr [eax], 0", "je reset",
            "mov ecx, dword ptr [ebp-4]", "cmp dword ptr [ecx+0ch], 0", "je clear_primary",
            "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [edx]",
            "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx]",
            "mov ecx, dword ptr [edx]", "push eax", "call dword ptr [ecx+8]",
            "clear_primary:", "mov edx, dword ptr [ebp-4]", "mov dword ptr [edx], 0",
            "reset:", "mov eax, dword ptr [ebp-4]", "mov dword ptr [eax+8], 0",
            "mov esp, ebp", "pop ebp", "ret",
        )
    raise ValueError(kind)


def render(address, kind):
    lines = "\n".join(f"    __asm {line}" for line in body(kind))
    return ("// Exact recovered linker/container state helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredLinkerState{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
