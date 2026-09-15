"""Stage paired new-handler callbacks and the game server-table lookup."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004b5560", "new_handler", 45),
    ("save-server", "00472280", "new_handler", 45),
    ("game-server", "00441930", "server_lookup", 85),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    base = int(document["image_base"], 16)
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        code = image[int(address, 16) - base:int(address, 16) - base + size]
        if kind == "new_handler":
            handler = operand_target(code, int(address, 16), {"offset": 5, "kind": "absolute"})
            declarations = [f'extern "C" void *Handler{handler:08X};']
            body = ("push ebp", "mov ebp, esp", "push ecx", f"mov eax, dword ptr [Handler{handler:08X}]",
                    "mov dword ptr [ebp-4], eax", "cmp dword ptr [ebp-4], 0", "je failed",
                    "mov ecx, dword ptr [ebp+8]", "push ecx", "call dword ptr [ebp-4]", "add esp, 4",
                    "test eax, eax", "jne succeeded", "failed:", "xor eax, eax", "jmp short finished",
                    "succeeded:", "mov eax, 1", "finished:", "mov esp, ebp", "pop ebp", "ret")
            relocations = [{"offset": 5, "kind": "absolute", "symbol": f"_Handler{handler:08X}"}]
        else:
            declarations = []
            body = ("push ebp", "mov ebp, esp", "sub esp, 8",
                    "mov dword ptr [ebp-8], 0cccccccch", "mov dword ptr [ebp-4], 0cccccccch",
                    "mov dword ptr [ebp-8], ecx", "mov eax, dword ptr [ebp+8]", "and eax, 65535",
                    "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ecx+eax*4]",
                    "mov dword ptr [ebp-4], edx", "jmp short check_node", "next_node:",
                    "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+8]",
                    "mov dword ptr [ebp-4], ecx", "check_node:", "cmp dword ptr [ebp-4], 0",
                    "je missing", "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [edx]",
                    "cmp eax, dword ptr [ebp+8]", "jne retry_trampoline", "mov ecx, dword ptr [ebp-4]",
                    "mov eax, dword ptr [ecx+4]", "jmp short finished", "retry_trampoline:",
                    "jmp short next_node", "missing:", "xor eax, eax",
                    "finished:", "mov esp, ebp", "pop ebp", "ret 4")
            relocations = []
        source = f"src/{component}/matches/RecoveredFailureLookup{address.upper()}.cpp"
        text = "// Exact recovered failure callback/server lookup helper.\n"
        if declarations:
            text += "\n".join(declarations) + "\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
