# Current Main indexed record state refresh

`FUN_588A6410` is a 365-byte helper in the installed `Main.dll`. Its mapped
body is contiguous from `0x588A6410` through `0x588A657C` and ends with
`ret 8`. The client component updater calls it twice from byte-matched
[`FUN_58806F60`](current-main-58806f60-component-record-updater.md), at
`0x5880706F` and `0x588072D6`; byte-matched `FUN_58807910` calls it at
`0x58807B88`.

## Behavior supported by the original code

Ghidra's decompilation indexes the table at `0x58A0B1C4` using the first
argument. The helper sets a flag when the selected object's byte at `+0x354`
matches this index while `[0x58A245A8]+0x114` and `[0x58A247F8]+4` are nonzero.
It calls `FUN_58879FB0` with the index, fields from the indexed entry, and this
flag.

The helper next reads the indexed entry's dword at `+0x54`. If bit 0 of byte
`[0x58A245A8]+0x1BC` is set, it calls `FUN_587AEE40(0xF4241)`. When the
returned object's dword at `+0x6C` is nonzero, it adds the indexed dword at
`+0x3DC`. If the second argument or `[0x58A245A8]+0x114` is nonzero, it
subtracts the result of `FUN_58789940()`.

For global state words 4, 5, 6, 10, 11, 14, 15, or 16 at
`[0x58A245A8]+0x204`, it passes the result of `FUN_58789790()` to
`FUN_58907360()` and calls `FUN_58789790()` again. For other values, it passes
the adjusted indexed value divided by 1000 to `FUN_58907360()`. A zero result
then calls `FUN_58902D20(-100)` and returns; remaining paths call
`FUN_58902D20(0)`.

Ghidra's full reference dump lists six direct calls from four functions. The
three references from byte-matched callers are listed above. The remaining
references are from `FUN_58805260` at `0x58805386` and `FUN_58807370` at
`0x5880751F` and `0x58807531`; those callers have not been matched yet. The
source emits all 365 mapped bytes literally and the verification record
includes the 17 mapped call/data operand targets.

## Unresolved details

The table and selected-object types, meanings of the index and entry fields,
global state values, `0xF4241` lookup, timer conversions, and effects of the
called functions remain unknown. No emulator runtime test has been performed.
