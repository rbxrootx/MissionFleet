# Current Main novice-help panel

This slice reconstructs the open callable portion of the installed client's
`CPannelNoviceHelp` class. It adds 14 functions, 7,712 bytes, 33 exact Ghidra
body ranges, and 2,412 decoded instructions. All 14 emitted functions passed
ObjDiff's 100% byte comparison against the pinned mapped `Main.dll`. The
1,952-byte constructor and its setup caller were already matched before this
slice; they are used here as original-code evidence and are not counted again.

## Evidence from the original client

The primary vftable address point is `0x589A01A8`. Its complete-object locator
at `0x589A01A4` points to TypeDescriptor
`.?AVCPannelNoviceHelp@@` at `0x589CD32C`. The seven observed slots are:

| Offset | Target | Evidence |
| --- | --- | --- |
| `+0x00` | `FUN_5889B5A0` | Panel deleting/cleanup wrapper; calls `FUN_5889B410` |
| `+0x04` | `FUN_5874DDD0` | Previously byte-matched inherited framework slot |
| `+0x08` | `FUN_5889D070` | Resets observed panel/control state |
| `+0x0C` | `FUN_5889D5F0` | Advances update state and dispatches page-dependent child helpers |
| `+0x10` | `FUN_5889B5C0` | Open virtual operation; its product-level meaning is unknown |
| `+0x14` | `FUN_58902FE0` | Previously byte-matched inherited framework slot |
| `+0x18` | `FUN_5889D0A0` | Handles the observed type-2 panel event and updates a page/index field |

The previously matched constructor `FUN_5889C8D0` invokes base initialization,
installs this vftable, loads `./SPR/ITFNVCHelp.spr` through the observed sprite
loader, and builds child sprite/control arrays. The already matched setup
routine `FUN_5878AF40` calls it at `0x5878C43C`. On the original client disk,
the resource is present under `SPR/en-us/ITFNVCHelp.spr`; this establishes
that the referenced asset exists, but does not decode its sprite pages.

The update method calls `FUN_5889D420` to derive page/index selection from
shared-screen pointers, then dispatches to `FUN_5889B630`, `FUN_5889B930`,
`FUN_5889BC40`, `FUN_5889BEA0`, `FUN_5889C070`, and `FUN_5889C6A0`. The event
and reset paths share `FUN_5889C880`. The matched constructor and fresh Ghidra
decompilation show repeated child arrays, including 9-by-32-by-2 traversal in
construction and cleanup. These observations constrain the original layout and
control flow; individual array roles have not been assigned by guessing.

The tracked byte ranges are in
`config/NF2_2026/main-novice-help-panel-body-ranges.tsv`. Two independent
Ghidra body exports agree on every range, and the fresh selected-function
Ghidra log agrees as a third range record. Two independent call/data edge
exports agree; the open direct-call graph from the five open primary-vtable
roots reaches exactly these 14 functions. The focused verifier decodes all
mapped instructions, compares every direct transfer with Ghidra, requires
out-of-slice in-image targets to have byte-match records, and validates the
RTTI, all seven vtable slots, the constructor's unique vtable write, and its
matched caller site.

## Uncertainties

The sprite indices, localized text, mapping from page values to displayed
content, numeric state meanings, and the roles of individual child arrays are
still unknown. The type-2 event is an observed dispatch value; its user-facing
name is not established. No live-client or emulator interaction test was run,
so this result establishes exact function bytes and original class-flow
evidence, not a visually validated panel or a bootable test build.
