# PageFight control-menu event actions

This slice follows byte-matched `FUN_587FF150`, identified in the existing
verification catalog as `CPageFightOn_ControlMenuScreen`. Its mapped code
compares the event DWORD at `event + 4` with `0x100`, calls
`FUN_587EE2C0(event)`, then calls `FUN_587F7530(event)` with ECX set to the
page receiver. The compare, branch, argument push, receiver setup, and direct
call at `0x587FF29E` were checked in the caller's exact matched body.

The dispatcher reads a separate selector at `event + 8`; it must not be
confused with the caller's `0x100` event code. Selector `0x1B` checks state and
nearby-object conditions before reaching escape-related handling. Depending
on the checks, the mapped string identifiers include
`MESSAGESTRING__CANNOT_ESCAPE_SO_CLOSE` and
`MESSAGESTRING__CANNOT_ESCAPE_SPEED_NOT_ZERO`. Selectors `0x25..0x28` adjust
receiver fields `+0x1052C` and `+0x10530`, using step and bound values read
from other receiver/object fields. The code does not establish their UI names
or units.

The dispatcher also contains chat/filter selectors `0x70..0x72`, firing-mode
selector `0x73`, and control selectors `0x74`, `0x76`, `0x77`, `0x7A`, and
`0x7B`. Literal message identifiers include
`MESSAGESTRING__ALLCHATTINGMODEON`,
`MESSAGESTRING__TEAMCHATTINGMODEON`,
`MESSAGESTRING__MESSAGE_FILTERING_FUNCTION_ON/OFF`, and the volley,
successive, maximum-fire, and 3D on/off strings. Selector `0x77` toggles
global `0x58A248DC` and enters `FUN_588545C0`. The helper checks control marker
`0x40000000`, changes child low bits and associated fields, calls
`FUN_587ECF10(1)` or `(0)`, and sends observed numeric values through
`FUN_58902CE0` and `FUN_58902D20`. Those values and virtual calls are recorded
as observed operations; their protocol and gameplay meanings are unknown.

The exact direct-call closure contains seven functions and 4,357 bytes across
10 Ghidra body ranges. Every member is reachable from `FUN_587F7530`; the
focused verifier checks complete mapped instruction coverage, all 32 outgoing
transfers to already byte-verified functions, no unmatched direct transfer,
the selected helper callsites, and the matched event-code `0x100` caller path.

| Function | Bytes | Exact body ranges |
| --- | ---: | --- |
| `587E63F0` | 93 | `587E63F0..587E644D` |
| `587E6450` | 46 | `587E6450..587E647E` |
| `587E9310` | 141 | `587E9310..587E939D` |
| `587ECF10` | 855 | `587ECF10..587ECF2D`; `587ECF30..587ECF4A`; `587ECF50..587ECF6A`; `587ECF70..587ED276` |
| `587F7530` | 2,076 | `587F7530..587F7D4C` |
| `588545C0` | 1,073 | `588545C0..588549F1` |
| `588B3180` | 73 | `588B3180..588B31C9` |

The range manifest is
`config/NF2_2026/main-pagefight-control-menu-actions-body-ranges.tsv`; all
seven emitted instruction-stream sources passed objdiff 3.8.0 at 100.0%.
This is an exact mapped-code reconstruction of the selected functions, not a
recovered high-level source listing or a tested client build. Receiver/control
types, action names beyond the observed strings and branches, virtual-call
contracts, message/event schema, and in-game results remain uncertain. No
emulator runtime or visual test was performed.
