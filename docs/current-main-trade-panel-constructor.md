# Current Main trade panel constructor

`FUN_588b61e0` is the constructor Ghidra identifies as `CPannelTrade`. It calls
the shared screen initializer `FUN_589031a0`, installs the `CMenuScreen` base
vtable and then `CPannelTrade::vftable`, and loads `ITFTRD.spr` through
`FUN_588f3d70`. It then builds child sprite and control objects using indexed
resource records and screen helpers. The three Ghidra body ranges total 7,555
bytes and match the reconstructed source at 100.0% in objdiff 3.8.0, with 199
mapped operands checked.

Ghidra records one direct call from `FUN_5888e5e0` at `0x5888F7AF`. The mapped
caller instructions allocate `0x1DC` bytes through `FUN_5897cc4e`, put the
returned pointer in `ECX`, pass the containing object and layout values, then
store the constructed panel pointer at the containing object offset `+0x4F4`.

The two gaps between Ghidra's ranges are three bytes each. Capstone decodes
both as `lea ecx, [ecx]` alignment, and Ghidra identifies each preceding
instruction as an unconditional jump to the next owned range. Those six bytes
are excluded from the function extent. The resource schema, visible labels,
control actions, and runtime trading behavior remain unresolved. No original-
client visual or trade interaction test was performed.
