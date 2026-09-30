import unittest

from tools.ship_sprite_runtime import (
    AnimationFrame, AnimationRecord, BlitCommand, Rect, RenderNode, Sprite,
    animation_record_offset, build_ship_blit, image_frame_at,
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
        sprite = Sprite(0, 0, Rect(0, 0, 1, 1), "surface")
        frames = [AnimationFrame(0, 0, sprite), AnimationFrame(1, 1, sprite)]
        record = AnimationRecord(100, frames, 0, 0, Rect(0, 0, 1, 1))
        self.assertIs(frames[0], select_animation_frame(record, 99))
        self.assertIs(frames[1], select_animation_frame(record, 100))
        self.assertIs(frames[0], select_animation_frame(record, 200))
        with self.assertRaises(ValueError):
            select_animation_frame(AnimationRecord(0, frames, 0, 0, record.clip), 0)

    def test_ship_node_builds_original_screen_blit_arguments(self):
        sprite = Sprite(7, 9, Rect(2, 3, 40, 30), "frame-surface")
        record = AnimationRecord(
            100,
            [AnimationFrame(1, 2, sprite), AnimationFrame(3, 4, sprite)],
            5, -2, Rect(0, 0, 50, 40),
        )
        command = build_ship_blit(
            record, RenderNode(100, 200, 100, 0xAABBCCDD, 0x102), 10, 20,
        )
        self.assertEqual(
            BlitCommand("frame-surface", 111, 213, Rect(2, 3, 40, 30),
                        0xAABBCCDD, 0x102),
            command,
        )

    def test_hidden_empty_and_negative_time_nodes_do_not_draw(self):
        empty = AnimationRecord(1, [], 0, 0, Rect(0, 0, 0, 0))
        self.assertIsNone(build_ship_blit(empty, RenderNode(0, 0, 0, 0, 0)))
        self.assertIsNone(build_ship_blit(None, RenderNode(0, 0, 0, 0, 0)))
        sprite = Sprite(0, 0, Rect(0, 0, 1, 1), "surface")
        record = AnimationRecord(1, [AnimationFrame(0, 0, sprite)], 0, 0,
                                 Rect(0, 0, 1, 1))
        self.assertIsNone(build_ship_blit(
            record, RenderNode(0, 0, 0, 0, 0, visible=False)))
        self.assertIsNone(build_ship_blit(record, RenderNode(0, 0, -1, 0, 0)))
