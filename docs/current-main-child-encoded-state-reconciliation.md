# Current Main child encoded-state reconciliation

`FUN_587B1850` is a 144-byte x86 helper in the pinned mapped `Main.dll`. Its
source preserves the complete mapped instruction stream.

## Caller evidence

Three byte-matched functions call this helper. `FUN_587B2A40` calls it at
`0x587B2BC0` after deriving two XOR-`0xAAAAAAAA` values from its copied
type-0x05 record. `FUN_587B4A30` calls it at `0x587B4ACF` after preparing the
corresponding pair for its type-0x06 record path. The verified
[weapon-fire handler](current-main-weapon-fire-event.md), `FUN_587B4B70`,
calls it before updating its own masked receiver field at `+0x2EC`.

## Behavior visible in the mapped instructions

The helper zeros receiver `+0x98` and writes `0xAAAAAAAA` to `+0x104`. When
receiver `+0x88` equals the pointer stored at `[0x58A247F8]+4`, it calls
`FUN_587A15E0` with the address of `+0x104` and value `0xAAAAAAAA`.

It then XORs the dwords at `+0x154` and `+0x158` with `0xAAAAAAAA` and adds
the results as a 32-bit value. Under the same global-pointer comparison, it
calls `FUN_587A15E0` with the address of `+0x9C` and the derived sum. It stores
that sum at `+0x9C` regardless of the comparison. If the sum is nonzero, it
writes `0x40000000` to `+0xF8`.

The exact source and match record are in
[`src/client-current/Main/FUN_587b1850.cpp`](../src/client-current/Main/FUN_587b1850.cpp).
The helper participates in both the [type-0x05 child initializer](current-main-type-05-record-child-state.md)
and [type-0x06 child initializer](current-main-type-06-record-child-state.md).

## Unresolved details

The encoded values' meanings and units, roles of offsets `+0x98`, `+0x104`,
`+0x9C`, and `+0xF8`, global-context comparison, and `FUN_587A15E0` callback
contract remain unknown. The callers establish shared use in record setup and
the weapon-fire handler, but no emulator runtime comparison has been made.
