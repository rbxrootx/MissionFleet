"""Experimental RGB565 literal-run decoder for Sangduck sprites.

Supports observed format bytes (2, 2) and literal run mode 0 only.
It rejects other layouts. This is an asset preview, not a game renderer.
"""
import argparse
from pathlib import Path
import struct
import zlib

try:
    from .sprite_index import index_sprite, UnsupportedSprite
except ImportError:
    from sprite_index import index_sprite, UnsupportedSprite


def decode(data, width, height):
    if width < 1 or height < 1 or width * height > 16000000:
        raise ValueError("Invalid or excessive image dimensions")
    pixels = bytearray(width * height * 4)
    position = y = cursor_bytes = 0
    while position + 2 <= len(data):
        x_bytes = struct.unpack_from("<H", data, position)[0]
        position += 2
        if x_bytes == 0xfffe:
            if position != len(data) or y != height - 1:
                raise ValueError("Unexpected image terminator")
            return bytes(pixels)
        if x_bytes == 0xffff:
            y += 1
            cursor_bytes = 0
            if y >= height:
                raise ValueError("Too many image rows")
            continue
        if position + 3 > len(data):
            raise ValueError("Truncated run header")
        mode = data[position]
        length = struct.unpack_from("<H", data, position + 1)[0]
        position += 3
        if mode != 0:
            raise UnsupportedSprite(f"Unsupported run mode {mode}")
        cursor_bytes += x_bytes
        if x_bytes % 2 or length % 2 or cursor_bytes + length > width * 2 or position + length > len(data):
            raise ValueError("Invalid run bounds")
        for offset in range(0, length, 2):
            color = struct.unpack_from("<H", data, position + offset)[0]
            red, green, blue = (color >> 11) & 31, (color >> 5) & 63, color & 31
            pixel = (y * width + (cursor_bytes + offset) // 2) * 4
            pixels[pixel:pixel + 4] = bytes(((red << 3) | (red >> 2), (green << 2) | (green >> 4), (blue << 3) | (blue >> 2), 255))
        position += length
        cursor_bytes += length
    raise ValueError("Missing image terminator")


def write_png(path, width, height, pixels):
    def chunk(kind, body):
        return struct.pack(">I", len(body)) + kind + body + struct.pack(">I", zlib.crc32(kind + body) & 0xffffffff)
    rows = b"".join(b"\0" + pixels[y * width * 4:(y + 1) * width * 4] for y in range(height))
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0)) + chunk(b"IDAT", zlib.compress(rows)) + chunk(b"IEND", b""))


def preview(source, frame_number, output):
    info = index_sprite(source)
    if not 0 <= frame_number < len(info["frames"]):
        raise ValueError("Frame number out of range")
    frame = info["frames"][frame_number]
    if frame["format_bytes"][:2] != [2, 2]:
        raise UnsupportedSprite(f"Unsupported pixel format: {frame['format_bytes'][:2]}")
    with source.open("rb") as stream:
        stream.seek(frame["payload_offset"])
        data = stream.read(frame["payload_size"])
    pixels = decode(data, frame["width"], frame["height"])
    write_png(output, frame["width"], frame["height"], pixels)
    return frame


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("sprite", type=Path)
    parser.add_argument("--frame", type=int, default=0)
    parser.add_argument("--output", type=Path, default=Path("reports/preview.png"))
    args = parser.parse_args()
    if args.output.suffix.lower() != ".png" or args.sprite.resolve() == args.output.resolve():
        parser.error("Use a distinct .png output path")
    print(preview(args.sprite, args.frame, args.output))
