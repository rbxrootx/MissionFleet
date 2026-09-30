"""Build a visual board from original NavyFIELD Sangduck sprite layers.

The board background is presentation-only. Every ship pixel comes from the
named bottom/top frames in the original client files and is composited without
resampling or color changes.
"""
import argparse
import json
from pathlib import Path

try:
    from .sprite_preview import decode_frame, write_png
    from .sprite_index import UnsupportedSprite
except ImportError:
    from sprite_preview import decode_frame, write_png
    from sprite_index import UnsupportedSprite


DEFAULT_SPRITES = (
    "ShipStructureF000.spr",
    "ShipStructureF004.spr",
    "ShipStructureF007.spr",
    "ShipStructureF008.spr",
)

UNSUPPORTED_TOP_LAYERS = ("ShipStructureF001.spr", "ShipStructureF003.spr")


def ocean(width, height):
    pixels = bytearray(width * height * 4)
    for y in range(height):
        blue = 40 + (y * 24 // max(height - 1, 1))
        green = 48 + (y * 20 // max(height - 1, 1))
        for x in range(width):
            wave = 10 if ((x + y * 3) % 79) < 2 else 0
            offset = (y * width + x) * 4
            pixels[offset:offset + 4] = bytes((13 + wave, green + wave, blue + wave, 255))
    return pixels


def composite(target, target_width, target_height, source, source_width, source_height, left, top):
    for y in range(source_height):
        target_y = top + y
        if not 0 <= target_y < target_height:
            continue
        for x in range(source_width):
            target_x = left + x
            if not 0 <= target_x < target_width:
                continue
            source_offset = (y * source_width + x) * 4
            if source[source_offset + 3] == 0:
                continue
            target_offset = (target_y * target_width + target_x) * 4
            target[target_offset:target_offset + 4] = source[source_offset:source_offset + 4]


def build(client, output, manifest):
    width, height = 1280, 860
    canvas = ocean(width, height)
    placements = ((55, 55), (650, 35), (30, 505), (580, 500))
    evidence = []
    for name, (left, top) in zip(DEFAULT_SPRITES, placements):
        source = client / "SPR" / name
        bottom, bottom_pixels = decode_frame(source, 0)
        composite(canvas, width, height, bottom_pixels, bottom["width"], bottom["height"], left, top)
        item = {
            "file": f"SPR/{name}",
            "bottom_frame": {"ordinal": 0, "source_name": bottom["source_name"]},
            "dimensions": [bottom["width"], bottom["height"]],
            "placement": [left, top],
        }
        top_frame, top_pixels = decode_frame(source, 1)
        if (bottom["width"], bottom["height"]) != (top_frame["width"], top_frame["height"]):
            raise ValueError(f"Layer dimensions differ in {name}")
        composite(canvas, width, height, top_pixels, top_frame["width"], top_frame["height"], left, top)
        item["top_frame"] = {"ordinal": 1, "source_name": top_frame["source_name"], "status": "decoded"}
        evidence.append(item)
    unsupported = []
    for name in UNSUPPORTED_TOP_LAYERS:
        try:
            decode_frame(client / "SPR" / name, 1)
        except UnsupportedSprite as exc:
            unsupported.append({"file": f"SPR/{name}", "frame": 1, "reason": str(exc)})
    write_png(output, width, height, canvas)
    manifest.parent.mkdir(parents=True, exist_ok=True)
    manifest.write_text(json.dumps({
        "schema": 1,
        "scope": "client sprite visual validation",
        "output": output.as_posix(),
        "presentation_background": "generated ocean field",
        "sprite_processing": "RGB565 decode and direct alpha composite; no scaling or recoloring",
        "sources": evidence,
        "excluded_unsupported_layers": unsupported,
        "uncertainties": [
            "Placement is a gallery layout, not a recovered in-game scene transform.",
            "The decoder currently supports observed format bytes 2,2 and literal run mode 0 only.",
        ],
    }, indent=2, ensure_ascii=True), encoding="utf-8")
    return evidence


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("client", type=Path)
    parser.add_argument("--output", type=Path, default=Path("reports/client-visuals/fleet-board.png"))
    parser.add_argument("--manifest", type=Path, default=Path("reports/client-visuals/fleet-board.json"))
    args = parser.parse_args()
    print(json.dumps({"sprites": len(build(args.client, args.output, args.manifest)), "output": str(args.output)}))
