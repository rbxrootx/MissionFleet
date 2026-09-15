"""Stage the clean 64-byte game-server reallocation/locking bridge."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
COMPONENT = "game-server"
ADDRESS = "004aa6c0"


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    if any(m["component"] == COMPONENT and m["address"] == ADDRESS for m in document["matches"]):
        print("Staged 0 functions; target already exists.")
        return
    base = int(document["image_base"], 16)
    image = (ROOT / "private-inputs/decompilation/regions/game-server.bin").read_bytes()
    code = image[int(ADDRESS, 16) - base:int(ADDRESS, 16) - base + 64]
    calls = {o: operand_target(code, int(ADDRESS, 16), {"offset": o}) for o in (7, 37, 50)}
    source = "src/game-server/matches/RecoveredReallocationBridge004AA6C0.cpp"
    body = (
        "push ebp", "mov ebp, esp", "push ecx", "push 9", f"call Call{calls[7]:08X}",
        "add esp, 4", "push 1", "mov eax, dword ptr [ebp+24]", "push eax",
        "mov ecx, dword ptr [ebp+20]", "push ecx", "mov edx, dword ptr [ebp+16]", "push edx",
        "mov eax, dword ptr [ebp+12]", "push eax", "mov ecx, dword ptr [ebp+8]", "push ecx",
        f"call Call{calls[37]:08X}", "add esp, 24", "mov dword ptr [ebp-4], eax",
        "push 9", f"call Call{calls[50]:08X}", "add esp, 4", "mov eax, dword ptr [ebp-4]",
        "mov esp, ebp", "pop ebp", "ret",
    )
    declarations = [f'extern "C" void Call{v:08X}();' for v in sorted(set(calls.values()))]
    text = "// Exact recovered locked reallocation bridge.\n" + "\n".join(declarations) + "\n"
    text += f'extern "C" __declspec(naked) void Recovered{ADDRESS.upper()}()\n{{\n'
    text += "\n".join(f"    __asm {line}" for line in body) + "\n}\n"
    (ROOT / source).write_text(text, encoding="ascii")
    append_records(path, [{"component": COMPONENT, "address": ADDRESS, "size": 64,
                           "source": source, "symbol": "_Recovered004AA6C0",
                           "flags": ["/Od", "/GX-"], "relocations": [
                               {"offset": o, "symbol": f"_Call{calls[o]:08X}"} for o in (7, 37, 50)
                           ]}])
    print("Staged 1 function; no progress credited until verification.")


if __name__ == "__main__":
    main()
