# Current Main queued event and update path

This batch follows the installed `Main.dll` code from the verified event
dispatcher into its queued-record handler, state-update methods, notification
branches, and every open direct-call dependency found in those bodies. The
function selection is based on Ghidra's exact body ranges and call references,
not address proximity.

## Original-code evidence

Byte-matched `FUN_587BB700` calls `FUN_58807D50` at `0x587BC1DA`.
`FUN_58807D50` walks the list rooted at `[0x58A247F8]+0x0C`, calling
`FUN_5890DBF0` for each entry; it then makes its observed selector/flag updates
and drains the queue through `FUN_588075E0` at `0x58807E57`. Byte-matched
`FUN_58808080` also calls `FUN_588075E0`, at `0x588080A6`. Ghidra records a
data reference to `FUN_58808080` at `0x5899D3E4`; treating that slot as a
particular class vtable is still unconfirmed.

`FUN_588075E0` copies each pending 0x13C-byte record into local storage and
dispatches on the first DWORD. Its observed IDs select `FUN_58807370` (1),
`FUN_588051C0` (3), `FUN_58805210` (4), `FUN_58805260` (0x10 and 0x50), and
`FUN_58805150`/`FUN_58805100` on their respective branches. Its ID 0x20 and
0x70 paths use already matched selected-value helpers. This batch matches the
remaining direct handlers and their open callees.

Ghidra's decompilation of `FUN_58808080` shows it calls the queue dispatcher
when receiver flag bit 2 is set. For state values 0x100 and 0x400 it moves two
receiver counters toward target values by no more than 0x20 per call. Once
they meet, the 0x100 path changes state to 0x200, updates the selected entry,
and can emit the three original strings `MESSAGESTRING__TRADE_BEWARE1` through
`MESSAGESTRING__TRADE_BEWARE3`; the 0x400 path calls `FUN_58805B30` and changes
state to 0x500. Other branches iterate list children and call the event/action
helpers below. These observations describe the decompiled instructions; they
do not assign names to the receiver fields or infer network behavior.

## Matched call graph

The 64 new functions cover 14,633 bytes. The graph is organized by direct
Ghidra call edges:

| Layer | Functions | Bytes |
| --- | ---: | ---: |
| Two queue-path methods, seven queue handlers, and four direct `58807D50` helpers | 13 | 5,448 |
| Open handlers called directly by `FUN_58808080` | 21 | 2,263 |
| Open helpers called by the queue handlers and update branch | 19 | 1,660 |
| Direct and nested callees of those helpers | 11 | 5,262 |

The 21 direct `FUN_58808080` targets are `587B9A90`, `587BA140`, `587BA170`,
`587BA1A0`, `587BA1D0`, `587BA200`, `587BAF40`, `587BB230`, `587BB260`,
`587BB290`, `587BB2C0`, `587E8010`, `58804680`, `58805690`, `58805790`,
`58805B30`, `58805E70`, `588060F0`, `58894820`, `588A5580`, and `588A6F70`.
`FUN_58894820` tail-jumps to `FUN_588D27F0` at `0x58894964`; that helper is
included. A second open caller, `FUN_58894970`, calls it at `0x58894A26` and
remains outside this batch because it is not reached from the selected queue
entry path.

The next level follows queue branches through
`58805260`/`58807370`/`58805150` and `58807D50`: `58752550`, `5875A440`,
`587899D0`, `58789B40`, `5878A1F0`, `587AF330`, `587AF350`, `587AF370`,
`587AF390`, `587B9060`, `587B9640`, `58893E50`, `588A6680`, `588A6A20`,
`588A6DF0`, `588D8080`, `588DA340`, `588DA450`, and `588D27F0` (the latter
is reached by a tail jump from `FUN_58894820`).

Ghidra then exposes these direct callees: `587897B0`, `587ABD70`, `587AD0A0`,
`587AB740`, `587AB9D0`, `58748790`, `5888D2D0`, and `5877E2E0`. Their only
remaining open direct callees are `587ACBA0`, recursive `58748650`, and
`588A5470`; all three are included. Ghidra reports complete instruction-byte
coverage for all 64 functions. Every distinct direct callee outside this set
has a byte-identical verification record. Indirect virtual calls and external
callers remain outside this direct-call closure.

Six candidates preserve multiple exact Ghidra body ranges rather than filling
gaps: `58807D50`, `5890DBF0`, `58789B40`, `587ABD70`, `587AD0A0`, and
`58748650`. The saved read-only audits are in `var/current-main-next/` while
working locally; the committed evidence is captured in the verification
records and the relationships above.

## Validation and limits

All 64 candidates passed ObjDiff byte comparison against the pinned mapped
image, including relocation-operand checks. The subsystem verifier checks the
record sizes, required call edges, and direct-call closure. This is exact
machine-code preservation, not recovery of the original high-level C++ source.
Object/class ownership, field meanings, some handler behavior, and the
user-visible effects remain uncertain. No emulator runtime test was performed.
