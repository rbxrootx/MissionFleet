# `CPannelShipTree` field initializer evidence

Ghidra decompiles `FUN_588ade00` as a one-argument `__fastcall` routine. Its
body writes fixed integer constants to hundreds of offsets in the receiver and
contains no other reads, branches, or calls. The values are direct observations;
the project does not assign semantic names to the affected fields.

## Caller evidence

Ghidra's direct-reference audit finds one caller: `FUN_588b0940`. That routine
initializes a `CPannelShipTree` screen, stores the `CPannelShipTree::vftable`
pointer, sets initial control state, then calls `FUN_588ade00()` before
continuing to allocate more child objects. The call site ties this constant
block to that screen's receiver. Which controls consume each populated field
and how the values map to visible pixels remain unknown.

## Validation and limits

Ghidra reports one contiguous body range, `0x588ADE00..0x588AEEEA`, totaling
4,331 bytes. `tools/generate_mapped_client_asm.py` emits source from the locally
captured mapped client image for this range. ObjDiff verified all 4,331 bytes;
the body contains no mapped operand relocations. This is an exact machine-code
match, not a visual or runtime validation. No original-client screenshot or
emulator comparison was made.
