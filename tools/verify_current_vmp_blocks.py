"""Verify byte-emitted, dynamically traced VM basic blocks separately from functions."""
import hashlib
import json
from pathlib import Path

if __package__:
    from .verify_client_matches import verify_match
else:
    from verify_client_matches import verify_match

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2026/vm-block-matches.json"


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    document = json.loads(CONFIG.read_text(encoding="utf-8"))
    if document.get("schema_version") != 1:
        raise ValueError("Unsupported VM block manifest schema")
    capture = ROOT / document["mapped_image"]
    if sha256(capture) != document["mapped_sha256"]:
        raise ValueError("Mapped-image hash mismatch")
    manifest_path = ROOT / document["manifest"]
    capture_manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    module = next(item for item in capture_manifest["modules"]
                  if item["name"].casefold() == document["component"].casefold())
    if module["original_sha256"] != document["original_sha256"]:
        raise ValueError("Capture manifest does not identify the pinned original Main.dll")

    image = capture.read_bytes()
    # Reuse the established VC6 + objdiff pipeline without adding this block to
    # the function inventory or awarding function progress.
    function_config = json.loads(
        (ROOT / "config/NF2_2026/client-verifications.json").read_text(encoding="utf-8")
    )
    compiler = function_config["compiler"]
    cl = _compiler_tool("cl")
    if sha256(cl) != compiler["cl_sha256"]:
        raise ValueError("CL.EXE differs from the recorded Visual C++ 6 SP5 compiler")
    clang = _compiler_tool("clang")
    objdiff = _compiler_tool("objdiff")
    for block in document["blocks"]:
        start = int(block["address"], 16) - int(document["image_base"], 16)
        expected = image[start:start + block["size"]]
        if len(expected) != block["size"]:
            raise ValueError(f"VM block {block['address']} lies outside mapped image")
        if hashlib.sha256(expected).hexdigest() != block["block_sha256"]:
            raise ValueError(f"Mapped bytes differ from pinned VM block {block['address']}")
        source_path = ROOT / block["source"]
        if sha256(source_path) != block["source_sha256"]:
            raise ValueError(f"Source hash differs for VM block {block['address']}")
        match = {
            "address": block["address"],
            "size": block["size"],
            "symbol": block["symbol"],
            "source": block["source"],
            "source_sha256": block["source_sha256"],
            "flags": block["flags"],
        }
        result = verify_match(function_config, match, image, cl, clang, objdiff)
        print(f"verified traced VM basic block {result}; zero function-progress credit")
    print(f"verified {len(document['blocks'])} traced VM blocks")


def _compiler_tool(name):
    import os
    import shutil
    if name == "cl":
        return Path(os.environ.get("MSVC6_ROOT", ROOT / ".analysis-deps/msvc6.5")) / "Bin/CL.EXE"
    if name == "objdiff":
        return Path(os.environ.get("OBJDIFF", ROOT / ".analysis-deps/objdiff-cli.exe"))
    tool = shutil.which(name)
    if tool is None:
        raise FileNotFoundError(f"Required compiler tool not found: {name}")
    return Path(tool)


if __name__ == "__main__":
    main()
