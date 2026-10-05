"""Build/test the portable semantic port of Core.dll FUN_587BA830."""

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
DISPATCH_SHA256 = (
    "e1ccba99069f636015b0b31a806236d156e5f001dc2dbc56460c131e345a55ea"
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

    dispatch = read_va(0x587BA830, 0x110)
    dispatch_hash = hashlib.sha256(dispatch).hexdigest()
    if dispatch_hash != DISPATCH_SHA256:
        raise ValueError(
            "FUN_587BA830 bytes differ from the recorded Core build: "
            f"{dispatch_hash}"
        )

    helper_bytes = {
        0x584849C0: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 50 8B E5 5D C3"
        ),
        0x584869C0: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 04 8B E5 5D C3"
        ),
        0x5848C0B0: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 08 8B E5 5D C3"
        ),
        0x584A0610: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 08 8B 4D FC "
            "03 41 20 8B E5 5D C3"
        ),
        0x584A0630: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 04 8B 4D FC "
            "03 41 14 8B E5 5D C3"
        ),
        0x584A0650: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 04 8B 4D FC "
            "03 41 1C 8B E5 5D C3"
        ),
        0x584A0670: bytes.fromhex(
            "55 8B EC 51 89 4D FC 8B 45 FC 8B 40 08 8B 4D FC "
            "03 41 18 8B E5 5D C3"
        ),
    }
    for address, expected in helper_bytes.items():
        actual = read_va(address, len(expected))
        if actual != expected:
            raise ValueError(
                f"screen helper bytes differ at {address:08X}: {actual.hex(' ')}"
            )


def main():
    verify_original_evidence()
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "core-sprite-screen-dispatch"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / (
        "core_sprite_screen_dispatch_test.exe"
        if os.name == "nt"
        else "core_sprite_screen_dispatch_test"
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
            str(ROOT / "src/client-current/semantic/CoreSpriteScreenDispatch.cpp"),
            str(ROOT / "tests/native/core_sprite_screen_dispatch_test.cpp"),
            "-o",
            str(executable),
        ],
        check=True,
        cwd=ROOT,
        env=environment,
    )
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("Core sprite screen-dispatch evidence and semantic tests passed")


if __name__ == "__main__":
    main()
