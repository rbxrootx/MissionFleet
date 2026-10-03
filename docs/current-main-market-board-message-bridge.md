# Current Main `CMarketBoard` message and import bridge

This pass follows the direct callees of the matched child-action helpers. Five
functions newly entered the verified catalog for 121 additional bytes; the
existing 92-byte bounded-format wrapper `FUN_5874BA60` was rechecked in this
caller context. ObjDiff 3.8.0 verifies all six bodies at 100% and checks eight
mapped operand targets.

The child update routines `FUN_588804F0` and `FUN_58880630` both call
`FUN_5897CC72` repeatedly. That six-byte thunk jumps through the captured
import pointer at `0x5898C218`; the imported API identity remains unknown.
`FUN_58797610` dispatches message `0x80013127` through verified sender
`FUN_58970C70`. `FUN_587986E0` builds an observed eight-byte temporary record,
sends message `0x80013123`, and releases the record through
`FUN_5897CE26`, a six-byte thunk through import pointer `0x5898C240`.
Its allocation path passes through `FUN_5897152E` to the already verified
allocator at `FUN_5897CC4E`.

The `FUN_5890BC40` path uses `FUN_5874BA60`, also reached by the verified sprite
parser. The formatter validates its requested bound, calls host thunk
`FUN_5897CE38`, terminates the destination on truncation/error, and returns
observed HRESULTs for invalid arguments or insufficient space. The message
payloads, imported APIs, callback ABI, format strings, and exact temporary
record schema remain unresolved. No emulator runtime test was performed.
