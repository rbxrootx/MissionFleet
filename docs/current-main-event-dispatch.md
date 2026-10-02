# Current client event dispatcher

`FUN_587bb700` is a large event-routing method in the installed current
`Main.dll` capture described in [client unpacking](client-unpacking.md#current-installed-main-dll-runtime-capture).
Ghidra assigns it 25,950 bytes across 17 disjoint address ranges. The gaps
between those ranges are not part of the function; treating the full
`0x587bb700..0x587c1cf7` span as code would include unrelated bytes. This
analysis uses the mapped capture and Ghidra's decoded instructions and
decompilation. It is not yet a reconstructed or byte-matched source function.

At entry, the instructions read a 16-bit value at record offset `+0x6` and
compare it with `0x8000`; on that path they read a 32-bit event value at `+0x4`.
The decompilation also shows routes using values at `+0x8`, `+0xC`, and
`+0x10`. These are observed access widths and offsets, not a recovered C++
structure declaration. The decompiler reports a `__thiscall` signature with
three pointer parameters, but Ghidra reports that type propagation did not
settle and that its `__alloca_probe` recovery is injected. The source-level ABI
and pointer types therefore remain unconfirmed.

The `0x8000` class path dispatches on the event field. Directly observed routes
include:

- `0x80000300`, which compares two globals and conditionally calls
  `FUN_587e5fb0`.
- `0x80000100`, which passes three values from record offsets `+0x8`, `+0xC`,
  and `+0x10` to `FUN_587e8590`.
- `0x80000002` and `0x80000003`, which further branch on the value at `+0xC`.
  Several `0x80000003` subroutes call a virtual function at object offset
  `+0x2C`; other subroutes call helpers including `FUN_58869e00` and
  `FUN_587d6a60`.
- `0x8000010A` and `0x80000200`, which branch on additional fields and call
  client state/UI helpers. Their semantic labels are not established by this
  function alone.
- `0x80000500`, which passes a byte from the payload to `FUN_587e5fc0`, may
  call `FUN_587ea630` depending on the screen-state field, and then calls the
  queue/reset helper `FUN_587e8a40`.

There is a second top-level class path for `0x8001`; it contains many further
event IDs, including `0x80021034` and `0x80021002`. The handler is therefore
an internal event consumer with multiple field-dependent routes. This does
not establish that it parses raw socket frames or defines the server protocol.

Ghidra reports no direct code caller and one data reference at `0x5899a30c`.
The mapped image stores the function address at that location, after several
adjacent words that also look like code addresses. This supports an indirect
dispatch possibility, but the table boundaries, owner class, and live
instantiation path have not been identified. The current evidence does not
justify naming a class or claiming a vtable slot.

The `0x80000100` route now has a verified callee reconstruction:
[`FUN_587e8590`](current-main-event-queue.md) copies and queues its payload.
The `0x80000500` route's 443-byte queue and screen-state reset helper is also
byte-matched and documented in that event-queue note.

The function has only been validated by comparing the address ranges,
disassembly, and decompilation against the local mapped capture. Runtime
dispatch has not been exercised, and there is no source match for this
function yet. The most useful next slice is to trace the caller and contracts
of `FUN_587e8590`, then return to the `0x80000100` route with that evidence.
