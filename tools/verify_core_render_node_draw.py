"""Build/test the portable semantic port of Core.dll FUN_587B5F40."""

import hashlib
import os
from pathlib import Path
import shutil
import struct
import subprocess


ROOT = Path(__file__).resolve().parents[1]
CAPTURE = ROOT / "reports" / "unpacked-client" / "Core.mapped.bin"
IMAGE_BASE = 0x58480000
CAPTURE_SHA256 = (
    "2b8ed57633a6d1d4bb51d45c28d6d2117c4525dd7c9d9028454e946c7f90261a"
)
NODE_SHA256 = (
    "85fbff8596cc8e8d6f4343aed36f05ee61df173bb732326fdd0a61f0d6d8d26b"
)


def verify_original_evidence():
    if not CAPTURE.is_file():
        raise FileNotFoundError(f"the locally mapped Core capture is required: {CAPTURE}")
    image = CAPTURE.read_bytes()
    if hashlib.sha256(image).hexdigest() != CAPTURE_SHA256:
        raise ValueError("mapped Core capture hash differs from the pinned installed build")

    def read_va(address, size):
        offset = address - IMAGE_BASE
        if offset < 0 or offset + size > len(image):
            raise ValueError(f"address {address:08X} is outside the mapped Core image")
        return image[offset : offset + size]

    node_body = read_va(0x587B5F40, 0x17A)
    actual_node_hash = hashlib.sha256(node_body).hexdigest()
    if actual_node_hash != NODE_SHA256:
        raise ValueError(
            "FUN_587B5F40 bytes differ from the recorded Core build: "
            f"{actual_node_hash}"
        )

    node_slot = struct.unpack("<I", read_va(0x58894C20 + 0x14, 4))[0]
    if node_slot != 0x587B5F40:
        raise ValueError("render-node vtable +0x14 no longer targets FUN_587B5F40")


def main():
    verify_original_evidence()
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "core-render-node-draw"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / (
        "core_render_node_draw_test.exe"
        if os.name == "nt"
        else "core_render_node_draw_test"
    )
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run(
        [
            compiler,
            "-std=c++17",
            "-O2",
            str(ROOT / "src/client-current/semantic/CoreResourceSceneRender.cpp"),
            str(ROOT / "src/client-current/semantic/CoreRenderNodeDraw.cpp"),
            str(ROOT / "tests/native/core_render_node_draw_test.cpp"),
            "-o",
            str(executable),
        ],
        check=True,
        cwd=ROOT,
        env=environment,
    )
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("Core scene-to-render-node mapped evidence and semantic tests passed")


if __name__ == "__main__":
    main()
