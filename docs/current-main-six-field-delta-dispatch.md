# Current Main six-field delta dispatcher

`FUN_588DCDD0` is a 101-byte helper called by five verified functions:
`FUN_5877EC80`, `FUN_58782CF0`, `FUN_587A90D0`, `FUN_587EFD60`, and
`FUN_587F2DD0`. Four callers contain repeated callsites. Their instructions
show selector values and delta arguments; for example, `FUN_5877EC80` calls
this helper with selectors `0` and `2` on the object at its `+0x70` field.

The helper takes selector and value arguments. Selectors 0 and 1 subtract the
value from receiver offsets `+0x128C` and `+0x1290`. Selectors 2, 3, 4, and 5
add it to offsets `+0x1294`, `+0x1298`, `+0x129C`, and `+0x12A0`. An unsigned
selector above 5 skips these local updates. It then compares the receiver with
the `+4` field of the object at `0x58A247F8`. If they match, it loads the
receiver at `0x58A2459C` and tail-jumps to `FUN_587E7710`, restoring the
original arguments on the stack. Otherwise it returns with `ret 8`.

This records observed field operations and forwarding conditions. The receiver
class, meaning and units of the six fields, selector labels, and purpose of the
conditional forwarding remain unresolved. The reconstruction at
`src/client-current/Main/FUN_588dcdd0.cpp` covers the complete indexed extent;
objdiff 3.8.0 confirms 101/101 bytes with three relocations checked. No
original-client runtime test was performed.
