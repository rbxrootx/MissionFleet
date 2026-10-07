# Main.dll CRoomTypeSkirmish constructor

Fresh Ghidra references show byte-matched `FUN_588C9280` calling
`FUN_588D1C50` at `0x588CACB7` after `FUN_5897CC4E` accepts resource `0x70`.
The matched caller is identified from its installed vtable as
`CRoomSettingManager`. It sets up the constructor arguments and stores the
return at receiver `+0x1AC`. The focused verifier checks the gate, setup, call,
and result store against the installed mapped bytes.

Fresh Ghidra body and edge exports show 89 instructions / 275 bytes in the
exact range `[588D1C50, 588D1D63)`. The constructor calls byte-matched
`FUN_588D02E0`, installs vtable `0x589A0EC0`, and returns the receiver with
`ret 0x14`. The vtable's complete-object locator leads to RTTI descriptor
`.?AVCRoomTypeSkirmish@@`, identifying the class independently.

The constructor reads count and pointer fields at `DAT_58A24758+0x164` and
`DAT_58A24758+0x18C`, selects records 0 and 1, and copies six DWORDs from each
record's offsets `+0x10` through `+0x24` into children at receiver offsets
`+0x60` and `+0x64`. It writes a value from the first record at `+8` through
the child at `+0x5C+0x74`. The table and child schemas remain unidentified.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not a recovered high-level C++ implementation.
The resource `0x70`, selected-record schema, field meanings, child behavior,
and gameplay effect remain unresolved. On the third-value fallback path, the
mapped instructions zero EAX and then read `[EAX+8]`, an absolute read from
address `0x8`; its runtime validity and meaning need investigation. No
original-client runtime or visual emulator test was performed.
