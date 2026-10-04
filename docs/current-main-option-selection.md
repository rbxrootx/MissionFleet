# Current Main shared option-selection helper

`FUN_588EBEB0` is a 238-byte helper called by five verified functions:
`FUN_5873FE80`, `FUN_587EFD60`, `FUN_588D4300`, `FUN_588E5150`, and
`FUN_588F55C0`. The first and fourth callers contain repeated callsites. The
callers load a shared receiver and pass a slot selector with two range values;
observed examples include `(0x0A, 0x38, 0x3B)`, `(1, 6, 0x0B)`, and
`(0x0B, 0x3C, 0x3F)`. These numeric arguments are preserved without assigning
names to the options.

The instructions return `0` unless global `0x589C9074` equals `2`. They read a
current value from receiver offset `+8 + selector * 8`, derive a range size from
the second and third arguments, and use the remainder from helper
`0x5897CC36`. The current value is resolved through the object table reached
from receiver `+4`: its count is at `+0x170` and its pointer array at `+0x194`.
The selected object's virtual method at `+0x14` is queried; a nonzero result
returns `1` immediately.

On the fallback path, the helper rejects one derived boundary case. Otherwise
it stores `remainder + second_argument` in the selected receiver slot, resolves
that new value through the same object table, calls `FUN_58907990` with the
object and global `0x58A248FC`, then calls the object's virtual method at `+4`
with argument `0` and returns `1`. The body consumes three stack arguments
(`ret 0x0C`).

This describes the observed control flow only. The receiver and table types,
option labels, meaning of mode value `2`, identities of helper
`0x5897CC36` and the two virtual methods, and purpose of the overall selection
remain unknown. The reconstruction at
`src/client-current/Main/FUN_588ebeb0.cpp` matches the complete indexed extent:
objdiff 3.8.0 reports 238/238 identical bytes with four relocations checked.
No original-client runtime test was performed.
