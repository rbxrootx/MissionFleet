# Current Main shell map-object update

`FUN_588d4300` is a virtual method of `CShell_MapObjectScreen`. Ghidra records
its data reference at `0x589A0F88`; the mapped word there is `0x588D4300`. The
word immediately before the vtable at `0x589A0F78` points to the complete
object locator at `0x589AA258`. That locator points to the type descriptor at
`0x589CD948`, whose original RTTI name is `.?AVCShell_MapObjectScreen@@`.
Together these bytes identify the class and its vtable entry without relying on
the function's generic Ghidra name.

Ghidra assigns two body ranges: `588D4300..588D4E8C` (2,957 bytes) and
`588D4E90..588D64C8` (5,689 bytes). Capstone fully decodes the three-byte
intervening gap as alignment. ObjDiff 3.8.0 verifies both segments at 100.0%,
including 484 mapped operands.

The body checks an active flag, advances counters and trajectory fields,
updates map-position values, and follows multiple object-state branches. In a
branch where receiver fields `+0x200` and `+0x23C` differ, it obtains hit
coordinates through `FUN_588d6670` and calls the byte-matched damage resolver
`FUN_587efd60`, passing both combat records and additional hit parameters. The
resolver call makes this an evidence-backed link between shell movement and
combat hit processing. Other branches allocate objects and pass positions and
state-dependent values to helper routines; their resource and effect meanings
are not established here.

This method's original formal name, the units and meanings of its fields and
state values, collision-helper behavior, effect identities, and the boundary
between client visuals and server-authoritative outcomes remain unknown. This
is static byte-match evidence; there has been no original-client or emulator
test of a shell hit.
Its call to `FUN_588D6C90` with tag `0x0B` updates a receiver counter; see the
[tag-counter notes](current-main-shell-map-tag-counter.md) for the exact fields
and remaining uncertainties.
