# State-6 sprite child setup

`FUN_5875CF00` is a 1,184-byte installed-client routine that initializes a
tree of child controls, including `CSpriteDataScreen` objects. Its call path is
anchored by two already byte-verified functions: `FUN_587BB700` dispatches
event `0x80000500` to `FUN_587E8A40` at `0x587BC7CB`, as documented in the
[OpConvoy open-scene bootstrap](current-main-opconvoy-open-scene-bootstrap.md).
The matched parent then compares its word at `+0x105F0` with 6. On equality,
it loads the object at parent `+0x21F08` into `ECX` and calls this routine at
`0x587E8B0E`. The focused verifier checks both calls, the state gate, and the
receiver load against the mapped instructions.

Ghidra shows the routine setting receiver fields `+0x60` and `+0x68`, and
copying a byte from `[DAT_58A247F8+4]+0x354` to `+0x6C`. When receiver `+0x64`
is zero, it creates two objects through `FUN_58907100`; creates two indexed
children through `FUN_58731C60`, selecting table entries 3 and 4 when their
count checks pass; and loops over seven pairs of table entries to create 14
objects with `CSpriteDataScreen::vftable`. Each sprite screen retains its table
record pointer and copies six DWORDs from record offsets `+0x10` through
`+0x24`. It then sets `+0x64` to one. After that conditional setup, the routine
clears the low four flag bits at `+0x24` on its 18 child objects. The table
indices, field offsets, helper calls, and class vtable are observed; they do
not identify the assets or the controls' user-facing roles.

The complete body is byte-matched under ObjDiff 3.8.0 at 100%, with 1,184
bytes and 35 relocation operands checked. Capstone decodes the Ghidra range as
364 instructions. The transfer manifest records the matched parent call and
all 20 outbound direct calls; every callee is independently verified and each
mapped call target agrees with Ghidra. The manifests are
[`body ranges`](../config/NF2_2026/current-main-5875cf00-state6-sprite-child-setup-body-ranges.tsv)
and
[`call transfers`](../config/NF2_2026/current-main-5875cf00-state6-sprite-child-setup-transfers.tsv).

The receiver class, table schema and row meanings, child assets and labels, and
the semantics of the copied fields remain unresolved. The event and state gate
are established statically, but this slice has not been run in the emulator and
does not yet show rendered output.
