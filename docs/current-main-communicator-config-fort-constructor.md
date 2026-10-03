# Current Main communicator-configuration fort constructor

Ghidra decompilation shows `FUN_5882d1f0` initialize its `CMenuScreen` base and
install `CPannelCommunicatorConfigFort::vftable`. The body is one contiguous
range, `5882D1F0..5882E662`, totaling 5,235 bytes. ObjDiff 3.8.0 verifies the
emitted source against the captured mapped client at 100%, with 163 relocation
operands checked.

The direct caller is the `CPannelCommunicatorConfigPannel` constructor
`FUN_58843380`, at `0x588443A3`. It allocates `0x1C0` bytes for this child,
passes its `+0x90` field and layout arguments, then stores the returned pointer
at its `+0x174` field.

This constructor loads `.\\SPR\\CFPS.spr`, creates sprite-data and other child
controls through helper routines, and reads resource entries after bounds
checks. It also allocates an embedded `0x304`-byte `CMarketBoard` by calling
`FUN_58799eb0` with layout values `0xE3` and `-0x190`, then stores it at this
object's `+0x174` field. Several global dwords are multiplied by `0x14` and
passed as sizes to `FUN_5897152e`; the returned values are stored in object
fields. Resource and field meanings are not inferred.

Exact member names, resource schema, child labels/actions, and runtime
appearance remain uncertain. No emulator runtime test was performed.
