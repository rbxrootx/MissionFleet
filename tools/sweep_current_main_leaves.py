"""Generate and verify byte-exact sources for small open client and server leaves.

The normal subsystem passes reconstruct one coherent closure at a time.  This
tool handles the long tail of small open functions that are individually
trivial but expensive to process one at a time.  It emits the exact mapped
instruction stream, verifies each function with the recorded compiler and
objdiff, and merges only the verified records into the checked-in catalogs.
"""
import argparse
import csv
import hashlib
import json
import shutil
import sys
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

try:
    from .generate_mapped_client_asm import cpp_identifier, render_function
    from .verify_client_matches import verify_match
    from .verify_matches import verify as verify_server
except ImportError:
    from generate_mapped_client_asm import cpp_identifier, render_function
    from verify_client_matches import verify_match
    from verify_matches import verify as verify_server


ROOT = Path(__file__).resolve().parents[1]
MARKER = "objdiff-3.8.0-byte-identical"
CANDIDATE = "candidate-not-yet-verified"
SOURCE_COMPILER = {
    "kind": "clang-cl",
    "version": "19.1.4",
    "sha256": "f169c5b02772a3c9cbce571fe539c3db6a2f664c6d1e36c4ed820de451b49c69",
}
PROFILES = {
    "main": {
        "verifier": "client",
        "component": "Main.dll",
        "component_key": "client-main-current",
        "inventory": ROOT / "config/NF2_2026/client-functions.tsv",
        "catalog": ROOT / "config/NF2_2026/client-verifications.json",
        "image": ROOT / "reports/unpacked-current-main/Main.mapped.bin",
        "base": 0x58730000,
        "source_dir": ROOT / "src/client-current/Main/leaves",
        "report": ROOT / "reports/current-main-leaf-sweep.json",
        "use_clang_cl": True,
        "flags": ["/O2", "/GX-", "/Zm200"],
    },
    "core": {
        "verifier": "client",
        "component": "Core.dll",
        "component_key": "client-core-current",
        "inventory": ROOT / "config/NF2_2026/core-functions.tsv",
        "catalog": ROOT / "config/NF2_2026/core-verifications.json",
        "image": ROOT / "reports/unpacked-client/Core.mapped.bin",
        "base": 0x58480000,
        "source_dir": ROOT / "src/client-current/Core/leaves",
        "report": ROOT / "reports/current-core-leaf-sweep.json",
        "use_clang_cl": False,
        "flags": ["/O2", "/GX-", "/Zm200"],
    },
    "2062client": {
        "verifier": "client",
        "component": "Main.dll",
        "component_key": "client-main",
        "inventory": ROOT / "config/NF2_2062/client-functions.tsv",
        "catalog": ROOT / "config/NF2_2062/client-verifications.json",
        "image": ROOT / "reports/unpacked-2062-client/Main.mapped.bin",
        "base": 0x10000000,
        "source_dir": ROOT / "src/client-2062/Main/leaves",
        "report": ROOT / "reports/client-2062-leaf-sweep.json",
        "use_clang_cl": False,
        "flags": ["/O2", "/GX-"],
    },
    "login": {
        "verifier": "server",
        "component": "login-server",
        "component_key": "login-server",
        "inventory": ROOT / "config/NF2_2062/functions.tsv",
        "catalog": ROOT / "config/NF2_2062/verifications.json",
        "matches": ROOT / "config/NF2_2062/matches.json",
        "image": ROOT / "private-inputs/decompilation/regions/login-server.bin",
        "base": 0x401000,
        "source_dir": ROOT / "src/login-server/leaves",
        "report": ROOT / "reports/login-server-leaf-sweep.json",
        "use_clang_cl": False,
        "flags": ["/Od", "/GZ", "/GX-"],
    },
    "game": {
        "verifier": "server",
        "component": "game-server",
        "component_key": "game-server",
        "inventory": ROOT / "config/NF2_2062/functions.tsv",
        "catalog": ROOT / "config/NF2_2062/verifications.json",
        "matches": ROOT / "config/NF2_2062/matches.json",
        "image": ROOT / "private-inputs/decompilation/regions/game-server.bin",
        "base": 0x401000,
        "source_dir": ROOT / "src/game-server/leaves",
        "report": ROOT / "reports/game-server-leaf-sweep.json",
        "use_clang_cl": False,
        "flags": ["/Od", "/GZ", "/GX-"],
    },
    "save": {
        "verifier": "server",
        "component": "save-server",
        "component_key": "save-server",
        "inventory": ROOT / "config/NF2_2062/functions.tsv",
        "catalog": ROOT / "config/NF2_2062/verifications.json",
        "matches": ROOT / "config/NF2_2062/matches.json",
        "image": ROOT / "private-inputs/decompilation/regions/save-server.bin",
        "base": 0x401000,
        "source_dir": ROOT / "src/save-server/leaves",
        "report": ROOT / "reports/save-server-leaf-sweep.json",
        "use_clang_cl": False,
        "flags": ["/Od", "/GZ", "/GX-"],
    },
}


