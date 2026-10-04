# Current Main squadron/fleet join proposal record path

`FUN_58839460` is a 649-byte function in the installed 2026 `Main.dll`
capture. The mapped body ends with `ret 4` at `0x588396E6`; seven `INT3`
alignment bytes follow before the next indexed function at `0x588396F0`.
Objdiff 3.8.0 confirms all 649 bytes and all 38 operand targets.

## Evidence from the message handlers

Verified dispatchers `FUN_587BB700` and `FUN_588C1650` call this function in
case `0x80020F0C` when packet identity equals `DAT_58A0B4A0` and the global
state is 5 or 6. Both paths allocate and zero a 0x54-byte record, copy two
packet words into its first two dwords, and pass the record as the function's
argument. This is distinct from the earlier state-5/6 proposal path documented
in [the adjacent record update](current-main-fleet-join-proposal-record-update.md).

The function passes those two dwords and global `0x58A245AC` to
`FUN_58753BF0`. A zero return sets receiver byte `+0x321` to 6 and calls
`FUN_587B9290` with the pair and global `0x58A24588`, then returns. On the
other branch, it formats text from the input record at `+0x24` with the mapped
resource key `MESSAGESTRING__SQAUDRON_FLEET_JOIN_PROPOSE` at `0x5899E2DC` and
dispatches the resulting text through `FUN_5881E2E0`.

That branch searches receiver-owned pointer and 0x54-byte-record collections,
comparing record bytes at `+0x2D` through the callback at `0x5898C1A4`. The
observed insertion path calls `FUN_58849980` and `FUN_58836AF0`. When receiver
flags at `+0x24`, masked with `0x1F00`, equal `0x200`, the function calls
`FUN_589088D0` for fields `+0x24C`, `+0x250`, and `+0x254`, then updates
`+0x220` from the collection counts.

## Uncertainties

The packet field meanings, lookup-helper result, collection roles, key at
record `+0x2D`, flag `0x200`, callback contract, and resulting state behavior
are not fully identified. The resource key suggests a squadron/fleet-join
proposal notification, but does not establish the protocol's full meaning. No
emulator test was performed.
