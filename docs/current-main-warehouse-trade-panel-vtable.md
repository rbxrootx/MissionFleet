# Current Main `CWarehouseTradePanel` vtable and destruction path

The complete-object locator referenced immediately before address point
`0x589A23E4` resolves to TypeDescriptor `0x589CDEB0`, whose name is
`.?AVCWarehouseTradePanel@@`. The seven captured vtable entries are
`FUN_58900250`, `FUN_58900270`, `FUN_58903420`, `FUN_58822F10`,
`FUN_589002B0`, `FUN_58902FE0`, and `FUN_58900340`. The inherited entries at
slots `+0x08`, `+0x0C`, and `+0x14` already matched; this pass matched the other four
panel-specific entries and its destructor body, adding 840 exact bytes.

The matched constructor `FUN_58900400` installs the table and is called by the
matched warehouse-manager constructor at `0x588FBC2B`. The slot `+0x00`
deleting wrapper `FUN_58900250` calls destructor body `FUN_58900040`. The
destructor reinstalls the panel vtable, conditionally releases and clears
sixteen child pointers through virtual slot 0 with delete flag 1, then calls
`FUN_58902C10` before restoring its saved exception-list state. The wrapper's
Ghidra ranges omit the reachable three-byte `add esp, 4` continuation. Its
complete mapped body is 30 bytes through `ret 4` at `0x5890026B`, before two
`INT3` alignment bytes.

Slot `+0x04` (`FUN_58900270`) calls the matched base helper `FUN_58903400`,
dispatches value `0x64` through global object `DAT_58A24584+0x30`, resets the
controls at receiver offsets `+0x74` and `+0x78`, and tail-jumps through the
control at `+0x7C`. Slot `+0x10` (`FUN_589002B0`) checks receiver state bit 1,
queries children `+0x74` and `+0x78` through virtual slot `+0x28`, updates bit
0 in child `+0x80`, and walks the linked structure rooted at `+0x3C` through
virtual slot `+0x10`. Slot `+0x18` (`FUN_58900340`) handles event argument 2,
compares another argument against receiver fields `+0x98` and `+0xA0`, checks
children `+0x74` and `+0x78`, and selects virtual update and message paths.

The RTTI table, constructor call, wrapper-to-destructor call, vtable slots,
and mapped boundaries are checked by
`tools/verify_current_warehouse_trade_panel.py`. Exact function bytes and
relocations are checked by `tools/verify_client_matches.py`.

The child fields, event arguments and `0x64` value, list-node type, state-bit
meanings, message `0x11`, helper contracts, and user-visible effects remain
unresolved. The subsystem has not been exercised in the emulator.
