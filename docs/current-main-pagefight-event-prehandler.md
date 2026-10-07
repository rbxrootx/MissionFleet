# Main.dll PageFight event pre-handler

The byte-matched `FUN_587FF150` method is identified as the
`CPageFightOn_ControlMenuScreen` message handler. For event code `0x100` at
`event + 4`, it calls `FUN_587EE2C0(event)` at `0x587FF296`, then calls the
already byte-matched action dispatcher `FUN_587F7530(event)` at `0x587FF29E`
with the page receiver in ECX. The caller instructions and argument setup are
checked against the installed Main.dll bytes by the focused verifier.

This handler is not the only route into every helper in the closure. The
`CPannelFactoryHelp` method `FUN_58856560`, identified at vtable slot `+0x48`,
also calls shared key-index helper `FUN_5889EAC0` at `0x588565CD`. That callback
supplies a second matched external call path; its presence is why the helper
remains in the exact reachable closure.

## Behavior visible in the original code

`FUN_587EE2C0` first checks event flags at `event + 0x0C`, clears several
receiver fields, and applies receiver/global state gates. For key values
`0x31..0x38`, it derives an index and calls `FUN_588592C0` when the observed
table bounds allow it. The helper updates receiver `+0xF4`, visits eight
repeated child groups, changes observed low flag bits, selects bounds-checked
records from the global table at `0x58A246A0`, and calls `FUN_58858BD0(0)`.
The selected records' schema and the child controls' meanings are not
established by these instructions.

For other events, `FUN_5889EAC0` maps the low byte at `event + 0x0E` when
`event + 8` is `0xE5`, then searches 31 DWORD entries starting at receiver
`+0x150`, returning the matching index or `-1`. `FUN_587EE2C0` branches on
that mapped key index and the event fields. Observed routes include calls to
the matched payload builder `FUN_587E9A10` with values `0x0C`, `0x0D`, and
`0x16`; a
communication-control toggle through `FUN_5881E670`; and a state check through
`FUN_58896300` and `FUN_5875EE50`. Literal message identifiers include
`MESSAGESTRING__BATTLE_MESSAGE_23`, `MESSAGESTRING__BATTLE_MESSAGE_24`,
`MESSAGESTRING__SS_CANNOT_GUN_UNDERWATER`, and
`MESSAGESTRING__SS_CANNOT_TORPEDO_CRITICALUW`.

The exact direct-call closure contains eight functions / 3,705 bytes across
12 fresh Ghidra body ranges. All are reachable from `FUN_587EE2C0`, all 24
outgoing transfers land in byte-verified functions, and there are no unresolved
in-module direct targets. The focused verifier also checks both matched caller
paths and the mapped instruction setup around their calls.

| Function | Bytes | Exact body ranges |
| --- | ---: | --- |
| `5875EE50` | 84 | `[5875EE50, 5875EEA4)` |
| `587E7F70` | 19 | `[587E7F70, 587E7F83)` |
| `587E7FF0` | 19 | `[587E7FF0, 587E8003)` |
| `587EE2C0` | 1,701 | `[587EE2C0, 587EE40A)`; `[587EE410, 587EE43D)`; `[587EE440, 587EE6F6)`; `[587EE700, 587EE978)` |
| `5881E670` | 161 | `[5881E670, 5881E711)` |
| `588592C0` | 1,307 | `[588592C0, 58859549)`; `[58859550, 588597E2)` |
| `58896300` | 59 | `[58896300, 5889633B)` |
| `5889EAC0` | 355 | `[5889EAC0, 5889EC23)` |

The exact body ranges are preserved in
`config/NF2_2026/main-pagefight-event-prehandler-body-ranges.tsv`. All eight
emitted instruction-stream sources match under objdiff 3.8.0 at 100.0%. Event
names, receiver field roles, keyboard-state contracts, resource labels, and
gameplay effects remain uncertain. No emulator runtime or visual test was run.
