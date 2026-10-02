# Installed Core.dll ship-scene update dispatcher

`0x58531000` is the ship-scene virtual update callback. Constructor
`0x58525B10` installs vtable address point `0x588A6FD8`; its `+0x0C` entry is
`0x58531000`. Ghidra decompiled the 4,095-byte body from the locally captured
mapped `Core.dll` at base `0x58480000`. The source reconstruction matches
those bytes with objdiff 3.8.0.

## Observed control flow

The callback first handles a pending cleanup byte at scene `+0x64`, releasing
global objects at `0x58947594` and `0x58947598`. The main state logic runs only
when bit 2 of the 16-bit scene flags at `+0x24` is set. It reads the five-bit
state code from bits 8–12 of that field.

For state code 1, the callback compares scene values at `+0x28` and `+0x58`.
While they differ, it moves the `+0x28` value toward the target by at most
`0x24` per update through recursive setter `0x587B5540`. When they match, the
callback updates phase and parity fields. In the phase-below-8 branch
(`+0x12148 < 8`), a zero `+0x12154` counter advances the DWORD at `+0x6C` and
selects transition routine
`0x5852D160` or `0x5852D0C0`; the former is the forward-animation scene path
documented in the [animation-state report](current-core-ship-animation-state-update.md).
Other phase values change scene state, clear an attached animation through
`0x58486C60`, or create and attach additional UI/render objects.

Other observed state codes include 4, 7, 8, 2, 13, and 14. Their branches
change scene flags and phase counters, call resource or notification helpers,
adjust node values through `0x587B5540`/`0x587B55B0`, clean up global objects,
or return after notifying a global callback. At the end of the ordinary update
path, the callback invokes `0x58530EA0`, then walks the circular child-update
list rooted at `+0x3C` and dispatches each child's virtual slot `+0x0C`. The
list-link accessor is `0x58495610`.

In state code 1, when the phase field at byte offset `+0x12148` equals 8, the
dispatcher changes the packed state code to 7, sets its update flag, then
changes the state code back to 1, resets two scene values, and increments the
phase to 9. It then calls `0x586E8270` with the scene pointer and arguments
`0x70`, `0x54`, `0x400`, `0x300`, and `11000`. If allocation succeeds, the
returned object is stored in the scene's high-offset field, passed to
`0x586EB810`, and dispatched through virtual slot `+4`. The constructor's
allocation and child-initialization sequence is documented separately in the
[scene layout constructor report](current-core-scene-layout-constructor.md).
The `0x586EB810` call loads three mapped text paths—`Announcement.txt`,
`Patch.txt`, and `Eula.sdt`—through parser `0x586EA6E0`; see the
[scene text-resource report](current-core-scene-text-resource-loader.md).

In state code 13, when DWORD field `+0x12168` reaches 100, the dispatcher first
invokes three global callbacks, then calls `0x5852D5D0`. The 2,138-byte helper
creates and attaches several objects through `0x58486C60`, `0x58482320`, and
`0x587BA970`; stores created pointers in globals `0x5896067C`, `0x58960680`,
and `0x58960684`; configures other resources and node values; creates another
object through `0x586B1C50`; sets scene flag bit 0; and calls `0x584BED30` and
virtual slot `+0x08` on the object at scene `+0x12130`. The dispatcher then
sets another flag, clears its phase counter, starts the `0x5852D160` scene path,
and clears child state. The allocated object types, globals' roles, resource
IDs, and user-visible purpose of this state-13 branch remain unknown.

