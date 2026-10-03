# Current Main virtual state and position update

`FUN_5877ec80` is a 3,468-byte `__fastcall` function in the locally captured
current-client `Main.dll`. Ghidra reports twelve discontiguous body ranges:

| Range | Bytes |
| --- | ---: |
| `0x5877EC80..0x5877F393` | 1,812 |
| `0x5877F3A0..0x5877F3D2` | 51 |
| `0x5877F3E0..0x5877F475` | 150 |
| `0x5877F480..0x5877F4B2` | 51 |
| `0x5877F4C0..0x5877F592` | 211 |
| `0x5877F5A0..0x5877F5FD` | 94 |
| `0x5877F600..0x5877F686` | 135 |
| `0x5877F690..0x5877F6C2` | 51 |
| `0x5877F6D0..0x5877F72D` | 94 |
| `0x5877F730..0x5877F7A6` | 119 |
| `0x5877F7B0..0x5877F806` | 87 |
| `0x5877F810..0x5877FA74` | 613 |

The source emits only those ranges. ObjDiff 3.8.0 matches all 3,468 bytes and
checks 160 mapped operand targets.

Ghidra's function-reference audit records a data reference at `0x58996A14`.
The nearby-vtable dump identifies a table at `0x58996A08` with this function
pointer at slot `+0x0C`. The preceding pointer at `0x58996A04` leads to a
Complete Object Locator whose TypeDescriptor name is `.?AVCHCB_Airborne@@`.
Other nearby vtables also contain the same function pointer, so this evidence
does not establish exclusive ownership by that class.

The function checks receiver flags, branches on the byte at `+0x60`, changes
receiver fields including `+0x64`, obtains indexed animation resources through
`FUN_587317e0`, and calls `FUN_58903290` with coordinate arguments derived from
receiver fields. Further coordinate arithmetic uses fields at `+0x80`, `+0x84`,
`+0x88`, and `+0x8C`. These are observed control-flow and data accesses; state
codes, structure fields, and animation identities remain unknown. No emulator
runtime or visual test was performed.