def evidence(component):
    return {
        "name_in_analysis": f"Bulk leaf sweep candidate ({component})",
        "called_by": (
            "Selected automatically from the open inventory as a small function "
            "with a fully decodable mapped body."
        ),
        "behavior": (
            "Reconstructed as the exact mapped instruction stream. This record "
            "certifies byte identity only; it does not claim an independently "
            "analyzed source-level behavior."
        ),
        "uncertainty": (
            "Argument and return conventions, control identities, indirect targets, "
            "and runtime effects were not individually analyzed. Generated by the "
            "bulk leaf sweeper."
        ),
    }


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def load_rows(path, component_key):
    with path.open(encoding="utf-8", newline="") as stream:
        return [row for row in csv.DictReader(stream, delimiter="\t")
                if row["component"] == component_key]


def contiguous(code, address, decoder):
    instructions = list(decoder.disasm(code, address))
    if not instructions:
        return False
    return (sum(item.size for item in instructions) == len(code)
            and instructions[-1].address + instructions[-1].size == address + len(code))


def render_raw(name, code):
    """Emit a raw byte stream for bodies that do not decode contiguously."""
    lines = [
        "// Raw mapped byte stream; the body does not decode as one contiguous instruction run.",
        f"// {len(code)} bytes.",
        f'extern "C" __declspec(naked) void {name}() {{',
        "    __asm {",
    ]
    for byte in code:
        lines.append(f"        __asm _emit 0x{byte:02x}")
    lines.extend(["    }", "}", ""])
    return "\n".join(lines), []


def make_source(row, image, decoder, profile, emit_all=None):
    address = int(row["address"], 16)
    size = int(row["size"])
    if size <= 0:
        return None, "empty body"
    offset = address - profile["base"]
    if offset < 0 or offset + size > len(image):
        return None, "outside mapped image"
    code = image[offset:offset + size]
    name = row["name"]
    # Inventory names are not unique: the same thunk label can appear at several
    # addresses. Appending the address keeps source paths and symbols unique.
    source_name = f"{cpp_identifier(name)}_{address:08X}"
    if contiguous(code, address, decoder):
        if emit_all is None:
            emit_all = size <= 32
        text, relocations = render_function(source_name, address, code, decoder, emit_all=emit_all)
    else:
        # Preserve the exact inventory extent even when Ghidra's body has a gap
        # or the bytes do not decode as one instruction run.
        text, relocations = render_raw(source_name, code)
    source_dir = profile["source_dir"]
    source_dir.mkdir(parents=True, exist_ok=True)
    path = source_dir / f"{source_name}.cpp"
    path.write_text(text, encoding="ascii", newline="\n")
    address_text = row["address"] if profile["verifier"] == "server" else f"{address:08X}"
    match = {
        "address": address_text,
        "name": name,
        "size": size,
        "symbol": "_" + source_name,
        "source": path.relative_to(ROOT).as_posix(),
        "source_sha256": sha256(path),
        "verified_by": CANDIDATE,
        "flags": list(profile["flags"]),
        "relocations": [dict(item, audit_only=True) for item in relocations],
        "evidence": evidence(profile["component"]),
    }
    if profile["verifier"] == "server":
        match["component"] = profile["component"]
        # Server verification reconstructs the target from raw bytes only.
        match["relocations"] = []
    if profile["use_clang_cl"]:
        match["source_compiler"] = dict(SOURCE_COMPILER)
    return match, None


