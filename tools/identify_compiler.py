"""Decode supplied-server Rich headers using richprint's compiler-ID table."""
import json
import re
from pathlib import Path

import pefile

ROOT = Path(__file__).resolve().parents[1]
TABLE = ROOT / ".analysis-deps" / "rich-comp-id.txt"
NAMES = ("登陆服务器.exe", "游戏服务器.exe", "储存服务器.exe")


def main():
    lookup = {}
    for line in TABLE.read_text(encoding="utf-8", errors="replace").splitlines():
        if re.match(r"^[0-9a-fA-F]{8} ", line):
            lookup[int(line[:8], 16)] = line[9:]
    package = ROOT / "private-inputs" / "server-package" / "nf2"
    report = []
    for filename in NAMES:
        matches = list(package.rglob(filename))
        if len(matches) != 1:
            raise ValueError(f"Expected one {filename}, found {len(matches)}")
        pe = pefile.PE(str(matches[0]))
        rich = pe.parse_rich_header()
        values = rich["values"]
        records = []
        for compiler_id, count in zip(values[::2], values[1::2]):
            records.append({"id": f"{compiler_id:08x}", "count": count,
                            "description": lookup.get(compiler_id, "unknown")})
        report.append({"file": filename, "linker": f"{pe.OPTIONAL_HEADER.MajorLinkerVersion}.{pe.OPTIONAL_HEADER.MinorLinkerVersion}",
                       "timestamp": pe.FILE_HEADER.TimeDateStamp, "records": records})
    output = ROOT / "reports" / "supplied" / "compiler-evidence.json"
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding="utf-8")
    for item in report:
        print(item["file"].encode("unicode_escape").decode("ascii"))
        for record in item["records"]:
            print(f"  {record['id']} x{record['count']}: {record['description']}")


if __name__ == "__main__":
    main()
