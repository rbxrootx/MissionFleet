# Current client event dispatcher

`FUN_587bb700` is a large event-routing method in the installed current
`Main.dll` capture described in [client unpacking](client-unpacking.md#current-installed-main-dll-runtime-capture).
Ghidra assigns it 25,950 bytes across 17 disjoint address ranges. The gaps
between those ranges are not part of the function; treating the full
`0x587bb700..0x587c1cf7` span as code would include unrelated bytes. This
analysis uses the mapped capture and Ghidra's decoded instructions and
decompilation. Its complete 25,950-byte body is now reproduced as 17 separately
verified ranges; gaps between the ranges remain excluded.

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
- `0x80000300`, which compares the pointers at `0x58A24580` and `0x58A2459C`;
  when equal, it calls `FUN_587e5fb0`, which sets the receiver's DWORD at
  `+0x384` to 1 and returns. Ghidra lists five additional direct callers of
  this 11-byte setter elsewhere in the client.

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
The `0x80000500` route's 32-byte mode-byte helper, 126-byte two-range ID-list
helper, and 443-byte queue/screen-state reset helper are byte-matched and
documented in that event-queue note.
The shared 11-byte setter used by `0x80000300` is also byte-matched; the
meaning of `+0x384` remains unknown.

The `0x80011035` route calls `FUN_587d6a60` at `0x587BB845`, passing a value
through one stack argument while loading the receiver from `0x58A24598` into
ECX. Ghidra identifies one other direct call, from `FUN_58871de0` at
`0x58871F51`. The helper is now a 60-byte exact match. It accepts indices 0
through 3, obtains the selected object pointer from receiver offset `+0x8C` with
a four-byte stride, calls `FUN_58907990` with the global at `0x58A248FC`, then
transfers to the selected object's vtable entry at `+4`. Values above 3 return
without that dispatch. Ghidra's indirect-call recovery is uncertain, so the
target method's signature and meaning remain unknown; the receiver table's
type and lifetime are also unresolved. No runtime call has been captured.
The mapped-byte evidence and audit operands are pinned in
[`FUN_587d6a60.cpp`](../src/client-current/Main/FUN_587d6a60.cpp) and the
verification inventory.

Its second direct caller, `FUN_58871de0`, is now also byte-matched across its
contiguous 385-byte Ghidra body. The only direct caller is `FUN_5877a5d0` at
`0x5877A629`; the mapped instructions load the receiver into ECX and push ESI
for the second parameter. The caller reaches it only when its `+0x254` field
is nonzero. The callee examines up to 32 pointers from receiver `+0xF8`, tests
bit 0 at each pointed-to object's `+0x24`, and compares global values at
`0x58A284CC/+0x58A284D0` with bounds assembled from object offsets `+4`, `+8`,
`+0x14`, `+0x18`, `+0x1C`, and `+0x20`. On observed branches it calls
`FUN_588e7700`, `FUN_5897cc36`, and the already matched `FUN_587d6a60`; it also
calls `FUN_58970c70` with literal `0x80011035` and values read or formed from
the second parameter and selected object. A later bounds check uses receiver
`+0xA0` and may pass `0xFFFFFFFF` to the same call target. These facts support
a connected path into the `0x80011035` dispatcher route, but field meanings,
coordinate semantics, and the roles of the two opaque callees remain
unresolved. No live execution has been captured. See
[`FUN_58871de0.cpp`](../src/client-current/Main/FUN_58871de0.cpp) for the exact
matched body and the inventory for its 20 checked operands.
The transport target `FUN_58970c70` is now byte-matched and identified against
the client's Winsock import table; its header, checksum, and error paths are
documented in [the outbound sender note](current-main-network-sender.md).

[`FUN_587bb700.cpp`](../src/client-current/Main/FUN_587bb700.cpp) preserves the
complete dispatcher instruction stream across all 17 Ghidra body ranges. Each
range compiles as a separate naked x86 symbol so relative branch bytes retain
their original offsets and bytes in the comparison. The event routes listed
above are visible in its Ghidra decompilation and mapped disassembly. Exact byte
matching does not resolve the dispatch table's owner or establish live runtime
dispatch.

The function has only been validated by comparing the address ranges,
disassembly, and decompilation against the local mapped capture. Runtime
dispatch has not been exercised, and there is no source match for this
function yet. Further dispatcher work should follow another direct event route
only after its callee extent and caller argument flow are established.
