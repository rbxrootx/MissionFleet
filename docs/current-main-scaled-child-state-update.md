# Current Main scaled child-state update

`FUN_587B08C0` is a 61-byte x86 helper in the pinned mapped `Main.dll`. Its
source preserves the complete instruction stream; the verifier confirms there
are no mapped operand targets.

## Caller evidence

Three byte-matched callers use this helper. Type-0x05 initializer
`FUN_587B2A40` calls it at `0x587B2BE5` with bits 4 through 10 of the copied
word at receiver `+0x226`. Both `FUN_587A6220` and ship-map child-state builder
`FUN_588D84D0` call it in their second child-update pass only when child field
`+0x100` equals `0x40000000`; they derive the input from two selected-record
bytes through the same stack-local lookup table.

## Behavior visible in the mapped instructions

The helper multiplies the signed 32-bit input by 10 and stores that result at
receiver `+0xB8`. It stores the sign-corrected arithmetic quotient by 8 at
`+0x13C`. If the scaled value is nonzero, it writes `0x40000000` to `+0x100`
and `0x70` to `+0xDC`. The zero path leaves those two fields unchanged. It
returns with `ret 4`.

The exact instruction stream and match record are in
[`src/client-current/Main/FUN_587b08c0.cpp`](../src/client-current/Main/FUN_587b08c0.cpp).
The callers' enclosing paths are described in the [type-0x05 initializer
notes](current-main-type-05-record-child-state.md), [32-slot builder
notes](current-main-record-backed-32-slot-builder.md), and [ship-map screen
constructor notes](current-main-ship-map-screen-constructor.md).

## Unresolved details

The semantic names and units for `+0xB8`, `+0x13C`, `+0x100`, and `+0xDC`, the
purpose of the divide-by-eight result, the `+0x100` call-site gate, the
stack-local lookup table, and the visible result remain unknown. This is an
exact instruction reconstruction supported by three matched callers, with no
emulator runtime comparison.
