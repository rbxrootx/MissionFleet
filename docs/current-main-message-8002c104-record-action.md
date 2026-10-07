# Current Main `0x8002C104` record-action path

The installed `Main.dll` handler `FUN_58882D80` is already byte-matched. Its
fresh Ghidra decompilation shows a switch on the message code; case `0x8002C104`
subtracts one from the upper half of `param_4` and routes nine payload actions
to `FUN_58881C90`. The matched handler makes those direct calls at
`0x58882F7B`, `0x58882F94`, `0x5888359B`, `0x588835B5`, `0x588835D1`,
`0x588835EB`, `0x58883605`, `0x5888393E`, and `0x5888395A`. The associated
action arguments in Ghidra pseudocode are `0, 1, 2, 5, 8, 3, 6, 4, 7`.

## Behavior visible in the original code

`FUN_58881C90` looks up the payload's first byte through `FUN_588F4090`. On a
successful lookup it XOR-decodes the 16-bit value at record offset `+0x5A`
with `0xAA`. Its switch groups actions `0, 8, 9, 10` to a decrement of 10,
actions `1` through `4` to a decrement of 1, and actions `5` through `7` to a
decrement of 5. The nine observed dispatcher arguments fall within those
groups. If the decoded value is smaller than the selected decrement, the
handler sends observed identifier `0x1139` through `FUN_5887A3F0`.

Otherwise it calls `FUN_5877CB40` with values derived from record offsets
`+0x58`, `+0x5A`, and `+0x5C`, copies receiver `+0x80` to `+0x84`, and calls
`FUN_58880F70(1)`. Under the observed positive child-count gate it calls
`FUN_5887B4B0` with the action, loops through `FUN_5887BD30` for the stored
count, then calls `FUN_58908830` five times. Missing-record and completed
action branches conditionally send observed identifiers `0x1135` and `0x1131`.
These are operations and constants visible in the decompilation; the record
fields and message identifiers have not been assigned semantic names.

## Byte and closure validation

The selected CALL closure contains 13 functions / 3,533 indexed bytes across
17 fresh Ghidra body ranges. `FUN_58881C90` itself is one 390-byte body with
122 instructions. The committed range manifest is
[`message-8002c104-record-action-body-ranges.tsv`](../config/NF2_2026/message-8002c104-record-action-body-ranges.tsv).
The source files preserve every mapped instruction byte inside those Ghidra
ranges. ObjDiff 3.8.0 verified all 13 functions at 100.0%, checking 202 mapped
operand targets. Capstone confirms complete instruction coverage, all 13
functions are reachable from the root, and all 58 direct transfers leaving the
closure land in 21 already byte-verified functions. No unmatched direct
transfer remains.

[`verify_current_main_message_8002c104.py`](../tools/verify_current_main_message_8002c104.py)
checks the exact closure and body ranges, the matched dispatcher's jump-table
index for `0x8002C104`, and all nine call sites. The three record fields, the
meaning of the action values, helper contracts, server-side protocol, and live
emulator behavior remain uncertain. This validation proves byte reproduction
and static routing; it is not a runtime game test or a claim of recovered
high-level source for every helper.
