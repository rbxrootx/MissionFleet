# `FUN_58741C20`: aircraft constructor and child-object initialization

The candidate at [`src/client-current/Main/FUN_58741c20.cpp`](../src/client-current/Main/FUN_58741c20.cpp)
preserves the contiguous 2,378-byte body `[0x58741C20, 0x5874256A)`, including
the `ret 0x24` epilogue. Ghidra identifies the function as a `CAircraft`
constructor from its vftable write. The literal instruction stream has 69
mapped operand targets, which are checked along with the byte comparison.

Byte-matched `FUN_588E3AE0` calls this constructor at `0x588E3CE5` in the
aircraft-launch path. It allocates a `0x560`-byte object, passes that pointer
in ECX, and supplies nine stack arguments; the constructor's `ret 0x24`
cleans those nine slots. The body calls `FUN_587C3C60`, initializes aircraft
fields, creates several `0x58`-byte `CSpriteBundleScreen` children and other
controls, reads selected resource-table entries, stores owner/aircraft data,
and returns the object pointer. Ghidra also records a second direct call from
`FUN_588D2480` at `0x588D24B2`; that caller is not byte-matched.

The exact field meanings, resource IDs, global-table roles, and visible child
behavior remain uncertain. No runtime construction or emulator test has been
performed; byte identity verifies this function's machine code, not the
end-to-end launch display.
