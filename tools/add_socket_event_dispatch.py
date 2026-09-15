"""Stage the exact login socket-event dispatcher for local objdiff verification."""

import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062/verifications.json"
RECORD = {
    "component": "login-server",
    "address": "00410700",
    "size": 229,
    "source": "src/login-server/matches/RecoveredSocketEventDispatch00410700.cpp",
    "symbol": "_Recovered00410700",
    "flags": ["/Od", "/GX-"],
    "relocations": [
        {"offset": 17, "symbol": "_EventMap004107FC", "kind": "absolute"},
        {"offset": 24, "symbol": "_EventJumpTable004107E8", "kind": "absolute"},
        {"offset": 59, "symbol": "_ImportWSAAsyncSelect0043C5B4", "kind": "absolute"},
        {"offset": 99, "symbol": "_ImportShutdown0043C5E0", "kind": "absolute"},
        {"offset": 113, "symbol": "_QueueSocketEvent0040FBC0"},
    ],
}


def main() -> None:
    document = json.loads(CONFIG.read_text(encoding="utf-8"))
    key = (RECORD["component"], RECORD["address"])
    if any((item["component"], item["address"]) == key for item in document["matches"]):
        print("socket-event dispatcher already staged")
        return
    document["matches"].append(RECORD)
    CONFIG.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8")
    print("staged login-server:00410700; no progress credited until objdiff passes")


if __name__ == "__main__":
    main()
