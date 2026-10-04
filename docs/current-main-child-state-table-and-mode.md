# Current Main.dll child table and mode updates

Three functions in the verified child-state path now match the installed
`Main.dll` byte for byte under objdiff 3.8.0. The matched instruction bodies
and their callers establish these operations:

- `FUN_587A56A0` (117 bytes, two mapped absolute targets) writes 2 to
  receiver `+0x243EC`. It uses the object at global `0x58A246A4` as a guarded
  table: receiver `+0xF4` selects entry 6 when nonzero and entry 7 when zero.
  It writes that entry, or zero when out of range or the table pointer is
  null, to receiver `+0x244FC`. It similarly copies entry 9 or zero to
  receiver `+0x24500`. Verified `FUN_587A75E0` calls it five times and
  `FUN_587A6220` once.
- `FUN_587A7310` (230 bytes, one mapped operand target) walks the 32 child
  pointers in eight groups at receiver `+8`. For each non-null child it reads
  `+0x14C`: zero copies the argument to child `+0x148`, one writes one, two
  writes zero, and other values leave `+0x148` unchanged. Verified
  `FUN_587A75E0` calls it with observed arguments one and zero.
- `FUN_58736080` (26 bytes, no external targets) reads a pointer at receiver
  `+0xB40 + index*4`, returning its first byte zero-extended when non-null or
  zero otherwise. Verified `FUN_587A75E0` calls it repeatedly. The function
  itself has no index bounds check.

The table and child types, selector names, state values and user-visible
effects remain unresolved. No runtime client test was performed.
