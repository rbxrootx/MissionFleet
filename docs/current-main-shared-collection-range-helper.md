# Current Main shared collection range helper

`FUN_58849980` is a 92-byte helper in the installed 2026 `Main.dll` capture.
Its entire indexed extent, `0x58849980..0x588499DC`, matches byte-for-byte;
ObjDiff 3.8.0 also checks both mapped call targets.

Three verified callers reach it at four sites:

- `FUN_58838CB0` calls it at `0x58839047` while its state-6 branch processes
  the receiver's collection at `+0x258`; that caller's evidence is in
  [the stateful refresh notes](current-main-stateful-record-refresh-58838cb0.md).
- `FUN_58839460` calls it at `0x58839586` in the observed proposal-record
  insertion/update path described in
  [the proposal notes](current-main-squadron-fleet-join-proposal.md).
- `FUN_588EAB30` calls it at `0x588EAD7B` and `0x588EADC8`. The collection's
  identity in that caller is not established.

The helper takes a receiver and three stack arguments. Instructions read the
receiver fields at `+0x0C` and `+0x10`, calculate the remaining range from a
caller-supplied pointer, and conditionally call `0x5897CC54` with derived
values. They then decrement the receiver's `+0x10` field by four, clear an
output dword, apply a bounds check that can call `0x5897CC72`, and write two
values to the output pair. This supports describing a four-byte range
compaction/update operation; it does not identify the exact collection or
callee contracts.

The receiver and output types, collection ownership, full roles of the two
helper calls, and visible/gameplay effect remain unknown. This is static
instruction and caller evidence; no emulator runtime test was performed.
