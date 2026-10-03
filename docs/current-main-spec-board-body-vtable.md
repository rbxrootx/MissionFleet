# `CSpecBoard_Body` vtable and cleanup

This slice completes the RTTI-backed `CSpecBoard_Body` constructor and vtable
path in the installed `Main.dll`. The existing constructor evidence ties the
class to its `CPageFactory_ControlMenuScreen` parent; this note records the
table layout, added method bodies, cleanup path, and observed limitations.

## RTTI and caller evidence

The constructor `FUN_588EDC50` initializes the `CMenuScreen` base and installs
the `CSpecBoard_Body` vtable at `0x589A1548`. The complete-object locator is at
`0x589AA5B0`, and its type descriptor at `0x589CDAE8` names
`.?AVCSpecBoard_Body@@`. Ghidra records the parent constructor `FUN_587DBA00`
calling this constructor at `0x587DBB75`; the parent allocates `0x140` bytes
and stores the child at `+0xDAC`. The constructor itself was already verified
as a 5,643-byte match.

The table contains seven code entries. Five newly verified methods are shown
with their observed instruction-level role; the other two entries already had
exact matches:

| Slot | Entry | Bytes | Evidence from the mapped body |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_588EC5B0` | 30 | Calls class cleanup `FUN_588EC200`, conditionally releases through `FUN_5897CC42`, and returns `this` with `ret 4`. |
| `+0x04` | `FUN_588ECC80` | 53 | Changes observed flag/value fields and tail-jumps to `0x58888FF0`. |
| `+0x08` | `FUN_588ECCC0` | 52 | Changes observed flag/value fields and returns. |
| `+0x0C` | `FUN_588ECD00` | 412 | Tests receiver state, calls `FUN_58902E10` or `FUN_58889020`, and has an indirect tail-dispatch path. |
| `+0x10` | `FUN_5873B360` | 69 | Previously verified shared entry. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously verified shared entry. |
| `+0x18` | `FUN_588EC5D0` | 1,708 | Event/state method with direct calls to the observed menu and control helpers, followed by a stack-cookie check and `ret 0x0C`. |

The scalar deleting destructor calls `FUN_588EC200` (935 bytes), which performs
the class cleanup path and calls base cleanup helper `FUN_58902C10`. The
`FUN_58889020` helper (30 bytes), called by slot `+0x0C`, reads receiver fields
`+0x68` and `+0x54`, passes derived values to `FUN_587B67A0`, then tail-dispatches
through a child vtable slot at `+0x04`. `FUN_587B67A0` (24 bytes) stores its two
arguments at receiver offsets `+0x68` and `+0x6C` and writes `0x40000000` to
`+0x70`.

## Match validation and boundary corrections

All eight new functions pass the installed-client verifier: 3,244 bytes at
100.0% objdiff match, with 148 mapped relocation targets checked. The sources
use pinned clang-cl 19.1.4 instruction emission; the records bind to the
captured mapped image and compiler hash.

Two Ghidra extents were short at executable boundaries. `FUN_588EC5B0` was
extended from 27 bytes to include its mapped `ret 4` at `0x588EC5CD`; two
following `int3` bytes are padding. `FUN_588ECD00` was extended from 409 bytes
to include the final `pop esi; jmp eax` at `0x588ECE99..0x588ECE9B`; four
following `int3` bytes are padding. These corrections add six identified code
bytes to the inventory.

The class and slot ownership are established, but the labels, resource indices,
event payload meanings, indirect-dispatch target, and user-visible actions are
not recovered from this slice. No emulator runtime or visual test was
performed.
