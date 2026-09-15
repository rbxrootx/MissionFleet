"""Stage compact static exit registrations; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
SPECS = {
    "login-server": ("0040971f",),
    "game-server": (
        "0048d8a4", "004d213d", "004f11ef", "004f124d", "004f12ab",
        "004f1309", "00543696", "00543fc5", "0054401b", "00544d95",
        "00544deb", "00544f78", "00545413", "00547314", "0054784a",
        "0054787f", "005478fe", "00548f34", "00549074", "0054ba9f",
    ),
    "save-server": (
        "00449e94", "004a328d", "004cf11f", "004cf17d", "004cf1db",
        "004cf239", "0053e7c6", "0053f0f5", "0053f14b", "0053fec5",
        "0053ff1b", "00540198", "00540633", "0054277a", "005427af",
        "0054282e", "00543fc4", "00544134", "00544274", "00546dbf",
    ),
}


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, addresses in SPECS.items():
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        for address in addresses:
            if (component, address) in existing:
                continue
            start = int(address, 16) - int(document["image_base"], 16)
            code = image[start:start + 18]
            if code[:4] != bytes.fromhex("55 8b ec 68") or code[13:] != bytes.fromhex("83 c4 04 5d c3"):
                raise ValueError(f"unexpected exit-registration shape at {component}:{address}")
            callback = operand_target(code, int(address, 16), {"offset": 4, "kind": "absolute"})
            register = operand_target(code, int(address, 16), {"offset": 9})
            source = f"src/{component}/matches/RecoveredExitRegistration{address.upper()}.cpp"
            (ROOT / source).write_text(f'''// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback{callback:08X}();
extern "C" void Register{register:08X}();
extern "C" __declspec(naked) void Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback{callback:08X}
    __asm call Register{register:08X}
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}}
''', encoding="ascii")
            records.append({
                "component": component, "address": address, "size": 18,
                "source": source, "symbol": f"_Recovered{address.upper()}",
                "flags": ["/Od", "/GX-"],
                "relocations": [
                    {"offset": 4, "kind": "absolute", "symbol": f"_Callback{callback:08X}"},
                    {"offset": 9, "symbol": f"_Register{register:08X}"},
                ],
            })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
