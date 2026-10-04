# Current Main.dll conditional child constructor

`FUN_587B7260` is a 234-byte, nine-argument initializer in the hash-pinned
mapped installed-client `Main.dll`. Four verified functions call it directly:
`0x5873F020`, `0x587A4440`, `0x588D4300`, and `0x588F55C0`; these callers
contain repeated callsites. The complete extent matches the mapped bytes at
100% under objdiff, including all eight mapped operand targets.

The instruction stream establishes that the routine runs under SEH, forwards
stack arguments 4 through 8 with the receiver to `0x58734A30`, installs vtable
address point `0x5899A118`, stores arguments 6 and 7 at receiver offsets `+4`
and `+8`, and stores argument 9 at `+0x5C`. When argument 1 is zero, it
allocates a 0x20-byte child. It treats argument 2 as a manager and argument 3
as an index, checks the index against the count at manager `+0x170`, and selects
from the pointer array at `+0x194` or supplies null. It passes the child and
selected pointer to `0x587B7350`, stores the child at receiver `+0x58`, calls
`0x587B70A0` on the receiver, and returns the receiver with `ret 0x24`.

The class name, argument meanings, receiver field semantics, child type, and
the purpose of vtable address point `0x5899A118` remain unresolved. Caller
sites establish the calling shape and live context, but do not justify stronger
semantic labels. Byte identity verifies this captured function body; it does
not establish runtime correctness or a playable-client milestone.

## Shared-vtable variant `FUN_587B7130`

`FUN_587B7130` is a second initializer for the same observed vtable address
point, `0x5899A118`. The verified spatial-state routine `FUN_5873F020` and
shell map-object update `FUN_588D4300` call it in their update paths. Its full
303-byte extent matches the mapped installed-client bytes at 100% under
objdiff, including all 14 mapped operand targets.

The function forwards its seven stack arguments to `FUN_58734A30`, installs
the shared vtable, stores observed constructor values at receiver offsets
`+4` and `+8`, and initializes a child pointer at `+0x58` and a `-1` sentinel
at `+0x5C`. On the conditional path it allocates a 0x20-byte child, obtains an
auxiliary value either through manager global `0x58A248D0` and `FUN_58731810`
or from a bounds-checked indexed entry in global object `0x58A246DC`, then
calls `FUN_587B7350` and `FUN_587B70A0`. Failed bounds and pointer checks pass
null. The function returns the receiver and uses `ret 0x1C`.

The shared vtable and overlapping caller contexts support treating this as a
constructor variant alongside `FUN_587B7260`; they do not identify a domain
class. The argument meanings, global manager/table schemas, child type,
sentinel meaning, and user-visible update effect remain unresolved. No runtime
or emulator test was performed.
