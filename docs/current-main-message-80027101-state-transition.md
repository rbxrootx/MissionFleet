# Current Main message `0x80027101` state transition

This pass reconstructs the state path reached by message `0x80027101` in the
installed current-client `Main.dll`. It adds 13 functions and 3,118 exact
bytes across 17 Ghidra body ranges. ObjDiff 3.8.0 reports a 100.0% match for
all 13 emitted functions, including the mapped operand checks.

## Evidence from the original code

Byte-matched `FUN_587bb700` compares EAX with `0x80027101` at `0x587C07EA`.
The equality branch at `0x587C07F5` enters the block ending in a direct call
to `FUN_588fcef0` at `0x587C123B`. The focused verifier checks these exact
instructions against the mapped image and confirms that both call-site
addresses are inside the matched dispatcher.

The root clears receiver fields `+0x94` and `+0x98` and sets bit 1 at
`+0x24`. A nonzero second argument is passed through the status-message
helpers and returns. A zero value sends status 0 and calls
`FUN_588fc8e0`, which publishes event `0x80015101` through
`FUN_58970c70`. The root then branches on its third argument. The zero path
calls `FUN_587e0d80`, `FUN_588bcfd0`, and `FUN_587da120`; values 1 and 2
call `FUN_588fc050`. All non-early-return paths reach the 100-record clear in
`FUN_588feb40`.

The helper closure includes a three-slot linked-entry rebuild, list removal
and child-flag updates, and a status-text selector. The observed item and
child fields remain raw offsets in the evidence catalog. In particular,
`FUN_588f7580` maps observed codes to literal or localized message text;
code `0x16` selects “You cannot trade DD-MP.” The neighboring matched
warehouse-manager and trade-panel methods provide context, but do not prove
all server-side or UI semantics of this message.

## Validation and remaining uncertainty

`config/NF2_2026/warehouse-80027101-state-body-ranges.tsv` records the exact
Ghidra ranges and per-range instruction counts. The subsystem verifier checks
those ranges against the matched catalog, confirms every closure transfer
lands in the closure or another byte-verified function, and rejects
unmatched direct targets. It also checks the dispatcher compare, branch, and
root call.

The receiver type and field meanings, argument units, localization policy,
server contract, virtual callback effects, and visible runtime result remain
unresolved. No emulator or live-server test was run, so this verifies a
byte-matched client subsystem and its original call path rather than a
bootable end-to-end client.

Repeat the checks with:

```powershell
rtk python tools\verify_current_main_message_80027101_state.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 5877CBE0 --only 587E0D80 --only 5881E430 --only 5881F2F0 --only 588BC600 --only 588BCFD0 --only 588F4500 --only 588F4527 --only 588F7580 --only 588FC050 --only 588FC8E0 --only 588FCEF0 --only 588FEB40
```
