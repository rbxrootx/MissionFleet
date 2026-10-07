# Current Main message `0x80022001` auxiliary child refresh

This slice adds four byte-matched functions totaling 2,212 bytes across five
fresh Ghidra body ranges from the installed `Main.dll`. ObjDiff 3.8.0 reports
100.0% for all four functions.

## Evidence from the original code

The already byte-matched dispatcher `FUN_587bb700` checks message
`0x80022001` at `0x587BFF12` and branches to the handler at `0x587C071D`.
Within that branch, the dispatcher calls `FUN_58809780` at `0x587C075B`, then
the separately reconstructed state-application entry `FUN_5880C710` at
`0x587C076D`. `FUN_58809780` calls `FUN_5884F4E0`, the root of this slice.
The focused verifier checks the message compare, branch, both neighboring
calls, and that their sites are inside the matched dispatcher.

Fresh Ghidra 12.1.3 output shows `FUN_5884F4E0` clears six payload words at
receiver offsets `+0x1A4` through `+0x1B8`, clears flag bit 0 on a fixed set of
children, then handles a zero count or clamps a nonzero count to four. It copies
six bytes per item into the receiver and looks up records using
`FUN_58779840`, which scans 0x574-byte-stride entries and compares a 16-bit key.
For each selected record, the root copies or formats text through
`FUN_5875F7C0`; that helper writes a bounded, terminated string into a
0x100-byte indexed slot. The root also selects related resource records,
processes rows at a 0x100-byte stride, measures and copies child text, updates
flag bits, and writes the observed values `0xC8C8C8` and `0xFF`.

The exact body ranges are recorded in
`config/NF2_2026/main-message-80022001-auxiliary-child-refresh-body-ranges.tsv`:

| Function | Ghidra range(s), end exclusive | Bytes | Instructions |
|---|---|---:|---:|
| `FUN_5875F7C0` | `[0x5875F7C0, 0x5875F801)` | 65 | 27 |
| `FUN_58779840` | `[0x58779840, 0x58779884)` | 68 | 25 |
| `FUN_58809780` | `[0x58809780, 0x5880978B)` | 11 | 2 |
| `FUN_5884F4E0` | `[0x5884F4E0, 0x5884FC1D)`, `[0x5884FC20, 0x5884FCF7)` | 2,068 | 639 |

The last function has a three-byte gap between its two Ghidra ranges. The
complete root closure has 16 outgoing direct calls to four previously
byte-matched functions, no unmatched direct transfers, and no missing body
bytes. This closure is separate from the sibling state-application closure
documented in
[`current-main-message-80022001-state-application.md`](current-main-message-80022001-state-application.md).

## Validation and remaining uncertainty

The focused verifier validates range coverage and instruction counts against
the mapped image, byte-match catalog ranges, reachability of all four functions
from the root, the 16 verified call boundaries, and the dispatcher route. The
client matcher reports 100.0% byte identity for all four functions and checks
34 relocation targets.

The packet schema, receiver/control types, resource-row meanings, text labels,
coordinate units, flag and color meanings, and callback behavior remain
unresolved. This is evidence for the original instructions, not proof of their
visible in-game result. No emulator or live-client test was run.

Repeat the checks with:

```powershell
rtk python tools\verify_current_main_message_80022001_child_refresh.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 5875F7C0 --only 58779840 --only 58809780 --only 5884F4E0
```
