# Current Main warehouse item population path

This slice follows a captured warehouse-list update into item creation and
acceptance. `FUN_588FBEF0` walks input records at a `0x38`-byte stride, reuses
existing items through `FUN_588FF0F0` and `FUN_588F8070`, or calls
`FUN_588FFFE0` to create and append a missing item. `FUN_588FFFE0` selects a
variant through `FUN_588F8520`, applies the source record through
`FUN_588F8070`, and appends accepted objects through `FUN_587A54D0`.

The variant dispatcher accepts selector 0 for `CWarehouseItemShip` (allocation
request `0xC8`) and selector 1 for `CWarehouseItemForce` (request `0x100`);
unknown selectors and failed allocations return null. The Force constructor
`FUN_588F8870` calls the already matched `CWarehouseItem` base constructor,
installs the RTTI-confirmed `CWarehouseItemForce` table at `0x589A210C`, and
requests fourteen child objects through `FUN_5897CC4E`. It assigns those
results to fields `+0xC0` and `+0xCC..+0xFC`; the Force destructor and all
eleven virtual-table entries were already byte matched.

Record application copies fourteen dwords into item fields `+0x60..+0x94`.
`FUN_588F7D60` asks the item's virtual slot `+0x24` to accept the record bytes,
stores two byte values at `+0x6A/+0x6B`, derives two offsets, and calls
`FUN_58903290`. `FUN_588F8070` then updates child flags, copies one state byte
to child `+0xB8`, and calls virtual slot `+0x1C`. The six functions in this
slice (`FUN_588FBEF0`, `FUN_588FFFE0`, `FUN_588F8520`, `FUN_588F8870`,
`FUN_588F8070`, and `FUN_588F7D60`) now match the captured `Main.dll`
byte-for-byte, adding 2,520 bytes.

RTTI, the Force vtable, the direct call chain, and function boundaries are
checked by `tools/verify_current_warehouse_item_population.py`; exact bytes
are checked by `tools/verify_client_matches.py`.

The receiver classes and input-record schema, selector labels, child roles,
field meanings, resource layout, and helper contracts remain unresolved. No
emulator item-population test has been run.
