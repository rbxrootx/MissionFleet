"""Verify the mapped Core slot-1 target and scene-to-RGB16 C++ semantic port."""

import hashlib
import os
from pathlib import Path
import shutil
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
    return image[offset:offset + size]


def verify_original_evidence():
    if not CAPTURE.is_file():
        raise FileNotFoundError(f"the locally mapped Core capture is required: {CAPTURE}")
    image = CAPTURE.read_bytes()
    digest = hashlib.sha256(image).hexdigest()
    if digest != CAPTURE_SHA256:
        raise ValueError(f"mapped Core capture differs from the pinned build: {digest}")

    first_slot1 = int.from_bytes(read_va(image, 0x588BE71C + 4, 4), "little")
    alternate_slot1 = int.from_bytes(read_va(image, 0x588BE72C + 4, 4), "little")
    if first_slot1 != 0x58800A60:
        raise ValueError(f"first RGB16 vtable slot 1 changed: {first_slot1:08X}")
    if alternate_slot1 != 0x5880D420:
        raise ValueError(f"alternate RGB16 vtable slot 1 changed: {alternate_slot1:08X}")
    read_va(image, first_slot1, 36733)
    read_va(image, alternate_slot1, 37154)


def main():
    verify_original_evidence()
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "core-rgb16-sprite-slot1"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / (
        "core_rgb16_sprite_slot1_integration_test.exe"
        if os.name == "nt"
        else "core_rgb16_sprite_slot1_integration_test"
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
            str(ROOT / "src/client-current/semantic/CoreResourceSceneRender.cpp"),
            str(ROOT / "src/client-current/semantic/CoreRenderNodeDraw.cpp"),
            str(ROOT / "src/client-current/semantic/CoreSpriteScreenDispatch.cpp"),
            str(ROOT / "src/client-current/semantic/Rgb16OpaqueSpan.cpp"),
            str(ROOT / "src/client-current/semantic/CoreRgb16SpriteSlot1.cpp"),
            str(ROOT / "tests/native/core_rgb16_sprite_slot1_integration_test.cpp"),
            "-o",
            str(executable),
        ],
        check=True,
        cwd=ROOT,
        env=environment,
    )
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("Mapped Core slot-1 evidence and scene-to-RGB16 integration passed")


if __name__ == "__main__":
    main()
