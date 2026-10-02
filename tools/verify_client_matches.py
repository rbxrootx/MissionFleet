"""Verify byte-identical source matches against locally captured client images."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess

if __package__:
    from .verify_matches import assembly_for
else:
    from verify_matches import assembly_for

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config" / "NF2_2062" / "client-verifications.json"
BUILD = ROOT / "build" / "client-matches"


def run(command, *, env=None):
    return subprocess.run(command, cwd=ROOT, env=env, check=True, text=True,
                          stdout=subprocess.PIPE, stderr=subprocess.STDOUT)


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def source_hashes(path):
    data = path.read_bytes()
    lf = data.replace(b"\r\n", b"\n")
    crlf = lf.replace(b"\n", b"\r\n")
    return {hashlib.sha256(value).hexdigest() for value in (data, lf, crlf)}


def audit_source_dependencies(match, root=ROOT):
    checked = 0
    for dependency in match.get("source_dependencies", []):
        path = root / dependency["path"]
        expected = dependency["sha256"]
        if not path.is_file() or expected not in source_hashes(path):
            raise ValueError(f"Source dependency hash differs for {dependency['path']}")
        checked += 1
    return checked


def audit_relocations(document, match, code):
    address = int(match["address"], 16)
    checked = 0
    for relocation in match.get("relocations", []):
        offset = int(relocation["offset"])
        if offset < 0 or offset + 4 > len(code):
            raise ValueError(f"Relocation outside {match['address']}")
        kind = relocation.get("kind", "relative")
        if kind == "relative":
            actual = (address + offset + 4 + struct.unpack_from("<i", code, offset)[0]) & 0xFFFFFFFF
        elif kind == "absolute":
            actual = struct.unpack_from("<I", code, offset)[0]
        elif kind == "immediate":
            actual = struct.unpack_from("<I", code, offset)[0]
        else:
            raise ValueError(f"Unknown relocation kind: {kind}")
        expected = int(relocation["target_address"], 16)
        checked += 1
        if actual != expected:
            raise ValueError(
                f"Relocation at {match['address']}+{offset:#x} resolves to "
                f"{actual:08X}, expected {expected:08X}"
            )
    return checked


def verify_match(document, match, image, cl, clang, objdiff):
    image_base = int(document["image_base"], 16)
    start = int(match["address"], 16) - image_base
    size = int(match["size"])
    code = image[start:start + size]
    if start < 0 or len(code) != size:
        raise ValueError(f"Target function lies outside {document['mapped_image']}")
    audited_relocations = audit_relocations(document, match, code)

    safe_symbol = re.sub(r"[^A-Za-z0-9_.-]+", "_", match["symbol"])
    stem = f"{match['address']}-{safe_symbol}"
    target_source = BUILD / f"{stem}-target.s"
    target_object = BUILD / f"{stem}-target.obj"
    source_object = BUILD / f"{stem}-source.obj"
    diff_file = BUILD / f"{stem}-diff.json"
    target_source.write_text(
        assembly_for(match["symbol"], code, [
            relocation for relocation in match.get("relocations", [])
            if not relocation.get("audit_only")
        ]),
        encoding="ascii",
    )
    run([clang, "--target=i686-pc-windows-msvc", "-c", target_source,
         "-o", target_object])

    source = ROOT / match["source"]
    if match.get("source_sha256") and match["source_sha256"] not in source_hashes(source):
        raise ValueError(f"Source hash differs for {match['source']}")
    audit_source_dependencies(match)
    flags = tuple(match.get("flags", document["compiler"]["flags"]))
    environment = os.environ.copy()
    environment["PATH"] = str(cl.parent) + os.pathsep + environment.get("PATH", "")
    run([str(cl), "/nologo", "/c", *flags, f"/Fo{source_object}", str(source)],
        env=environment)
    run([str(objdiff), "diff", "-1", str(target_object), "-2", str(source_object),
         match["symbol"], "-o", str(diff_file), "--format", "json-pretty"])

    diff = json.loads(diff_file.read_text(encoding="utf-8"))
    symbol = next(item for item in diff["left"]["symbols"]
                  if item.get("name") == match["symbol"])
    if symbol.get("match_percent") != 100.0 or int(symbol.get("size", 0)) != size:
        raise ValueError(
            f"Mismatch at {document['component']}:{match['address']}: "
            f"{symbol.get('match_percent')}% ({symbol.get('size')} bytes)"
        )
    return f"{document['component']}:{match['address']} ({size} bytes; " \
           f"{audited_relocations} relocations checked)"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--only", action="append", metavar="ADDRESS",
                        help="verify one function address (repeatable)")
    parser.add_argument("--config", type=Path, default=CONFIG,
                        help="verification inventory (defaults to the archived 2062 client)")
    args = parser.parse_args()

    config_path = args.config if args.config.is_absolute() else ROOT / args.config
    document = json.loads(config_path.read_text(encoding="utf-8"))
    if document.get("schema_version") != 1:
        raise ValueError("Unsupported client verification schema")
    capture = ROOT / document["mapped_image"]
    manifest_path = ROOT / document["manifest"]
    if sha256(capture) != document["mapped_sha256"]:
        raise ValueError(f"Mapped-image hash mismatch: {capture}")
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    modules = [item for item in manifest.get("modules", [])
               if item.get("name", "").casefold() == document["component"].casefold()]
    identifies_original = False
    for module in modules:
        if module.get("original_sha256") == document["original_sha256"]:
            identifies_original = True
            break
        original_path = Path(module.get("path", ""))
        if original_path.is_file() and sha256(original_path) == document["original_sha256"]:
            identifies_original = True
            break
    if not identifies_original:
        raise ValueError("Capture manifest does not identify the expected original client")

    matches = document["matches"]
    if args.only:
        requested = {address.upper() for address in args.only}
        matches = [item for item in matches if item["address"].upper() in requested]
        found = {item["address"].upper() for item in matches}
        if requested - found:
            raise ValueError("Unknown client match address(es): " + ", ".join(sorted(requested - found)))

    compiler = document["compiler"]
    compiler_root = Path(os.environ.get("MSVC6_ROOT", ROOT / ".analysis-deps" / "msvc6.5"))
    cl = compiler_root / "Bin" / "CL.EXE"
    objdiff = Path(os.environ.get("OBJDIFF", ROOT / ".analysis-deps" / "objdiff-cli.exe"))
    clang = shutil.which("clang")
    if not cl.is_file() or not objdiff.is_file() or clang is None:
        raise FileNotFoundError("MSVC6_ROOT, OBJDIFF, and clang are required")
    if sha256(cl) != compiler["cl_sha256"]:
        raise ValueError("CL.EXE differs from the recorded Visual C++ 6 SP5 compiler")

    BUILD.mkdir(parents=True, exist_ok=True)
    image = capture.read_bytes()
    verified = [verify_match(document, match, image, cl, clang, objdiff)
                for match in matches]
    for item in verified:
        print(f"verified {item}")
    print(f"verified {len(verified)} client functions / "
          f"{sum(int(item['size']) for item in matches)} bytes at objdiff 100.0%")


if __name__ == "__main__":
    main()
