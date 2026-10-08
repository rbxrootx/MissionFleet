# Current Main event `0x80021004`

This slice covers the complete open direct-call closure of event
`0x80021004` in the already byte-matched dispatcher `FUN_587BB700`. It adds
11 functions, 1,921 bytes, 13 exact Ghidra body ranges, and 570 decoded x86
instructions. Each emitted body passed ObjDiff's 100% comparison against the
pinned mapped `Main.dll`. The source preserves the captured x86 instruction
streams; the behavior notes below are tied to the original dispatcher and fresh
Ghidra decompilation.

## Evidence from the installed client

The matched dispatcher reads receiver state from offset `+0x134`, clears two
state words, then routes the observed event fields as follows:

| Call site | Target | Original branch condition |
| --- | --- | --- |
| `0x587BFBCB` | `FUN_587DAAC0` | Receiver state equals `0x100` |
| `0x587BFBF5` | `FUN_587DA9A0` | State differs from `0x100`; event word at `+0x0A` is 5; selector is 1 |
| `0x587BFC2B`, `0x587BFC75`, `0x587BFCBF`, `0x587BFD06` | `FUN_587E0090` | Same state/discriminator branch; selectors 2, 3, `0x17`, or `0x21` |
| `0x587BFD32` | `FUN_587D7D80` | Same state/discriminator branch; selector is outside the four explicit values |
| `0x587BFD5C` | `FUN_587E4180` | Event word at `+0x0A` is `0x2C` or `0x3C`; these are separate checks after the state/selector chain |
| `0x587BFD7E` | `FUN_5888CC70` | Event word at `+0x0A` is 10 |

The four open roots and their direct-call closure are the tracked 11-function
set. The state-`0x100` handler routes selectors 1, 2, `0x10`, `0x20`, and
`0x30`; selector 1 updates a 32-entry fixed-stride record table with XOR-0xAA
encoded fields. The selector-1 sibling calls a record-selection helper and
updates observed global fields. The fallback emits a matched status and calls
a receiver virtual method. The `0x2C`/`0x3C` handler either stores an
XOR-decoded record value or maps three selector values to status identifiers.
`FUN_587E0090` and `FUN_5888CC70`, the other direct case targets, were already
byte-matched and are verified boundaries.

The tracked exact ranges are in
`config/NF2_2026/main-event-80021004-body-ranges.tsv`. Two independent Ghidra
body and edge exports agree with those ranges and calls; a fresh selected
Ghidra decompilation independently records complete instruction coverage and
caller references. The focused verifier decodes the mapped x86, checks the
matched dispatcher instructions at the call sites above, verifies every
outgoing in-image transfer against the Ghidra edge export, and proves the
four-root open call graph reaches exactly these 11 functions.

## Uncertainties

The payload schema, event selector names, record layouts, XOR-encoded field
meanings, status text, and virtual callback targets remain unknown. The
decompilation establishes client-side control flow and data movement; it does
not establish server behavior or the user-visible meaning of each status.
No live client or emulator interaction test was run.
