# Current Main.dll map-object proximity update

This slice follows the already byte-matched `FUN_588D4300`, whose mapped
virtual-table entry is identified by RTTI as `CShell_MapObjectScreen`. Fresh
Ghidra output shows that caller reaching `FUN_587880C0` at both
`0x588D5C83` and `0x588D5FE9`. The first call is under the global
`0x58A2459C + 0x218C4` nonzero check and caller state `+0x76 < 3`; the second
uses the same global check with state `+0x76 != 1`, after dividing a prepared
record value by 200. The exact calls and their register/stack setup were
checked against the mapped bytes inside the byte-identical caller.

`FUN_587880C0` validates and walks two pointer ranges in its receiver:
`+0x858/+0x864/+0x868` and `+0x870/+0x87C/+0x880`. For entries whose fields at
`+0x50` or `+0x68` are nonzero, it compares the stored coordinates with the
supplied point. One branch uses an inclusive +/-10 window and another uses a
less-than-25 window; otherwise the routine compares squared distance with the
supplied radius-like value squared. Depending on the array and result, it
updates the entry through `FUN_58784B10` or `FUN_58784310`. A completed update
can dispatch event value `0x0B` through `FUN_588D6C90` when the supplied record
also carries that value.

When the mode argument is not 1 and receiver byte `+0x88C` is nonzero, the
root also walks coordinate pairs beginning at `+0x894`. Pairs within squared
distance 600 take one position-update path through `FUN_587ECAB0` and
`FUN_58780330`; pairs within the supplied radius squared take a second path
that adjusts the record before calling those helpers. The parameter names are
Ghidra's inferred names; their game-level meanings and coordinate units are
not established.

The selected helpers preserve more of that behavior. `FUN_58784310` updates a
16-bit receiver field at `+0x6C` and, in mode-dependent branches, allocates
`0x11C`-byte records through `FUN_5875ADB0`; when the field reaches zero it
calls `FUN_58783F60`. `FUN_58784B10` follows a related path using receiver field
`+0x50`, updates child state, and sends the observed completion notification
when the field reaches zero. `FUN_58783F60` clears state, selects a resource
entry, derives a position using receiver and global fields, then scans the
global linked list for records that can reach `FUN_58783C80`. That helper
checks six coordinate samples and can call `FUN_587EFD60` when its computed
value is positive. `FUN_5876C8D0` implements the six-sample squared-distance
check, and `FUN_5876BF80` returns `x - (x * y) / z` using signed integer
arithmetic.

The exact direct-call closure contains seven functions / 4,233 bytes across
10 Ghidra body ranges. All seven are reachable from `FUN_587880C0`; all 71
transfers leaving the closure target verified functions, with no unresolved
external transfer or body gap.

| Function | Bytes | In-slice direct callees |
| --- | ---: | --- |
| `5876BF80` | 21 | — |
| `5876C8D0` | 133 | — |
| `58783C80` | 156 | `5876BF80`, `5876C8D0` |
| `58783F60` | 460 | `58783C80` |
| `58784310` | 1,019 | `58783F60` |
| `58784B10` | 1,091 | — |
| `587880C0` | 1,353 | `5876BF80`, `58784310`, `58784B10` |

The exact body ranges are preserved in
`config/NF2_2026/main-map-object-proximity-effects-body-ranges.tsv`. The
generated instruction-stream sources passed objdiff 3.8.0 at 100.0% for all
seven functions. The focused verifier checks full instruction coverage,
closure reachability, all 71 verified boundary transfers, the two calls from
the matched `CShell_MapObjectScreen` method, and key root-to-helper callsites.
This is a byte-exact mapped-code slice rather than a portable high-level
rewrite. The record schemas, coordinate units, effect/resource identities,
event meanings, and server-authoritative results remain unresolved. No
in-emulator visual test was run.
