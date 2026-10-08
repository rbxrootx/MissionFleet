# Current Main `CSantaAircraft` AP/HE damage callbacks

This slice byte-matches the two adjacent `CSantaAircraft` damage callbacks,
their shared indexed-state helper, and both leaf stores reached by that helper.
Fresh Ghidra body and edge exports `58758ee0` and `587cef70` agree on the five
complete function bodies and their callers. The matched wrappers at vtable
slots `+0x18` and `+0x1C` are documented in
[`slot +0x18`](current-main-santa-aircraft-slot6.md) and
[`slot +0x1C`](current-main-santa-aircraft-slot7.md); the matched constructor
installs the RTTI-identified `.?AVCSantaAircraft@@` table.

The AP callback `FUN_5873C4A0` is 752 bytes / 198 instructions and contains
the diagnostic text `Aircraft Damaged ... AP P`. The HE callback
`FUN_5873C790` is 909 bytes / 238 instructions and contains
`Aircraft Damaged ... HE P`. Their Ghidra decompilations write nearby but
distinct aircraft state fields: the AP path uses `+0x2D8` and `+0x2DC`; the HE
path uses `+0x2DA` and `+0x2DC`. The matched wrappers call these functions at
`0x588D26D5` and `0x588D276A`, then test EAX. Both decompilations type the
callbacks as `void`, so the return contract is not established by the static
evidence.

Both callbacks conditionally call `FUN_588DC380` (`0x5873C5DF` and
`0x5873C979`). That shared helper occupies 615 bytes / 157 instructions. It
checks receiver state at `+0x100C`, selects an entry through `+0x6324 + 4*i`,
and returns on null or on a counter-based interval check. It updates packed
10-bit regions in words at `+0x47C` and `+0x87C` using the observed XOR masks
and values from the original code. On the selected-object path, it combines
two 10-bit values, caps the result using the byte at the observed capacity
field, and raises a zero result to one. When the active object's low five type
bits equal 9, it calls `FUN_5885EAD0`; otherwise it calls `FUN_58858450`.

The 18-byte `FUN_5885EAD0` leaf stores its third argument at receiver
`+0x628 + 4*i`. The 18-byte `FUN_58858450` leaf stores at `+0x8E8 + 4*i`.
Both leaves also have direct calls from byte-matched `FUN_58857020`, which
confirms that they are reused outside this callback path. That larger selected
object refresh function remains in its own subsystem record.

The direct-call closure is byte-matched. The two callback functions each have
six unresolved indirect call sites for object callbacks and logging helpers;
the indirect virtual targets, index and field meanings, XOR encoding, interval
policy, and visible effect remain unknown. The wrappers' EAX test remains
unexplained despite the exact byte match. No emulator callback test has been
performed, so this is static client reconstruction evidence rather than a
runtime behavior claim.

| Function | Mapped body | Instructions |
| --- | --- | ---: |
| `FUN_5873C4A0` | `0x5873C4A0..+752` | 198 |
| `FUN_5873C790` | `0x5873C790..+909` | 238 |
| `FUN_588DC380` | `0x588DC380..+615` | 157 |
| `FUN_5885EAD0` | `0x5885EAD0..+18` | 4 |
| `FUN_58858450` | `0x58858450..+18` | 4 |

The five emitted instruction-level sources under
[`src/client-current/Main`](../src/client-current/Main) match 2,312/2,312
bytes under objdiff 3.8.0; the three larger functions checked 75 relocations.
Ghidra range manifests and the two fresh body/edge export projections are
tracked under `config/NF2_2026`. Run the focused checks with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-santa-aircraft-damage-callbacks-body-ranges.tsv
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 5873C4A0 --only 5873C790 --only 588DC380 --only 5885EAD0 --only 58858450
rtk python tools/verify_current_main_santa_aircraft_damage_callbacks.py
```
