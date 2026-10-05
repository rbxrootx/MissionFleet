"""Validate the native v3.3 sprite index and render path on installed Logo.spr."""

import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess

try:
    from .ship_sprite_runtime import Rect, blit_ship_rgb565_effect_spans
    from .sprite_index import index_sprite
    from .sprite_gallery import rgb16_to_rgba
    from .sprite_preview import write_png
    from .verify_logo_sprite_visual import EXPECTED_SHA256, FRAMES
    from .verify_native_logo_blit import EXPECTED_FRAMEBUFFER_SHA256
except ImportError:
    from ship_sprite_runtime import Rect, blit_ship_rgb565_effect_spans
    from sprite_index import index_sprite
    from sprite_gallery import rgb16_to_rgba
    from sprite_preview import write_png
    from verify_logo_sprite_visual import EXPECTED_SHA256, FRAMES
    from verify_native_logo_blit import EXPECTED_FRAMEBUFFER_SHA256


ROOT = Path(__file__).resolve().parents[1]


def run(executable, source, environment, *args):
    return subprocess.run([str(executable), str(source), *map(str, args)],
                          cwd=ROOT, env=environment, text=True, capture_output=True)


def verify(source, output_dir):
    source = source.resolve(strict=True)
    data = source.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED_SHA256:
        raise ValueError("Installed Logo.spr hash differs")
    reference = index_sprite(source)
    if reference["version"] != [3, 3] or reference["image_count"] != 188:
        raise ValueError("Unexpected Logo.spr index")
    output_dir.mkdir(parents=True, exist_ok=True)
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    executable = output_dir / ("sangduck_sprite_v33_cli.exe" if os.name == "nt"
                               else "sangduck_sprite_v33_cli")
    environment = os.environ.copy()
    for key in ("TMP", "TEMP", "TMPDIR"):
        environment[key] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2", "-Wall", "-Wextra",
        str(ROOT / "src/client-current/semantic/SangduckSpriteV33.cpp"),
        str(ROOT / "src/client-current/semantic/Rgb16OpaqueSpan.cpp"),
        str(ROOT / "src/client-current/semantic/CoreRgb16SpriteSlot1.cpp"),
        str(ROOT / "tests/native/sangduck_sprite_v33_cli.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)

    indexed = run(executable, source, environment)
    if indexed.returncode != 0:
        raise ValueError(f"Native sprite parser rejected Logo.spr: {indexed.stderr}")
    lines = indexed.stdout.splitlines()
    head = lines[0].split("\t")
    expected_head = ["H", "3", "3", "188",
                     str(reference["unparsed_tail_offset"]),
                     str(reference["unparsed_tail_bytes"])]
    if head != expected_head or len(lines) != 189:
        raise ValueError("Native sprite header/tail index differs")
    for ordinal, (line, frame) in enumerate(zip(lines[1:], reference["frames"])):
        fields = line.split("\t")
        expected = [
            "F", str(ordinal), frame["source_name"].encode("cp1252").hex(),
            bytes(frame["format_bytes"]).hex(), str(frame["width"]),
            str(frame["height"]), str(frame["record_offset"]),
            str(frame["payload_offset"]), str(frame["payload_size"]),
            str(frame["extra_u32"]),
        ]
        if fields != expected:
            raise ValueError(f"Native image index differs at record {ordinal}")

    results = []
    for ordinal, name, dimensions, _, expected_pixels in FRAMES:
        raw_path = output_dir / f"logo-frame-{ordinal}-native-index.rgb16"
        rendered = run(executable, source, environment, ordinal, raw_path)
        if rendered.returncode != 0 or rendered.stdout.splitlines()[-1] != f"R\t{ordinal}\t{expected_pixels}":
            raise ValueError(f"Native sprite render failed for frame {ordinal}: {rendered.stderr}")
        pixels = raw_path.read_bytes()
        digest = hashlib.sha256(pixels).hexdigest()
        if digest != EXPECTED_FRAMEBUFFER_SHA256[ordinal]:
            raise ValueError(f"Native indexed framebuffer differs for frame {ordinal}")
        png = output_dir / f"logo-frame-{ordinal}-native-index.png"
        write_png(png, dimensions[0], dimensions[1], rgb16_to_rgba(pixels))
        results.append({"ordinal": ordinal, "source_name": name,
                        "framebuffer_sha256": digest, "png": str(png.resolve())})
        if ordinal == 0:
            effect_path = output_dir / "logo-frame-0-rgb565-effect.rgb16"
            effected = run(executable, source, environment, ordinal,
                           effect_path, "ship-effect")
            if effected.returncode != 0:
                raise ValueError(f"Native slot-1 effect render failed: {effected.stderr}")
            effect_count = int(effected.stdout.splitlines()[-1].split("\t")[-1])
            effect_pixels = effect_path.read_bytes()
            ref_frame = reference["frames"][ordinal]
            payload = data[ref_frame["payload_offset"]:
                           ref_frame["payload_offset"] + ref_frame["payload_size"]]
            reference_effect = bytearray(dimensions[0] * dimensions[1] * 2)
            reference_count = blit_ship_rgb565_effect_spans(
                payload, dimensions[0], dimensions[1], reference_effect,
                dimensions[0] * 2, dimensions[1], 0, 0,
                Rect(0, 0, dimensions[0], dimensions[1]))
            if effect_count != reference_count or effect_pixels != reference_effect:
                raise ValueError("Native indexed RGB565 effect output differs from Python")
            effect_png = output_dir / "logo-frame-0-rgb565-effect.png"
            write_png(effect_png, dimensions[0], dimensions[1],
                      rgb16_to_rgba(effect_pixels))
            results.append({
                "ordinal": ordinal,
                "mode": "ship-effect",
                "color": "0x80",
                "effect": "0x101",
                "written_pixels": effect_count,
                "framebuffer_sha256": hashlib.sha256(effect_pixels).hexdigest(),
                "png": str(effect_png.resolve()),
            })

    def expect_rejection(label, changed, needle):
        path = output_dir / f"{label}.spr"
        path.write_bytes(changed)
        rejected = run(executable, path, environment)
        if rejected.returncode != 3 or needle not in rejected.stderr:
            raise ValueError(f"Native parser accepted {label} corruption")

    changed = bytearray(data)
    changed[100] ^= 1
    expect_rejection("bad-header-checksum", changed, "header checksum")
    changed = bytearray(data)
    changed[136 + 60] ^= 1
    expect_rejection("bad-record-checksum", changed, "record checksum")
    expect_rejection("truncated-image-payload", data[:reference["unparsed_tail_offset"] - 1],
                     "payload exceeds")

    manifest = {"schema": 1, "source_sha256": EXPECTED_SHA256,
                "indexed_records": 188, "record_checksums_validated": 188,
                "header_checksum_validated": True,
                "tail_bytes": reference["unparsed_tail_bytes"],
                "rendered": results,
                "limitations": ["Only Sangduck v3.3 image-record indexing is implemented.",
                                "Animation, effects, audio, and the record tail remain unparsed.",
                                "The alternate mask-specialized compositor is unported.",
                                "Ship setter traces do not prove one sprite receives the tested color/effect pair.",
                                "No original-client framebuffer comparison."]}
    manifest_path = output_dir / "manifest.json"
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    return manifest_path, results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("sprite", type=Path, help="installed SPR/en-us/Logo.spr")
    parser.add_argument("--output-dir", type=Path, default=Path("build/native-logo-index"))
    args = parser.parse_args()
    manifest, results = verify(args.sprite, args.output_dir)
    print(json.dumps({"results": results, "manifest": str(manifest.resolve())}))


if __name__ == "__main__":
    main()
