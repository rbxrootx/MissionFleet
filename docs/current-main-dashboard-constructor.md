# Current Main dashboard constructor

`FUN_58812170` is the constructor Ghidra identifies as `CPanelDashboard`; it
calls the shared screen initializer `FUN_589031a0`, sets the `CMenuScreen`
base vtable, then installs `CPanelDashboard::vftable`. Its one contiguous
Ghidra body range totals 7,574 bytes and matches the reconstructed source at
100.0% in objdiff 3.8.0, with 264 mapped operands checked.

Ghidra records a direct call from `FUN_5878af40` at `0x5878C86C`. The caller
allocates `0x19C` bytes, invokes the constructor with arguments
`(0, 10, 0x23A, 0, 0, 0x40)`, and stores its returned pointer in
`DAT_58A245C8`. The constructor saves layout fields and creates many child
controls using bounds-checked global resource tables and screen helpers,
including `FUN_58731c60`, `FUN_58907100`, `FUN_58734a30`, `FUN_58761090`, and
`FUN_5875dda0`.

The resource-table schema, sprite and text identities, control labels and
actions, layout units, and runtime appearance remain unresolved. The byte match
is against the installed mapped `Main.dll`; no original-client visual or
interaction test was performed.
