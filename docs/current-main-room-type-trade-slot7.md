# Main.dll CRoomTypeTrade vtable slot 7

The constructor installs vtable `0x589A0EE8`; fresh Ghidra data references and
the mapped table place `FUN_588D2080` at slot 7 (`0x589A0F04`, vtable offset
`+0x1C`). RTTI resolves the vtable to `.?AVCRoomTypeTrade@@`. The fresh edge
export contains the vtable data reference and no direct call edge to this
method, so the known entry path is virtual dispatch.

The fresh Ghidra body has two exact ranges: `[0x588D2080, 0x588D2169)` with 233
bytes / 72 instructions, then `[0x588D2170, 0x588D21A4)` with 52 bytes / 25
instructions. The 7-byte gap is outside the function; the method totals 285
bytes / 97 instructions. The mapped code passes the pointers at `this+0x50`
and `this+0x54`, zero, and sizes `0xC4` and `0x50` to byte-matched thunk
`FUN_5897CC48`. It writes fixed integer values and masked flags through those
pointers. The thunk jumps through external callback slot `0x5898C1FC`, whose
captured target is outside Main.dll; the arguments and later buffer use suggest
zero initialization, but the callback contract is unresolved.

The method passes the NUL-terminated key `MESSAGESTRING_ROOMTYPE_TRADE` at
`0x5899A5C4` through `[0x5898C030]`. In the captured map that slot points to
`0x59A98290`. The installed Main imports `UtilsGetLanguageText` from
`FleetMissionUtils.dll`, whose installed export is at RVA `0x8290`; the
captured pointer equals that export if the utility DLL's load base is
`0x59A90000`. That module base is absent from the capture manifest, so the
symbol identification is a strong inference. The returned bytes are copied
through the buffer at `this+0x50`, with `0x30` bytes including the terminator
(at most 47 payload bytes). The method uses `ret 4` but does not read its stack
argument.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not recovered high-level C++. The two pointer
structures, field meanings, stack argument, callback contracts, and visible
effect remain unresolved. This is static client, Ghidra, RTTI, and installed
PE import/export evidence; no emulator or visual runtime test was performed.
