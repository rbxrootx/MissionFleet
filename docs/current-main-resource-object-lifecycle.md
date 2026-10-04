# Shared resource-object lifecycle helper

`FUN_58756020` is a 221-byte routine in the installed, mapped `Main.dll`.
ObjDiff 3.8.0 verifies its reconstructed instruction stream byte-for-byte and
checks all eight mapped operand targets.

## Evidence from the original

Verified packet dispatcher `FUN_587BB700` and event dispatcher
`FUN_588C1650` each call it twice. All four callsites load `ECX` from shared
object `0x58A245E0` and pass selector `0` or `1`. In both dispatchers, a
selector-0 call follows the `FUN_58755170` path documented for message
`0x80020FA2`; the separate selector-1 callsites are in nearby dispatch paths
whose message identifiers remain unresolved.

When selector is zero and receiver `+8` is zero, it invokes the first virtual
method on non-null `+4` with argument `1`, clears `+4`, and continues to a
callback through global object `0x58A24594` at vtable offset `+0x30`. On the
other path it scans pointer entries at `+0x10`, bounded by count `+8`; selector
one also calls `FUN_58755CF0`. It frees and clears `+0x10` through
`FUN_5897CC42`. If `+4` is null, it allocates `0x198` bytes with
`FUN_5897CC4E` and passes that object, address `0x5898D6A4`, and the observed
zero/one arguments to sprite-file wrapper `FUN_588F3D70`. The wrapper's return
value is stored at `+4`. The function returns with `ret 4`.

## Corrected extent and uncertainty

The function inventory previously ended at `0x587560F7` after `pop esi`. The
mapped image continues with `add esp,0x0C; ret 4` through `0x587560FC`, followed
by three `CC` padding bytes and the next function at `0x58756100`. The
inventory now includes the full 221-byte body; an extent test checks the return
and padding boundary.

The receiver type, selector meanings, pointer-entry schema, behavior of
`FUN_58755CF0`, string at `0x5898D6A4`, allocated object's exact class, and
global callback contract remain unknown. No client or emulator runtime test
was performed.
