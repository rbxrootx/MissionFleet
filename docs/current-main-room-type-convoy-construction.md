# Main.dll CRoomTypeConvoy construction

Fresh Ghidra references show byte-matched `FUN_588C9280` calling
`FUN_588CC610` at `0x588CABCB`. The matched caller is identified from its
installed vtable as `CRoomSettingManager`. Its mapped instructions first check
resource `0x8C` through `FUN_5897CC4E`, set up the child-constructor arguments,
call `FUN_588CC610` on success, and store the returned pointer at receiver
`+0x198`. The focused verifier checks this gate, argument setup, call, and
result store against the installed mapped bytes.

Ghidra identifies the child vtable as `CRoomTypeConvoy::vftable`. Its body is
209 completely decoded instructions / 688 bytes in the exact range
`[588CC610, 588CC8C0)`. It calls `FUN_588D02E0` for base initialization, then
reads selected records through fields at `DAT_58A24638+0x164` and
`DAT_58A24638+0x18C`. It copies six DWORDs from each selected record into child
objects at receiver indices `0x18` and `0x19`, then writes another value
through the child at index `0x17`.

Two loops construct seven sprite-data controls through `FUN_5875DDA0`: four
controls in the first loop and three in the second. Each path checks resource
`0xAC` through `FUN_5897CC4E` and calls `FUN_58902D20(0x101)`. All seven
outgoing call instructions target byte-verified functions. The focused verifier
checks complete instruction coverage, the exact body extent, the matched
caller gate and pointer store, and the complete outgoing transfer set.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not a recovered high-level C++ implementation.
The global table and selected-record schemas, field meanings, resources `0x8C`
and `0xAC`, control value `0x101`, and controls' appearance or actions remain
unresolved. The third child value read follows a bounds/pointer fallback, but
Ghidra's output then reads through the selected pointer; its validity
conditions need runtime evidence. No original-client visual or emulator
runtime test was performed.
