# `CSpecBoard_Equip` vtable and helper path

This slice matches the equipment spec-board class installed by
`FUN_588F15F0`. The constructor itself was verified earlier; this note records
the RTTI table, its seven methods, directly connected helpers, boundary fixes,
and the remaining gaps in behavioral understanding.

## RTTI and construction evidence

The constructor installs the `CSpecBoard_Equip` vtable address point at
`0x589A1758`. The complete-object locator is at `0x589AA604`, and the type
descriptor at `0x589CDB08` names `.?AVCSpecBoard_Equip@@`. The parent
`CPageFactory_ControlMenuScreen` constructor `FUN_587DBA00` calls
`FUN_588F15F0` at `0x587DBBE9`, allocates `0x4D0` bytes for the child, and
stores it at parent offset `+0xDBC`. The two-range constructor already matches
5,868 bytes with 192 mapped operands checked; its details and the nine-byte gap
are documented in the [constructor evidence](current-main-spec-board-equipment-constructor.md).

All seven function slots are now byte-matched:

| Slot | Entry | Bytes | Observed behavior |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_588EF600` | 30 | Calls the class cleanup body, conditionally releases the object, and returns `this` with `ret 4`. |
| `+0x04` | `FUN_588EFC40` | 179 | Changes observed receiver state, calls `FUN_58907990`, and invokes an indirect child method. |
| `+0x08` | `FUN_588EFD00` | 171 | Calls `FUN_587D7820` and `FUN_58907990`, then invokes an indirect child method. |
| `+0x0C` | `FUN_588EFA20` | 544 | Tests receiver flags, calls `FUN_58902E10` and `FUN_587B7400`, and reaches an indirect tail dispatch. |
| `+0x10` | `FUN_588F1160` | 559 | Routes control events through hit-test and repeated-control helpers. |
| `+0x14` | `FUN_5880AF30` | 91 | Short receiver-state branch; returns with `ret 0x0C`. |
| `+0x18` | `FUN_588F0460` | 863 | Dispatches the observed event path through repeated-control and child-state helpers; returns with `ret 0x0C`. |

The scalar deleting destructor calls cleanup body `FUN_588EF260` (898 bytes),
which reaches base cleanup helper `FUN_58902C10`. Other matched helper paths
include `FUN_587B7400` to `FUN_58907820`, `FUN_587D7820`, `FUN_587D8840` to
`FUN_587B98B0`, and predicate `FUN_588E65D0` (true when the observed word at
record offset `+6` equals 7). The repeated-control functions
`FUN_588EFF30` and `FUN_588F0150` are called by both event slots `+0x10` and
`+0x18`; their lower-level helpers `FUN_58908170`, `FUN_58908650`, and
`FUN_589086F0` are included. `FUN_58907820` uses x87 floating-point operations
and observed vtable offsets `+0x4C`, `+0x0C`, and `+0x10`; it calls the
six-byte thunk `FUN_5897CC90` through callback slot `0x5898C228`.

One direct downstream helper, `FUN_5897CCA0`, called from `FUN_58907820`, is
not yet matched. It remains outside this verified slice.

## Byte validation and extent corrections

All 20 functions added here pass `verify_client_matches.py`: 6,699 bytes at
100.0% objdiff match, with 186 mapped relocation targets checked. Sources use
the pinned clang-cl 19.1.4 instruction emitter and match the captured mapped
image.

Three indexed extents ended before executable epilogues. `FUN_588EF600` was
extended from 27 to 30 bytes to include its `ret 4`; `FUN_587D7820` was extended
from 669 to 677 bytes to include five register pops and `ret 4`; and
`FUN_588EFF30` was extended from 530 to 536 bytes to include its register/stack
restore and return. The following `int3` bytes remain excluded. Together these
corrections add 17 identified code bytes to the inventory.

The original 726-byte indexed extent of `FUN_588F0150` ends with bytes `FF FF`
at offsets `+0x2D4..+0x2D5`, which Capstone does not decode as a valid x86
instruction. The source preserves both bytes verbatim and the full 726-byte
extent passes objdiff. Whether they are embedded data or an unidentified
instruction sequence remains unresolved.

The equipment labels, resource meanings, event payload schema, indirect target
contracts, and visible behavior remain unknown. No emulator runtime or visual
test was performed.
