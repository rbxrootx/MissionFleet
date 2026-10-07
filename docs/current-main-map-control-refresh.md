# Current Main.dll shared map-control refresh

The fresh `Main.dll` Ghidra export places this eight-function direct-call
closure under `FUN_587CEF70`. The code populates the observed `MAP_NAME_*`
labels, stores two selector values, resets child-control state, reads records
from three global tables, and updates child flags from the current selectors.
The names identify map choices, while their control identities and several
selector meanings remain unresolved.

`FUN_587CEF70` passes its receiver's 16-bit value at `+0xA06`, a supplied value,
and the receiver's value at `+0xEC` to `FUN_588CBA30`. It then calls virtual
methods through children at `+0xA00` and `+0xADC`. The shared helper resets
state through `FUN_588946B0`, clears two buffers, stores the selectors at
`+0x60` and `+0x62`, and enters `FUN_588CB0E0`. That function updates two
record-backed controls and branches on the supplied selector and receiver
state. `FUN_588C8A50` refreshes additional child controls from tables rooted at
`DAT_58A24690`, `DAT_58A24638`, and `DAT_58A24640`; it applies observed count
thresholds, copies the selected records, sets child state bits, and delegates
selection flags to `FUN_588C8520`.

`FUN_58796AF0` registers the original labels `MAP_NAME_RANDOM`,
`MAP_NAME_NOWAYOUT1`, `MAP_NAME_NOWAYOUT2`, `MAP_NAME_DOKDO`,
`MAP_NAME_BLUE_OCEAN`, `MAP_NAME_WOO_SAN_GUK`, `MAP_NAME_ICE_AGE`,
`MAP_NAME_MINE_LANDS`, `MAP_NAME_HUNTERS`, `MAP_NAME_AMERIGO`,
`MAP_NAME_NEW_WORLD`, `MAP_NAME_TORPERS_TOMB`, and `MAP_NAME_RACE`; it also
registers `MAP_NAME_OCCUPATION` when its second argument is nonzero. The
numeric values and callback calls are present in the mapped instructions. The
purpose of `FUN_588CE320`'s callback and value remains unknown.

Fresh Ghidra body export confirms these exact ranges and complete instruction
coverage. Together they total 3,894 bytes:

| Function | Bytes | Ghidra ranges |
| --- | ---: | ---: |
| `58796AF0` | 390 | 1 |
| `587CEF70` | 64 | 1 |
| `588946B0` | 363 | 1 |
| `588C8520` | 169 | 1 |
| `588C8A50` | 1,839 | 3 |
| `588CB0E0` | 838 | 2 |
| `588CBA30` | 176 | 1 |
| `588CE320` | 55 | 1 |

The per-range addresses and instruction counts are preserved in
`config/NF2_2026/main-shared-control-refresh-body-ranges.tsv`. All eight
instruction-stream sources recompile to 100.0% objdiff matches, with 103
mapped operand targets checked.

Ghidra found nine external control-flow sites from nine functions. Five callers
are byte-verified: the event dispatcher `FUN_587BB700` enters the root;
`CPageChannelBattle_ControlMenuScreen` method `FUN_587D0940` and
`CPageResultOfBattle_ControlMenuScreen` methods `FUN_5880C1B0` and
`FUN_5880C4E0` reach the shared reset helper; `FUN_587EF910` also reaches that
helper from a mapped vtable slot whose class is not yet identified. Four
callers remain unmatched. Their exact sites and current verification status
are recorded in `config/NF2_2026/main-shared-control-refresh-callers.tsv`.

`tools/verify_current_main_shared_control_refresh.py` checks the mapped image
hash, exact Ghidra body ranges, all eight byte matches, closure reachability,
the 49 verified boundary transfers, and all nine external sites. Reproduce the
byte comparison with:

```text
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58796AF0 --only 587CEF70 --only 588946B0 --only 588C8520 --only 588C8A50 --only 588CB0E0 --only 588CBA30 --only 588CE320
python tools/verify_current_main_shared_control_refresh.py
```

The receiver fields, selector IDs, global table schemas, callback contracts,
and exact rendered appearance are not fully recovered. The evidence confirms
the original labels, field accesses, control updates, and mapped caller paths;
no original-client visual or runtime test was performed.
