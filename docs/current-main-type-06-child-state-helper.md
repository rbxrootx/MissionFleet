# Current Main type-0x06 child-state helper

`FUN_587B4910` is a 123-byte helper called by the already matched
type-0x06 record-backed initializer `FUN_587B4A30` at `0x587B4ADB`. The matched
ship-map update method `FUN_588DEB30` also calls it at `0x588DEE55`. Fresh
Ghidra records a third incoming call from currently unmatched `FUN_587A74C0` at
`0x587A7550`.

The helper reads the low four bits of receiver word `+0x228`, compares that
value with its supplied 32-bit request as signed integers, and stores the
selected value at `+0xE0`. It writes `0x40000000` to `+0xF8` when the request is
nonzero and zero otherwise. It stores the request XOR `0xAAAAAAAA` at `+0x2EC`
and `0xAAAAAAAA` at `+0x104`. When receiver `+0x88` equals the word at
`[0x58A247F8] + 4`, it calls verified `FUN_587A15E0` for both address/value
pairs.

The fresh Ghidra export covers one range, `[0x587B4910, 0x587B498B)`, with 33
instructions and 123 instruction bytes. ObjDiff 3.8.0 verifies all 123 bytes at
100%. The generated instruction stream is
[`FUN_587b4910.cpp`](../src/client-current/Main/FUN_587b4910.cpp); its range
manifest is
[`current-main-type-06-child-state-helper-body-ranges.tsv`](../config/NF2_2026/current-main-type-06-child-state-helper-body-ranges.tsv).
The [focused verifier](../tools/verify_current_main_type_06_child_state_helper.py)
checks complete mapped instruction coverage, both outgoing transfers to
verified code, the two matched incoming callsites, and the unmatched caller's
callsite.

The units and meanings of the receiver fields and request, the global-context
comparison, the callback contract, and the visible effect remain unknown. The
initializer evidence ties this helper to the observed type-0x06 record path,
but does not recover the wider record schema. No client or emulator runtime
test was performed.
