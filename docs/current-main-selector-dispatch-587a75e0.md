# Current Main.dll selector dispatcher at `0x587A75E0`

`FUN_587a75e0` is a 1,654-byte handler called 18 times by two verified
functions: twice by `0x587E8A40` and 16 times by `0x58856560`. Observed
selector values include `1`, `2`, `3`, `0x17`, and `0x24` through `0x26`.

The handler first requires the object at global `0x58A247F8 +4` to be
non-null. It reads a byte from its one stack argument, accepts selector values
1 through 47, and dispatches through a byte lookup table followed by a
jump-address table. Other values take a default path. The cases update receiver
fields and word flags, walk receiver-owned arrays/objects, and invoke helper
routines. The complete indexed body matches with all 92 mapped operands
checked; the selector/jump tables lie outside this body's indexed extent.

The receiver and global object types, selector labels, per-case semantics, and
domain-level effects remain unknown. Numeric caller values alone do not prove
user-visible action names. No runtime behavior test was performed.
