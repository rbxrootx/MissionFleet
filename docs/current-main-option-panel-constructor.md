# Current Main option panel constructor

`FUN_588a13c0` is the constructor Ghidra identifies as `CPannelOption`. It
calls the shared screen initializer `FUN_589031a0`, installs the `CMenuScreen`
base vtable and then `CPannelOption::vftable`, and loads `ITFOPT.spr` through
`FUN_588f3d70`. It creates child sprite and control objects from bounded
resource-table entries and applies observed control-flag changes. Its one
contiguous Ghidra body range totals 7,395 bytes and matches the reconstructed
source at 100.0% in objdiff 3.8.0, with 256 mapped operands checked.

The global setup routine `FUN_5878af40` calls it at `0x5878C9C5`. That caller
allocates `0x370` bytes, passes layout values `(0, 0x80, 0x68, 0x380, 0x298,
0x3A34)`, and stores the returned pointer in `DAT_58A2462C`.

The resource-table schema, sprite and text identities, visible option labels,
individual control actions, layout units, and runtime option effects remain
unresolved. The match is against the installed mapped `Main.dll`; no original-
client visual or options interaction test was performed.
