"""Verify pinned Core ship-frame evidence and the native semantic port."""

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


def require_direct_call(body, start_address, instruction, target):
    offset = body.find(instruction)
    if offset < 0:
        raise ValueError(f"expected call bytes are absent at {start_address:08X}")
    displacement = struct.unpack_from("<i", instruction, 1)[0]
    actual_target = start_address + offset + len(instruction) + displacement
    if actual_target != target:
        raise ValueError(
            f"call at {start_address + offset:08X} targets {actual_target:08X}, "
            f"expected {target:08X}"
        )


def require_call_at(image, instruction_address, target):
    instruction = read_va(image, instruction_address, 5)
    if instruction[0] != 0xE8:
        raise ValueError(f"expected a direct call at {instruction_address:08X}")
    actual_target = (
        instruction_address + 5 + struct.unpack_from("<i", instruction, 1)[0]
    ) & 0xFFFFFFFF
    if actual_target != target:
        raise ValueError(
            f"call at {instruction_address:08X} targets {actual_target:08X}, "
            f"expected {target:08X}"
        )


def verify_original_evidence():
    if not CAPTURE.is_file():
        raise FileNotFoundError(f"the mapped Core capture is required: {CAPTURE}")
    image = CAPTURE.read_bytes()
    if hashlib.sha256(image).hexdigest() != CAPTURE_SHA256:
        raise ValueError("mapped Core capture hash differs from the pinned installed build")

    frame_draw = read_va(image, 0x5849C770, 0xDC)
    ship_node_draw = read_va(image, 0x587B5DB0, 0x184)
    require_direct_call(
        frame_draw, 0x5849C770, bytes.fromhex("E8 EB DF 31 00"), 0x587BA830
    )
    require_direct_call(
        ship_node_draw, 0x587B5DB0, bytes.fromhex("E8 A5 68 CE FF"), 0x5849C770
    )
    require_call_at(image, 0x587B5E23, 0x58495710)
    require_call_at(image, 0x587B5E4D, 0x58495870)
    require_call_at(image, 0x587B5F20, 0x58495870)

    if struct.unpack("<I", read_va(image, 0x58894C94 + 0x14, 4))[0] != 0x587B5DB0:
        raise ValueError("ship render-node vtable slot +0x14 no longer targets 0x587B5DB0")
    if struct.unpack("<I", read_va(image, 0x58894C94 + 0x30, 4))[0] != 0x587B5DB0:
        raise ValueError("ship render-node vtable slot +0x30 no longer targets 0x587B5DB0")


def main():
    verify_original_evidence()
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "core-ship-animation-frame-draw"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / (
        "core_ship_animation_frame_draw_test.exe"
        if os.name == "nt"
        else "core_ship_animation_frame_draw_test"
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
            str(ROOT / "src/client-current/semantic/Rgb16OpaqueSpan.cpp"),
            str(ROOT / "src/client-current/semantic/CoreRgb16SpriteSlot1.cpp"),
            str(ROOT / "tests/native/core_ship_animation_frame_draw_test.cpp"),
            "-o",
            str(executable),
        ],
        check=True,
        cwd=ROOT,
        env=environment,
    )
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("Pinned Core ship-frame call path and RGB16 animation tests passed")


if __name__ == "__main__":
    main()
