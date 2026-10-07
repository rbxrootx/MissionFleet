# Current Main type-0x06 record child-state initializer

`FUN_587B4A30` is a 315-byte x86 routine in the pinned mapped `Main.dll`.
Its source preserves the mapped instruction stream exactly and is checked by
the repository's pinned ObjDiff/clang-cl verifier.

## Caller evidence

Two byte-matched functions call this routine. `FUN_587A6220` calls it in the
branch gated by the observed record byte `0x06`, after `FUN_587B58F0` prepares
the child, and then calls `FUN_587B58C0`. The ship-map child-state builder
`FUN_588D84D0` calls it at `0x588D8B48`. Both call sites pass the pointer at
`+0x100C`, a local 42-DWORD record, optional 45-DWORD record data, a
per-entry pointer, an encoded word, and the caller word at `+0x350`.

## Behavior visible in the mapped instructions

The routine sets receiver `+0x3904` to `100` if the shared pointer is null.
Otherwise it writes `20` when the byte at shared-pointer `+0x35C` equals the
42-DWORD record word at `+6`, or `100` when they differ. It stores the final
caller word at receiver `+0x18C`, the supplied per-entry pointer at `+0x138`,
and copies 42 DWORDs to `+0x190`.

It initializes XOR-`0xAAAAAAAA` values at `+0x154` and `+0x158`; when optional
record data exists, it derives the latter from that record's word at `+0x9C`,
masked to five bits. It calls `FUN_587B1850`, `FUN_587B4910` with the supplied
encoded value, and `FUN_587B4100`. If optional data exists, it copies 45 DWORDs
to `+0x238`, stores the copied word at `+0x2D8` into `+0x38FC`, and calls
`FUN_5876BF40` with the observed values `13000`, the word at `+0x2E2`, and
`0x6E`, storing the result at `+0x2F4`. Finally it clears `+0x2F8` and
`+0x3908`, looks up the first copied DWORD through `FUN_58778D60`, and writes
the returned word at `+0xA0` to `+0x390C`, or zero if the lookup returns null.

The initializer's call to `FUN_587B4910` at `0x587B4ADB` is now independently
matched byte-for-byte. That helper compares the supplied value against the low
nibble of receiver word `+0x228`, updates fields `+0xE0`, `+0xF8`, `+0x104`,
and `+0x2EC`, and uses verified `FUN_587A15E0` for two global-context updates.
See the [helper evidence](current-main-type-06-child-state-helper.md) for its
exact range, second matched caller, and unresolved field semantics.

The exact instruction stream and match record are in
[`src/client-current/Main/FUN_587b4a30.cpp`](../src/client-current/Main/FUN_587b4a30.cpp).
Related type-0x05 child setup is recorded in the [companion initializer
notes](current-main-type-05-record-child-state.md); both callers are covered
by the [32-slot builder notes](current-main-record-backed-32-slot-builder.md)
and [ship-map constructor notes](current-main-ship-map-screen-constructor.md).

## Unresolved details

The record schema, meanings of discriminator `0x06` and receiver `+0x3904`,
ownership of the optional 45-DWORD data and created resource, meanings of the
XOR-masked values, helper contracts, and visible result remain unknown. This
is an exact x86 instruction reconstruction with Ghidra and two caller paths;
it is not a portable model or emulator runtime test.
