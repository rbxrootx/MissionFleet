# Current Main.dll selector flag and latch helpers

Four client helpers in the selector path now match the installed `Main.dll`
byte for byte under objdiff 3.8.0. Their complete mapped extents have no
external operand targets.

`FUN_587E5AC0` (132 bytes) is called repeatedly by verified `FUN_58856560`.
It updates receiver flags at `+0x394` and latch byte `+0x10484` using a
selector, bit mask, and mode. When receiver `+0x20D5C` is nonzero, selectors
8, 9 and `0x1C` return early. Mode zero clears the supplied bits and stores
selector `+0x1F` only when the latch is zero. Mode `0x40000000` sets missing
bits and stores the selector byte only when the latch is zero. Other modes
leave those fields unchanged.

`FUN_587E5B50` (73 bytes) clears six bits of receiver `+0x394` with the
original OR/XOR sequence: `0x80`, `0x100`, `0x800`, `0x1000`, `0x200`, and
`0x400`. Verified `FUN_587A75E0` and `FUN_588E4260` call it.

`FUN_587E5C10` (22 bytes) writes its argument byte to `+0x10484` only if
that latch byte is zero; verified `FUN_58856560` calls it six times.
Adjacent `FUN_587E5BA0` (25 bytes), called by verified `FUN_587BB700`,
writes one to `+0x1048C`, zero to byte `+0x10C10`, and one to `+0x20C10`.

The selectors, bits, latch and other field meanings remain unresolved. No
runtime client test was performed.
