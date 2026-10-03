# `CPannelTradingShipInfo` initializer

`FUN_588bf4c0` is a 4,536-byte `__thiscall` initializer in the installed 2026
`Main.dll` mapping. Ghidra shows it initializing a `CMenuScreen` base and then
assigning `CPannelTradingShipInfo::vftable`. When no resource pointer is
provided, it loads `ITFTRD.spr`; it also loads `ShipStructureMarket.spr`,
creates sprite-backed child controls from those tables, stores the child
pointers in receiver slots, and updates child flag bits. The resource indices
and exact visual mapping are not established.

Ghidra records two direct callers. `FUN_588b61e0` (`CPannelTrade`) calls it at
`0x588B7E4C` and stores the returned pointer at parent slot `+0x170`.
`FUN_588fa1c0` (`CWarehouseItemInfo`) calls it at `0x588FA285` and stores the
returned pointer at `+0x9C`. Both paths check a `0x14C`-byte allocation before
the call. These callsites establish reuse in two containing objects; child
labels/actions, the complete receiver/base layouts, and runtime appearance
remain unresolved. No emulator runtime test was performed.

Ghidra identifies two body ranges:

| Range | Bytes |
| --- | ---: |
| `0x588BF4C0..0x588C0069` | 2,986 |
| `0x588C0070..0x588C067D` | 1,550 |

The six bytes at `0x588C006A..0x588C006F` contain no decoded instructions.
Ghidra records an unconditional jump from `0x588C0068` and a conditional jump
from `0x588C00DE`, both targeting the second range at `0x588C0070`; the gap is
excluded from the function body. The generated source matches the mapped
original byte-for-byte under the recorded Visual C++ 6.0 SP5 profile and
ObjDiff 3.8.0, with 125 relocation operands checked.
