"""Verify mapped ship-animation vtable evidence and the C++ state port."""

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


def read_va(image, address, size):
    offset = address - IMAGE_BASE
    if offset < 0 or offset + size > len(image):
        raise ValueError(f"address {address:08X} is outside the mapped Core image")
    return image[offset : offset + size]


def verify_original_evidence():
    if not CAPTURE.is_file():
        raise FileNotFoundError(f"the mapped Core capture is required: {CAPTURE}")
    image = CAPTURE.read_bytes()
    digest = hashlib.sha256(image).hexdigest()
    if digest != CAPTURE_SHA256:
        raise ValueError(f"mapped Core capture differs from the pinned build: {digest}")

    # Constructor 0x58534900 installs address point 0x588A7020. Verify that
    # its update and draw slots lead to the source-backed ship callbacks.
    update = struct.unpack("<I", read_va(image, 0x588A7020 + 0x0C, 4))[0]
    draw = struct.unpack("<I", read_va(image, 0x588A7020 + 0x14, 4))[0]
    if update != 0x58534B00:
        raise ValueError(f"ship update slot +0x0C targets {update:08X}")
    if draw != 0x587B5DB0:
        raise ValueError(f"ship draw slot +0x14 targets {draw:08X}")

    for address, size in (
        (0x58534B00, 555),
        (0x58534D30, 41),
        (0x58534E80, 237),
        (0x584B5140, 28),
        (0x584C9DE0, 51),
        (0x58495610, 17),
    ):
        read_va(image, address, size)


def main():
    verify_original_evidence()
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "core-ship-animation-state-update"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / (
        "core_ship_animation_state_update_test.exe"
        if os.name == "nt"
        else "core_ship_animation_state_update_test"
    )
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run(
        [
            compiler,
            "-std=c++17",
            "-O2",
            "-Wall",
            "-Wextra",
            str(ROOT / "src/client-current/semantic/CoreSpriteScreenDispatch.cpp"),
            str(ROOT / "src/client-current/semantic/CoreShipAnimationFrameDraw.cpp"),
            str(ROOT / "src/client-current/semantic/CoreShipAnimationStateUpdate.cpp"),
            str(ROOT / "src/client-current/semantic/Rgb16OpaqueSpan.cpp"),
            str(ROOT / "src/client-current/semantic/CoreRgb16SpriteSlot1.cpp"),
            str(ROOT / "tests/native/core_ship_animation_state_update_test.cpp"),
            "-o",
            str(executable),
        ],
        check=True,
        cwd=ROOT,
        env=environment,
    )
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("Mapped ship-animation state path and framebuffer integration passed")


if __name__ == "__main__":
    main()
