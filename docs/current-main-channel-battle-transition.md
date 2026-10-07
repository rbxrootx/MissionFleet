# Current Main channel-battle control-screen transition slice

This channel-battle subsystem now byte-matches 28 functions (8,922 bytes)
across the screen lifecycle, mode/selection transitions, and an event-driven
message/countdown and child-row refresh path. Every direct call or tail jump
from these 28 bodies lands in another matched function or in a verified body.
This closes their direct-call graph; it does not close every external caller
of shared helpers or indirect child-vtable dispatch.

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

The event path adds `FUN_587D1830`. Its only incoming code reference is from
matched `FUN_587D6450` at `0x587D6501`; that caller is reached through event
route `0x80023101` in `FUN_588C4210` and invokes the handler when receiver field
`+0xFC` equals 200. Ghidra found no vtable/data reference for `FUN_587D1830`,
so its association with this screen is based on the event caller, mode check,
and shared state-update helper, not a proven virtual slot.

`FUN_587D1830` reads the indexed record at `DAT_58A24860`, formats a date/time
tuple through `FUN_58795290`, selects among the recovered string globals
`DUETIME_WAITINGHCB`, `READYHCB`, `UNDERHCB`, and `RESPITE`, and updates child
flags and a 25-entry row group. Four pattern helpers (`FUN_587D0180`,
`FUN_587D0100`, `FUN_587D0250`, and `FUN_587D01E0`) set paired child state
fields using record flags and shared predicate `FUN_587CF000`. The handler
then calls matched `FUN_587CFF80`. The tuple helper `FUN_58795290` consults
`FUN_587950D0`, which uses global clock/date state and an indirect callback.

## Matched functions and direct-call closure

The connected event-update extension adds these nine functions:

| Address | Bytes | Observed role |
| --- | ---: | --- |
| `587D1830` | 1,715 | Event-driven message/date and 25-row child-state update |
| `58795290` | 1,038 | Date/countdown tuple formatter |
| `58889600` | 62 | Toggles a flag bit on two child objects; tail-jumps on one branch |
| `587D0180` | 96 | Assigns paired row states using record flags and shared predicate |
| `587D0100` | 123 | Assigns paired row states in five-entry groups |
| `587D0250` | 96 | Assigns paired row states after the first five entries |
| `587D01E0` | 106 | Assigns paired row states using a four-offset/five-entry pattern |
| `587950D0` | 441 | Builds date/time fields from globals and an indirect callback |
| `587CF000` | 149 | Tests neighboring record flags and five-entry boundaries |

The original 19-function transition subset is detailed below:

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

Ghidra reports complete instruction coverage for every body. In the original
19-function transition subset, four functions have discontiguous body ranges:
`587D03D0` (11 ranges), `587D0F90` (2), `587CFAD0` (2), and `58889120` (2).
The event-update extension adds the seven-range body `587D1830`; its other
eight functions are contiguous. The exact range starts and sizes are stored in
[`client-verifications.json`](../config/NF2_2026/client-verifications.json)
and checked by
[`verify_current_main_channel_battle_transition.py`](../tools/verify_current_main_channel_battle_transition.py).

The original 13 formerly open callees total 1,790 bytes. The eight open direct
and transitive callees in the event-update extension total 2,111 bytes. Their
outgoing direct calls terminate in already-matched functions, including
`FUN_58902C20`, `FUN_58902C70`, `FUN_5874FBD0`, and `FUN_58907360`. The custom
verifier checks the audited Ghidra call sites across all 28 functions and
scans every direct call and jump in their body ranges for any remaining open
indexed target.

## Uncertainties and validation

The emitted source preserves the installed Main.dll instruction stream and
ObjDiff verifies all 28 functions at 100% (8,922 bytes). This is byte-matching
evidence, not recovery of the original high-level C++ implementation. Member
schemas, numeric state names, the targets behind child virtual calls, and the
visual/gameplay effects remain unresolved. The date/time callback called
indirectly by `FUN_587950D0` is not resolved, and other callers of shared
helpers remain outside this subsystem. Shared callers include
`FUN_587DA9A0` to `FUN_587CF690` and `FUN_58762D30` to `FUN_587D2630`. No
emulator runtime test was performed.