For state code 7, the dispatcher calls `0x585341D0`. When global byte
`0x5894733C` is nonzero, the helper clears it, obtains a count from
`0x585348B0`, and processes that many records from `0x58534760`. For each
record it copies `0x47` DWORDs, passes a local record to `0x58521FF0`, writes a
32-byte result into scene storage through `0x587B4180`, and updates two
`0x100`-byte scene blocks through callback `0x58894308`. A conditional branch
reattaches an object through `0x58484AD0`/`0x58486C60`. After the loop it
normalizes a negative selected index at `+0x24C`, refreshes the active record
through callback `0x58894464`, updates another selected scene block, and copies
a 16-bit per-entry value to `+0x248`. The record format, global flag meaning,
callback contracts, and scene offsets are unknown. Ghidra's pseudocode also
leaves one loop-indexed attachment expression ambiguous.

When state code 7 reaches phase 9, the dispatcher stores phase `0x10`, sets
scene field `+0xA0` to `0x40000000`, selects and publishes an optional global
object, then calls `0x5872D130(0x20000)` at `0x58531698`. That handler looks up
table entries 2, 4, and 5 through `0x58484AD0` and attaches their returned
pointers through `0x58486C60`; it also makes three calls to `0x58485EE0` with
arguments 0, 1, and 1. The dispatcher makes one call with 1 immediately before
the handler and two calls with 1 immediately after it.
For handler arguments `0x20000`, `0x30000`, or `0x50000`, it writes 2 to
receiver `+0x64`, writes 3 to `+0x68`, and detaches via `0x58486C60(0)`. For
`0x40000`, it writes the same fields without that detach. It always writes 300
to `+0x54` and `+0x58`, then copies the values at `+0x64` and `+0x68` to
`+0x5C` and `+0x60`.

The helper `0x58484AD0` checks an index against count `+0x160` and rejects
negative indices. If the table pointer at `+0x190` is nonzero, it returns
`table + index * 0x40`; otherwise, or for an invalid index, it returns null.
This directly establishes a bounded fixed-stride table accessor. Entry types
and attached-object roles remain unknown, as do the global side effects of
`0x58485EE0` and the units of the values written to the scene fields.

For state code 2 with phase field `+0x4853 == 0x16`, the dispatcher adjusts a
value returned by `0x58529610` by one when it is below `0x28`, or by seven
otherwise. Values below `0x100` go through setter `0x587B55B0`; at or above
that threshold it creates an object, attaches it, waits through
`0x58485E80(11000)`, calls `0x584C0DE0(1)`, invokes a global callback, and
dispatches receiver slot `+0x08`. In that helper, a null pointer at receiver
`+0x5F4` triggers a `0x54`-byte allocation and a factory call using global
`0x58960600` and entry zero from accessor `0x58484B20`; the resulting pointer
is cached at `+0x5F4`. The helper then calls `0x58485E80(0x7FF8)` on first
creation and always forwards its byte argument to `0x58485EE0`. These numeric
thresholds and fields are direct observations; the event, child, and resources
are not semantically identified.

In the same state-code-2 branch, the dispatcher also calls `0x587B5730` with a
value derived from `0x5848C0B0() - 2`. `0x587B5730` writes that value to its
receiver's `+0x08` field through `0x5849F480`, then propagates the difference
from its previous value to children whose flag bit 13 at `+0x24` is set.
`0x587B52B0` adds the propagated delta to each child's `+0x08` through
`0x587B5520` and recursively visits similarly flagged descendants. The scene
dispatcher also calls `0x58532AD0` when scene field `+0x29` is zero; that helper
writes zero to `+0x98` and `+0x9C`, `0x40000000` to `+0xA4`, one to `+0x70`,
and calls `0x58485EE0(0)` twice. `0x58529610` returns the address at receiver
`+0x2C`, which the branch dereferences for its threshold adjustment. The
meaning and units of these fields and the child flag remain unknown. Ghidra
lists `0x5848C0B0` as a dispatcher callee, but its call-reference report does
not resolve an exact caller address.

