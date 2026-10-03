# `CPannelForceClassChange` message handler

`FUN_58866880` is a 4,864-byte `__thiscall` method in the installed 2026
`Main.dll` mapping. The vtable entry at `0x5899EC64` points to it at slot
`+0x10`; the complete-object locator and TypeDescriptor identify the class as
`CPannelForceClassChange` (`.?AVCPannelForceClassChange@@`). Ghidra's direct
reference audit found that vtable data reference and no direct callsite, so the
virtual dispatch caller is not established.

The method reads a message identifier from `param_2 + 4` and has paths for
`0x100`, `0x200`, `0x201`, and `0x203`. In the `0x201` path it scans child
controls, checks the cursor against their bounds, and updates selection state;
guarded paths call `FUN_5876BAF0` with `0x130` or `0x1CB`. The `0x200` path
scans hover candidates and updates child controls through helper routines. The
`0x100` path can dispatch through a parent vtable entry, while `0x203` can
reset a selection field and call `FUN_588667A0`. These are observed control
flows; message names, resource meanings, and visible labels are unknown.

Ghidra identifies five code ranges totaling 4,864 bytes:

| Range | Bytes |
| --- | ---: |
| `0x58866880..0x58866A8C` | 525 |
| `0x58866A90..0x5886718C` | 1,789 |
| `0x58867190..0x588672BC` | 301 |
| `0x588672C0..0x5886790C` | 1,613 |
| `0x58867910..0x58867B8B` | 636 |

Four three-byte gaps separate the ranges. They contain no decoded
instructions; branches target the next range at `0x58866A90`, `0x58867190`,
`0x588672C0`, and `0x58867910`. The gap bytes are therefore excluded from the
function body as Ghidra reports it.

The generated source matches the mapped original byte-for-byte under the
recorded Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0. Verification covers all
five ranges and checks 185 recorded relocation operands. No emulator runtime
test was performed. The class layout, base classes, event contracts,
control-to-resource mapping, and runtime appearance remain unresolved.
