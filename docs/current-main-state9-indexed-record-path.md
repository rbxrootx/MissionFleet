# Main.dll state-9 indexed-record path

The installed FleetMission `Main.dll` now has a byte-identical reconstruction
of the nine-function direct-call closure rooted at `FUN_58788880`: 5,454 mapped
bytes across 12 exact Ghidra body ranges. The closure was selected from a
matched caller and validated against the local installed-client capture. This
is an instruction-stream match; it does not establish recovered original C++
source or prove the path runs correctly in the emulator.

## Caller evidence

Byte-matched `FUN_587F8760` compares its state word with 9 at `0x587F8D55` and
branches away at `0x587F8D59` when the value differs. In the state-9 path, it
loads the `FUN_58788880` stack argument from `[EBP+0x10524]`, loads the receiver
into ECX from `[EBP+0x21C4C]`, and calls the root at `0x587F8D6C`. After the
call, it stores `DAT_58A0ADD8` at receiver offset `+0x218D0` and scans a global
array beginning at `0x589BAAB0` in `0x742`-word steps for an entry equal to
`DAT_58A0ADD0`.

The caller's subsequent table scan is evidence for this state path only. The
exact user-visible purpose of state 9 is not established.

## Observed root behavior

Fresh Ghidra decompilation shows `FUN_58788880` stores its second argument at
receiver offset `+0x914` and declares a 33-integer local occupancy array, then
zeroes its first 0x80 bytes. It scans two 0x80-byte global regions in four-byte
steps, selecting records whose leading byte is 5 and whose word at offset `+2`
is nonzero. The index
calculation uses `DAT_58A0ADD8`, constants `0x11` and `0x13`, a pointer/capacity
pair reached through receiver `+0x14`, and four receiver counters at
`+0x818..+0x824`.

For selected records, it requests 0xBC-byte allocations and passes record fields,
the stored argument, and selected indices to `FUN_58785300`. It appends the
resulting pointers to a vector rooted at receiver `+0x864`, marking occupied
slots in the local array. It also calls `FUN_5882F0B0` and `FUN_587867E0` with
`DAT_58A0ADD0`. When `DAT_58A0B194` is nonzero, a later loop requests 0x70-byte
objects through `FUN_58783D20`, then stores pointers in a second vector-like
region whose decompiled base appears to be receiver `+0x870`. It grows vectors
through `FUN_588F6890`. Ghidra does not clearly
recover the base local used in this later loop, so that receiver-relative
interpretation remains tentative.

These descriptions record observed offsets, values, allocation sizes, and calls.
They do not assign names or types to the global tables, receiver fields,
constructed objects, or vector schemas.

## Matched closure

The byte-identical functions are `FUN_58783D20`, `FUN_587847D0`,
`FUN_58785200`, `FUN_58785300`, `FUN_58788880`, `FUN_587B0BB0`,
`FUN_587B1640`, `FUN_587B3090`, and `FUN_5882F0B0`. Their sizes sum to 5,454
bytes. The frozen exact ranges are in
[`main-state9-body-ranges.tsv`](../config/NF2_2026/main-state9-body-ranges.tsv).

The independent open-closure audit found nine direct external call sites from
seven functions, three matched external caller functions, 59 call sites to
already verified functions, no unresolved internal targets, and no Ghidra body
coverage issues. The focused verifier checks each catalog segment against the
frozen Ghidra ranges, decodes every instruction in those ranges, confirms the
full direct-call closure, and rechecks the matched caller's state gate and
argument setup.

## Validation and remaining gaps

The nine functions passed `verify_client_matches.py` at 100.0% under ObjDiff
3.8.0, including 138 encoded operand targets across the closure. The focused
structural audit is `tools/verify_current_main_state9_records.py`.

The meanings of the two global record regions, tag and index calculations,
receiver counters and vectors, allocation types, helper contracts, and the
visible role of state 9 remain uncertain. No live-client or emulator runtime
test was performed.