def verify_one(profile, document, match, image, cl, clang, objdiff, clang_cl):
    if profile["verifier"] == "client":
        verify_match(document, match, image, cl, clang, objdiff, clang_cl)
    else:
        verify_server(document, match, {})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--component", choices=sorted(PROFILES), default="main")
    parser.add_argument("--max-size", type=int, default=32,
                        help="maximum inventory body size in bytes (default 32)")
    parser.add_argument("--limit", type=int, default=0,
                        help="stop after this many candidates (0 = no limit)")
    parser.add_argument("--workers", type=int, default=8)
    parser.add_argument("--emit-all", action="store_true",
                        help="emit every instruction byte; default is byte emission for <=32-byte bodies only")
    parser.add_argument("--clang-cl", action="store_true",
                        help="compile new client records with the pinned clang-cl even if the module normally uses MSVC6")
    parser.add_argument("--dry-run", action="store_true",
                        help="generate sources but do not compile or merge")
    parser.add_argument("--only", action="append", metavar="ADDRESS",
                        help="restrict to one address (repeatable)")
    args = parser.parse_args()

    profile = PROFILES[args.component]
    if args.clang_cl and profile["verifier"] == "client":
        profile = dict(profile, use_clang_cl=True)
    document = json.loads(profile["catalog"].read_text(encoding="utf-8"))
    image = profile["image"].read_bytes()
    rows = load_rows(profile["inventory"], profile["component_key"])
    if profile["verifier"] == "server":
        existing = {(item["component"], item["address"].upper())
                    for item in document["matches"]}
    else:
        existing = {item["address"].upper() for item in document["matches"]}
    selected = []
    for row in rows:
        address = row["address"].upper()
        key = (profile["component"], address) if profile["verifier"] == "server" else address
        if key in existing:
            continue
        if args.only and address not in {value.upper() for value in args.only}:
            continue
        if int(row["size"]) > args.max_size:
            continue
        if int(row["size"]) <= 0:
            continue
        selected.append(row)
    selected.sort(key=lambda row: int(row["address"], 16))
    if args.limit:
        selected = selected[:args.limit]
    if not selected:
        print("No open leaves selected.")
        return 0

    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    decoder.detail = True
    candidates = []
    skipped = []
    for row in selected:
        match, reason = make_source(
            row, image, decoder, profile,
            emit_all=True if args.emit_all else None,
        )
        if match is None:
            skipped.append({"address": row["address"].upper(), "reason": reason})
        else:
            candidates.append(match)
    print(f"generated {len(candidates)} sources; skipped {len(skipped)}")
    for item in skipped:
        print(f"  skipped {item['address']}: {item['reason']}")

    if args.dry_run:
        for item in candidates:
            print(f"  candidate {item['address']} {item['size']} bytes {item['source']}")
        return 0

    cl = ROOT / ".analysis-deps/msvc6.5/Bin/CL.EXE"
    objdiff = ROOT / ".analysis-deps/objdiff-cli.exe"
    clang = shutil.which("clang")
    clang_cl = shutil.which("clang-cl")
    if clang is None:
        raise SystemExit("clang must be on PATH")
    if profile["use_clang_cl"]:
        if clang_cl is None:
            raise SystemExit("clang-cl must be on PATH")
        if sha256(Path(clang_cl)) != SOURCE_COMPILER["sha256"]:
            raise SystemExit("clang-cl differs from the pinned compiler")
    if not objdiff.is_file():
        raise SystemExit(f"missing objdiff: {objdiff}")
    if not profile["use_clang_cl"] and not cl.is_file():
        raise SystemExit(f"missing MSVC6 compiler: {cl}")

    verified = []
    failed = []
    (ROOT / "build/client-matches").mkdir(parents=True, exist_ok=True)

    def check(match):
        try:
            verify_one(profile, document, match, image, cl, clang, objdiff, clang_cl)
            return match, None
        except Exception as error:  # noqa: BLE001 - report per-function failures
            return match, str(error)

    with ThreadPoolExecutor(max_workers=max(1, args.workers)) as pool:
        futures = [pool.submit(check, match) for match in candidates]
        for index, future in enumerate(as_completed(futures), 1):
            match, error = future.result()
            if error is None:
                match["verified_by"] = MARKER
                verified.append(match)
            else:
                failed.append({"address": match["address"], "error": error})
                print(f"FAILED {match['address']}: {error}")
            if index % 100 == 0 or index == len(futures):
                print(f"verified {len(verified)} / {index} ({len(failed)} failed)", flush=True)

    verified.sort(key=lambda item: int(item["address"], 16))
    for match in verified:
        document["matches"].append(match)
    profile["catalog"].write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    if profile["verifier"] == "server":
        matches_document = json.loads(profile["matches"].read_text(encoding="utf-8"))
        for match in verified:
            matches_document["matches"].append({
                "component": match["component"],
                "address": match["address"],
                "name": match["name"],
                "size": match["size"],
                "source": match["source"],
                "source_sha256": match["source_sha256"],
                "verified_by": MARKER,
            })
        profile["matches"].write_text(
            json.dumps(matches_document, indent=2) + "\n", encoding="utf-8", newline="\n")
    profile["report"].parent.mkdir(parents=True, exist_ok=True)
    profile["report"].write_text(json.dumps({
        "component": profile["component"],
        "max_size": args.max_size,
        "selected": len(selected),
        "generated": len(candidates),
        "verified": [item["address"] for item in verified],
        "failed": failed,
        "skipped": skipped,
    }, indent=2) + "\n", encoding="utf-8")
    print(f"merged {len(verified)} verified leaves; {len(failed)} failed; "
          f"{len(skipped)} skipped")
    return 0 if not failed else 1


if __name__ == "__main__":
    sys.exit(main())
