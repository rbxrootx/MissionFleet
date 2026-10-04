# Current Main.dll paired child activation

`FUN_58853570` is a 140-byte helper called by verified `FUN_588DD310` with
argument zero. It examines the children at receiver `+0x2B0` and `+0x2B4`.
For argument `0x40000000`, it reads each child's `+0x5C` status and calls
`FUN_58793DA0(child, 1)` when that status is not one. For argument zero, it
calls `FUN_58793DA0(child, 0)` when the status is nonzero. Other arguments
return without changing those children. Its full body matches the installed
`Main.dll` byte for byte with eight mapped operand targets checked.

The called status getter `FUN_58909B00` is four bytes: it returns receiver
`+0x5C`. The 84-byte `FUN_58793DA0` writes two to receiver `+0x5C` and one
or negative one to `+0x58`, according to whether its argument is nonzero.
When receiver `+0x64` is non-null, it invokes that object's virtual method
at vtable offset `+8`, then calls `FUN_587B7400` with coordinates derived
from receiver `+4/+8` and global `0x58A248F8`. Both functions also match
byte for byte; the setter has two mapped operand targets.

The code establishes the numeric transitions and calls. The object types,
coordinate units and user-visible effect remain unresolved. No runtime
client or rendering test was performed.
