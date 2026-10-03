# Current Main battle-state helper

`FUN_587fbcc0` is a 3,303-byte `__fastcall` function with four Ghidra body
ranges:

| Range | Bytes |
| --- | ---: |
| `0x587FBCC0..0x587FC249` | 1,418 |
| `0x587FC250..0x587FC3C9` | 378 |
| `0x587FC3D0..0x587FC42C` | 93 |
| `0x587FC430..0x587FC9B5` | 1,414 |

Ghidra records two calls from `FUN_587fd890` at `0x587FEFFF` and
`0x587FF0EB`. That parent is the queue screen's vtable-backed update method at
slot `+0x0C`; the related constructor identifies the table as
`CPageFightOn_ControlMenuScreen` in the [event-queue evidence](current-main-event-queue.md).

The helper checks the stage field at `+0x105F0`, initializes receiver and child
control state, and branches across several stage values. Some paths scan the
linked records and compare team-indexed values before updating a decision field
at `+0x10474` and calling control-update helpers. When the receiver matches a
global pointer, one path calls `FUN_587f2dd0`, the separately matched
battle-statistics helper. That statistics helper is also called by the mapped
`0x800231xx` event handler, connecting these call paths through shared code;
this does not establish that the event directly invokes `FUN_587fbcc0`.

The stage meanings, team-counter schema, decision-bit semantics, and helper
contracts remain unknown. The two commutative `test` instructions at
`0x587FC7E0` and `0x587FC857` are emitted as their original bytes because the
VC6 inline assembler reverses their operand order. ObjDiff 3.8.0 verifies all
four body ranges at 100.0% and checks 139 mapped operands. No emulator runtime
test was performed.
