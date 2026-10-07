# Current Main.dll state-transition progress helper

`FUN_588DFFB0` is a 377-byte routine in the hash-pinned installed-client
`Main.dll`. Verified update routines `FUN_588E0260` and `FUN_588E5150` call it
with flag arguments 0 and 1 respectively.

It decodes receiver fields `+0x398` and `+0xD98` with XOR `0xAAAAAAAA`,
computes a ratio clamped to 0..100, stores it at `+0x1444`, and passes that
value to `FUN_587B03A0`. When the decoded `+0x398` value is nonpositive, it
resets that field to the encoded sentinel `0xAAAAAAAA` and calls
`FUN_588DF450`, now reconstructed through its return before INT3 padding.
Active-object paths call `FUN_58895540` and byte-matched `FUN_587A6E90`,
which clears the low nibble in up to 32 non-null child words at child `+0x24`
when passed 1; the meaning of those bits is unknown. The path may also invoke
`FUN_587F2870`. If receiver `+0x60B0` is zero, it increments a
global counter, sets receiver flags and calls `FUN_587E8750`. With a nonzero
flag argument it also calls `FUN_58749FA0` and can adjust global `+0x10A18`.

ObjDiff verifies all 377 bytes, `ret 4`, and 19 operand targets. The fields'
domain meanings and callbacks remain unknown. No emulator test was run.
