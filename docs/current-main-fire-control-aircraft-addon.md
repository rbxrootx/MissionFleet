# `CPannelFireControlAddOnAircraft` constructor evidence

Ghidra identifies `FUN_5885aaa0` by its `CPannelFireControlAddOnAircraft`
vtable assignment. It first calls the shared base initializer and then creates
sprite-backed children. In the main loop, it constructs eight repeated groups
containing `CSpriteBundleScreen`, `CSpriteDataScreen`, and other child controls.
The layout argument advances by `0x2A` for each pass. Resource selectors are
read through the `DAT_58A246A0` table and helpers using
`DAT_58A2478C` / `DAT_58A24798`.

## Caller evidence

The one direct caller is `CPannelFireControl` constructor `FUN_58854a00`.
Ghidra shows the caller allocating `0xAB4` bytes, passing the object and
position arguments to `FUN_5885aaa0`, and storing the returned child at its
receiver slot `+0x9C`. It then assigns child depth `0x11AD`. These values and
relationships are directly visible; the meanings of the controls, table
indices, labels, and actions are not identified.

## Validation and limits

Ghidra reports a contiguous body range `0x5885AAA0..0x5885BAE0`, totaling
4,161 bytes. `tools/generate_mapped_client_asm.py` emits source from the locally
captured mapped client image for that exact range. ObjDiff verified all 4,161
bytes and 130 mapped operand records. This is an exact machine-code match, not
a validation of screen appearance or runtime behavior. No emulator test or
frame comparison was performed.
