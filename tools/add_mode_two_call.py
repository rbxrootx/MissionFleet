"""Stage the fixed-mode login-server call; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    key = ("login-server", "0042ecc0")
    if any((m["component"], m["address"]) == key for m in document["matches"]):
        print("Staged 0 functions; no progress credited until verification.")
        return
    append_records(path, [{
        "component": key[0], "address": key[1], "size": 8,
        "source": "src/login-server/matches/RecoveredModeTwoCall.cpp",
        "symbol": "_Recovered0042ECC0", "flags": ["/Od", "/GX-"],
        "relocations": [{"offset": 3, "symbol": "_Target0042EB1D"}],
    }])
    print("Staged 1 function; no progress credited until verification.")


if __name__ == "__main__":
    main()
