# Current Main `CPannelFactoryHelp` vtable coverage

Ghidra labels the vtable at `0x5899E8E0` as `CPannelFactoryHelp::vftable`.
The table contains 11 non-null method entries. Each entry below matches its
captured machine-code body at ObjDiff 3.8.0 100.0%; the extents include the
verified return or tail-dispatch epilogues.

| Slot | Entry | Bytes | Evidence |
| ---: | --- | ---: | --- |
| `+0x00` | `FUN_588504a0` | 30 | [complete epilogue](current-main-factory-help-epilogue-boundaries.md) |
| `+0x08` | `FUN_58852cd0` | 58 | [state reset](current-main-factory-help-state-reset.md) |
| `+0x0C` | `FUN_58853010` | 540 | [state update](current-main-factory-help-state-update.md) |
| `+0x18` | `FUN_58852d10` | 80 | [event callback](current-main-factory-help-event-callback.md) |
| `+0x38` | `FUN_588536a0` | 30 | [complete epilogue](current-main-factory-help-epilogue-boundaries.md) |
| `+0x3C` | `FUN_588561f0` | 880 | [display-state method](current-main-factory-help-display-state-method.md) |
| `+0x40` | `FUN_58853870` | 262 | [transition handler](current-main-factory-help-transition-handler.md) |
| `+0x44` | `FUN_58857850` | 1,519 | [child-chain dispatch](current-main-factory-help-child-chain-dispatch.md) |
| `+0x48` | `FUN_58856560` | 2,344 | [child event method](current-main-factory-help-child-event-method.md) |
| `+0x4C` | `FUN_58854440` | 378 | [complete epilogue](current-main-factory-help-epilogue-boundaries.md) |
| `+0x50` | `FUN_58853c20` | 763 | [parameter event method](current-main-factory-help-parameter-event-method.md) |

Together the 11 virtual methods total 6,884 byte-matched bytes. The separate
2,583-byte constructor at `FUN_588522b0` installs this vtable and loads
`FactoryHelp.spr`.

The class is complete at the function-byte level for all entries in this
vtable. The control names, event meanings, resource-frame meanings, and
emulator appearance remain unresolved; no in-game behavior test was performed.
The child-mode selector and its byte-matched direct-call descendants are
documented in
[the child-state selection trace](current-main-factory-help-child-state-selection.md).
The `+0x38` deleting wrapper also calls the 817-byte child cleanup routine
`FUN_58853230`; its exact mapped ranges and field-release behavior are recorded
in [the cleanup-helper notes](current-main-factory-help-cleanup-helper.md).
