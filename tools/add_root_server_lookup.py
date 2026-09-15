"""Stage the root-server lookup forwarder; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    key = ("game-server", "00441900")
    if any((m["component"], m["address"]) == key for m in document["matches"]):
        print("Staged 0 functions; no progress credited until verification.")
        return
    append_records(path, [{
        "component": key[0], "address": key[1], "size": 48,
        "source": "src/game-server/matches/RecoveredRootServerLookup.cpp",
        "symbol": "?LookupServer@NavyFieldRootServer@@QAEXI@Z",
        "flags": ["/Od", "/GZ", "/GX-"],
        "relocations": [
            {"offset": 28, "symbol": "?Lookup@RecoveredServerTable00441900@@QAEXI@Z"},
            {"offset": 38, "symbol": "__chkesp"},
        ],
    }])
    print("Staged 1 function; no progress credited until verification.")


if __name__ == "__main__":
    main()
