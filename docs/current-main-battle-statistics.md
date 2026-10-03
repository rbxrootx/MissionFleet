# Current Main battle statistics helper

Ghidra identifies `FUN_587f2dd0` as a one-argument `__fastcall` routine and
records two direct callers: `FUN_587fbcc0` at `0x587FBDCC` and
`FUN_588c4210` at `0x588C4C34`. The latter call is in the mapped handler for
the `0x800231xx` event family. The routine's owning screen class and its data
structure types are not identified.

The function clears work areas at receiver offsets `+0x10918` (`0xDC` bytes)
and `+0x10744` (`0x1C8` bytes). It selects a side from receiver state and
active fleet entries, accumulates per-side counters and values from the
linked list rooted at `DAT_58A247F8 + 0x0C`, then applies state-dependent
adjustments to score/result fields. It unpacks or updates 32 packed statistic
entries, calculates observed ratios and bounded values, copies a result
snapshot, and calls the existing result/state helpers. In the conditional
`DAT_58A24574` diagnostic path, format strings include `WIN : Total ...`,
`LOSE : ...Exp`, and `End Game`, written to `TestInfo.txt`.

These observations support describing this as a battle-statistics/state
aggregation helper. They do not establish units or meanings for most counters,
the exact gameplay meaning of the receiver states, how its computed values map
to visible UI, or the helper-call contracts.

Ghidra assigns four body ranges: `587F2DD0..587F34D7`,
`587F34E0..587F4837`, `587F4840..587F51C6`, and `587F51D0..587F543B`.
Together they total the inventory's 9,811 bytes. Capstone decodes all bytes in
the three gaps as alignment (`lea esp,[esp]`, `nop`, and/or `mov edi,edi`)
instructions; no gap bytes are included in the function body.

The reconstructed segments match the mapped client at 100.0% under ObjDiff
3.8.0, with 475 mapped operands checked. This is static function-level byte
evidence; the routine has not been exercised in the original client or
emulator.
