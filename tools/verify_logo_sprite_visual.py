"""Cross-check two installed Logo.spr frames through independent RGB16 paths.

The current Main.dll logo constructor names Logo.spr. This tool verifies the
installed asset's compressed 16-bit payload against both the metadata/pixel
decoder and the Core.dll opaque span-compositor model, then saves inspectable
PNGs. It does not execute the original client renderer.
"""

import argparse
import hashlib
import json
from pathlib import Path

try:
    from .ship_sprite_runtime import Rect, blit_opaque_rgb16_spans
    from .sprite_gallery import rgb16_to_rgba
    from .sprite_index import index_sprite
    from .sprite_preview import decode, write_png
except ImportError:
    from ship_sprite_runtime import Rect, blit_opaque_rgb16_spans
    from sprite_gallery import rgb16_to_rgba
    from sprite_index import index_sprite
    from sprite_preview import decode, write_png


EXPECTED_SHA256 = "36b4df976909f15f6ac7fe3a73d2f88ab1df0b1dcd6acd571478c71123a21f1b"
FRAMES = (
    (0, "ComLogo.bmp", (800, 600),
     "56b08a6b78e4520df6a258bb6d84fc86a360e7bf6d149d502f2157cff0e36d88", 8570),
    (1, "Login.bmp", (1024, 768),
     "1003c4e0f94498d447bcc529f9d8d7292d2e12fadfe21c30d92f126b86b302ad", 84365),
)


def verify(source: Path, output_dir: Path):
    source = source.resolve(strict=True)
    digest = hashlib.sha256(source.read_bytes()).hexdigest()
    if digest != EXPECTED_SHA256:
        raise ValueError(f"Logo.spr SHA-256 changed: {digest}")
    info = index_sprite(source)
    if info["version"] != [3, 3] or info["image_count"] < 2:
        raise ValueError("Unexpected Logo.spr record header")

    output_dir.mkdir(parents=True, exist_ok=True)
    results = []
    for ordinal, name, dimensions, expected_payload_hash, expected_pixels in FRAMES:
        frame = info["frames"][ordinal]
        width, height = dimensions
        if (frame["source_name"] != name or
                (frame["width"], frame["height"]) != dimensions or
                frame["format_bytes"][:2] != [2, 2]):
            raise ValueError(f"Unexpected Logo.spr frame {ordinal} metadata")
        with source.open("rb") as stream:
            stream.seek(frame["payload_offset"])
            payload = stream.read(frame["payload_size"])
        if len(payload) != frame["payload_size"]:
            raise ValueError(f"Truncated Logo.spr frame {ordinal}")
        payload_hash = hashlib.sha256(payload).hexdigest()
        if payload_hash != expected_payload_hash:
            raise ValueError(f"Logo.spr frame {ordinal} payload changed")

        preview = decode(payload, width, height)
        surface = bytearray(width * height * 2)
        copied = blit_opaque_rgb16_spans(
            payload, width, height, surface, width * 2, height, 0, 0,
            Rect(0, 0, width, height),
        )
        composite = rgb16_to_rgba(surface)
        opaque = 0
        for offset in range(0, len(preview), 4):
            alpha = preview[offset + 3]
            if alpha == 255:
                opaque += 1
                if preview[offset:offset + 3] != composite[offset:offset + 3]:
                    raise ValueError(f"Compositor mismatch in frame {ordinal} at pixel {offset // 4}")
            elif alpha == 0:
                if composite[offset:offset + 3] != b"\0\0\0":
                    raise ValueError(f"Transparency mismatch in frame {ordinal} at pixel {offset // 4}")
            else:
                raise ValueError(f"Unexpected preview alpha in frame {ordinal}")
        if copied != opaque:
            raise ValueError(f"Literal-pixel count mismatch in frame {ordinal}: {copied} != {opaque}")
        if opaque != expected_pixels:
            raise ValueError(f"Unexpected literal-pixel count in frame {ordinal}: {opaque}")

        preview_path = output_dir / f"logo-frame-{ordinal}-transparent.png"
        composite_path = output_dir / f"logo-frame-{ordinal}-rgb16.png"
        write_png(preview_path, width, height, preview)
        write_png(composite_path, width, height, composite)
        results.append({
            "ordinal": ordinal,
            "source_name": name,
            "dimensions": [width, height],
            "payload_sha256": payload_hash,
            "literal_pixels": opaque,
            "preview_png": str(preview_path.resolve()),
            "compositor_png": str(composite_path.resolve()),
        })

    manifest = {
        "schema": 1,
        "source_sha256": digest,
        "original_callsite": "Main.dll:5878D6D0 loads Logo.spr",
        "scope": "RGB16 opaque/effect-zero span path; two original frames",
        "frames": results,
        "limitations": [
            "No original-client framebuffer was captured for pixel-for-pixel comparison.",
            "No UI controls, text, animation scheduling, or non-opaque effects are reconstructed here.",
        ],
    }
    manifest_path = output_dir / "manifest.json"
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    return manifest_path, results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("sprite", type=Path, help="installed SPR/en-us/Logo.spr")
    parser.add_argument("--output-dir", type=Path, default=Path("build/logo-visual"))
    args = parser.parse_args()
    manifest, frames = verify(args.sprite, args.output_dir)
    print(json.dumps({"frames": frames, "manifest": str(manifest.resolve())}))


if __name__ == "__main__":
    main()
