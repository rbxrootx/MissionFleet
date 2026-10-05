# Current Main 32-slot child update helper

`FUN_5877C660` is a complete 649-byte body in the installed 2026 `Main.dll`
capture, ending with `ret 8` at `0x5877C8E6`. Its candidate matches every
instruction byte; ObjDiff 3.8.0 checks all 34 mapped operand targets.

The two byte-verified callers establish separate entry paths:

- `FUN_588E9880` walks 32 pointer fields beginning at receiver `+0x9A4` and
  calls this function for each nonnull entry at `0x588E989A`, passing first
  argument `-1` and second argument `0`.
- `FUN_587BB700` calls it at `0x587BC73B` after a successful lookup through
  `FUN_588F4090`. It passes two sign-extended 16-bit fields from the incoming
  record and then calls `FUN_588ECEA0`.

The body uses receiver fields `+0x5E` and `+0xB8` and reads a lookup-manager
pointer from global `0x58A247F4`. Separately, the first caller establishes a
32-pointer table at its receiver's `+0x9A4`. With first argument `-1`, the
body looks up the existing `+0xB8`
value, clears the corresponding table link when found, refreshes through
`FUN_588E8570`, masks the receiver's `+0x5E` field with `0x0FFF`, sets `+0xB8`
to `-1`, and returns 1. If the lookup is absent, it returns 0. With another
first argument, it resolves that value through `FUN_588F4060`, reconciles the
old and new table links, writes a table pointer, synchronizes the packed
`+0x5E` bits and `+0xB8` field, calls layout/update helpers, refreshes, and
returns a status.

The receiver and manager class identities, meanings of the table entries,
record fields and packed bits, packet-word semantics, and visible/gameplay
effects remain unresolved. The 32-entry count is established by the verified
caller; domain labels for those entries are not. No emulator runtime test was
performed.
