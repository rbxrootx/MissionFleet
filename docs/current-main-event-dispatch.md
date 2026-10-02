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

## The `0x800231xx` handler

The parent dispatcher routes records in the `0x800231xx` family to
`FUN_588C4210` at `0x587C1CDE`. The parent tests
`(event & 0xFFFFFF00) == 0x80023100`, then passes its record and another
pointer to the callee. The callee is now an exact byte match: 6,352 bytes in
three Ghidra body ranges, with 565 operand relocations checked against the
captured mapped `Main.dll` image. See
[`FUN_588c4210.cpp`](../src/client-current/Main/FUN_588c4210.cpp) and its
verification record.

The callee switches on the 32-bit field at its first pointer's `+4`. Observed
cases include `0x80023100`, which copies four DWORDs into globals at
`0x58A0B19C..0x58A0B1A8` and calls a function pointer stored at
`0x5898C42C`; `0x80023101`, `02`, and `05`, which call helpers at
`0x587D6450`, `0x5881DC30`, and `0x588290F0`; and `0x80023106`, `1B`, and
`2D`, which contain additional UI or message-related routes. These are
observed control-flow facts, not recovered event names or a complete payload
schema. The indirect callback's purpose and the helper semantics remain
unresolved, and no live records have been captured.

The `0x80023101` route directly calls `FUN_587D6450` at `0x588C4290`. Its
191-byte body is now byte-matched across two Ghidra ranges, with six operands
checked. Ghidra shows that a zero count calls `FUN_587D0050` and returns;
otherwise an index from 1 through 25 selects a slot. When the slot's 16-bit
count changes, the function frees its previous pointer, allocates `count *
0x118` bytes, and stores the pointer. It then copies that many `0x118`-byte
records from its fourth argument. If the receiver's DWORD at `+0xFC` equals
200, it calls `FUN_587D1830(index)`. See
[`FUN_587d6450.cpp`](../src/client-current/Main/FUN_587d6450.cpp). The record
fields and slot meanings, allocation lifetime, helper roles, and the `+0xFC`
condition remain unknown; these are static observations without a captured
runtime call.

The `0x80023102` route directly calls `FUN_5881DC30` at `0x588C42A6`. Its
166-byte contiguous body is now byte-matched, with four operands checked.
Ghidra shows it copying `0x165` DWORDs (`0x594` bytes) from its third argument
to receiver offset `+0xD2C`, then freeing the prior pointer at `+0x12C4` when
present. It stores the second argument at `+0x12C0`, clears the pointer when
that count is zero or allocates `count * 0x1C` bytes otherwise, then calls
`FUN_5897CD4C` with the pointer, the third argument advanced by `0x594`, and
the byte count. It finally calls `FUN_58842980`. The header and trailing record
layouts, count meaning, allocation lifetime, and helper roles are not known;
no runtime call has been captured. See
[`FUN_5881dc30.cpp`](../src/client-current/Main/FUN_5881dc30.cpp).

The `0x80023105` route directly calls `FUN_588290F0` at `0x588C42CA`. This
handler matches 877 bytes across two Ghidra ranges, with 35 operands checked.
It clears selected receiver state, walks a fixed-stride global pointer table
and the supplied 0x3C-byte-spaced records, then chooses among localized text
and status paths. The decompilation exposes UI strings for fleet and harbor
states, including “conquerable,” “unconquerable,” “ready,” “waiting,” and
“respite”; it also calls helpers for text formatting, record lookup, and
status updates. The callsite and recovered body are pinned in
[`FUN_588290f0.cpp`](../src/client-current/Main/FUN_588290f0.cpp). The record
schema, pointer-table meaning, state encodings, helper contracts, and runtime
behavior remain uncertain; this interpretation comes from Ghidra's static
decompilation, not a captured invocation.

The `0x80023107` route formats `UNDERATTACK` or `ADVANCE` text and calls
`FUN_5881E2E0` at `0x588C45C1` or `0x588C462B`. The helper's 322-byte
contiguous body is byte-matched with 15 operands checked. On these two calls,
its `sender=0` and `mode=-1` path forwards the prepared message to
`FUN_58751BF0` when receiver offset `+0xCC` is nonzero. The Ghidra reference
scan also finds a third caller site in `FUN_588C4210` at `0x588C4CC0`, in
another event branch. Sender lookup behavior, receiver-state meanings, and the
display helper contract remain unknown. See
[`FUN_5881e2e0.cpp`](../src/client-current/Main/FUN_5881e2e0.cpp) for the
matched body and audit operands.

