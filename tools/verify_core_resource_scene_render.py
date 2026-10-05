"""Build and test the Core.dll resource-scene render semantic model."""

import os
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess


ROOT = Path(__file__).resolve().parents[1]
CAPTURE = ROOT / "reports" / "unpacked-client" / "Core.mapped.bin"
CORE_IMAGE_BASE = 0x58480000
CORE_CAPTURE_SHA256 = (
    "2b8ed57633a6d1d4bb51d45c28d6d2117c4525dd7c9d9028454e946c7f90261a"
)


def verify_original_evidence():
    if not CAPTURE.is_file():
        raise FileNotFoundError(
            f"the local mapped Core capture is required: {CAPTURE}"
        )
    image = CAPTURE.read_bytes()
    actual_capture_hash = hashlib.sha256(image).hexdigest()
    if actual_capture_hash != CORE_CAPTURE_SHA256:
        raise ValueError("mapped Core capture hash differs from the pinned build")

    def read_va(address, size):
        offset = address - CORE_IMAGE_BASE
        if offset < 0 or offset + size > len(image):
            raise ValueError(f"address {address:08X} is outside the mapped Core image")
        return image[offset : offset + size]

    def verify_function_body(address, size, expected_hash):
        actual = hashlib.sha256(read_va(address, size)).hexdigest()
        if actual != expected_hash:
            raise ValueError(f"mapped function bytes differ at {address:08X}")

    verify_function_body(
        0x587B5320,
        271,
        "8c9d6d6b2b03650959e5b4544d5d742df9fc25c56fc70671e2a51b5a9c165d4e",
    )
    verify_function_body(
        0x587B5430,
        151,
        "9b9ed5a5b166f54050506aef2d974066bbaabd28fadbf647cb75f83b2cb2983e",
    )

    scene_slot = struct.unpack("<I", read_va(0x588AA82C + 0x14, 4))[0]
    if scene_slot != 0x587B5320:
        raise ValueError("resource-scene vtable +0x14 target changed")

    frame_call = read_va(0x5882E1A3, 5)
    if frame_call[0] != 0xE8:
        raise ValueError("expected a direct call at the Core render-loop site")
    frame_target = 0x5882E1A3 + 5 + struct.unpack_from("<i", frame_call, 1)[0]
    if frame_target != 0x587B5430:
        raise ValueError("Core render-loop call no longer targets FUN_587B5430")

    fallback_call = read_va(0x587B5464, 5)
    fallback_target = 0x587B5464 + 5 + struct.unpack_from("<i", fallback_call, 1)[0]
    if fallback_call[0] != 0xE8 or fallback_target != 0x584C4710:
        raise ValueError("the scene wrapper's fallback-clip helper changed")

    virtual_call = bytes.fromhex("8b45d88b108b4dd88b4214ffd0")
    if read_va(0x587B54A8, len(virtual_call)) != virtual_call:
        raise ValueError("the scene wrapper's vtable +0x14 dispatch changed")


def main():
    verify_original_evidence()
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "core-resource-scene-render"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / (
        "core_resource_scene_render_test.exe"
        if os.name == "nt"
        else "core_resource_scene_render_test"
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
            str(ROOT / "tests/native/core_resource_scene_render_test.cpp"),
            "-o",
            str(executable),
        ],
        check=True,
        cwd=ROOT,
        env=environment,
    )
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("Core scene frame-path evidence and render tests passed")


if __name__ == "__main__":
    main()
