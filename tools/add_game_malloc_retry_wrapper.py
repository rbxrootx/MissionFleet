"""Stage the complete game-server malloc retry wrapper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
COMPONENT = "game-server"
ADDRESS = "004aa280"
SIZE = 94


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    if any(m["component"] == COMPONENT and m["address"] == ADDRESS for m in document["matches"]):
        print("Staged 0 functions; target already exists.")
        return
    base = int(document["image_base"], 16)
    image = (ROOT / "private-inputs/decompilation/regions/game-server.bin").read_bytes()
    code = image[int(ADDRESS, 16) - base:int(ADDRESS, 16) - base + SIZE]
    offsets = (7, 31, 44, 73)
    calls = {o: operand_target(code, int(ADDRESS, 16), {"offset": o}) for o in offsets}
    body = (
        "push ebp", "mov ebp, esp", "push ecx", "retry:", "push 9", f"call Call{calls[7]:08X}",
        "add esp, 4", "mov eax, dword ptr [ebp+24]", "push eax", "mov ecx, dword ptr [ebp+20]",
        "push ecx", "mov edx, dword ptr [ebp+16]", "push edx", "mov eax, dword ptr [ebp+8]",
        "push eax", f"call Call{calls[31]:08X}", "add esp, 16", "mov dword ptr [ebp-4], eax",
        "push 9", f"call Call{calls[44]:08X}", "add esp, 4", "cmp dword ptr [ebp-4], 0",
        "jne return_result", "cmp dword ptr [ebp+12], 0", "jne retry_callback", "return_result:",
        "mov eax, dword ptr [ebp-4]", "jmp short finished", "retry_callback:",
        "mov ecx, dword ptr [ebp+8]", "push ecx", f"call Call{calls[73]:08X}", "add esp, 4",
        "test eax, eax", "jne retry_jump", "xor eax, eax", "jmp short finished",
        "retry_jump:", "jmp short retry", "finished:", "mov esp, ebp", "pop ebp", "ret",
    )
    declarations = [f'extern "C" void Call{v:08X}();' for v in sorted(set(calls.values()))]
    source = "src/game-server/matches/RecoveredMallocRetry004AA280.cpp"
    text = "// Exact recovered game-server malloc retry wrapper.\n" + "\n".join(declarations) + "\n"
    text += f'extern "C" __declspec(naked) void Recovered{ADDRESS.upper()}()\n{{\n'
    text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
    (ROOT / source).write_text(text, encoding="ascii")
    append_records(path, [{"component": COMPONENT, "address": ADDRESS, "size": SIZE,
                           "source": source, "symbol": "_Recovered004AA280",
                           "flags": ["/Od", "/GX-"],
                           "relocations": [{"offset": o, "symbol": f"_Call{calls[o]:08X}"}
                                           for o in offsets]}])
    print("Staged 1 function; no progress credited until verification.")


if __name__ == "__main__":
    main()