The `FUN_5881E2E0` alert branch continues into `FUN_58751BF0` at
`0x5881E33A`. This 655-byte text routine is now byte-matched in its contiguous
Ghidra range with 22 operands checked. Ghidra shows it forwarding text
directly for one receiver-field condition; otherwise it scans whitespace and
newlines, splits into bounded lines, and calls `FUN_58751A60` for each line.
The receiver-field meanings and display helper contract remain unresolved,
and no rendered alert was captured. See
[`FUN_58751bf0.cpp`](../src/client-current/Main/FUN_58751bf0.cpp).

The text wrapper calls `FUN_58751A60` four times from its two-range body to
forward the text directly or emit completed lines. That downstream function
matches 387 bytes across two Ghidra ranges with four operands checked. Its
decompilation shows an index into the receiver's table at `+0x60`, an indirect
call through the selected object's vtable at `+4`, geometry/selection-field
updates, and a bounded text copy to the selected object's `+0x6C` buffer.
Ghidra also uses unresolved caller-register values (`unaff_EBX`, `ESI`, `EDI`,
and `retaddr`), so parameter roles and the vtable method remain open. See
[`FUN_58751a60.cpp`](../src/client-current/Main/FUN_58751a60.cpp).

That routine's field updates reach the paired helpers `FUN_589032E0` and
`FUN_58903360` at `0x58751B18`, `0x58751B36`, and `0x58751B62`. Each has 104
matched bytes across three Ghidra ranges, with one operand checked. The first
updates receiver/item DWORD `+4` by a delta; the second does the same for
`+8`. Both walk the circular object list rooted at `+0x3C`, filter entries by
flag `0x2000` at `+0x24`, and call corresponding nested-update helpers for
flagged entries. The list's object types and the nested helpers' effects are
not established. See [`FUN_589032e0.cpp`](../src/client-current/Main/FUN_589032e0.cpp)
and [`FUN_58903360.cpp`](../src/client-current/Main/FUN_58903360.cpp).

Their nested descendants `FUN_58902E60` and `FUN_58902EA0` are now also
matched, 59 bytes each in one contiguous range apiece. The first recursively
adds its delta to field `+4` of flagged descendants; the second does the same
for `+8`. Both follow child lists through `+0x3C` and sibling links at `+0x38`,
filtering on `+0x24 & 0x2000`. These object/flag meanings remain unknown. See
[`FUN_58902e60.cpp`](../src/client-current/Main/FUN_58902e60.cpp) and
[`FUN_58902ea0.cpp`](../src/client-current/Main/FUN_58902ea0.cpp).

