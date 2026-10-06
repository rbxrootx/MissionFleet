# Current Main `CWarehouseItem` constructor

`FUN_588F8100` is the 985-byte `CWarehouseItem` constructor at
`[0x588F8100, 0x588F84D9)`. The byte-verified `CWarehouseItemShip` constructor
`FUN_588FB0E0` calls it directly at `0x588FB12B`. RTTI identifies the class
vtable at `0x589A20D4`: its locator at `0x589A20D0` points to
`0x589AA9D0`, whose TypeDescriptor `0x589CDCE0` names
`.?AVCWarehouseItem@@`. All seven entries in the table are already byte
matched, as are `CWarehouseItem`'s destructor and deleting wrapper.

The constructor forwards its six stack arguments through base initializer
`FUN_589031A0`, writes the observed base vtable `0x5898C500`, then installs the
`CWarehouseItem` vtable. It copies two incoming values to `+0x50` and `+0x54`,
sets `+0x58` to `0x100` and byte `+0x68` to 10, and clears the state and child
pointer fields. The remaining body calls child-allocation and setup routines,
including `FUN_5897CC4E`, `FUN_58902D20`, `FUN_58733280`, `FUN_58731C60`, and
`FUN_58734A30`; some child parameters are selected from globals at
`0x58A24530` and `0x58A24734`. It returns `this` with `ret 0x18`.

Ghidra's indexed extent ends exactly at `0x588F84D9`; seven `INT3` alignment
bytes lead to the next function at `0x588F84E0`. The standalone structural
check records the RTTI table and subclass call site in
`tools/verify_current_warehouse_item_constructor.py`. Exact byte matching is
checked with `tools/verify_client_matches.py`.

The argument meanings, child roles, helper contracts, and resource-global
layout remain unresolved. The constructor has not been exercised in the
emulator.
