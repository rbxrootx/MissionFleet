# Installed MMX surface pixel operations

This slice covers one clipped pixel-processing method for each of the two
RTTI-identified surface classes in the installed 2026 `Main.dll`:

| Class | Method | Vtable | Body range | Bytes |
| --- | --- | --- | --- | ---: |
| `CMMXHigh565Surface` | `FUN_5896cf50` | `0x589A2BD8 + 0x20` | `0x5896CF50..0x5896DD9A` | 3,659 |
| `CMMXHigh555Surface` | `FUN_5896e150` | `0x589A2C00 + 0x20` | `0x5896E150..0x5896EF9A` | 3,659 |

The RTTI Complete Object Locators at `0x589AB45C` and `0x589AB4A8` point to
TypeDescriptors naming `CMMXHigh565Surface` and `CMMXHigh555Surface`,
respectively. Ghidra's direct-reference audit places each method in the
corresponding vtable slot at `+0x20`; neither method has a direct code caller.
These facts establish the class association and virtual dispatch path.

Both Ghidra bodies compare and clip coordinates against receiver bounds at
`+0x1C` and `+0x20`. In one branch, the method builds a clipped rectangle and
dispatches through a host-surface virtual function at vtable offset `+0x14`.
Other branches obtain row stride and buffer origins, then run scalar or MMX
packed-pixel loops using `DAT_58A284DC`, `DAT_58A284E4`, `DAT_58A284EC`,
`DAT_58A284F4`, and `DAT_58A284FC`. The 555/565 class identity is directly
supported by RTTI; the exact parameter roles, buffer layout, mask-to-channel
mapping, and user-visible render result are unresolved.

Both generated sources match their mapped bodies byte-for-byte under the
recorded Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0. ObjDiff checked 113
mapped operand targets per method, for 7,318 verified bytes total. No emulator
runtime test was performed.
