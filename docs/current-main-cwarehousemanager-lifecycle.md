# Current Main `CWarehouseManager` lifecycle and vtable

The word at `0x589A2220` points to the complete-object locator at
`0x589AAC0C`; its TypeDescriptor at `0x589CDDE4` names
`.?AVCWarehouseManager@@`. The table address point is `0x589A2224` and has
seven entries through `0x589A223C`. `FUN_588FB9B0` installs this vtable and is
called by `FUN_5878AF40` at `0x5878CB29`. This constructor was already byte
matched. The seven-entry table is now fully byte matched as well.

`FUN_588FB6E0` is the 308-byte destructor body at
`[0x588FB6E0, 0x588FB814)`. It reinstalls the manager vtable, conditionally
releases and clears children at `+0x60`, `+0x64`, `+0x6C`, `+0x70`, `+0x74`,
`+0x78`, `+0x7C`, `+0xA8`, `+0xAC`, `+0xB0`, and `+0xB4` through virtual
slot 0 with flag 1, calls `FUN_58902C10`, and restores the saved
exception-list pointer. `FUN_588FBED0` is its 30-byte deleting wrapper at
`[0x588FBED0, 0x588FBEEE)`. Ghidra indexes 27 bytes through `pop esi`; the
mapped stream includes `ret 4` at `0x588FBEEB`. The wrapper tests bit 0 of its
stack flag and conditionally calls `FUN_5897CC42(this)` before returning this.

The formerly unmatched virtual methods are:

- `FUN_588FC640` (`+0x04`, 293 bytes) handles state `0x500`, updates the
  manager state fields, dispatches child methods, and calls a global-object
  callback.
- `FUN_588FC770` (`+0x08`, 187 bytes) transitions state `0x200` to `0x400`,
  calls child helpers, and conditionally invokes the same global callback.
- `FUN_588FD520` (`+0x0C`, 620 bytes) moves stored coordinates toward target
  coordinates for state codes `0x100`, `0x200`, and `0x400`; it also updates
  timeout state and dispatches nodes in the list at `+0x3C`.
- `FUN_588FC830` (`+0x10`, 161 bytes) walks that list with an event argument,
  compares event coordinates with stored values, and handles event
  `0x100/0x1B` by calling the manager's `+0x08` slot.
- `FUN_588FD180` (`+0x18`, 924 bytes) dispatches on values `2`, `61000`,
  `62000`, and `0xF231`–`0xF233`, compares child identities, changes mode
  state, gathers child bytes, and emits child callbacks.

The remaining slot, `FUN_58902FE0` at `+0x14`, was already byte matched. The
seven added functions in this slice match the installed `Main.dll` byte-for-byte
(2,523 bytes); the wrapper's corrected extent adds three bytes to the
inventory total. Helper contracts, child-field meanings, state semantics,
event identifiers, and runtime behavior remain unresolved. Ghidra could not
recover the indirect jump table in `FUN_588FD520`, so its terminal transfer
remains a control-flow uncertainty. No emulator runtime test has been
performed.
