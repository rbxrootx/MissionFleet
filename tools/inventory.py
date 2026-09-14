"""Read-only inventory of a local client. Never loads or executes its binaries."""
import argparse
from collections import Counter
import hashlib
import json
import math
from pathlib import Path
import re
import struct

try:
    import pefile
except ImportError:
    pefile = None


def entropy(data):
    if not data:
        return 0.0
    return round(-sum((n / len(data)) * math.log2(n / len(data)) for n in Counter(data).values()), 4)


def binary_info(path):
    if pefile is None:
        return {"error": "Install requirements-analysis.txt for PE metadata"}
    pe = pefile.PE(str(path))
    try:
        sections = [{"name": s.Name.rstrip(b"\0").decode("ascii", "replace"),
                     "rva": s.VirtualAddress, "virtual_size": s.Misc_VirtualSize,
                     "raw_size": s.SizeOfRawData, "entropy": round(s.get_entropy(), 4)} for s in pe.sections]
        versions = {}
        for group in getattr(pe, "FileInfo", []):
            for entry in group:
                for table in getattr(entry, "StringTable", []):
                    versions.update({k.decode(errors="replace"): v.decode(errors="replace") for k, v in table.entries.items()})
        info = {"machine": hex(pe.FILE_HEADER.Machine), "image_base": pe.OPTIONAL_HEADER.ImageBase,
                "entry_point_rva": pe.OPTIONAL_HEADER.AddressOfEntryPoint,
                "managed": bool(pe.OPTIONAL_HEADER.DATA_DIRECTORY[14].VirtualAddress),
                "versions": versions, "sections": sections,
                "protection_marker": any(s["name"].startswith(".vmp") for s in sections),
                "imports": {e.dll.decode(errors="replace"): [i.name.decode(errors="replace") if i.name else f"ordinal:{i.ordinal}" for i in e.imports] for e in getattr(pe, "DIRECTORY_ENTRY_IMPORT", [])},
                "exports": [{"name": s.name.decode(errors="replace") if s.name else None, "rva": s.address} for s in getattr(getattr(pe, "DIRECTORY_ENTRY_EXPORT", None), "symbols", [])]}
        # Only retain product-related endpoint evidence, not arbitrary credential-like strings.
        candidates = []
        data = path.read_bytes()
        for encoding, pattern in [("ascii", rb"[ -~]{7,}"), ("utf-16le", rb"(?:[ -~]\x00){7,}")]:
            for match in re.finditer(pattern, data):
                value = match.group().decode(encoding)
                for endpoint in re.findall(r"https?://[A-Za-z0-9./_?=:%+-]+", value):
                    if re.search(r"kupai|navyfield|meegene", endpoint, re.I):
                        candidates.append({"file_offset": match.start(), "encoding": encoding, "url": endpoint})
        info["product_url_evidence"] = candidates
        return info
    finally:
        pe.close()


def inventory(root, output):
    root = root.resolve(strict=True)
    output = output.resolve()
    if root == output or root in output.parents:
        raise ValueError("Output must be outside the original client directory")
    output.mkdir(parents=True, exist_ok=True)
    entries, binaries, failures = [], {}, []
    for path in sorted(root.rglob("*")):
        if not path.is_file() or path.is_symlink():
            continue
        relative = path.relative_to(root).as_posix()
        if any(part.lower() in {"localstorage", ".git"} for part in path.relative_to(root).parts):
            continue
        try:
            digest = hashlib.sha256()
            with path.open("rb") as stream:
                sample = stream.read(65536)
                digest.update(sample)
                while chunk := stream.read(1024 * 1024):
                    digest.update(chunk)
            item = {"path": relative, "size": path.stat().st_size, "sha256": digest.hexdigest(),
                    "sample_entropy": entropy(sample)}
            if sample.startswith((b"Sangduck Sprite File", b"Sangduck Map File")):
                item["format_signature"] = sample[:39].decode("ascii").strip()
                # Raw observations only: these values have no inferred semantics.
                item["header_u32_le"] = {str(i): struct.unpack_from("<I", sample, i)[0] for i in range(40, min(200, len(sample) - 3), 4)}
            entries.append(item)
            if path.suffix.lower() in {".exe", ".dll"} and relative.split("/")[0].lower() not in {"runtime", "gameguard", "bugtrap"}:
                binaries[relative] = binary_info(path)
        except (OSError, ValueError) as exc:
            failures.append({"path": relative, "error": str(exc)})
    result = {"schema": 1, "source_root": str(root), "method": "static_read_only",
              "excluded": ["localStorage (may contain personal credentials)", ".git", "symbolic link files"],
              "file_count": len(entries), "bytes": sum(e["size"] for e in entries),
              "extensions": dict(Counter(Path(e["path"]).suffix.lower() for e in entries)),
              "files": entries, "binaries": binaries, "failures": failures}
    (output / "inventory.json").write_text(json.dumps(result, indent=2), encoding="utf-8")
    rows = ["# Local client inventory", "", f"Source: `{root}`", "",
            f"Files: {len(entries)}; bytes: {result['bytes']}; failures: {len(failures)}.", "",
            "| Binary | Machine | Managed | Protection marker |", "|---|---|---|---|"]
    for name, info in binaries.items():
        rows.append(f"| {name} | {info.get('machine', '?')} | {info.get('managed', '?')} | {info.get('protection_marker', '?')} |")
    rows += ["", "A protection marker is an observed section name, not proof of a particular protection version.",
             "No binaries were executed. File hashes identify the exact inputs for future comparisons.",
             "Complete observations and endpoint offsets are in inventory.json. No wire protocol was inferred."]
    (output / "inventory.md").write_text("\n".join(rows) + "\n", encoding="utf-8")
    print(json.dumps({k: result[k] for k in ("file_count", "bytes", "extensions", "failures")}))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("client", type=Path)
    parser.add_argument("--output", type=Path, default=Path("reports"))
    args = parser.parse_args()
    inventory(args.client, args.output)
