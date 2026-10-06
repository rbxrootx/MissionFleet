# Current Main state-dependent update gate at `0x58807E80`

Ghidra identifies `FUN_58807e80` as a 440-byte ECX-receiver function spanning
`[0x58807E80, 0x58808038)`. Its literal instruction source matches all 440
bytes, with 37 relocation checks. The byte-matched caller `FUN_588A6A30`
invokes it at `0x588A6AAB` in the receiver-state `0x0C` branch.

## Behavior visible in the original code

The helper first calls `FUN_58789FB0`, then switches on receiver word `+0x110`.
For states 4, 5, and 10, it may call `FUN_587AEE40(0xF4241)` when bit 0 is set
in byte `[0x58A245A8+0x1BC]`; it then calls `FUN_58789FB0` again and requires
the result to be at least 14, 12, or 16, respectively. State 11 selects a
threshold from word `[0x58A245A8+0x1B8]`: values 0, 1–2, 3, and 4 select 16,
14, 8, and 12; other values select 2. It requires the `FUN_58789FB0` result
to reach that threshold.

State 12 walks the linked chain rooted at `[0x58A247F8+0x0C]`, following each
node's `+0x78` link. It counts nodes by whether byte `+0x354` is zero and
requires at least ten in each group. State 6 calls byte-matched
`FUN_588044A0` with the initial `FUN_58789FB0` result and 16; states 13
through 16 use 14 as the second argument. `FUN_588044A0` returns 1 when its
first argument is greater than or equal to its second as an unsigned value;
when it is smaller, the helper sends notification `0x1D6` and returns 0. The
states 6 and 13 through 16 fail if this check returns zero.

Passing state paths call byte-matched `FUN_58805D90`. It walks the same root
list and returns 0 if a visited record has both dwords `+0x6074` and `+0x608C`
equal to zero; reaching the end, including an empty list, returns 1. If that
check returns zero, the caller sends notification `0x1D7` through matched
`FUN_5876BAF0` and `FUN_58764D30`, then returns 0. Failed threshold and list
count checks send notification `0x1D6` through the same matched helpers and
return 0. Other states return 0 directly.

## Unresolved details

The domain meanings of state `+0x110`, the global fields, list-node fields,
thresholds, and notification codes remain unknown. `FUN_587AEE40` remains
unmatched. The emitted instruction stream preserves the absolute
switch-table bases `0x58808038` and `0x5880806C` at offsets `0x24` and `0x90`;
the table contents lie outside this function extent and are not covered by
this function's match record. No emulator runtime test has been performed.
