# Current Main.dll communication battle-record state 2/3 route

`FUN_58839B80` is the complementary helper for the installed client's
`0x80020F06` communication battle-record route documented in
[`current-main-comm-battle-record-route.md`](current-main-comm-battle-record-route.md).
Both verified dispatchers, `FUN_587BB700` and `FUN_588C1650`, select it when the
child mode bits are 1 or 2 and the child's byte at `+0x2E5` is 2 or 3. They pass
null when packet field `+0x10` is zero and otherwise pass the incoming record.

For state 2 or 3 with a null record, the helper clears mask `0xFFF0` on a
state-selected child pointer (`+0x158` for state 2, `+0x140` for state 3), then
resets receiver byte `+0x2E5` to zero. State 3 with a non-null record first
tries an indexed lookup using the dword at record `+8` and global
`0x58A245E0`. If lookup succeeds, it updates receiver fields `+0xBC` and `+0xC0`
and calls `FUN_587315F0`.

If that lookup path does not complete, the helper selects paired values through
the receiver object at `+0x90`, applies existing state helpers, copies the
record string at `+0x0C` to receiver `+0x14C`, sets receiver byte `+0x2E5` to 5,
and calls `FUN_587B92B0` with global `0x58A24588` and record fields `+0x5A` and
`+0x5C`.

The complete body is 356 bytes, ends with `ret 4` at `0x58839CE1`, and is
followed by twelve `INT3` alignment bytes before the next indexed function at
`0x58839CF0`. ObjDiff verified all 356 bytes and checked 15 operand targets.

The record schema, lookup contract, child identities, state-mask meaning,
paired-value meanings, helper contracts, and resulting display or protocol
effect remain unknown. The caller code establishes the branch conditions, but
does not establish those semantics. No emulator test was performed.
