"""Index v3.2/v3.3 Sangduck sprite image records without executing game code.

This parses image metadata, not pixels, palettes, animations or audio records.
Files with embedded audio are rejected explicitly rather than guessed through.
"""
import argparse
from collections import Counter
import json
from pathlib import Path
import struct


class UnsupportedSprite(ValueError):
    pass


def read_exact(stream, size):
    data = stream.read(size)
    if len(data) != size:
        raise ValueError("Truncated sprite record")
    return data


def index_sprite(path):
    size = path.stat().st_size
    with path.open("rb") as stream:
        header = read_exact(stream, 132)
        if header[:40] != b"Sangduck Sprite File".ljust(40, b" "):
            raise UnsupportedSprite("Unrecognized signature")
        version = tuple(header[84:86])
        if version not in {(3, 2), (3, 3)}:
            raise UnsupportedSprite(f"Unsupported version {version}")
        count = struct.unpack_from("<I", header, 92)[0]
        sounds = struct.unpack_from("<I", header, 104)[0]
        if sounds:
            raise UnsupportedSprite(f"Embedded sound records: {sounds}")
        if count > 100000 or count * 116 > size - 136:
            raise ValueError("Image count cannot fit in file")
        read_exact(stream, 4)  # Observed v3 field; semantic meaning not yet established.
        frames = []
        for ordinal in range(count):
            offset = stream.tell()
            record = read_exact(stream, 112)
            extra = read_exact(stream, 4)
            payload_size, width, height = struct.unpack_from("<III", record, 48)
            if payload_size > size - stream.tell():
                raise ValueError(f"Image {ordinal} payload exceeds file")
            if width > 32768 or height > 32768:
                raise ValueError(f"Image {ordinal} dimensions exceed supported range")
            frames.append({"ordinal": ordinal, "record_offset": offset,
                           "source_name": record[4:44].split(b"\0", 1)[0].decode("cp1252", "replace"),
                           "format_bytes": list(record[44:48]), "width": width, "height": height,
                           "payload_offset": stream.tell(), "payload_size": payload_size,
                           "extra_u32": struct.unpack("<I", extra)[0]})
            stream.seek(payload_size, 1)
        return {"version": list(version), "image_count": count, "frames": frames,
                "unparsed_tail_offset": stream.tell(), "unparsed_tail_bytes": size - stream.tell()}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("client", type=Path)
    parser.add_argument("--output", type=Path, default=Path("reports/sprites.json"))
    args = parser.parse_args()
    root = args.client.resolve(strict=True)
    output = args.output.resolve()
    if output == root or root in output.parents:
        parser.error("Output must be outside the client directory")
    indexed, unsupported, failed = {}, {}, {}
    for path in sorted((root / "SPR").rglob("*.spr")):
        name = path.relative_to(root).as_posix()
        try:
            indexed[name] = index_sprite(path)
        except UnsupportedSprite as exc:
            unsupported[name] = str(exc)
        except (ValueError, OSError, struct.error) as exc:
            failed[name] = str(exc)
    result = {"schema": 1, "scope": "image_metadata_only", "files": indexed,
              "unsupported": unsupported, "failed": failed}
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, indent=2, ensure_ascii=True), encoding="utf-8")
    print(json.dumps({"indexed_files": len(indexed), "image_records": sum(v["image_count"] for v in indexed.values()),
                      "unsupported_files": len(unsupported), "unsupported_reasons": dict(Counter(unsupported.values())),
                      "failures": len(failed), "failure_samples": list(failed.items())[:3]}))


if __name__ == "__main__":
    main()
