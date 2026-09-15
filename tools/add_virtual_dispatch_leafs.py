"""Stage paired fixed-argument virtual dispatch wrappers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
PAIRS = []


def pair(game, save, kind, size, *args):
    PAIRS.extend((("game-server", game, kind, size, args), ("save-server", save, kind, size, args)))


pair("00530df0", "00524bf0", "one", 24, 1)
pair("00530e53", "00524c53", "one", 24, 2)
pair("00530e3b", "00524c3b", "one", 24, 4)
pair("00530e08", "00524c08", "one", 24, 16)
pair("00530ea1", "00524ca1", "one", 24, 32)
pair("00530d7e", "00524b7e", "two", 26, 0)
pair("00530d64", "00524b64", "two", 26, 2)
pair("00530e6b", "00524c6b", "one", 27, 256)
pair("00530e20", "00524c20", "one", 27, 2048)
pair("00530e86", "00524c86", "one", 27, 128)


def body(kind, args):
    (value,) = args
    pushes = (f"push {value}",) if kind == "one" else (f"push {value}", "push 0")
    slot = 64 if kind == "one" else 48
    return (
        "push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
        *pushes, "mov eax, dword ptr [ebp-4]", "mov edx, dword ptr [eax]",
        "mov ecx, dword ptr [ebp-4]", f"call dword ptr [edx+{slot}]",
        "mov esp, ebp", "pop ebp", "ret",
    )


def render(address, kind, args):
    return ("// Exact recovered fixed-argument virtual dispatch wrapper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
            + "\n".join(f"    __asm {line}" for line in body(kind, args)) + "\n}\n")


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size, args in PAIRS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredVirtualDispatch{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
