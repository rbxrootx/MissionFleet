# Current Main ship-map child position update

`FUN_588D6600` runs in the verified `CShip_MapObjectScreen` constructor
`FUN_588E05C0` and update method `FUN_588E5150`. The update method calls it
twice with its `+4/+8` value pair. The constructor passes two local values.

The helper walks the child count at receiver `+0x141C` and the pointer array
beginning at `+0x17C`, skipping null children. For each remaining child it
combines the supplied pair with indexed receiver values at `+0x1C9C` and
`+0x1D1C/+0x1D20`, using receiver `+0x605C` in the table index, then calls
verified `FUN_58903290` on that child. That setter stores the two values at
child `+4/+8` and propagates their deltas to descendants with the observed
flag mask `0x2000`.

The inventory originally assigned 101 bytes and stopped on the opcode `0x7C`
at `0x588D6664`. Its displacement byte `0xBA` forms the live branch back to
`0x588D6620`. The fallthrough restores `EBP`, `EBX`, `EDI`, and `ESI`, then
returns with `ret 8` at `0x588D666A`. The complete body ends at `0x588D666D`;
three `CC` bytes precede the next indexed function at `0x588D6670`. I corrected
the indexed size to 109 bytes. ObjDiff verifies the full body and its call
target operand.

The receiver and child types, indexed table semantics, input units, and visible
map result remain unresolved. No runtime client or emulator test was performed.
The callers are documented in the [screen constructor notes](current-main-ship-map-screen-constructor.md)
and [virtual update notes](current-main-ship-map-object-update.md); the emitted
instruction stream is in
[`FUN_588d6600.cpp`](../src/client-current/Main/FUN_588d6600.cpp).
