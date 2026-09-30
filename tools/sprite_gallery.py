"""Build a visual board from original NavyFIELD Sangduck sprite layers.

The board background is presentation-only. Every ship pixel comes from the
named bottom/top frames in the original client files and is composited without
resampling or color changes.
"""
import argparse
import json
from pathlib import Path
import struct

try:
    from .ship_sprite_runtime import Rect, blit_opaque_rgb16_spans
    from .sprite_index import UnsupportedSprite, index_sprite
    from .sprite_preview import write_png
except ImportError:
    from ship_sprite_runtime import Rect, blit_opaque_rgb16_spans
    from sprite_index import UnsupportedSprite, index_sprite
    from sprite_preview import write_png


DEFAULT_SPRITES = (
    "ShipStructureF000.spr",
    "ShipStructureF001.spr",
    "ShipStructureF003.spr",
    "ShipStructureF004.spr",
    "ShipStructureF007.spr",
    "ShipStructureF008.spr",
)


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


def rgba_to_rgb16(pixels):
    if len(pixels) % 4:
        raise ValueError("RGBA buffer is not pixel aligned")
    output = bytearray(len(pixels) // 2)
    for source in range(0, len(pixels), 4):
        red, green, blue = pixels[source:source + 3]
        color = ((red >> 3) << 11) | ((green >> 2) << 5) | (blue >> 3)
        struct.pack_into("<H", output, source // 2, color)
    return output


def rgb16_to_rgba(pixels):
    if len(pixels) % 2:
        raise ValueError("RGB16 buffer is not pixel aligned")
    output = bytearray(len(pixels) * 2)
    for source in range(0, len(pixels), 2):
        color = struct.unpack_from("<H", pixels, source)[0]
        red, green, blue = (color >> 11) & 31, (color >> 5) & 63, color & 31
        target = source * 2
        output[target:target + 4] = bytes(
            ((red << 3) | (red >> 2), (green << 2) | (green >> 4),
             (blue << 3) | (blue >> 2), 255))
    return output


def load_rgb16_frame(source, ordinal):
    info = index_sprite(source)
    if not 0 <= ordinal < len(info["frames"]):
        raise ValueError("Frame number out of range")
    frame = info["frames"][ordinal]
    if frame["format_bytes"][:2] != [2, 2]:
        raise UnsupportedSprite(f"Unsupported pixel format: {frame['format_bytes'][:2]}")
    with source.open("rb") as stream:
        stream.seek(frame["payload_offset"])
        payload = stream.read(frame["payload_size"])
    return frame, payload


def build(client, output, manifest):
    width, height = 1920, 1080
    canvas = rgba_to_rgb16(ocean(width, height))
    placements = ((40, 55), (690, 55), (1325, 45),
                  (40, 650), (675, 665), (1230, 625))
    evidence = []
    for name, (left, top) in zip(DEFAULT_SPRITES, placements):
        source = client / "SPR" / name
        bottom, bottom_payload = load_rgb16_frame(source, 0)
        bottom_pixels = blit_opaque_rgb16_spans(
            bottom_payload, bottom["width"], bottom["height"], canvas, width * 2,
            height, left, top, Rect(0, 0, width, height))
        item = {
            "file": f"SPR/{name}",
            "bottom_frame": {"ordinal": 0, "source_name": bottom["source_name"],
                             "literal_pixels": bottom_pixels},
            "dimensions": [bottom["width"], bottom["height"]],
            "placement": [left, top],
        }
        top_frame, top_payload = load_rgb16_frame(source, 1)
        if (bottom["width"], bottom["height"]) != (top_frame["width"], top_frame["height"]):
            raise ValueError(f"Layer dimensions differ in {name}")
        top_pixels = blit_opaque_rgb16_spans(
            top_payload, top_frame["width"], top_frame["height"], canvas,
            width * 2, height, left, top, Rect(0, 0, width, height))
        item["top_frame"] = {"ordinal": 1, "source_name": top_frame["source_name"],
                             "literal_pixels": top_pixels, "status": "rendered"}
        evidence.append(item)
    write_png(output, width, height, rgb16_to_rgba(canvas))
    manifest.parent.mkdir(parents=True, exist_ok=True)
    manifest.write_text(json.dumps({
        "schema": 1,
        "scope": "client sprite visual validation",
        "output": output.as_posix(),
        "presentation_background": "generated ocean field",
        "sprite_processing": "recovered opaque RGB16 span compositor path; no scaling or recoloring",
        "sources": evidence,
        "uncertainties": [
            "Placement is a gallery layout, not a recovered in-game scene transform.",
            "The decoder currently supports the original loader's compressed two-byte pixel branch only.",
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
