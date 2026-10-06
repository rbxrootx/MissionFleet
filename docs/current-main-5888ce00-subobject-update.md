# `FUN_5888CE00`: subobject cleanup and constant update

Fresh Ghidra analysis of the installed `Main.dll` records one contiguous
32-byte body, `[0x5888CE00, 0x5888CE20)`. It receives its object in ECX and
returns with a plain `ret` at `0x5888CE1F`.

The mapped instructions save the incoming object in ESI, load its field at
`+0x4C4` into ECX and call `FUN_589087F0`, then load `+0x4A4` into ECX, push
`0x2C0`, and call `FUN_58903360`. They restore ESI and return. Both callees are
already byte-matched in this catalog: `FUN_589087F0` walks child links and
clears fields `+0x78` through `+0x88`; `FUN_58903360` stores its supplied value
at receiver `+8` and propagates the resulting delta through flagged entries in
its circular list. This supports describing the target as a cleanup followed
by a constant update, while the object and field meanings remain unknown.

Ghidra's full direct-reference dump identifies exactly two callers, both
byte-matched:

- `FUN_587FC9C0` calls at `0x587FD636`.
- `FUN_58890110` calls at `0x5889281D`.

Both matched call sites load ECX from global `[0x58A245C0]` immediately before
the call, with no stack arguments. This confirms the target is reached as an
object method on that global object; the global object's type and runtime role
are not established.

The candidate source emits the complete original 32-byte instruction stream,
including both relative-call operands. The matched callees provide evidence
for the downstream field effects; no emulator runtime test was performed.
