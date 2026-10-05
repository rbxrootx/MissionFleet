# Current Main child coordinate normalization helper

`FUN_587B0630` is a 70-byte helper called from two verified current-client
paths. The mapped body adds `0x32` to its input, uses signed multiply-high
arithmetic to reduce the value in `0xE10` increments, corrects a negative
remainder by one `0xE10` interval, converts the adjusted value with the signed
divide-by-100 multiply sequence, and stores the result at receiver `+0xA0`.
It ends with `ret 4` and has no mapped address operands.

The record-backed 32-child builder `FUN_587A6220` calls it at `0x587A6B98`
after deriving and storing a scaled value at child `+0xA8`. The verified
weapon-fire handler `FUN_587B4B70` calls it at `0x587B4E4F` and `0x587B512B`
after adjustments involving `0xE10`, consistent with a circular input range.
The exact input units, whether the bias represents nearest-bucket rounding,
the meaning of `+0xA0`, and the visible/gameplay effect remain unresolved.
This is static instruction and caller evidence; no emulator runtime test was
performed.

The instruction match is in
[`FUN_587b0630.cpp`](../src/client-current/Main/FUN_587b0630.cpp). The caller
paths are documented in the [32-child builder notes](current-main-record-backed-32-slot-builder.md)
and the [weapon-fire handler notes](current-main-weapon-fire-event.md).
