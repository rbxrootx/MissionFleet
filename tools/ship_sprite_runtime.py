"""Behavioral reconstruction of the current client's ship sprite draw path.

The field layout and equations come from the unpacked Core.dll functions listed
in docs/client-render-path.md. This module models the valid-input behavior; it
does not execute or wrap original game code.
"""
from dataclasses import dataclass
from typing import Any, Sequence


@dataclass(frozen=True)
class Rect:
    left: int
    top: int
    right: int
    bottom: int


@dataclass(frozen=True)
class Sprite:
    origin_x: int
    origin_y: int
    bounds: Rect
    surface: Any


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


def clip_sprite(sprite: Sprite, x: int, y: int, clip: Rect, color: int, mode: int):
    """Reconstruct Core.dll 0x587BA830 before its screen-vtable slot-1 call."""
    absolute_bounds = Rect(
        sprite.origin_x + sprite.bounds.left,
        sprite.origin_y + sprite.bounds.top,
        sprite.origin_x + sprite.bounds.right,
        sprite.origin_y + sprite.bounds.bottom,
    )
    clipped = Rect(
        max(clip.left, absolute_bounds.left),
        max(clip.top, absolute_bounds.top),
        min(clip.right, absolute_bounds.right),
        min(clip.bottom, absolute_bounds.bottom),
    )
    return BlitCommand(
        sprite.surface,
        x - sprite.origin_x,
        y - sprite.origin_y,
        Rect(
            clipped.left - sprite.origin_x,
            clipped.top - sprite.origin_y,
            clipped.right - sprite.origin_x,
            clipped.bottom - sprite.origin_y,
        ),
        color,
        mode,
    )


def build_ship_blit(record: AnimationRecord | None, node: RenderNode,
                    parent_x: int = 0, parent_y: int = 0):
    """Reconstruct the ship node's 0x587B5DB0 -> 0x5849C770 draw path."""
    if record is None or not node.visible or node.elapsed < 0:
        return None
    frame = select_animation_frame(record, node.elapsed)
    if frame is None:
        return None
    x = node.x + record.anchor_x + parent_x + frame.offset_x
    y = node.y + record.anchor_y + parent_y + frame.offset_y
    return clip_sprite(frame.sprite, x, y, record.clip, node.color, node.mode)
