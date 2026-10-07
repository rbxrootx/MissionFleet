# Current Main message `0x80022001` state application

This pass adds five byte-matched functions totaling 2,212 bytes across eight
Ghidra body ranges from the installed current-client `Main.dll`. ObjDiff 3.8.0
reports 100.0% for all five functions.

## Evidence from the original code

Byte-matched dispatcher `FUN_587bb700` compares EAX with `0x80022001` at
`0x587BFF12`. Its equality branch at `0x587BFF1D` targets the handler at
`0x587C071D`; the handler calls `FUN_5880c710` at `0x587C076D`. The focused
verifier checks all three instructions against the mapped image and confirms
they lie in the already byte-matched dispatcher.

The same dispatcher branch calls the auxiliary child-refresh path at
`0x587C075B`; its four-function direct-call closure is documented in
[`current-main-message-80022001-auxiliary-child-refresh.md`](current-main-message-80022001-auxiliary-child-refresh.md).

Ghidra shows the handler passes the shared object at `0x58A245A4` in ECX and
the payload in EBX. The state-application function sets flags on that object
and its child at `+0x428`, applies payload-selected child flags, and updates
32 records through `FUN_588c7110`. It also stores payload-derived values
after XOR with `0xAAAAAAAA` and branches on observed global mode fields. The
new closure includes those two encoded-state helpers, the 32-entry child
updater, and the callback helper reached on one state path.

The source files preserve the decoded instructions and bytes for the exact
Ghidra ranges recorded in
`config/NF2_2026/current-main-80022001-state-body-ranges.tsv`. The open-call
closure audit finds 30 direct transfers to 14 previously verified functions,
no unresolved direct targets, and no Ghidra body-coverage gaps.

## Validation and remaining uncertainty

The focused verifier checks the body ranges and per-range instruction counts,
closure reachability, every direct transfer target, and the dispatcher
compare/branch/call. The client matcher reports 100.0% byte identity for all
five functions and checks 70 mapped operand targets.

The payload schema, receiver and child types, XOR encoding, state-value
meanings, and visible UI effect remain unresolved. `FUN_588890f0` ends in an
indirect virtual jump, so its runtime destination is not known from this
static path. No live-server or emulator test was run; this verifies the
client-side state path, not end-to-end behavior.

Repeat the checks with:

```powershell
rtk python tools\verify_current_main_message_80022001_state.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 5880C710 --only 588890F0 --only 5888CC50 --only 5888CC70 --only 588C7110
```
