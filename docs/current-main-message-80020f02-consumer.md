# Current Main `0x80020F02` downstream record consumer

The byte-matched message handler `FUN_58847770` calls `FUN_588471E0` at
`0x58847A24`. That handler is reached from the byte-matched dispatchers
`FUN_587BB700` and `FUN_588C1650` for message `0x80020F02`; the upstream slot
scan and selector path are described in the
[`message-handler notes`](current-main-message-80020f02-handler.md).
`FUN_588471E0` has one unmatched direct callee, the 19-byte
`FUN_58753E60` wrapper, which calls the already byte-matched two-key lookup
`FUN_587538B0`.

## Behavior supported by the original code

Fresh Ghidra 12.1.3 output gives `FUN_588471E0` one contiguous 1,310-byte body
range (375 decoded instructions). The function sets an observed receiver flag
at `+0xA0` and repeatedly passes record-sourced strings to the byte-matched
`FUN_58731CE0` buffer updater. A 16-bit value at record `+0x1A` selects one of
seven literal `STR_COMMUSERSTATUS_*` keys. Three words at offsets
`+0x9C`, `+0xA0`, and `+0xA4` of its additional argument are passed to the
`MESSAGESTRING__WIN_LOSE_DISCONNECT` formatter. A word at record `+0x34`
selects among eleven literal `STR_INSIGNIA_*` keys. The routine also copies
two selected resource entries into child records under observed global
version and pointer checks.

For the observed clan fields at record `+0x3C` and `+0x40`,
`FUN_58753E60` passes both words to `FUN_587538B0`. If the two-key lookup
returns a record pointer, the consumer passes that pointer to the matched text
buffer updater. If the lookup fails, it clears the receiver flag at `+0xA0`
and calls the byte-matched sender `FUN_587B9270`, whose instructions send
message ID `0x80010F06` with those two words. A word at record `+0x44` selects
one of seven literal `STR_CLANRANK_*` keys. The function ends with an observed
virtual call guarded by the receiver flag and bits in a child-control word.

The closure comprises `FUN_588471E0` and `FUN_58753E60`: two functions and
1,329 bytes across two exact Ghidra ranges. The root has one in-closure call;
all 19 transfers leaving the closure target functions already matched against
the installed image. The reconstructed sources are
[`FUN_588471e0.cpp`](../src/client-current/Main/FUN_588471e0.cpp) and
[`FUN_58753e60.cpp`](../src/client-current/Main/FUN_58753e60.cpp). The tracked
range manifest is
[`main-message-80020f02-consumer-body-ranges.tsv`](../config/NF2_2026/main-message-80020f02-consumer-body-ranges.tsv).
ObjDiff 3.8.0 reports both functions byte-identical at 100.0%. Run
`python tools/verify_current_main_message_80020f02_consumer.py` for the
focused caller, range, and transfer checks.

## Unresolved details

The record and additional-argument schemas, status/rank meanings, child and
resource types, clan-key meanings, localization-format semantics, indirect
callback contract, and actual visible result remain unknown. Message IDs and
string keys are recorded as observed values; their game-level semantics are
not inferred. This is a static byte match, and no original-client or emulator
test was performed.
