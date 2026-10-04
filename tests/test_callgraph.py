import unittest
from pathlib import Path

from tools.audit_match_callgraph import direct_targets
from tools.rank_current_main_frontier import collect_frontier


class DirectCallParserTests(unittest.TestCase):
    def test_reads_semantic_cpp_calls_without_treating_declarations_as_calls(self):
        source = "\n".join([
            'extern "C" void FUN_58907360(unsigned char*, unsigned int);',
            '    FUN_58907360(first, value);',
            '    return FUN_58907360(second, value);',
        ])
        self.assertEqual(direct_targets(source), {"58907360": [2, 3]})

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


class CurrentMainFrontierTests(unittest.TestCase):
    def test_ranks_unmatched_direct_targets_and_ignores_verified_targets(self):
        inventory = {
            "00001000": {"name": "FUN_caller", "size": "10"},
            "00002000": {"name": "FUN_unmatched", "size": "20"},
            "00003000": {"name": "FUN_verified", "size": "5"},
        }
        matches = {
            "00001000": {"verified_by": "objdiff-3.8.0-byte-identical"},
            "00003000": {"verified_by": "objdiff-3.8.0-byte-identical"},
        }
        source_dir = Path(__file__).resolve().parent / "fixtures/current-main-frontier"
        ranked = collect_frontier(inventory, matches, source_dir)

        self.assertEqual(len(ranked), 1)
        self.assertEqual(ranked[0]["target"], "00002000")
        self.assertEqual(ranked[0]["caller_count"], 1)
        self.assertEqual(ranked[0]["sites"], [("00001000", 1), ("00001000", 2)])


if __name__ == "__main__":
    unittest.main()
