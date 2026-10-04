# Shared nested-state cleanup helper

`FUN_587E98A0` is a 216-byte function in the installed, mapped `Main.dll`.
ObjDiff 3.8.0 verifies its reconstructed instruction stream byte-for-byte and
checks all six mapped operand targets.

## Evidence from the original

The mapped resource initializer `FUN_58800360` calls it after operations on
the child at receiver offset `+0x10524`; the battle-object update
`FUN_587FD890` also calls it after a virtual update call. Both set `ECX` to the
owning receiver.

The helper conditionally dispatches `FUN_58788620` on child `+0x21C4C`, invokes
`FUN_58902C20` and `FUN_58902C70` on child `+0x10524`, and releases nested
state. It walks `+0x2179C` entries with a `0xD4` stride, frees each non-null
pointer at entry offset `+0xCC` through `FUN_5897CC42`, clears those slots,
then frees and clears the allocation at `+0x218A4`. It also frees and clears
`+0x218A8`. At the end, it compares fields on a nested object at child `+0x3C`
and may call that object's first virtual method with argument `1`.

## Uncertainty and validation

The receiver and child types, allocation schemas, virtual method contract, and
the lifecycle condition are unknown. Caller evidence places the function on
resource-initialization and battle-update paths, but does not establish a
visible rendering effect. One conditional branch reaches shared code at
`0x587E9980`, outside this function's indexed 216-byte body. No runtime or
emulator test was performed.
