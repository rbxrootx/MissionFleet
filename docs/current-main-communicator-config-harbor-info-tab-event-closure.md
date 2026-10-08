# `CPannelCommunicatorConfigHarborInfoTab` event closure

The installed `Main.dll` identifies the primary vtable at `0x5899E000` as
`CPannelCommunicatorConfigHarborInfoTab` through its complete-object locator at
`0x589A83B8` and type descriptor at `0x589CC600`. The constructor
`FUN_588304F0` installs this vtable and loads `\\SPR\\CHIP.spr`. Its already
matched parent, `FUN_58843380`, allocates `0x25C` bytes, calls that constructor
at `0x58844364`, and stores the returned pointer at parent offset `+0x170`.

The seven primary slots are:

| Slot | Function | State | Mapped behavior |
| --- | --- | --- | --- |
| `+0x00` | `FUN_5882F250` | Matched here | Deleting-destructor wrapper; calls the child cleanup and conditionally calls the matched free helper. |
| `+0x04` | `FUN_5882EF90` | Matched here | Resets observed state and counters when the state bits equal `0x500`. |
| `+0x08` | `FUN_5882F000` | Previously matched | Shared state-transition method. |
| `+0x0C` | `FUN_5882F530` | Matched here | Changes state bits and dispatches to linked child objects. |
| `+0x10` | `FUN_5882F430` | Matched here | Forwards input to children and checks event `0x20A` against observed rectangles. |
| `+0x14` | `FUN_58902FE0` | Previously matched | Shared screen-framework method. |
| `+0x18` | `FUN_5882F5E0` | Matched here | Main event handler. |

The five open slots reach an exact direct-call closure of 16 previously open
functions. Two independent fresh Ghidra body and edge exports agree on all 17
body ranges, 3,855 bytes, 1,162 instructions, 62 direct calls, and six data
references. Twenty-nine call sites stay inside the closure; the other 33 reach
16 already matched functions. There are no remaining open direct callees in
this slice. The checked range and edge snapshots are
[`current-main-harbor-info-tab-body-exports.tsv`](../config/NF2_2026/current-main-harbor-info-tab-body-exports.tsv)
and
[`current-main-harbor-info-tab-call-edges.tsv`](../config/NF2_2026/current-main-harbor-info-tab-call-edges.tsv).

Fresh Ghidra pseudocode for `FUN_5882F5E0` shows event paths for values `2`,
`62000`, `0xF235`, and `3`. The handler gates actions on observed global and
receiver fields, adjusts the values at `+0xCC` and `+0xD0`, and refreshes
associated displays through `FUN_5882F270` and `FUN_5882F350`. It references
`MESSAGESTRING__PRODUCTIVITY`, `MESSAGESTRING__DEFSTRENGTH`, and
`MESSAGESTRING__NOT_ENOUGH_CREDIT`. Three message wrappers pass the observed
identifiers `0x8001311B`, `0x8001311C`, and `0x8001312A` to the matched
dispatcher. These are recorded as call-site evidence; their server meaning is
not inferred.

The closure also includes the child cleanup `FUN_5882EC80`, two scaled-value
helpers, the rectangle check, and the three message wrappers. All 16 mapped
instruction streams are emitted in
[`src/client-current/Main`](../src/client-current/Main) and pass ObjDiff at
100.0%, including the two separate body ranges of `FUN_5882F250`. The
RTTI, ranges, direct-call boundary, mapped data references, and matched
constructor route are checked by
[`verify_current_main_harbor_info_tab.py`](../tools/verify_current_main_harbor_info_tab.py).

Forty-six indirect call sites remain unresolved, including child virtual
callbacks in cleanup, event forwarding, and state updates. The formal event
contract, individual control labels and actions, sprite-index meanings,
coordinate units, receiver-field names, and server-authoritative outcomes are
unknown. This is byte-match and static behavior evidence; no emulator or
original-client runtime test has been performed for this tab.
