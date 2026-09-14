"""Check local export consistency; this does not establish semantic correctness."""
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main():
    directory = ROOT / "private-inputs/decompilation"
    results = []
    for name in ("login-server", "game-server", "save-server"):
        metadata = json.loads((directory / f"regions/{name}.json").read_text())
        raw = (directory / f"regions/{name}.bin").read_bytes()
        assert hashlib.sha256(raw).hexdigest() == metadata["output_sha256"], name
        assert hashlib.sha256((ROOT / metadata["source"]).read_bytes()).hexdigest() == metadata["source_sha256"], name
        assert len(raw) + metadata["unrecovered_tail_bytes"] == metadata["declared_virtual_size"], name
        imports = json.loads((directory / f"regions/{name}.imports.json").read_text())
        assert imports["complete"], name
        addresses = [int(item["iat"], 16) for item in imports["imports"]]
        assert len(addresses) == len(set(addresses)), name
        assert any(item["dll"] == "WS2_32.DLL" for item in imports["imports"]), name
        summary = dict(line.split("=", 1) for line in (directory / f"pseudocode/{name}-summary.txt").read_text().splitlines())
        with (directory / f"pseudocode/{name}-functions.tsv").open(encoding="utf-8") as stream:
            functions = list(csv.DictReader(stream, delimiter="\t"))
        assert len(functions) == int(summary["functions"]), name
        assert sum(row["decompiled"] == "true" for row in functions) == int(summary["decompiled"]), name
        code = (directory / f"pseudocode/{name}.c").read_text(encoding="utf-8")
        assert code.count("/* Address: ") == int(summary["decompiled"]), name
        assert "imp_KERNEL32_DLL_" in code, name
        log = (directory / f"pseudocode/{name}-ghidra.log").read_text(errors="replace")
        assert "recovered import slots" in log and "DECOMPILATION COMPLETE" in log, name
        results.append({"server": name, "functions": len(functions), "imports": len(addresses),
                        "unrecovered_bytes": metadata["unrecovered_tail_bytes"], "artifact_consistency": "passed"})
    report = {"checks": results, "scope": "artifact consistency only; no native runtime or behavior verification"}
    (directory / "verification.json").write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
