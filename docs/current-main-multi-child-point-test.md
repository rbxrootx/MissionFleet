# Current Main multi-child point test

`FUN_588BA8E0` is called by verified control-menu event handler
`FUN_587DEB30` and selection-refresh routine `FUN_587E3080`; both use its
boolean-like result in their event/update paths.

The helper returns 0 unless bit 1 is set in receiver word `+0x24`. It then
checks the eight child pointers at `+0x68`, `+0x6C`, `+0x70`, `+0x74`, `+0x78`,
`+0x7C`, `+0x80`, and `+0x84`. For each child with bit 0 set in its word
`+0x24`, it calls `FUN_58731540` with point data at global `0x58A284C8+4`.
That matched helper tests the point against child bounds derived from
`+0x14/+0x18` and `+0x1C/+0x20` with the observed origin offsets. The first
hit returns 1; if none hit, the helper returns 0.

The full 318-byte body and all 21 mapped operand targets match the pinned
original. Parent and child types, flag meanings, coordinate space, shared-point
source, and caller interpretation remain unresolved. No client runtime or
emulator test was performed.
