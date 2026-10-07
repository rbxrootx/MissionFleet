# Current Main channel-battle control-screen transition slice

This slice byte-matches 19 open functions (5,096 bytes) tied by Ghidra call
references to the `CPageChannelBattle_ControlMenuScreen` lifecycle, its mode
switch, and selection updates. Its direct callees are closed: every direct
call or tail jump from these 19 bodies lands in another matched function or
inside the verified functions themselves. This does not close every caller of
shared helpers or indirect child-vtable dispatch.

## Evidence from Main.dll

Ghidra identifies `FUN_587D03D0` by its store of
`CPageChannelBattle_ControlMenuScreen::vftable`. The matched deleting-destructor
wrapper `FUN_587D3840` calls it at `0x587D3843`. The destructor releases and
clears many child/control pointers, iterates repeated child/resource groups,
and calls `FUN_587CFAD0` to clean another group.

The mode helper `FUN_587D0F90` takes two observed values, 100 and 200. It
changes receiver state and selection fields, adjusts child flags, and calls
`FUN_58889120` with 0 or 1. The mode-200 path also calls the bounds predicate
`FUN_587CFA60`, flag updater `FUN_587CFF80`, child helpers `FUN_58888ED0`,
`FUN_58888970`, and `FUN_58888720`. `FUN_587D1810` selects between the two
modes from receiver field `+0xFC`.

`FUN_587D0E40` has a two-stage path keyed by receiver field `+0xF8`. Its first
stage clears child flags, snapshots coordinate values, and offsets child
records. Its later stage updates selection fields, restores flags, and
tail-jumps to `FUN_587CFF80`. The included `FUN_587D2630` setter and `FUN_587D16B0` input
handler both feed that transition; `FUN_587D16B0` computes four observed
selection directions, calls `FUN_58789680` to update matching child states,
then refreshes the selection if the index changed. These are observations of
the original instructions and decompiler output; they do not establish the
user-visible names of the controls or fields.

## Matched functions and direct-call closure

The batch contains the three lifecycle/state roots, 13 still-open callees
needed to close their direct-call paths, and three open input/selection
handlers tied to the same state transition:

| Address | Bytes | Observed role |
| --- | ---: | --- |
| `587D03D0` | 1,256 | Control-screen destructor body |
| `587D0F90` | 1,217 | Mode 100/200 state and child-flag update |
| `587D0E40` | 334 | Two-stage selection/coordinate transition |
| `587CFAD0` | 516 | Child/resource cleanup helper |
| `58889120` | 208 | Mode-dependent child flag update |
| `587CFA60` | 109 | Coordinate/bounds predicate |
| `587CFF80` | 126 | Conditional child-flag refresh |
| `58888ED0` | 63 | Child dispatch followed by state refresh |
| `58888970` | 81 | Alternates two observed global argument pairs |
| `58888720` | 56 | Calls child virtual slot `+8` across four pointers |
| `587896E0` | 40 | Walks a linked list and adjusts each node |
| `587CF690` | 59 | Stores selection and updates child fields |
| `58888940` | 26 | Stores a value and tail-jumps to matched `FUN_58907360` |
| `58888760` | 406 | Child virtual dispatch selected by receiver `+0xBC` |
| `5874A7D0` | 17 | Adds two values to fields `+0x6C` and `+0x70` |
| `58789680` | 83 | Finds matching child records and changes their state |
| `587D1810` | 31 | Toggles between the two mode-helper arguments |
| `587D2630` | 130 | Sets a selection index and triggers refresh |
| `587D16B0` | 338 | Computes directional selection changes in mode 200 |

Ghidra reports complete instruction coverage for every body. Four functions
have discontiguous body ranges: `587D03D0` (11 ranges), `587D0F90` (2),
`587CFAD0` (2), and `58889120` (2). The remaining 15 are contiguous. The exact
range starts and sizes are stored in
[`client-verifications.json`](../config/NF2_2026/client-verifications.json)
and checked by
[`verify_current_main_channel_battle_transition.py`](../tools/verify_current_main_channel_battle_transition.py).

The 13 formerly open callees total 1,790 bytes. Their outgoing direct calls
terminate in already-matched functions, including `FUN_58902C20`,
`FUN_58902C70`, `FUN_5874FBD0`, and `FUN_58907360`. The custom verifier checks
the key Ghidra call sites among the 19 functions and scans every direct call
and jump in their body ranges for any remaining open indexed target.

## Uncertainties and validation

The emitted source preserves the installed Main.dll instruction stream and
ObjDiff verifies all 19 functions at 100% (5,096 bytes). This is byte-matching
evidence, not recovery of the original high-level C++ implementation. Member
schemas, numeric state names, the targets behind child virtual calls, and the
visual/gameplay effects remain unresolved. Shared callers outside this slice
include `FUN_587D1830` to `FUN_587CFF80`, `FUN_587DA9A0` to `FUN_587CF690`, and
`FUN_58762D30` to `FUN_587D2630`; those functions were not added merely to
inflate this subsystem. No emulator runtime test was performed.
