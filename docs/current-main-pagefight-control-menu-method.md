# Fight control-menu method byte match

`FUN_587EF330` is the `+0x04` virtual method in the RTTI-backed
`.?AVCPageFightOn_ControlMenuScreen@@` table. Its full mapped body is 1,495
bytes, from `0x587EF330` through the `ret` at `0x587EF906`.

The class identity is established by the vtable address point at `0x5899D180`:
its locator at `0x5899D17C` points to `0x589A7CE8`, which names TypeDescriptor
`0x589CC260` and the class above. The already matched constructor
`FUN_588011C0` installs that vtable at `0x58801230`; matched code calls the
constructor at `0x5878C650`. The table's `+0x04` entry is `FUN_587EF330`.

Ghidra's decompilation shows the method resetting screen and child state,
configuring a sprite-bundle child for mode 10, and applying child visibility
flags based on `DAT_589C906C`. If `DAT_589C903C` is set, it allocates and
constructs the fog object with `FUN_58900E20`, the byte-matched
`CWarfogOnFight` constructor, at `0x587EF639`. It then derives encoded grid
dimensions from the map dimensions at receiver `+0x10524`, allocates and
clears the grid buffer at `+0x10548`, and completes screen controls and the
localized all-chat label. The mapped function ends before nine `CC` alignment
bytes and the next function at `0x587EF910`.

The complete instruction stream is emitted literally and checked against
`Main.mapped.bin`. `tools/verify_current_pagefight_control_method.py` separately
checks the RTTI chain, all seven vtable slots, constructor linkage, the direct
fog-constructor call, and function boundary.

The helpers invoked by this method are now byte-matched as a separate related
slice. Their contracts, the meaning of the screen fields and global flags, and
runtime behavior are still unresolved. This byte match does not yet prove a
working fight screen in the emulator.
