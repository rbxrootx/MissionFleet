# Current Main dual-record child setup

`FUN_587B1F90` is a 151-byte x86 helper in the pinned mapped `Main.dll`. Its
source preserves the complete mapped instruction stream.

## Caller evidence

Two byte-matched child builders call this helper. `FUN_587A6220` passes two
pointers read from selected-record entries at offsets `+0xF0C` and `+0xF10`.
The ship-map child-state builder `FUN_588D84D0` calls it at `0x588D88D3` with
two per-entry local pointers.

## Behavior visible in the mapped instructions

Each argument is handled independently. For a nonnull pointer, the helper
copies `0x2B` DWORDs (`0xAC` bytes) into receiver `+0x270` or `+0x324`. It
checks the input byte at `+0x9B` masked to its low nibble. If that value is
`1`, it selects `0x50`; otherwise it selects the word at input `+0x9C`. It
then calls `FUN_5876BF40(0x3FFF, selected_word, 0x78)` and stores the returned
value at receiver `+0x26C` or `+0x320`. A null input skips that half without
changing its associated receiver fields. The function returns with `ret 8`.

The exact instruction stream and match record are in
[`src/client-current/Main/FUN_587b1f90.cpp`](../src/client-current/Main/FUN_587b1f90.cpp).
The callers' surrounding logic is described in the [32-slot builder
notes](current-main-record-backed-32-slot-builder.md) and [ship-map
constructor notes](current-main-ship-map-screen-constructor.md).

## Unresolved details

The copied record schema, meanings of its `+0x9B` and `+0x9C` fields, contract
and ownership of values returned by `FUN_5876BF40`, and runtime visible effect
remain unknown. This is an exact byte reconstruction grounded in both callers;
no emulator runtime comparison has been made.
