# Current Main aircraft-control command handler

`FUN_5873cee0` is a 2,983-byte `__thiscall` function taking a 16-bit command
and a pointer to short values. Ghidra assigns it one contiguous body range:

| Range | Bytes |
| --- | ---: |
| `0x5873CEE0..0x5873DA86` | 2,983 |

Ghidra records ten direct callsites: three from `FUN_588e3ae0`, one from each
of `FUN_5873dae0`, `FUN_5873e4e0`, and `FUN_5873fe80`, two from
`FUN_588db110`, and two from the matched `FUN_588e4260` command handler. That
handler sends payload tags 0 and 1 here; the matched spatial-update method
sends command 5. The owner class is not identified.

The switch contains commands 0, 1, 4, 5, `0x0B`–`0x0E`, `0x15`, `0x16`,
`0x18`, `0x19`, and `0x1A`. Ghidra's diagnostic strings label commands 0, 4,
and 5 as Aircraft Control move, attack, and return-to-base paths. Other
observed branches select a target from payload element 2, update receiver
state/coordinate fields, adjust values by 400 within limits, or construct a
helper record and enqueue event `0x102`. The field units and exact contracts
are unresolved, so those operations are described from the recorded reads,
writes, and calls rather than assigned broader gameplay meanings.

ObjDiff 3.8.0 verifies the range at 100.0% and checks 128 mapped operands
under the recorded Visual C++ 6.0 SP5 profile. No emulator runtime test was
performed.