When the adjusted state-2 value reaches `0x100`, the dispatcher calls
`0x584BF150` with five zero DWORDs and `0x40`, attaches the returned object,
waits via `0x58485E80(11000)`, and enters the `0x584C0DE0(1)` path. This
5,339-byte constructor runs `0x587B4990`, installs vtable `0x58895A68`, and
initializes a `0x5A0`-byte descriptor block at object `+0x14`. It creates a
child via `0x587803B0` and stores it at `+0x5F0`, then iterates descriptor
groups 1 through 6 and 40 entries per group. Matching entries create child
objects through `0x58482320`/`0x58484B20`, apply values through
`0x587B55B0`/`0x587B5540` in two descriptor cases, and may call
`0x58485F90`. It clears selected packed flags and writes state code 5 before
returning. Descriptor schema, object types, resource meaning, and visible role
remain unknown; the descriptor block is documented as literal initialization
data rather than a recovered high-level format.

The constructor's three low-level support calls are now mapped as well. At
`0x584C01CF`, `0x5884CE10` fills the 0x5A0-byte block with the requested byte;
at `0x584C01ED`, `0x5884C890` copies the descriptor literal with overlap-aware
forward/backward paths; and calls at `0x584C01FA`, `0x584C030F`, and
`0x584C0474` use `0x58831004` as an allocation-failure wrapper. Ghidra shows
the wrapper retrying through `0x58859610` and `0x58864670`, then selecting a
finite-size handler or a nonreturning sentinel-size failure path. Those deeper
allocator and error routines are now traced through their mapped direct helper
layer. `0x58859610` forwards the request to `0x5886CED0`, which normalizes a
zero-byte size to one, calls the configured heap function at `0x5889415C`, and
retries while global gate `0x58969C7C` and callback `0x58864670` indicate
progress. After the final failure it stores error value 12 through the
per-thread error-slot path `0x5886246F`/`0x58868BF1`. The retry callback is
resolved through `0x588646D0`; its runtime registration and the actual heap and
recovery callbacks remain indirect and unresolved. `0x588646B0` stores a
caller-supplied value in the callback global consumed by that resolver, but
Ghidra found no direct callsite for the setter. `0x58879A70` returns the prior
retry-mode value and atomically accepts only 0 or 1; invalid input stores error
22 and enters `0x58850FAB`. Its mode global gates the allocator retry loop.
Neither setter's source-level name nor its live caller is identified.

For finite sizes, `0x5882E770` constructs an exception object through
`0x5882E666` and calls the MSVC C++ exception helper `0x5884D3E5` with metadata
at `0x588EC484`. For the `-1` sentinel, `0x58487710` builds the alternate
object through `0x58487680`/`0x58487780` before entering that exception helper.
The exception type names and the sentinel's source-level meaning are unknown,
and no allocation-failure path has been triggered in a live client. The Ghidra
body for `0x5884C890` cuts off at `0x5884CDC2`, in the middle of an instruction;
the mapped bytes and Ghidra return label show its epilogue ending at
`0x5884CDC7`, so the indexed extent was corrected to include the full
1,335-byte function.

`0x58484B20` returns an entry from the receiver's pointer table at `+0x18C`
when the index is in `[0, count)` and the table is nonnull; count is read from
`+0x164`. It returns null otherwise. This accessor has many other callers, so
only its table bounds behavior is asserted here.

That updater calls `0x58521FF0` with its local per-entry buffer. This shared
132-byte helper establishes an exception frame, calls `0x58521D90`, passes the
buffer to `0x584A9AD0`, initializes a 24-byte local object through
`0x5851FCE0`, obtains a result from `0x584C5D40`, passes that result and an
earlier helper value to `0x584A9D30`, then returns the result. Ghidra shows
additional callers in startup and other scene paths, but the helper chain's
data and object semantics are not identified.

At `0x58534287`, the state-7 updater calls `0x587B4180` to initialize/copy its
32-byte per-entry block. This helper returns `0x80070057` for a null destination
or zero byte count; with a zero source length it writes one zero byte and
returns success. Otherwise it zeroes the requested destination span through
`0x5884CE10`, then delegates to `0x58740A70` and returns that result. Its
general object/array contract is still unknown.

