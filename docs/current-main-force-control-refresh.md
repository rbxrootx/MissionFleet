# Current Main `CForce` control refresh

`FUN_5877b1f0` is a 3,104-byte routine in the captured, mapped `Main.dll`.
Ghidra reports one body range, `0x5877B1F0..0x5877BE0F`. ObjDiff 3.8.0
verified the reconstructed range byte-for-byte and checked 60 mapped operand
records.

## Evidence from the original

Ghidra records six direct callers: `FUN_5877cc30`, `FUN_5877cb40`,
`FUN_5877cbe0`, `FUN_5877dd30`, `FUN_58874960`, and `FUN_58882230`. The
`FUN_5877cc30` caller is identified independently by its `CForce::vftable`
write and acts as a constructor. Its call to this routine is therefore direct
evidence that the routine participates in `CForce` setup. The other five
callers show that the operation is reused, though their ownership relationship
is not established here.

The decompiled body resolves record indices from receiver fields at `+0x5E`
and `+0xA4`, checks table limits, and assigns resource records to child
controls stored at offsets including `+0x1E0` and `+0x1E4`. It also copies
six-word resource descriptors into children, applies state flags, copies a
bounded text field, examines seven paired values beginning at `+0x1A4`, and
uses `FUN_5877e7a0` to update position-like values. Additional branches switch
child resources or flags for special values in `+0xA4`. These field accesses,
branches, and helper calls are visible in the original decompilation.

## Uncertainty and validation

The precise method name, record schemas, resource identities, control labels,
and visible result have not been recovered. The `CForce` association comes from
the constructor's direct call, not from a recovered method symbol. This is a
static byte-match result; no original-client runtime or visual comparison has
been performed.
