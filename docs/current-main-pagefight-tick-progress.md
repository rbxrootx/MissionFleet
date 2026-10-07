# PageFight 25-tick counter and threshold update

This byte-match batch covers one conditional PageFight update branch: the
counter/progress routine rooted at `FUN_587F5470`. It does not claim that the
larger PageFight tick loop has been reconstructed.

Ghidra identifies `FUN_587FD890` as the update method in the
`CPageFightOn_ControlMenuScreen` vtable at `0x5899D180`, slot `+0x0C`
(`0x5899D18C`). That byte-matched method calls the open event-loop helper
`FUN_587FB810` at `0x587FEF97` and `0x587FF039`. In `FUN_587FB810`, mapped
instructions compare receiver byte `+0x20D64` with zero at `0x587FB926`, branch
past the routine when it is zero at `0x587FB92D`, and call `FUN_587F5470` at
`0x587FB931` otherwise. The focused verifier checks the vtable pointer, these
three direct-call sites, and the gate instructions.

The 745-byte root advances only when `+0x104F4` is divisible by 25. Its
`+0x218AC` branch selects a counter path. The routine increments `+0x20DD8`,
passes its quotient and remainder by 60 to matched `FUN_58907360`, compares the
counter against two groups of three thresholds, and changes latch fields
`+0x20DC8` and `+0x20DCC`. The transition path increments `+0x20DE4`, clears the
latches, calls `FUN_587E64D0`, dispatches message/state helpers, and calls
`FUN_58762A20`. Other paths call matched `FUN_587F21E0` and set byte `+0x10474`
to `0x10` or `0x20`. These are observations from the installed client; the
field names remain unknown.

The direct-call closure has four functions and 1,237 bytes:

| Function | Bytes | Exact Ghidra body range(s) |
| --- | ---: | --- |
| `FUN_587F5470` | 745 | `0x587F5470` (605), `0x587F56D0` (140) |
| `FUN_587E64D0` | 373 | `0x587E64D0` (373) |
| `FUN_587C3F50` | 59 | `0x587C3F50` (59) |
| `FUN_58762A20` | 60 | `0x58762A20` (60) |

Each body range has full Ghidra instruction-byte coverage. The root calls
`FUN_587E64D0` and `FUN_58762A20`; `FUN_587E64D0` calls `FUN_587C3F50`.
`FUN_587E64D0` and `FUN_58762A20` also have matched callers outside this
branch, so they are shared helpers. The ObjDiff verifier checks that these four
functions are the root's exact open direct-call closure and that every outgoing
direct transfer reaches a matched boundary. All four compiled at 100% under
ObjDiff 3.8.0.

The counter's gameplay meaning, the exact intent of both threshold groups, the
25-count cadence's relationship to real time, and the message/server contract
remain uncertain. The two open shared helpers' independent semantics also
remain unresolved. No live-client or emulator test was run.
