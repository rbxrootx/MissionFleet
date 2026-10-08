# Convoy-aircraft update closures

The installed 2026 `Main.dll` has three RTTI-confirmed convoy-aircraft classes whose primary vftables share `FUN_587CBE00` at slot `+0x0C`: `COpConvoy_DA_Cargo`, `COpConvoy_DA_Fighter`, and `COpConvoy_DummyAircraft`. The Cargo and Fighter vftables select separate slot `+0x18` methods, `FUN_587CA9E0` and `FUN_587CADF0`; DummyAircraft uses the already byte-matched `FUN_5874DDD0` there.

The byte-matched slice covers three open direct-call closures:

| Root | Open direct closure | Bytes |
| --- | ---: | ---: |
| Shared slot `FUN_587CBE00` | 9 functions | 3,727 |
| Cargo slot `FUN_587CA9E0` | 1 function | 584 |
| Fighter slot `FUN_587CADF0` | 2 functions | 316 |

Together they contain 12 functions / 4,627 bytes across 13 exact Ghidra ranges. ObjDiff 3.8.0 reports 100.0% for every selected function. The focused verifier checks all 45 direct-call sites against the independent Ghidra edge inventory, confirms complete instruction coverage, and validates 35 transfers to functions already verified byte-identical.

RTTI in the mapped image ties the three vftables to their type descriptors and complete-object locators. The matched `FUN_587CE3D0` setup calls the Cargo constructor at `0x587CE482` and the Fighter constructor at `0x587CE4D5` and `0x587CE528`. Both derived constructors call the matched shared constructor `FUN_587CB6B0`, which first installs the DummyAircraft vftable; each derived constructor then installs its own table. These constructor functions support the class boundary and are not part of this open-function match count.

The shared update first checks flag bit 2 at receiver offset `+0x24`. In the observed state value 4 branch, it clears the low four flag bits at offset `+0x24` on the child-screen objects referenced at receiver offsets `+0x82` and `+0x83`. The other branch advances a cycle field, calls the state and coordinate helper `FUN_587CB9B0`, records coordinates, asks `FUN_587EABC0` to test bounds against a linked-object list, updates child-screen fields, dispatches slot `+0x18` on the concrete object's vftable, and invokes slot `+0x0C` on linked child objects. The Cargo and Fighter slot `+0x18` bodies are included because this update calls that class-dependent method; the DummyAircraft target is already matched.

The auxiliary bodies preserve observed details without assigning unsupported gameplay labels: `FUN_5876C360` compares coordinate-derived candidates from a table; `FUN_587CB3B0` computes a wrapped table-index difference; `FUN_587CB280` adjusts a field toward an unsigned-word target; `FUN_587CB580` changes a field between values 1 and 2 under pointer and threshold checks; `FUN_587CB5E0` updates paired coordinate-related fields; `FUN_587CB380` returns the DWORD at `+0x214`; and `FUN_587CB390` conditionally raises a field at `+0x8C`. The source records the inspected operations and unresolved field names in `MAIN_OPCONVOY_AIRCRAFT_UPDATE_EVIDENCE`.

The repeatable read-only Ghidra runner is [`tools/run_current_main_opconvoy_aircraft_update_fresh.cmd`](../tools/run_current_main_opconvoy_aircraft_update_fresh.cmd). [`tools/write_current_main_opconvoy_aircraft_update_manifests.py`](../tools/write_current_main_opconvoy_aircraft_update_manifests.py) cross-checks its ranges and calls against the independent inventory and the three closure audits. [`tools/verify_current_main_opconvoy_aircraft_update.py`](../tools/verify_current_main_opconvoy_aircraft_update.py) checks the mapped instructions, RTTI, vftable slots, constructor calls and writes, and external call references.

Five indirect call instructions occur in the selected functions. The shared slot `+0x18` resolves to each class's observed vftable target. The linked-child slot `+0x0C`, two state-dependent slots `+0x20` and `+0x1C`, and the Cargo slot `+0x04` still have unresolved runtime targets or contracts. Field meanings and visual effects have not been runtime-tested; this slice establishes exact compiled code bytes and static relationships, not a playable-client test.
