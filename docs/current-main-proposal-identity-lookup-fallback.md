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
