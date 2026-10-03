# Current Main control-menu constructor

Ghidra identifies `FUN_587dba00` at `0x587DBA00` as a constructor path for
`CPageFactory_ControlMenuScreen`. It first invokes a `CMenuScreen` initializer,
then installs the derived vtable and initializes receiver fields. Ghidra records
one direct call site: `FUN_5878af40` at `0x5878C696`.

The body conditionally requests the three observed sprite resources
`.\\spr\\ITPNFS.spr`, `.\\spr\\ITPNFS2.spr`, and `.\\SPR\\ITPNST.spr`.
It creates repeated `CSpriteDataScreen` and `CSpriteBundleScreen` children,
reads indexed records through mapped global pointers, and sets child fields and
flags. Those facts come from the decompiler's recovered call sequence and
mapped image references. The record schemas, resource helper contracts, and
meaning of the finished controls remain unresolved.

Ghidra assigns one contiguous 12,589-byte body range, matching the function
inventory. The generated source explicitly emits the mapped x86 instructions;
ObjDiff 3.8.0 reports 100% for the complete function, and 769 immediate and
address operands were audited against the capture.

This is byte-match evidence, not proof of the original high-level source or a
runtime menu render. No constructor execution in the original client was
performed.
