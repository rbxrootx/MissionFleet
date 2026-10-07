# `CPannelCommunicatorMemo` constructor

`FUN_5884B8A0` is the 1,081-byte constructor for the installed client's
`CPannelCommunicatorMemo` vtable. Fresh Ghidra output records one incoming call:
the byte-verified `CPannelCommunicatorConfigMemoManage` constructor
`FUN_5883F4C0` calls it at `0x588403F3` and stores the returned child in its
receiver at `+0xD8`. The parent constructor's construction path is documented in
[`current-main-communicator-config-memo-manage.md`](current-main-communicator-config-memo-manage.md).

The decompilation shows `FUN_5884B8A0` initialize a `CMenuScreen` base, write
the supplied coordinates to receiver slots `+0x50` and `+0x54`, set the next
two observed fields to `0x100` and zero, and install the derived vtable. It
then creates three children through `FUN_58731C60`. Each child uses an indexed
value from the table at `DAT_58A24768+0x18C` when the corresponding table-count
gate passes (`0x192`, `400`, or `0x191`); otherwise the child helper receives
zero. Their returned pointers are stored at receiver slots `+0x60`, `+0x64`,
and `+0x68`.

Two calls to `FUN_5875DDA0` select offsets `+0x400` or `+0x340` from a resource
base at `DAT_58A24768+400`, subject to observed count/null gates, and receive
coordinates derived from the constructor arguments. Three calls to
`FUN_58761090` receive `DAT_58A24534`, coordinate pairs derived from those same
arguments, and color values `0xFFFFFF` and `0x646464`. The constructor clears
bit 1 in the returned objects' flags at `+0x24`, calls `FUN_58748E40` with
`0x28`, `200`, and `0x28`, writes `0x28` at the middle object's `+0x9C`, then
conditionally reads a value from `DAT_58A246D8+0x194+0x2C` into receiver slot
`+0x80`. These are observed calls, values, and offsets; they do not identify
the visible controls or assets.

The source candidate matches the complete mapped body under ObjDiff 3.8.0 at
100%, with all 1,081 bytes and 43 relocation operands checked. Capstone decodes
the audited range as 340 instructions. The focused verifier checks its one
matched incoming call, all 26 outgoing calls against the fresh Ghidra transfer
manifest, the verified status of every callee, and the parent's matched
callsite. The committed range manifest is
[`../config/NF2_2026/current-main-5884b8a0-communicator-memo-body-ranges.tsv`](../config/NF2_2026/current-main-5884b8a0-communicator-memo-body-ranges.tsv);
its call audit is
[`../config/NF2_2026/current-main-5884b8a0-communicator-memo-transfers.tsv`](../config/NF2_2026/current-main-5884b8a0-communicator-memo-transfers.tsv).

The exact child-control names, visible text, resource identities, table schema,
and meanings of the observed object fields are unresolved. The `0x40` argument
role and actual emulator appearance have not been tested. This slice establishes
a byte-identical native constructor, not a playable visual result or recovered
high-level C++ source.
