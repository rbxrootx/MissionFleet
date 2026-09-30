"""Behavioral reconstruction of the current client's ship sprite draw path.

The field layout and equations come from the unpacked Core.dll functions listed
in docs/client-render-path.md. This module models the valid-input behavior; it
does not execute or wrap original game code.
"""
from dataclasses import dataclass
import struct
from typing import Any, Sequence


@dataclass(frozen=True)
class Rect:
    left: int
    top: int
    right: int
    bottom: int


@dataclass(frozen=True)
class Sprite:
    width: int
    height: int
    surface: Any


@dataclass(frozen=True)
class Screen:
    origin_x: int
    origin_y: int
    viewport: Rect
    pixels: Any


@dataclass(frozen=True)
class AnimationFrame:
    offset_x: int
    offset_y: int
    sprite: Sprite


@dataclass(frozen=True)
class AnimationRecord:
    frame_period: int
    frames: Sequence[AnimationFrame]
    anchor_x: int
    anchor_y: int
    clip: Rect


@dataclass(frozen=True)
class RenderNode:
    x: int
    y: int
    elapsed: int
    color: int
    mode: int
    visible: bool = True


@dataclass(frozen=True)
class BlitCommand:
    surface: Any
    target: Any
    x: int
    y: int
    clip: Rect
    color: int
    mode: int


def animation_record_offset(record_count: int, table_present: bool, index: int):
    """Reconstruct Core.dll 0x58484AD0's bounds check and 0x40 stride."""
    if 0 <= index < record_count and table_present:
        return index * 0x40
    return None


def image_frame_at(frame_pointers: Sequence[Any] | None, index: int):
    """Reconstruct Core.dll 0x58484B20's bounded pointer-table lookup."""
    if frame_pointers is not None and 0 <= index < len(frame_pointers):
        return frame_pointers[index]
    return None


def select_animation_frame(record: AnimationRecord, elapsed: int):
    """Select `(elapsed / period) % count`, as Core.dll 0x5849C770 does."""
    if record.frame_period <= 0:
        raise ValueError("The native animation record requires a positive frame period")
    if elapsed < 0:
        raise ValueError("The native render node skips negative elapsed values")
    if not record.frames:
        return None
    return record.frames[(elapsed // record.frame_period) % len(record.frames)]


def clip_sprite(sprite: Sprite, screen: Screen, x: int, y: int, clip: Rect,
                color: int, mode: int):
    """Reconstruct Core.dll 0x587BA830 before its screen-vtable slot-1 call."""
    absolute_viewport = Rect(
        screen.origin_x + screen.viewport.left,
        screen.origin_y + screen.viewport.top,
        screen.origin_x + screen.viewport.right,
        screen.origin_y + screen.viewport.bottom,
    )
    clipped = Rect(
        max(clip.left, absolute_viewport.left),
        max(clip.top, absolute_viewport.top),
        min(clip.right, absolute_viewport.right),
        min(clip.bottom, absolute_viewport.bottom),
    )
    return BlitCommand(
        sprite.surface,
        screen.pixels,
        x - screen.origin_x,
        y - screen.origin_y,
        Rect(
            clipped.left - screen.origin_x,
            clipped.top - screen.origin_y,
            clipped.right - screen.origin_x,
            clipped.bottom - screen.origin_y,
        ),
        color,
        mode,
    )


def build_ship_blit(record: AnimationRecord | None, node: RenderNode,
                    screen: Screen, parent_x: int = 0, parent_y: int = 0):
    """Reconstruct the ship node's 0x587B5DB0 -> 0x5849C770 draw path."""
    if record is None or not node.visible or node.elapsed < 0:
        return None
    frame = select_animation_frame(record, node.elapsed)
    if frame is None:
        return None
    x = node.x + record.anchor_x + parent_x + frame.offset_x
    y = node.y + record.anchor_y + parent_y + frame.offset_y
    return clip_sprite(frame.sprite, screen, x, y, record.clip, node.color, node.mode)


def blit_opaque_rgb16_spans(payload: bytes, width: int, height: int,
                            framebuffer: bytearray, pitch: int,
                            target_height: int, x: int, y: int, clip: Rect):
    """Reconstruct the opaque/effect-zero span-copy path at Core 0x58800B69.

    The original routine copies source RGB16 words without color conversion.
    This implementation also covers its horizontally-clipped branch while
    preserving the same skipped-pixel transparency and row/end markers.
    """
    if width <= 0 or height <= 0 or pitch <= 0 or pitch % 2:
        raise ValueError("Invalid RGB16 surface geometry")
    target_width = pitch // 2
    if target_height <= 0 or len(framebuffer) < pitch * target_height:
        raise ValueError("Framebuffer is smaller than its declared surface")
    if not (0 <= clip.left <= clip.right <= target_width and
            0 <= clip.top <= clip.bottom <= target_height):
        raise ValueError("Clip rectangle lies outside the target surface")

    position = row = cursor_bytes = copied = 0
    while position + 2 <= len(payload):
        control = struct.unpack_from("<h", payload, position)[0]
        position += 2
        if control == -2:
            if position != len(payload) or row != height - 1:
                raise ValueError("Unexpected image terminator")
            return copied
        if control == -1:
            row += 1
            cursor_bytes = 0
            if row >= height:
                raise ValueError("Too many image rows")
            continue
        if control < 0 or position + 3 > len(payload):
            raise ValueError("Invalid span control")
        length = struct.unpack_from("<H", payload, position + 1)[0]
        position += 3
        cursor_bytes += control
        if (control % 2 or length % 2 or cursor_bytes + length > width * 2 or
                position + length > len(payload)):
            raise ValueError("Invalid span bounds")
        for offset in range(0, length, 2):
            destination_x = x + (cursor_bytes + offset) // 2
            destination_y = y + row
            if (clip.left <= destination_x < clip.right and
                    clip.top <= destination_y < clip.bottom):
                target = destination_y * pitch + destination_x * 2
                framebuffer[target:target + 2] = payload[position + offset:position + offset + 2]
                copied += 1
        position += length
        cursor_bytes += length
    raise ValueError("Missing image terminator")
