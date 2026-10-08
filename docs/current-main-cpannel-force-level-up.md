# Installed Main `CPannelForceLevelUp` virtual methods

The installed `Main.dll` contains an RTTI-backed primary vftable at
`0x5899EDF8`. Its complete-object-locator pointer at `0x5899EDF4` resolves to
`0x589A8CF0`; the type descriptor at `0x589CCECC` names
`.?AVCPannelForceLevelUp@@`. The three previously unmatched methods in that table are
`FUN_58870170` at slot `+0x00`, `FUN_58871870` at `+0x0C`, and
`FUN_58871990` at `+0x18`. The adjacent pointer at `0x5899EE14` begins the
separate `CPannelForceManager` RTTI table, so it is outside this slice.

The three methods and their direct-call closure add **11 byte-identical
functions / 5,098 bytes**. Fresh Ghidra reports complete instruction coverage
across the 19 ranges recorded in
[`main-cpannel-force-level-up-body-ranges.tsv`](../config/NF2_2026/main-cpannel-force-level-up-body-ranges.tsv).
The body and call-edge exports compare the full independent inventories with
the targeted Ghidra pass. ObjDiff 3.8.0 verifies all 11 functions at 100%.
The focused check is `rtk python
tools/verify_current_main_cpannel_force_level_up.py`.

## Observed behavior and caller evidence

`FUN_58870170` calls the cleanup routine `FUN_5886FFC0`. If the low bit of its
second argument is set, it then calls matched thunk `FUN_5897CC42` with the
object pointer. `FUN_5886FFC0` installs the class vftable, checks a fixed set
of child fields, dispatches each non-null field through its first vtable entry
with a deletion flag, clears the field, and calls matched `FUN_58902C10`.

`FUN_58871870` acts when bit 2 of the observed word at `+0x24` is set and the
state bits equal `0x100` or `0x400`. It moves the value at `+0x58` toward the
value at `+0x28`, by at most `0x20` per call. At equality, the `0x100` path
changes state bits and calls `FUN_58871290`; the `0x400` path changes the state
bits to `0x500` and clears two low flags. It then walks the linked list at
`+0x3C` and calls each node's vtable slot `+0x0C`.

`FUN_58871990` calls `FUN_58871290` only when its third argument is `2` and
its second argument equals the receiver field at `+0x60`; it returns `0` on
either path.

`FUN_58871290` looks through up to 32 global slots for a record whose field at
`+0x94` is nonzero, clears that field, derives table indices from record
fields `+0xF4` and `+0xAE`, and updates two child objects from bounded global
tables. It chooses a row count of one or eleven and reaches the included text
and child-refresh helpers. `FUN_58870190` updates child fields and eight
associated text fields from the selected record. `FUN_588702B0` selects
versioned global entries under observed flag, count, and pointer checks, then
updates child data and text state.

The remaining helpers implement the exact observed inputs to that path:
`FUN_5876CCC0` scans indexed records, filters by the short at `+0x35E`, builds
a shared text buffer through `FUN_5876CA70`, and returns the buffer or null.
`FUN_5876CA70` copies from mapped text data according to an observed selector,
stopping at zero or eight bytes. `FUN_58779A40` and `FUN_58779B80` test values
against two mapped tables and return `1` or `0`.

The root methods are anchored by their vtable data references in fresh Ghidra.
Outside the class table, byte-matched `FUN_5886BA60` calls `FUN_5876CCC0` at
`0x5886BFAB` and `0x5886C09D`; byte-matched `FUN_5877B1F0` calls
`FUN_58779A40` at `0x5877BCCA` and `FUN_58779B80` at `0x5877BD5D`. Open
`FUN_5877B0F0` reaches those same predicate helpers at `0x5877B0FA` and
`0x5877B119`. The mapped direct-transfer scan finds 37 transfers to already
verified code and no unresolved direct targets within the selected closure.

## Uncertainties

The class name and vftable slots are established by the original RTTI and
pointer array, but field names, child types, table schemas, state meanings,
row meanings, and visible effects are not recovered. The node calls through
vtable slots `+0x0C` and `+0x00` are indirect, so their concrete targets and
ownership contracts remain unknown. The cleanup routine contains two observed
checks of the field at `+0x13C`; the reason for that repeated check is unknown.
The behavior of `FUN_5897CC42` beyond the matched call from the wrapper is
outside this reconstruction.

These results validate an exact static instruction match against the installed
client. They do not validate an emulator launch, server interaction, or live
panel behavior.
