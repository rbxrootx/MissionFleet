# Current Main.dll child enumeration pair

Verified `FUN_587EAE10` calls `FUN_587A5840` and `FUN_587A5980` on the same
receiver-owned child collection. Both functions walk pointers beginning at
receiver `+8`, bounded by the count at `[0x58A247F8]->+4+0x141C`. They
filter entries using a mask, an indexed byte at active-object `+0x1FC`
compared with `+0x340`, and category byte `+0x21C` under supplied `0x10/0x20`
flags. Both zero an output count byte and invoke a matching child's virtual
method at vtable offset `+0x40` with an output position after that byte.

`FUN_587A5840` selects a requested qualifying child. Its mask combines
active-object `+0x44C` and `+0x344`. It returns -2 when the selected child's
`+0xF4` is zero and -1 when no requested match is found; its successful call
returns the child result plus one. The full 311-byte body matches the
installed `Main.dll` byte for byte with five operand targets checked.

`FUN_587A5980` visits every qualifying child. Its mask uses `+0x44C` without
the extra `+0x344` term. Positive child results extend an accumulated length,
increment the output count byte, and increment global `0x58A24900`. It
returns the accumulated length plus one. The full 227-byte body also matches
byte for byte, with nine operand targets checked.

The child type, bit/category meanings, output format and virtual method
contract remain unresolved. No runtime client test was performed.