The `0x80023106` route has multiple message branches. Ghidra shows the
success/failure paths preparing localized strings and passing message IDs
`0x210`, `0x211`, or `0x212` through `FUN_5876BAF0` before calling the shared
`FUN_58764D30` UI routine. `FUN_5876BAF0` matches 233 bytes in one contiguous
Ghidra range. Its decompilation shows lazy initialization of global
`DAT_589CFC54`, a call to `FUN_58763890` after a helper call with size `0xB4`,
flag updates at object offsets `+0x24/+0x26`, and conditional calls to
`FUN_58902F50` and `FUN_58902EE0`. Ghidra finds 662 direct-call references
from 166 callers. The cached object's type and helper contracts remain
unknown. See [`FUN_5876baf0.cpp`](../src/client-current/Main/FUN_5876baf0.cpp).
That initializer's sole direct constructor target, `FUN_58763890`, is now
matched across its contiguous 1,757-byte Ghidra range with 63 operands
checked. Ghidra's decompilation shows the base setup followed by writes to
`CMenuScreen::vftable` and `CExplanPannel::vftable`, then multiple child-UI
constructions and field/flag initialization. Its parameter types, child
layouts, and helper contracts remain uncertain, and there is no runtime visual
capture. See [`FUN_58763890.cpp`](../src/client-current/Main/FUN_58763890.cpp).
Its shared child constructor, `FUN_58731C60`, now matches its single
95-byte Ghidra range, with one relocation operand checked. Ghidra records 402
direct-call references, including two calls from `FUN_58763890`. Its body calls
`FUN_589031A0`, writes `CSpriteDataScreen::vftable`, stores one argument, and
copies six adjacent DWORDs from that argument when it is nonzero. The source
types and meanings of those fields remain unknown. See
[`FUN_58731c60.cpp`](../src/client-current/Main/FUN_58731c60.cpp).
The same constructor also creates three `FUN_5875DDA0` children, whose
addresses in its body are `0x58763DA0`, `0x58763DED`, and `0x58763E3A`. That
313-byte constructor now matches its single Ghidra range with five relocation
operands checked. Its body calls `FUN_58909010`, writes
`CEffectButton_ButtonSpriteBundleScreen::vftable`, initializes receiver fields,
and conditionally creates a child through `FUN_58734A30`. Ghidra reports 524
direct-call references overall. The object field meanings, helper contracts,
and flag semantics remain uncertain. See
[`FUN_5875dda0.cpp`](../src/client-current/Main/FUN_5875dda0.cpp).
That constructor's child creator, `FUN_58734A30`, is now matched across its
102-byte contiguous Ghidra range with one relocation operand checked. Its body
calls `FUN_589031A0`, writes `CSpriteBundleScreen::vftable`, initializes two
receiver fields, and conditionally copies six DWORDs from an argument. Ghidra
records 104 direct-call references, including the call from `FUN_5875DDA0` at
`0x5875DE81`. Argument types and copied-field meanings remain uncertain. See
[`FUN_58734a30.cpp`](../src/client-current/Main/FUN_58734a30.cpp).
The button-specific wrapper `FUN_58909010` is also matched at its complete
82-byte Ghidra range with one relocation operand checked. It delegates to
`FUN_58734A30`, writes `CButtonSpriteBundleScreen::vftable`, then initializes
five receiver fields. Ghidra lists three direct-call sites, including the
`FUN_5875DDA0` constructor at `0x5875DDE6`. The field meanings and type
relationship are still uncertain. See
[`FUN_58909010.cpp`](../src/client-current/Main/FUN_58909010.cpp).
The renderer at the `CButtonSpriteBundleScreen` vtable's `+0x14` slot,
`FUN_589038C0`, now matches its 189-byte Ghidra range with three relocation
operands checked. Ghidra references the function from `0x589A2A28`, four bytes
per slot after the vtable address `0x589A2A14` installed by `FUN_58909010`.
Its body walks child controls and calls their matching `+0x14` methods; it
also computes a point from object fields and calls `FUN_5873A5D0`. This ties
the slot to visual traversal, though the coordinate/flag meanings and draw
helper contract remain uncertain, and no runtime frame was captured. See
[`FUN_589038c0.cpp`](../src/client-current/Main/FUN_589038c0.cpp).
The next two drawing helpers now match their complete Ghidra bodies:
`FUN_5873A5D0` (155 bytes) selects a frame using the supplied value, interval,
and frame count, applies the selected record's two coordinate offsets, then
calls `FUN_58903D60`. That 178-byte helper clamps a rectangle against bounds
from the sprite record, translates it relative to the record's base point, and
dispatches through a renderer object's vtable slot `+0x04`. Ghidra records 25
call sites for `FUN_5873A5D0` and 78 for `FUN_58903D60`. The frame fields,
coordinate convention, indirect rendering target, and runtime appearance are
not yet established. See [`FUN_5873a5d0.cpp`](../src/client-current/Main/FUN_5873a5d0.cpp)
and [`FUN_58903d60.cpp`](../src/client-current/Main/FUN_58903d60.cpp).
Ghidra also exposes a sibling 186-byte render method, `FUN_58903980`, with
nine data references, including `0x589A2D34`; its owning vtable remains
unidentified. Its body uses the same child traversal and `FUN_58903D60`
dispatch, passing a point, rectangle bounds, and two object fields. This
extends the confirmed render path but leaves the backend target and runtime
appearance unresolved. See
[`FUN_58903980.cpp`](../src/client-current/Main/FUN_58903980.cpp).
The larger `FUN_587503D0` draw method now matches its full contiguous
2,818-byte Ghidra extent; all 68 relocation operands passed the audit. It walks
children through their virtual `+0x14` methods and repeatedly sends sprite
rectangles to `FUN_58903D60`, using positions derived from object fields and
records under `DAT_58A246A4+0x18C`. This is consistent with repeated or tiled
sprite drawing, but the class, position-record meanings, flags, and backend
remain unresolved. Ghidra reports a data reference at `0x5898D5F8` without
identifying its owner. See
[`FUN_587503d0.cpp`](../src/client-current/Main/FUN_587503d0.cpp).
The next backend candidate, `FUN_589036A0`, is a 366-byte method referenced by
the mapped pointer at `0x589A2518`. Its Ghidra body calls several unresolved
graphics-related globals (`DAT_5898C04C` through `DAT_5898C074`, plus
`DAT_5898C1A8`) and a nested object's virtual slot `+0x68`; all 13 relocation
operands match the mapped image. This advances the chain toward the drawing
backend, but the callbacks' identities and visible effect remain unknown. The
neighboring destructor identifies this vtable as `CWindowTextFont`. Ghidra's
pseudocode includes a contradictory nested condition on one
argument, so this byte match does not settle that branch's behavior. See
[`FUN_589036a0.cpp`](../src/client-current/Main/FUN_589036a0.cpp).
The adjacent `FUN_58903810` method also byte-matches its complete 138-byte
extent. The mapped image places it at slot `+0x04` in the vtable written by
`FUN_58903660`, with `FUN_589036A0` at `+0x08`. Its instruction stream reads
the context at `0x58A28524`, checks a nested `+0x44` virtual call, conditionally
calls globals `0x5898C074` and `0x5898C048`, and then dispatches through nested
slot `+0x68`. This establishes a concrete virtual-method path into the render
context, while object identities and callback semantics remain unresolved.
This description is based on a full Capstone decode of the mapped bytes plus
the constructor and destructor's vtable evidence. See
[`FUN_58903810.cpp`](../src/client-current/Main/FUN_58903810.cpp).
Its construction routine `FUN_58903470` matches 32 bytes: it installs vtable
address `0x589A2510`, sets fields `+0x04` and `+0x08` to `8` and `0x10`, stores
its argument at `+0x0C`, and returns with `ret 4`. This anchors the adjacent
virtual-method layout to an object initializer. Ghidra labels `FUN_58903640`
and `FUN_58903660` as the `CTextFont` and `CWindowTextFont` destructors. Both
full spans now match (31 and 51 bytes). Ghidra's original body counts omitted a
reachable three-byte `add esp, 4` after the deallocator thunk, which Ghidra had
classified as non-returning; the mapped x86 flow proceeds to the common `ret 4`
epilogue. The inventory now includes those six previously unaccounted code
bytes. See [`FUN_58903470.cpp`](../src/client-current/Main/FUN_58903470.cpp),
[`FUN_58903640.cpp`](../src/client-current/Main/FUN_58903640.cpp), and
[`FUN_58903660.cpp`](../src/client-current/Main/FUN_58903660.cpp).
The two other `CTextFont` vtable slots are now matched as three-byte return
stubs: `FUN_58903490` returns with `ret 0x0C`, and `FUN_58903460` with
`ret 0x20`. Their table entries are at `0x589A2504` and `0x589A2508`;
argument roles, expected EAX values, and semantic operations remain unknown.
See [`FUN_58903490.cpp`](../src/client-current/Main/FUN_58903490.cpp) and
[`FUN_58903460.cpp`](../src/client-current/Main/FUN_58903460.cpp).
The text-screen path adds five matched methods. `FUN_589034A0` is a 402-byte
paint routine referenced by data slots `0x589A0F70` and `0x589A19BC`. It checks
the object's `+0x24` bit 0, traverses children through virtual slot `+0x14`,
clips the text rectangle against the caller's bounds, then dispatches through
the embedded font object's slot `+0x08` with the screen context and clipped
geometry. That call shape is consistent with the `CWindowTextFont` slot already
traced above, though the field's type is not proved. `FUN_58903400` and
`FUN_58903420` update flag masks at the same `+0x24` offset; their exact flag
meanings remain unknown.

