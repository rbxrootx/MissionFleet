# Current Main proposal identity lookup and fallback dispatch

Two leaf functions in the `0x80020F0C` proposal path are now byte-matched:
`FUN_58753BF0` (197 bytes) and `FUN_587B9290` (29 bytes). The first ends in
`ret 8` at `0x58753CB2`, followed by eleven `INT3` bytes before the next
indexed function at `0x58753CC0`. The second ends in `ret 8` at `0x587B92AA`,
followed by three `INT3` bytes before `0x587B92B0`. Objdiff 3.8.0 verifies
both complete bodies: 197/197 bytes with no separate relocation entries for
the lookup, and 29/29 bytes with one relocation for the forwarding wrapper.

## Lookup evidence

Verified callers `FUN_587BB700`, `FUN_588C1650`, and `FUN_58839460` pass two
values to `FUN_58753BF0`. In `FUN_58839460`, they are the first two dwords of
the incoming 0x54-byte record, and the receiver is rooted at global
`0x58A245AC`.

The helper walks storage rooted at receiver `+4`, from the pointer at `+4` to
the end pointer at `+0x10`, advancing by 0x48 bytes. It compares each element's
first two dwords with the supplied pair, returns the address of a matching
element, or returns zero when the end is reached. It checks the observed
pointer/capacity bounds through `0x5897CC72`. The container type and fields'
meaning are not identified.

## Fallback dispatch evidence

When this lookup returns zero, `FUN_58839460` sets receiver byte `+0x321` to
6 and calls `FUN_587B9290` with the same two values. The helper pushes those
values, three zeros, and event code `0x80010F06` to `FUN_58970C70`, then returns
with `ret 8`. The verified message dispatchers also use it in branches where
they set the same receiver byte to 7 after checking that state is neither 5 nor
6.

These call paths place the lookup and forwarding wrapper alongside the
message `0x80020F0C` record handling documented in
[`current-main-squadron-fleet-join-proposal.md`](current-main-squadron-fleet-join-proposal.md).
They do not prove the event's protocol meaning or whether the downstream call
is local or network-facing.

## Direct two-key update/insert path

The same verified dispatchers also call `FUN_58754C00` directly, using global
`0x58A245AC` as its receiver and six stack arguments. It passes the first two
values to `FUN_58753BF0`, which searches the same observed 0x48-byte-stride
collection described above. On a hit, the helper writes the third value to
record `+8` and invokes callback `0x5898C198` for fields `+0x2D`, `+0x0C`, and
`+0x24`. On a miss, it prepares a local record through the same callback and
passes it to `FUN_58754A30` for insertion through collection subobject `+4`.
The full helper is 206 bytes, ends with `ret 0x18`, and has seven mapped
operands.

The inserter observes collection begin/end/capacity pointers at `+0x0C`,
`+0x10`, and `+0x14`, with a 0x48-byte entry stride. When capacity remains,
`FUN_58753660` copies the 18-DWORD record into the next slot and the end pointer
advances by 0x48. When full, `FUN_58754890` delegates the range insertion and
buffer growth to `FUN_587540C0`. That SEH-protected routine grows the
0x48-byte-stride buffer as needed, copies/moves the existing ranges through
the mapped helpers, inserts the supplied range, releases the old allocation
when replaced, and updates the three container pointers.

The wrapper, copy helper, and growth path are exact matches: 158, 46, 203, and
661 bytes respectively; their mapped operand counts are 3, 0, 6, and 20.
The original index listed only 637 bytes for `FUN_587540C0`, ending in the
middle of its stack-chain restore. The corrected extent includes the cookie
check and `ret 0x10` at `0x58754352`, then stops before eleven `CC` bytes and
`FUN_58754360`. Ghidra separately indexed the nine-byte catch-all block at
`0x5875424F` inside this function range.

The six argument meanings, record schema, callback/output contracts, vector
ownership and growth policy, and event/protocol effect remain unresolved. The
dispatchers establish packet/event use and shared receiver/key lookup, but not
the collection's domain identity. No runtime or emulator test was performed.
