# Main.dll CRoomTypeSelectMode construction

Fresh Ghidra references show byte-matched `FUN_588C9280` calling
`FUN_588D1030` at `0x588CAB8D` after `FUN_5897CC4E` accepts resource `0x88`.
The matched caller is identified from its installed vtable as
`CRoomSettingManager`. Its mapped instructions set up the constructor
arguments and store the returned pointer at receiver `+0x18C`. The focused
verifier checks this gate, setup, call, and result store against mapped bytes.

Ghidra identifies the child vtable as `CRoomTypeSelectMode::vftable`. Its body
is 192 completely decoded instructions / 638 bytes in the exact range
`[588D1030, 588D12AE)`. It calls `FUN_588D02E0` for base initialization, then
selects two records through fields at `DAT_58A2474C+0x164` and
`DAT_58A2474C+0x18C`. It copies six DWORDs from each selected record into child
objects at receiver indices `0x18` and `0x19`, and writes a value from the first
selected record at `+8` through child index `0x17` at `+0x74`.

One additional control and a five-iteration loop construct six sprite-data
controls through `FUN_5875DDA0`. Each path checks resource `0xAC` through
`FUN_5897CC4E` and calls `FUN_58902D20(0x101)`. All seven outgoing call
instructions target byte-verified functions. The focused verifier checks full
instruction coverage, the exact body extent, the matched caller gate and
pointer store, and the complete outgoing transfer set.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not a recovered high-level C++ implementation.
The global table and selected-record schemas, field meanings, resources `0x88`
and `0xAC`, control value `0x101`, and controls' appearance or actions remain
unresolved. The third child's value read follows a fallback that can set its
source pointer to zero; its valid-state conditions need runtime evidence. No
original-client visual or emulator runtime test was performed.
