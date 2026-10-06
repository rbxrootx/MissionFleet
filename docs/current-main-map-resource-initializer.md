# Current Main map and harbor resource initializer

`FUN_58800360` is a 3,057-byte routine in the installed, mapped `Main.dll`.
Ghidra reports two body ranges, `0x58800360..0x58800F26` and
`0x58800F2A..0x58800F53`, separated by a three-byte gap. ObjDiff 3.8.0 verified
both ranges byte-for-byte and checked 104 mapped operand records.

## Evidence from the original

Ghidra records two direct callers. `FUN_58800FD0` selects an identifier from
the current mode and a global table, calls this routine with that identifier,
then continues renderer setup. `FUN_58804A40` copies a `0xC4`-byte record into
its receiver, sets mode flags, derives an identifier from the record or a
receiver field, and calls this routine.
The matching `FUN_58804A40` body and its screen-state setup are documented in
[the map-event initializer evidence](current-main-58804a40-map-event-initializer.md).

The body returns when the child at receiver offset `+0x10524` is null. It then
resets related state and selects a map path from the supplied identifier.
Literal paths include `CMFBT_Mission%d.CMF`, `CMFBT_OPCV%d.CMF`,
`CMFBT%d.CMF`, `CMFBT2000.CMF`, `FlyHigh.CMF`, and `HobbitWar.CMF`. A separate
conquest branch selects `conq_war_*.CMF` and loads `harbor.spr` plus a
faction-suffixed `harbor_*.spr` through `FUN_588f3d70`.

The function resolves map/layout records through `FUN_58748270` and related
helpers, initializes a 400,000-byte child buffer with bounded resource-table
selections, follows mode-specific resource/layout branches, updates dimensions
in the child record, and invokes the child's virtual method at offset `+0x20`
with `1000`. This describes the observed paths and fields; it does not infer
the undocumented CMF schema or the final rendered layout.

## Uncertainty and validation

The identifier contract, exact game-mode names, CMF structure, faction and
resource index meanings, child-buffer consumers, and runtime appearance remain
unknown. No emulator launch or original-client visual comparison was run.
