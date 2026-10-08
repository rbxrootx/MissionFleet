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

## Byte-matched helper closure

The fresh Ghidra decompilations and call references for this method identify 15
previously open helpers: ten directly called by `FUN_588D4300` and five more
reached through those helpers. Two independent fresh Ghidra exports agree on
all 15 body extents and the direct-call graph. The mapped bytes decode over all
of the exported ranges, and the existing direct callees outside this slice are
already byte-verified.

| Function | Observed behavior in fresh Ghidra output |
| --- | --- |
| `FUN_58734AC0` | Initializes a `CAASmokeSpriteBundleScreen`, writes its vtable, and sets observed count/state fields. |
| `FUN_58734B60` | Selects a bounded sprite-table entry, allocates a 0x58-byte object, calls `FUN_58734A30` on success, stores its result, and clears bit 15 at result offset +0x24. |
| `FUN_58735DD0` | Finds the maximum in a selected sample array, stores that value and its square in observed fields, and may lower a threshold to the first sample at or above 90% of the maximum. |
| `FUN_587367C0` | Updates one indexed sample using values returned by two helpers, smooths nearby entries on selected threshold paths, then refreshes derived values through `FUN_58735DD0`. |
| `FUN_58748CB0` | Initializes an object through `FUN_58731C60` and writes the `CAutoFadeSpriteDataScreen` vtable. |
| `FUN_5875BC80` | Writes fixed fields, copies two words from an input record, derives two fields from low bits returned by a helper, and XORs the copied words with 0xAA. |
| `FUN_5875E290` | Initializes a `CEffectExplodeDamage`, clears observed object fields, and writes its vtable. |
| `FUN_587891A0` | Updates four referenced objects, submits a coordinate pair to a helper, writes a base-relative pair into a four-entry ring buffer, scales one stored coordinate by 117/100, and advances the index modulo four. |
| `FUN_587A5670` | Calls `FUN_587B0BC0` when the indexed pointer at receiver offset +8 is nonnull. |
| `FUN_587B0BC0` | Calls `FUN_587891A0` when the supplied object's pointer at +0x168 is nonnull. |
| `FUN_587E8690` | Checks two input/global values, tests `FUN_588D66D0` against 0x40000000, then may route through `FUN_587A5670`. |
| `FUN_588D2CB0` | Uses supplied bounds and helper-returned values to allocate a variable number of 0x84-byte objects, choose bounded table entries, calculate nearby coordinates, and call `FUN_5876BE10`. |
| `FUN_588D2DB0` | Walks the global linked object list, applies type/state/receiver/predicate filters, computes coordinates, and passes surviving objects to `FUN_587EFD60` with the observed argument set. |
| `FUN_588D31B0` | Converts coordinates using global scale fields, searches the linked object list under mode/state/team gates, and stores the first selected object and its +0x350 word on the receiver. |
| `FUN_588D3830` | Under receiver state gates, constructs a `CEffectExplodeDamage`, invokes its virtual slot +0x18, and conditionally creates two objects using IDs 6000 and 6001. |

The direct graph contains 15 transfers from the already matched updater and 49
from the 15 helpers. Eight helper-to-helper transfer sites reach the five
additional functions that close the set; the other 41 helper calls target
functions already verified in the same mapped `Main.dll`.
`tools/verify_current_main_shell_map_object_update_closure.py` checks the exact
Ghidra ranges in both exports, verifies the RTTI chain back to
`CShell_MapObjectScreen`, compares decoded calls in the mapped image to both
Ghidra call-edge exports, and checks that every helper is reachable from the
updater.

The 15 `.cpp` candidates preserve their mapped instruction streams as literal
x86 bytes. ObjDiff 3.8.0 reports 100.0% identity for 3,376 bytes across 15
exact body ranges, with all mapped operands audited. This is a byte-match
milestone; it does not claim those candidate files are readable semantic C++.
The behavior notes above are based on the fresh Ghidra decompilation and keep
unresolved offsets and field meanings explicit. No original-client or emulator
runtime test has been performed for this closure.
