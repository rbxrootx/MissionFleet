# Current Main.dll encoded accumulator update

This small paired path consists of `FUN_588DCE50` (59 bytes) and its tail-call
helper `FUN_587E7920` (29 bytes) in the hash-pinned mapped installed client
`Main.dll`. Both reconstructed bodies match at 100% under objdiff. The first
function's three mapped operand targets are checked; the helper has no mapped
operand targets.

`FUN_588DCE50` takes one 32-bit delta. It updates the receiver's field at
`+0x126C` as `((old XOR 0xAAAAAAAA) + delta) XOR 0xAAAAAAAA`, using 32-bit
wrapping arithmetic. It then compares the receiver with the `+4` field of the
object at `0x58A247F8`. If they are equal, it loads the object at `0x58A2459C`
and tail-jumps to `FUN_587E7920`, passing the same delta.

The helper updates its receiver's field at `+0x21CA8` as
`((old XOR salt) + delta) XOR salt`, where `salt` is the receiver's field at
`+0x21C94`. It returns with `ret 4`. The observed callers are
`0x5873F020`, `0x587A90D0`, and `0x587EFD60`; the last has three callsites.
They pass a computed value, a value multiplied by 100, and values including
zero or data read from caller fields. These uses establish the delta flow, but
do not identify either accumulator's semantic name or units.
