# Current Main `CPageFactory_ControlMenuScreen` vtable coverage

Ghidra identifies the vtable at `0x5899B824`; the constructor `FUN_587dba00`
installs it. The captured table contains seven function pointers before the
following string data. All seven entries have verified complete machine-code
matches:

| Slot | Entry | Bytes | Evidence |
| ---: | --- | ---: | --- |
| `+0x00` | `FUN_587da7d0` | 30 | [epilogue boundary](current-main-control-menu-epilogue-boundary.md) |
| `+0x04` | `FUN_587e2e80` | 502 | [entry method](current-main-control-menu-entry-method.md) |
| `+0x08` | `FUN_587da7f0` | 417 | [child transition](current-main-control-menu-child-transition.md) |
| `+0x0C` | `FUN_587e44c0` | 5,224 | [state update](current-main-control-menu-state-update.md) |
| `+0x10` | `FUN_587deb30` | 1,112 | [event handlers](current-main-control-menu-event-handlers.md) |
| `+0x14` | `FUN_587d7ec0` | 583 | [event handlers](current-main-control-menu-event-handlers.md) |
| `+0x18` | `FUN_587e3080` | 4,296 | [selection refresh](current-main-control-selection-refresh.md) |

The seven vtable bodies total 12,164 byte-matched bytes. The separate
12,589-byte constructor is also verified, for 24,753 matched bytes across the
class constructor and its vtable methods. This is function-byte coverage; the
event meanings, control names, and in-game behavior remain partly unresolved.

The menu's entry method calls the separately matched
[`FUN_588ed750` layout refresh](current-main-control-menu-layout-refresh.md);
the rebuild routine is its other verified caller.
