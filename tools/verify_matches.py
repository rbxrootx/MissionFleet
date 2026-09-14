"""Rebuild and objdiff locally recorded matches against private target images."""
import argparse
import hashlib
import json
import os
import shutil
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config" / "NF2_2062" / "verifications.json"
BUILD = ROOT / "build" / "matches"
REGIONS = {
    "login-server": ROOT / "private-inputs" / "decompilation" / "regions" / "login-server.bin",
    "game-server": ROOT / "private-inputs" / "decompilation" / "regions" / "game-server.bin",
    "save-server": ROOT / "private-inputs" / "decompilation" / "regions" / "save-server.bin",
}


def run(command, *, env=None):
    return subprocess.run(command, cwd=ROOT, env=env, check=True, text=True,
                          stdout=subprocess.PIPE, stderr=subprocess.STDOUT)


def assembly_for(symbol, code, relocations):
    lines = [
        "        .text",
        f'        .def    "{symbol}";',
        "        .scl    2;",
        "        .type   32;",
        "        .endef",
        f'        .globl  "{symbol}"',
        f'"{symbol}":',
    ]
    cursor = 0
    for relocation in relocations:
        offset = int(relocation["offset"])
        if offset < cursor or offset + 4 > len(code):
            raise ValueError(f"Invalid relocation offset {offset}")
        chunk = code[cursor:offset]
        if chunk:
            lines.append("        .byte   " + ", ".join(f"0x{byte:02x}" for byte in chunk))
        target = relocation["symbol"]
        quoted = target if target.replace("_", "").isalnum() else f'"{target}"'
        lines.append(f"        .long   {quoted} - . - 4")
        cursor = offset + 4
    if cursor < len(code):
        lines.append("        .byte   " + ", ".join(f"0x{byte:02x}" for byte in code[cursor:]))
    return "\n".join(lines) + "\n"


def verify(document, match, compiled_objects):
    compiler = document["compiler"]
    compiler_root = Path(os.environ.get("MSVC6_ROOT", ROOT / ".analysis-deps" / "msvc6.5"))
    cl = compiler_root / "Bin" / "CL.EXE"
    objdiff = Path(os.environ.get("OBJDIFF", ROOT / ".analysis-deps" / "objdiff-cli.exe"))
    clang = shutil.which("clang")
    if not cl.is_file() or not objdiff.is_file() or clang is None:
        raise FileNotFoundError("MSVC6_ROOT, OBJDIFF, and clang are required")
    if hashlib.sha256(cl.read_bytes()).hexdigest() != compiler["cl_sha256"]:
        raise ValueError("CL.EXE differs from the recorded Visual C++ 6 SP5 compiler")

    component = match["component"]
    image = REGIONS[component].read_bytes()
    start = int(match["address"], 16) - int(document["image_base"], 16)
    code = image[start:start + int(match["size"])]
    if len(code) != int(match["size"]):
        raise ValueError(f"Target function lies outside {REGIONS[component]}")

    stem = f"{component}-{match['address']}"
    target_source = BUILD / f"{stem}-target.s"
    target_object = BUILD / f"{stem}-target.obj"
    diff_file = BUILD / f"{stem}-diff.json"
    target_source.write_text(assembly_for(match["symbol"], code, match["relocations"]), encoding="ascii")
    run([clang, "--target=i686-pc-windows-msvc", "-c", target_source, "-o", target_object])

    source = ROOT / match["source"]
    flags = tuple(match.get("flags", compiler["flags"]))
    compile_key = (source, flags)
    if compile_key not in compiled_objects:
        key_hash = hashlib.sha256((str(source) + "\0" + "\0".join(flags)).encode()).hexdigest()[:16]
        base_object = BUILD / f"base-{key_hash}.obj"
        environment = os.environ.copy()
        environment["PATH"] = str(cl.parent) + os.pathsep + environment.get("PATH", "")
        compile_command = [str(cl), "/nologo", "/c", *flags,
                           f"/Fo{base_object}", str(source)]
        run(compile_command, env=environment)
        compiled_objects[compile_key] = base_object
    base_object = compiled_objects[compile_key]
    run([str(objdiff), "diff", "-1", str(target_object), "-2", str(base_object),
         match["symbol"], "-o", str(diff_file), "--format", "json-pretty"])

    diff = json.loads(diff_file.read_text(encoding="utf-8"))
    symbol = next(item for item in diff["left"]["symbols"] if item.get("name") == match["symbol"])
    if symbol.get("match_percent") != 100.0 or int(symbol.get("size", 0)) != int(match["size"]):
        raise ValueError(f"Mismatch at {component}:{match['address']}: {symbol.get('match_percent')}%")
    return f"{component}:{match['address']} ({match['size']} bytes)"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--verbose", action="store_true", help="print each verified symbol")
    args = parser.parse_args()
    document = json.loads(CONFIG.read_text(encoding="utf-8"))
    if document.get("schema_version") != 1:
        raise ValueError("Unsupported verification schema")
    BUILD.mkdir(parents=True, exist_ok=True)
    compiled_objects = {}
    verified = []
    for match in document["matches"]:
        verified.append(verify(document, match, compiled_objects))
    if args.verbose:
        for item in verified:
            print(f"verified {item}")
    total_bytes = sum(int(match["size"]) for match in document["matches"])
    print(f"verified {len(verified)} functions / {total_bytes} bytes at objdiff 100.0%")


if __name__ == "__main__":
    main()
