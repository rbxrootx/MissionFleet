# PageFight mode-7 OpConvoy state update

This batch closes the OpConvoy state-update path dispatched by the installed
Main.dll PageFight screen. It contains 29 open functions and 10,594 Ghidra body
bytes. ObjDiff verifies every function byte-for-byte against the pinned mapped
client image.

## Original-code evidence

The RTTI-backed `CPageFightOn_ControlMenuScreen` table at `0x5899D180` has
`FUN_587FD890` in slot `+0x0C` (`0x5899D18C`). The matched update method calls
open helper `FUN_587FB810` at `0x587FEF97` and `0x587FF039`. In
`FUN_587FB810`, the branch for receiver field `+0x105A2 == 7` calls
`FUN_587CDD60` at `0x587FBC99`, inside the `DAT_58A245C4` screen-state path. The
addresses and callsites are checked by
`tools/verify_current_main_opconvoy_state_update.py`.

The closure also contains the strongest component identifiers. `FUN_587C9F30`
contains the original `OpConvoy_Box.cpp` assertion for `Box::SetMode` and the
`OPCONVOY_BOX_MODE__SLEEP`, `__BOX`, and `__FLAG` values. Constructor
`FUN_587CA1C0` installs `COpConvoy_Box::vftable`. The update function itself has
no direct RTTI or vtable entry, so "OpConvoy box state/update path" describes
the evidence-backed caller/helper cluster; it is not a recovered C++ method
name.

Ghidra gives `FUN_587CDD60` two body ranges:

| Range | Bytes |
| --- | ---: |
| `0x587CDD60..0x587CDE0D` | 173 |
| `0x587CDE10..0x587CE2D0` | 1,216 |

The three-byte gap is outside the Ghidra body. Both ranges decode completely,
and the root's 1,389 bytes match its indexed body size.

The decompilation shows a state switch on receiver `+0x18`. In state 3, the
referenced actor's `+0x74` selects the event path. One path counts down before
popping a box and emits `MESSAGESTRING__OPCONVOY__BOX_POP`. Another scans the
battle-object linked list and checks both coordinates within `0x28` of the
event point before it marks the box and selects the ally, opponent, or
`MESSAGESTRING__OPCONVOY__GET_BOX_N_GOTO_CZ` message key. The remaining path
matches cargo/object state and point-zone bounds; it emits the wrong-zone sunk
or ally/opponent receive-point message keys and clears the object's `+0x6648`
field on a match.

State 4 counts down from 100 before advancing to state 5. State 5 allocates a
`0x84`-byte control when needed, assigns its rectangle fields, calls
`FUN_587CD000`, and moves to state 3 or 6 based on that helper's result. State 6
clears the related controls and resets the state to 1. The message strings,
field accesses, state values, coordinates, branch conditions, and call order
come from the installed client decompilation; the meanings of these fields and
some helper effects remain unresolved.

The byte-match closure consists of:

```text
58756B40 58756BC0 5878A190 58796F00 58796F80 587C9F30 587CA1C0 587CADA0
587CB2F0 587CC780 587CC990 587CD000 587CD230 587CD4C0 587CD650 587CD9F0
587CDA60 587CDD60 587CE320 587CE360 587CE7A0 587E5C30 587E8C00 587EF0C0
587F2A70 587F2AD0 58800FD0 58896200 588D6D50
```

Every function body is emitted from its exact Ghidra ranges, with full mapped
instruction coverage. The focused verifier confirms that the root reaches all
29 functions through direct calls/jumps and that every transfer leaving the
closure resolves to an already byte-verified function. This is an exact
instruction-stream reconstruction. Helper behavior beyond these observations,
field ownership, coordinate units, server event contracts, and live runtime
effects remain unresolved; no emulator test has been run.
