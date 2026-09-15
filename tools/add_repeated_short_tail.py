"""Stage the shared seven-byte register-restore tail fragment."""

import json

from tools.add_call_stubs import append_records
from tools.add_repeated_50_99_family import CONFIG_DIR, ROOT


TARGETS = (
    ("login-server", "00426180", 7),
    ("game-server", "004a9e40", 7),
    ("save-server", "00465970", 7),
)
BODY = (0x57, 0x8B, 0x7C, 0x24, 0x08, 0xEB, 0x6A)


def main():
    path = CONFIG_DIR / "verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredShortTail{address.upper()}.cpp"
        emits = "\n".join(f"    __asm _emit 0{byte:02x}h" for byte in BODY)
        text = "// Exact shared register-restore/tail-branch fragment.\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{emits}\n}}\n'
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
