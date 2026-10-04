# Current Main.dll keyed record insert and refresh helper

`FUN_58754D60` is a 275-byte routine in the hash-pinned mapped installed-client
`Main.dll`. Its two direct verified callers, `FUN_587BB700` and
`FUN_588C1650`, each contain two callsites. In both callers, the input is
assembled as two leading DWORDs followed by a fixed 0x800-byte payload. The
complete function extent matches at 100% under objdiff, including all 16
mapped operand targets.

The routine reads the first two DWORDs and calls `FUN_58753CC0` with those
values. That helper scans the receiver's embedded collection at `+0x1C` in
0x808-byte steps and returns true when both leading DWORDs match an entry. If
no pair matches, `FUN_58754D60` passes the full record to `FUN_58754AD0` using
the collection at `+0x1C`. If a pair does match, it traverses the existing
entries and copies 0x800 bytes from input offset `+8` to entry offset `+8`
whenever the entry's second DWORD equals the incoming second DWORD. The copy
uses the indirect routine at `0x5898C194`. Observed pointer/count invariant
failures call `0x5897CC72`; the function returns with `ret 4`.

The callers establish that this helper is used from packet/message and event
dispatch. The meanings of the two DWORDs and payload, the receiver and
collection types, the copy import's exact identity, and why a matching pair
causes refresh of every entry sharing only the second DWORD remain unknown.
No runtime or emulator test was performed.
