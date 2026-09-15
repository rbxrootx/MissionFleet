"""Stage the exact login peer-identity extractor for objdiff verification."""

import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062/verifications.json"
RECORD = {
    "component": "login-server",
    "address": "00410820",
    "size": 116,
    "source": "src/login-server/matches/RecoveredPeerIdentity00410820.cpp",
    "symbol": "_Recovered00410820",
    "flags": ["/Od", "/GX-"],
    "relocations": [
        {"offset": 46, "symbol": "_ImportGetPeerName0043C5AC", "kind": "absolute"},
        {"offset": 71, "symbol": "_ImportNtohs0043C5CC", "kind": "absolute"},
        {"offset": 93, "symbol": "_ImportInetNtoa0043C5C8", "kind": "absolute"},
        {"offset": 103, "symbol": "_AssignPeerAddress0042DD34"},
    ],
}


def main() -> None:
    document = json.loads(CONFIG.read_text(encoding="utf-8"))
    key = (RECORD["component"], RECORD["address"])
    if any((item["component"], item["address"]) == key for item in document["matches"]):
        print("peer-identity extractor already staged")
        return
    document["matches"].append(RECORD)
    CONFIG.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8")
    print("staged login-server:00410820; no progress credited until objdiff passes")


if __name__ == "__main__":
    main()
