# Current Main control-menu event handlers

The `CPageFactory_ControlMenuScreen` vtable at `0x5899B824` contains the
following two verified event methods:

| Slot | Entry | Bytes | ObjDiff operands |
| ---: | --- | ---: | ---: |
| `+0x10` | `FUN_587deb30` | 1,112 | 57 |
| `+0x14` | `FUN_587d7ec0` | 583 | 9 |

`FUN_587deb30` gates on state bit `0x02`, searches the child chain at `+0x3C`
through child virtual slot `+0x10`, then branches on the event field at `+4`
relative to `0x100`. It returns the object field at `+0x34` for handled paths
and zero on inactive or unmatched paths. Its body ends with `ret 4`.

`FUN_587d7ec0` gates on state bit `0x01`, traverses the child chain at `+0x4C`,
and sends three stack arguments through child virtual slot `+0x14` when the
child word at `+0x26` is negative. It advances using the link at `+0x48` and
ends through a `ret 0x0C` path.

ObjDiff 3.8.0 verifies both complete bodies at 100.0%. The event arguments,
child statuses, and user-facing effects remain unresolved; neither method was
tested in the emulator.
