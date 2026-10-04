"""Compare the portable C++ RGB16 span blitter with pinned original Logo.spr frames."""

import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess

try:
    from .ship_sprite_runtime import Rect, blit_opaque_rgb16_spans
    from .sprite_gallery import rgb16_to_rgba
    from .sprite_index import index_sprite
    from .sprite_preview import write_png
    from .verify_logo_sprite_visual import EXPECTED_SHA256, FRAMES
except ImportError:
    from ship_sprite_runtime import Rect, blit_opaque_rgb16_spans
    from sprite_gallery import rgb16_to_rgba
    from sprite_index import index_sprite
    from sprite_preview import write_png
    from verify_logo_sprite_visual import EXPECTED_SHA256, FRAMES


ROOT = Path(__file__).resolve().parents[1]
EXPECTED_FRAMEBUFFER_SHA256 = {
    0: "db1208c975bb3c01bfc01b9394cde909c89673e38ba6309b7bfb579d338ce392",
    1: "8ff42992a043928c4bff3cbca97da42176bbdf8011ece8579630ab80db611454",
}


def build(output_dir):
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    executable = output_dir / ("rgb16_opaque_span_cli.exe" if os.name == "nt"
                               else "rgb16_opaque_span_cli")
    environment = os.environ.copy()
    for key in ("TMP", "TEMP", "TMPDIR"):
        environment[key] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2", "-Wall", "-Wextra",
        str(ROOT / "src/client-current/semantic/Rgb16OpaqueSpan.cpp"),
        str(ROOT / "tests/native/rgb16_opaque_span_cli.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    return executable, environment


def compare_case(executable, environment, output_dir, name, payload, source_size,
                 target_size, position, clip, seed):
    source_width, source_height = source_size
    target_width, target_height = target_size
    payload_path = output_dir / f"{name}.span"
    framebuffer_path = output_dir / f"{name}.rgb16"
    payload_path.write_bytes(payload)
    command = [str(executable), str(payload_path), str(framebuffer_path),
               str(source_width), str(source_height), str(target_width),
               str(target_height), str(position[0]), str(position[1]),
               str(clip.left), str(clip.top), str(clip.right), str(clip.bottom),
               str(seed)]
    run = subprocess.run(command, cwd=ROOT, env=environment, check=True,
                         text=True, capture_output=True)
    native_count = int(run.stdout.strip())
    native_pixels = framebuffer_path.read_bytes()
    reference = bytearray([seed]) * (target_width * target_height * 2)
    reference_count = blit_opaque_rgb16_spans(
        payload, source_width, source_height, reference, target_width * 2,
        target_height, position[0], position[1], clip)
    if native_count != reference_count or native_pixels != reference:
        raise ValueError(f"Native/reference RGB16 mismatch in {name}")
    return native_count, native_pixels


def verify(source, output_dir):
    source = source.resolve(strict=True)
    digest = hashlib.sha256(source.read_bytes()).hexdigest()
    if digest != EXPECTED_SHA256:
        raise ValueError(f"Logo.spr SHA-256 changed: {digest}")
    info = index_sprite(source)
    output_dir.mkdir(parents=True, exist_ok=True)
    executable, environment = build(output_dir)
    results = []
    for ordinal, name, dimensions, payload_hash, expected_pixels in FRAMES:
        frame = info["frames"][ordinal]
        if (frame["source_name"] != name or
                (frame["width"], frame["height"]) != dimensions or
                frame["format_bytes"][:2] != [2, 2]):
            raise ValueError(f"Unexpected Logo.spr frame {ordinal}")
        with source.open("rb") as stream:
            stream.seek(frame["payload_offset"])
            payload = stream.read(frame["payload_size"])
        if hashlib.sha256(payload).hexdigest() != payload_hash:
            raise ValueError(f"Logo.spr frame {ordinal} payload changed")
        width, height = dimensions
        copied, native_pixels = compare_case(
            executable, environment, output_dir, f"frame-{ordinal}", payload,
            dimensions, dimensions, (0, 0), Rect(0, 0, width, height), 0)
        if copied != expected_pixels:
            raise ValueError(f"Unexpected native literal count in frame {ordinal}")
        framebuffer_hash = hashlib.sha256(native_pixels).hexdigest()
        if framebuffer_hash != EXPECTED_FRAMEBUFFER_SHA256[ordinal]:
            raise ValueError(f"Native framebuffer changed in frame {ordinal}")
        png_path = output_dir / f"logo-frame-{ordinal}-native.png"
        write_png(png_path, width, height, rgb16_to_rgba(native_pixels))
        results.append({"frame": ordinal, "source_name": name,
                        "literal_pixels": copied,
                        "framebuffer_sha256": framebuffer_hash,
                        "png": str(png_path.resolve())})
        if ordinal == 1:
            clipped, _ = compare_case(
                executable, environment, output_dir, "login-clipped", payload,
                dimensions, (360, 260), (-80, -100), Rect(20, 10, 340, 240), 0x5A)
            if clipped != 3710:
                raise ValueError(f"Unexpected clipped native pixel count: {clipped}")
            results.append({"case": "login-clipped", "literal_pixels": clipped})

            malformed_path = output_dir / "login-truncated.span"
            malformed_path.write_bytes(payload[:-1])
            rejected = subprocess.run([
                str(executable), str(malformed_path),
                str(output_dir / "login-truncated.rgb16"),
                str(width), str(height), str(width), str(height), "0", "0",
                "0", "0", str(width), str(height), "0",
            ], cwd=ROOT, env=environment, capture_output=True)
            if rejected.returncode != 3:
                raise ValueError("Native blitter accepted truncated payload")

    manifest = {"schema": 1, "source_sha256": digest,
                "scope": "portable C++ opaque RGB16 span path vs Python model",
                "results": results,
                "limitations": ["No original-client framebuffer comparison.",
                                "Only opaque/effect-zero RGB16 branch is implemented."]}
    manifest_path = output_dir / "manifest.json"
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    return manifest_path, results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("sprite", type=Path, help="installed SPR/en-us/Logo.spr")
    parser.add_argument("--output-dir", type=Path, default=Path("build/native-logo"))
    args = parser.parse_args()
    manifest, results = verify(args.sprite, args.output_dir)
    print(json.dumps({"results": results, "manifest": str(manifest.resolve())}))


if __name__ == "__main__":
    main()
