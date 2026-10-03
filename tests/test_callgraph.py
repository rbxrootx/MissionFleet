import unittest

from tools.audit_match_callgraph import direct_targets


class DirectCallParserTests(unittest.TestCase):
    def test_reads_call_and_tail_jump_comments_but_not_indirect_calls(self):
        source = "\n".join([
            "// 0x1000: call 0x00002000",
            "; Exact mapped bytes E8 00 00 00 00: call 0x00003000",
            "// 0x100A: jmp 0x00004000",
            "// 0x100C: call dword ptr [0x00005000]",
        ])
        self.assertEqual(
            direct_targets(source),
            {"00002000": [1], "00003000": [2], "00004000": [3]},
        )


if __name__ == "__main__":
    unittest.main()
