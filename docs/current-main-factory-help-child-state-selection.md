# Current Main `CPannelFactoryHelp` child-state selection

`FUN_58852D60` computes the child mode used by the factory-help panel. Its
direct-call closure adds `FUN_588504C0`, `FUN_5879DCF0`, and `FUN_5879D4F0`.
Fresh Ghidra 12.1.3 exports cover all four functions: 2,210 bytes across
seven exact body ranges and 627 instructions. The 1,360-byte helper at
`FUN_588504C0` occupies four non-contiguous ranges; the range manifest is
[`main-factory-help-child-state-body-ranges.tsv`](../config/NF2_2026/main-factory-help-child-state-body-ranges.tsv).

## Evidence from the original code

The `CPannelFactoryHelp` RTTI type descriptor names the class, and its vtable
at `0x5899E8E0` points slot `+0x0C` to the already byte-matched state updater
`FUN_58853010`, which calls `FUN_58852D60` at `0x58853038`. The same vtable
points slot `+0x18` to the byte-matched event callback `FUN_58852D10`; that
callback calls `FUN_588504C0` at `0x58852D3A`.

The state selector reads panel and record fields, stores the observed
candidate mode at `+0x276`, and uses the prior value at `+0x274` when its
candidate is `-1` or the gate at `+0x278` is zero. For a changed mode it calls
`FUN_588504C0`; it always calls the already matched `FUN_58850A70` visibility
path afterward. The selector's observed numeric candidates range from 0 to
14. No friendly names are inferred for those modes.

The transition helper compares the requested mode with `+0x274`, derives a
group from the mode, and changes bit 0 at each child object's `+0x24` as well
as its `+0x50` value while traversing the 15 groups of three entries and
paired controls. It then calls the existing position and transition helpers.
Its mapped direct-call descendants check a child object's `0x1F00` state
mask, map a subset of modes to helper values, and repeat an existing action
up to a requested count while its next operation succeeds.

## Uncertainties and validation status

The numeric modes, global and record field meanings, child roles, and visible
panel effect remain unresolved. This is static analysis of the installed
`Main.dll`; it has not been tested interactively in the emulator.

The fresh Ghidra range manifest, matched incoming callsites, RTTI slots, and
direct-call closure are checked by
[`verify_current_main_factory_help_child_state.py`](../tools/verify_current_main_factory_help_child_state.py).
Regenerate the instruction bodies with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-factory-help-child-state-body-ranges.tsv
```

Then run `verify_client_matches.py` for the four addresses and the custom
closure verifier before recording the byte-match results.
