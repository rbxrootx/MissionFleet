# Current Main `CForce` selector-driven child setup

`FUN_5877adc0` is a 700-byte method called from the verified `CForce`
constructor `FUN_5877cc30` and from the verified event dispatcher
`FUN_587bb700`. The constructor call occurs during child initialization. The
dispatcher call is in its `0x8001020E` branch when the message field at
`param_2+0x10` is `0x180`, after a call to `FUN_5877dd30`. Both callers pass a
receiver in `ECX` and one stack argument; the method uses `ret 4`.

## Evidence from the original code

The method gates on receiver field `+0xA4`. On selector-driven paths it clears
or sets child pointers at `+0x1D0` and `+0x1D4`, and invokes virtual methods on
those children when the pointers are nonnull. It requests a 0x20-byte block
through `FUN_5897CC4E`, checks a count at `[0x58A248D0]+0x170`, reads an
indexed table through `[0x58A248D0]+0x194`, and selects values using
`FUN_587B7350`. A second branch checks `(receiver[+0xA4] & ~1) == 2` and
invokes virtual slot `+0x0C` on the two guarded child pointers with argument
zero.

The 700-byte body has two complete `ret 4` paths. Its final return is at
`0x5877B079..0x5877B07B`; the next indexed function begins at `0x5877B080`.
ObjDiff 3.8.0 matches all 700 bytes and checks 28 mapped address operands.
Source: [`FUN_5877adc0.cpp`](../src/client-current/Main/FUN_5877adc0.cpp).
Related evidence identifies the constructor as `CForce` and documents the
separate shared control refresh in the [constructor notes](current-main-force-constructor.md)
and [control-refresh notes](current-main-force-control-refresh.md).

## Uncertainties

The selector meanings, resource/control identities, receiver and child types,
table schema, allocator contract, pointer ownership and lifetime, and exact
event effect remain unknown. The `CForce` association follows its verified
constructor call; no emulator runtime test was performed.
