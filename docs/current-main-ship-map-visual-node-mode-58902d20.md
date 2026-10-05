# Ship-map visual child mode helper at `0x58902D20`

`FUN_58902D20` is a 59-byte thiscall helper in the mapped `Main.dll`. Its
receiver is in ECX and one DWORD mode is passed on the stack. The mapped body
writes that DWORD to receiver offset `+0x2C`, then walks the child list headed
at `+0x3C` by following each node's `+0x38` link. It stops when the link is
null or returns to the original list head. For each visited child, it reads the
WORD at `+0x24`; when bit `0x8000` is set, it recursively applies the same mode
to that child. The receiver itself is always updated, regardless of its own
flags.

The high-level model is
[`ShipMapVisualNodeMode.cpp`](../src/client-current/semantic/ShipMapVisualNodeMode.cpp).
It is wired into the ship-map visual-state scan for candidate mode `0x102` and
secondary mode `0xFFFFFEFF`. The indexed-resource setup path calls it on the
child at `+0x60FC` with mode `0x101`, then clears that same root child's low
flag bit, matching the subsequent instructions at `0x588DBD13..0x588DBD22`.
The previous setup harness had treated this call as a pointer lookup; that was
inconsistent with the mapped helper's behavior and the caller's immediate
reload of `+0x60FC`.

Tests exercise nested flagged children, skipped unflagged siblings, circular
and null-terminated lists, and all-bits mode values through both visual-state
call paths. Run
`rtk run python tools/verify_ship_map_visual_state_child_scan.py` and
`rtk run python tools/verify_ship_map_visual_state_setup.py` for the semantic
checks. `rtk run python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 58902d20` verifies the separate
instruction candidate against all 59 installed-client bytes.

The purpose of `+0x2C`, the meaning of flag `0x8000`, and the exact native class
layout remain unknown. The semantic node type is only a testable view of the
observed fields; it is not linked into a complete client or emulator runtime.