The record count and indexed access come from `0x585348B0` and `0x58534760`.
Both use a `0x11C`-byte stride: the count helper returns `(end - begin) / 0x11C`
from the first two DWORDs of its receiver, and the accessor computes the same
count, calls `0x584F4D30` if the unsigned index is out of range, then returns
`begin + index * 0x11C`. This confirms the container arithmetic, but not the
record's semantic type or the error helper's runtime behavior.

`0x58530EA0` runs only when scene fields `+0xA4` and `+0xA0` both equal
`0x40000000`. It increments `+0x9C`; if object pointer `+0x88` is nonzero, it
calls that object's virtual slot `+0x0C` with a value based on global
`0x58962064 - 100 * counter`. After the counter exceeds `0x4F`, it clears
`+0xA0` and invokes the object's virtual slot `+0x08`. Ghidra's inferred
signature for slot `+0x0C` includes unexplained extra arguments, so the exact
ABI and meaning of the adjusted value remain uncertain.

## Uncertainty

The state numbers, phase fields, parity transformation, global object roles,
resource IDs, and most helper effects remain unnamed. The code proves the
forward-transition call path under its branch conditions, but no live scene
was run to observe which branch is reached, transition cadence, or rendered
pixels. This is static control-flow evidence, not proof of a playable client.

## Byte verification

`0x58531000` (4,095 bytes, 155 captured operand targets), its direct helper
`0x58530EA0` (192 bytes, 3 targets), both state-1 handlers `0x5852D160`
(347 bytes, 8 targets) and `0x5852D0C0` (117 bytes), and the state-13 setup
handler `0x5852D5D0` (2,138 bytes, 180 targets), and state-7 record updater
`0x585341D0` (659 bytes, 28 targets), record accessor `0x58534760` (63 bytes,
1 target), count helper `0x585348B0` (38 bytes), shared buffer helper
`0x58521FF0` (132 bytes, 7 targets), block-copy helper `0x587B4180` (84 bytes,
2 targets), state-2 helper `0x584C0DE0` (243 bytes, 8 targets), its table
accessor `0x58484B20` (77 bytes), and the state-2 value/child helpers
`0x587B5730` (113 bytes, 2 targets), `0x58529610` (17 bytes),
`0x58532AD0` (125 bytes, 2 targets), `0x5848C0B0` (17 bytes),
`0x5849F480` (22 bytes), `0x587B52B0` (101 bytes, 2 targets), and
`0x587B5520` (28 bytes), and the state-2 constructor `0x584BF150` (5,339 bytes,
27 targets) plus its fill helper `0x5884CE10` (346 bytes, 7 targets), copy
helper `0x5884C890` (1,335 bytes, 20 targets), and allocation-failure wrapper
`0x58831004` (76 bytes, 7 targets), and its 14 allocation, callback, TLS, and
exception helpers (`0x58859610`, `0x58864670`, `0x5882E770`, `0x58487710`,
`0x5884D3E5`, `0x5886CED0`, `0x58879A60`, `0x5886246F`, `0x58868BF1`,
`0x588646D0`, `0x587AABC0`, `0x5882E666`, `0x58487680`, `0x58487780`,
`0x588646B0`, and `0x58879A70`) match the mapped capture at 100% with the
repository's VC6 byte-emission toolchain and objdiff 3.8.0. Together these
forty-four dispatcher-related functions total 20,982 bytes and 750 checked
operand targets. This includes `0x5872D130` (411 bytes, 39 targets), its table
accessor `0x58484AD0` (77 bytes, 1 target), scene constructor `0x586E8270`
(3,336 bytes, 166 targets), and the text-resource loader/wrapper `0x586EA6E0`
(669 bytes, 44 targets) / `0x586EB810` (57 bytes, 6 targets). The full
installed Core ship-path profile now has 122 verified functions totaling
280,539 bytes.
