# PageFight battle-input and target-control path

This subsystem covers the `0x201` and `0x202` event cases routed from the already byte-matched PageFight control-menu handler. The reconstructed batch contains the handler at `0x587F7E10` and its full 11-function transitive direct-call closure: 12 functions totaling 4,243 bytes.

## Evidence and observed behavior

Matched `FUN_587FD810` tail-transfers to `FUN_587F7E10` at `0x587FD834` for event codes `0x201` and `0x202`. Its existing record identifies the caller as the event handler in the RTTI-backed `CPageFightOn_ControlMenuScreen` path. Ghidra found no direct vtable or RTTI reference to `FUN_587F7E10` itself, so that caller path is the class evidence for this entry.

In the exact decompilation, event `0x201` applies a scale-and-offset transform to the map coordinates and initializes a selection rectangle. Event `0x202` checks mode and object state, updates child-control bits, follows a smoke-bomb validation path, and updates selected map/target state. The calls at `0x587F7EF4`, `0x587F8146`, `0x587F7FB7`, `0x587F84C8`, `0x587F8017`, `0x587F8055`, `0x587F8527`, `0x587F8565`, `0x587F816E`, `0x587F83DF`, and `0x587F864F` connect this handler to the selected helper set.

`FUN_587ED430` clears observed state and contains the strings `MESSAGESTRING__SMOKEBOMB_ERROR_RANGE`, `MESSAGESTRING__SMOKEBOMB_ERROR_QUANTITY`, and `MESSAGESTRING__SMOKEBOMB_ERROR_COOLTIME`, plus a call to `FUN_587E9A10(0, 0x5A, 0)`. `FUN_5873B3B0` updates bit 0 on six child-control words and can invoke callback/sound-related code. `FUN_587F2870` changes selection fields at receiver offsets `+0x104C8`, `+0x10554`, `+0x10558`, and `+0x10568`; its child-state calls lead to `FUN_588DA150` and `FUN_587EAC40`. The latter compares coordinate-like values using `FUN_587B07B0` and `FUN_5876C6B0` before writing observed state values at child offsets `+0x108` and `+0x124`.

The exact Ghidra body ranges are preserved in the verification records and audited by `tools/verify_current_main_pagefight_battle_input.py`. Two functions have discontiguous Ghidra bodies:

| Entry | Exact body ranges | Bytes |
| --- | --- | ---: |
| `587F7E10` | `587F7E10+557`, `587F8040+1245`, `587F8520+45`, `587F8550+429` | 2,276 |
| `5873A250` | `5873A250+7` | 7 |
| `5873B3B0` | `5873B3B0+398` | 398 |
| `5875EE20` | `5875EE20+4` | 4 |
| `587B0C10` | `587B0C10+136` | 136 |
| `587ED430` | `587ED430+372` | 372 |
| `587F2870` | `587F2870+201` | 201 |
| `588DA150` | `588DA150+144` | 144 |
| `587EAC40` | `587EAC40+297`, `587EAD70+94` | 391 |
| `5897CEE0` | `5897CEE0+6` | 6 |
| `587B07B0` | `587B07B0+54` | 54 |
| `5876C6B0` | `5876C6B0+254` | 254 |

The static direct-call closure was checked against all mapped direct calls and jumps in the selected bodies. Calls leaving the closure target already matched functions. The six-byte `FUN_5897CEE0` thunk transfers through the callback pointer at `0x5898C29C`; its runtime target is not identified by the direct call graph.

## Uncertainties and validation

The object-field labels, coordinate units, control identities, and gameplay meaning of several state codes are not recovered. `FUN_587B07B0` and `FUN_5876C6B0` show wrap/modulo arithmetic on values related by their callers to the map-selection path, but the exact data type and units are unknown. Some functions also contain virtual or indirect calls outside the static closure.

Each candidate is emitted from the pinned mapped `Main.dll` bytes using its exact Ghidra body range, then checked by ObjDiff for byte identity. The focused verifier confirms the 12 records, exact ranges, complete instruction coverage, call edges, matched caller, and the unresolved indirect callback location. No original-client or emulator interaction test was performed.
