# Current Main `CWordWrap_Modifed` path

This slice follows the current mapped `Main.dll` word-wrap object and its
0x1C-byte string-record container. Ghidra labels the vtable installed by
`FUN_58902b60` as `CWordWrap_Modifed::vftable`. The text routine
`FUN_58902970` receives C-string segments from `FUN_5897cebc`, copies each
segment, trims a terminal carriage return, prepares its record string, and
appends it through `FUN_589028c0`. That append path uses `FUN_58902800` and the
container mutation routine `FUN_58902440` when capacity must grow. The method
also has caller references from other current-client text routines.

The matched spans cover the full connected class and helper path:

| Group | Functions and matched bytes |
| --- | --- |
| String-record access and element operations | `FUN_58902030` 88; `FUN_58902090` 106; `FUN_58902100` 54; `FUN_58902140` 54; `FUN_58902180` 59; `FUN_589021c0` 99; `FUN_58902230` 42; `FUN_58902260` 30; `FUN_58902280` 43 |
| Range/container management | `FUN_589022b0` 162; `FUN_58902360` 77; `FUN_589023b0` 133; `FUN_58902440` 782; `FUN_58902800` 179; `FUN_589028c0` 165 |
| Text parse, construction, destruction, and exception cleanup | `Catch_All@58902628` 98; `Catch_All@58902732` 45; `FUN_589027e0` 30; `FUN_58902970` 490; `FUN_58902b60` 165 |

All 20 functions match at 100% under ObjDiff 3.8.0: 2,901 bytes and 125
relocation operands checked. Several Ghidra bodies had been cut off where an
allocator thunk was marked non-returning. Capstone decoding of the mapped x86
showed reachable stack adjustments and, for `FUN_58902360`, register restores
and a return after those calls. The verified extents include those bytes:
`FUN_58902180` is 59 bytes, `FUN_58902360` 77, `FUN_58902440` 782,
`FUN_589027e0` 30, the first exception handler 98, and `FUN_58902970` 490.
Alignment padding is excluded. Both `FUN_58902440` exception handlers are
matched independently, with the reachable cleanup tail included in
`Catch_All@58902628`.

The evidence establishes a split/copy/append path and the 0x1C-byte record
stride, but not the exact split callback contract, wrapping criteria, text
encoding, record member types, or semantic names for the container fields.
`FUN_58902970` was not executed against the original UI, so rendered line
behavior remains unverified.
