# Current Main helper for message `0x80020FA2`

`FUN_58755170` is shared by the verified dispatchers `FUN_587bb700` and
`FUN_588c1650`. Both reach it while handling message case `0x80020FA2` and load
`ECX` from the shared object at `0x58A245E0`. The first dispatcher stores a
newly obtained pointer there immediately before the call; the second calls
`FUN_58755070` first. The callsites are `0x587BFB0E` and `0x588C3558`.

## Original-code behavior

The method treats `ECX` as its receiver. If receiver field `+0x18` is nonzero,
it compares the pointed object's `+0x5C` field with receiver `+8`, copies the
receiver value when it is larger, and advances receiver `+0x18` by `0x88`. If
receiver `+0x0C` is zero, the row-processing path is skipped.

Otherwise the method constructs a local record containing marker `0x4D42`,
uses `0x5897152E`, `0x5897CC48`, and `0x5897CD4C` to prepare and copy data,
walks 16-byte records, updates indexed receiver state, and calls
`FUN_587B9530` for selected entries. The bytes support these operations, but
the record schema and resource meaning are unknown. `0x4D42` spells `BM` in
little-endian order, so a bitmap-style structure is plausible but unconfirmed.

## Corrected boundary and verification

The indexed Ghidra size was 930 bytes and stopped at `0x58755512`, in the middle
of the epilogue instruction `83 C4`. The mapped image supplies the immediate
`54` and following `C3`: `add esp,0x54; ret` ends at `0x58755514`. Twelve
`CC` padding bytes follow, and the next indexed function starts at
`0x58755520`. The corrected body is therefore 932 bytes, excluding padding.
ObjDiff 3.8.0 matches all 932 bytes and checks 18 mapped address operands.

Source reconstruction:
[`FUN_58755170.cpp`](../src/client-current/Main/FUN_58755170.cpp). Caller
context is recorded in the verified event-dispatch sources
[`FUN_587bb700.cpp`](../src/client-current/Main/FUN_587bb700.cpp) and
[`FUN_588c1650.cpp`](../src/client-current/Main/FUN_588c1650.cpp).

## Uncertainties

The receiver type, meaning of fields `+0x0C`, `+8`, and `+0x18`, record layout,
ownership of copied data, helper contracts, and visible result are unresolved.
No emulator test was performed.
