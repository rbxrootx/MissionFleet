import struct
import unittest

from tools.ship_sprite_runtime import (
    AnimationFrame, AnimationRecord, BlitCommand, Rect, RenderNode, Screen, Sprite,
    animation_record_offset, blit_opaque_rgb16_spans, build_ship_blit, image_frame_at,
    select_animation_frame,
)


class ShipSpriteRuntimeTests(unittest.TestCase):
    def test_native_table_accessors_preserve_bounds_and_stride(self):
        self.assertEqual(0x80, animation_record_offset(4, True, 2))
        for index in (-1, 4):
            self.assertIsNone(animation_record_offset(4, True, index))
        self.assertIsNone(animation_record_offset(4, False, 0))
        frames = ["zero", "one"]
        self.assertEqual("one", image_frame_at(frames, 1))
        self.assertIsNone(image_frame_at(frames, -1))
        self.assertIsNone(image_frame_at(frames, 2))
        self.assertIsNone(image_frame_at(None, 0))

    def test_native_timed_frame_selection_wraps(self):
        sprite = Sprite(1, 1, "surface")
        frames = [AnimationFrame(0, 0, sprite), AnimationFrame(1, 1, sprite)]
        record = AnimationRecord(100, frames, 0, 0, Rect(0, 0, 1, 1))
        self.assertIs(frames[0], select_animation_frame(record, 99))
        self.assertIs(frames[1], select_animation_frame(record, 100))
        self.assertIs(frames[0], select_animation_frame(record, 200))
        with self.assertRaises(ValueError):
            select_animation_frame(AnimationRecord(0, frames, 0, 0, record.clip), 0)

    def test_ship_node_builds_original_screen_blit_arguments(self):
        sprite = Sprite(40, 30, "frame-surface")
        screen = Screen(100, 200, Rect(0, 0, 800, 600), "target-buffer")
        record = AnimationRecord(
            100,
            [AnimationFrame(1, 2, sprite), AnimationFrame(3, 4, sprite)],
            5, -2, Rect(50, 70, 300, 280),
        )
        command = build_ship_blit(
            record, RenderNode(100, 200, 100, 0xAABBCCDD, 0x102), screen, 10, 20,
        )
        self.assertEqual(
            BlitCommand("frame-surface", "target-buffer", 18, 22,
                        Rect(0, 0, 200, 80), 0xAABBCCDD, 0x102),
            command,
        )

    def test_hidden_empty_and_negative_time_nodes_do_not_draw(self):
        empty = AnimationRecord(1, [], 0, 0, Rect(0, 0, 0, 0))
        screen = Screen(0, 0, Rect(0, 0, 1, 1), bytearray(2))
        self.assertIsNone(build_ship_blit(empty, RenderNode(0, 0, 0, 0, 0), screen))
        self.assertIsNone(build_ship_blit(None, RenderNode(0, 0, 0, 0, 0), screen))
        sprite = Sprite(1, 1, "surface")
        record = AnimationRecord(1, [AnimationFrame(0, 0, sprite)], 0, 0,
                                 Rect(0, 0, 1, 1))
        self.assertIsNone(build_ship_blit(
            record, RenderNode(0, 0, 0, 0, 0, visible=False), screen))
        self.assertIsNone(build_ship_blit(record, RenderNode(0, 0, -1, 0, 0), screen))

    def test_opaque_rgb16_span_copy_preserves_pixels_transparency_and_pitch(self):
        def run(skip, *pixels):
            return (struct.pack("<hBH", skip, 0x7F, len(pixels) * 2) +
                    struct.pack("<" + "H" * len(pixels), *pixels))

        payload = (run(0, 0xF800) + run(2, 0x07E0) + struct.pack("<h", -1) +
                   run(2, 0x001F) + struct.pack("<h", -2))
        framebuffer = bytearray(b"\x55" * (12 * 4))
        copied = blit_opaque_rgb16_spans(
            payload, 3, 2, framebuffer, 12, 4, 1, 1, Rect(0, 0, 6, 4))
        self.assertEqual(3, copied)
        self.assertEqual(struct.pack("<H", 0xF800), framebuffer[14:16])
        self.assertEqual(b"\x55\x55", framebuffer[16:18])
        self.assertEqual(struct.pack("<H", 0x07E0), framebuffer[18:20])
        self.assertEqual(struct.pack("<H", 0x001F), framebuffer[28:30])
        self.assertEqual(b"\x55\x55", framebuffer[30:32])

    def test_opaque_rgb16_span_copy_clips_and_rejects_malformed_streams(self):
        payload = (struct.pack("<hBH", 0, 0, 6) + struct.pack("<HHH", 1, 2, 3) +
                   struct.pack("<h", -2))
        framebuffer = bytearray(8)
        copied = blit_opaque_rgb16_spans(
            payload, 3, 1, framebuffer, 8, 1, 0, 0, Rect(1, 0, 3, 1))
        self.assertEqual(2, copied)
        self.assertEqual(b"\x00\x00" + struct.pack("<HH", 2, 3) + b"\x00\x00", framebuffer)
        with self.assertRaises(ValueError):
            blit_opaque_rgb16_spans(payload[:-1], 3, 1, bytearray(8), 8, 1,
                                    0, 0, Rect(0, 0, 4, 1))