The CTextScreen cleanup wrapper `FUN_58903450` writes its vtable and tail-jumps
to the 167-byte `FUN_58902D60` base-screen cleanup. That routine installs
`CScreen::vftable`, unlinks child/list relations, and calls the already matched
`FUN_58902C20` and `FUN_58902C70` reset helpers. The derived-to-base vtable
transition supports a teardown interpretation, though the binary provides no
source-level constructor/destructor names. These five new methods match all 649
bytes, with seven relocation operands checked. See
[`FUN_589034a0.cpp`](../src/client-current/Main/FUN_589034a0.cpp),
[`FUN_58903400.cpp`](../src/client-current/Main/FUN_58903400.cpp),
[`FUN_58903420.cpp`](../src/client-current/Main/FUN_58903420.cpp),
[`FUN_58903450.cpp`](../src/client-current/Main/FUN_58903450.cpp), and
[`FUN_58902d60.cpp`](../src/client-current/Main/FUN_58902d60.cpp).
Ghidra's reference scan finds 589 direct call
references from 151 caller functions to `FUN_58764D30`, including this event
handler. The routine now matches all 18,901 bytes in its two body ranges, with
1,435 operands checked. Its decompilation exposes localized keys across
several UI/error categories, but Ghidra also warns that it could not read
bytes at `ram:03020100` and injects `__alloca_probe`; detailed message
contracts and its helper roles therefore remain uncertain. See
[`FUN_58764d30.cpp`](../src/client-current/Main/FUN_58764d30.cpp) and the
verification evidence record.

One branch contains the literal `0x462` at `0x588C4FCA` and calls
`FUN_5876BAF0` followed by `FUN_58764D30`. This occurs inside the high-level
`0x8002311B` event handling; it is not evidence of a Winsock notification or
socket event. The Core DLL's separate `WSAAsyncSelect` evidence is documented
in [the socket connection note](current-main-socket-connect.md), and the Main
and Core images came from separate process captures.

Both the parent dispatcher and this nested handler now have verified body
matches. This validates their emitted instruction bytes against the local
captures, not runtime behavior: the table owner, event semantics, callback
roles, and payload structure remain open questions. Continue with one directly
observed route at a time and establish its callee/caller evidence before
expanding scope.
