# Current Main shell-map tag counter

Verified linked-entry hit dispatcher `FUN_587C4450` calls `FUN_588D6C90`
after a successful entry tagged `0x0B`, passing that tag as its stack argument.
Verified shell-map object update `FUN_588D4300` also pushes `0x0B` and calls
the helper after checking an object pointer. The dispatcher and update paths
are described in [the hit-dispatch notes](current-main-linked-entry-hit-dispatch.md)
and [the shell-map update notes](current-main-shell-map-object-update.md).

The helper reads the low 16 bits of its argument. For `0x0B`, it adds 8 to the
receiver dword at `+0x1428`. For `0x0C`, it adds 8 to `+0x142C`. All other
values leave those fields unchanged. It returns with `ret 4`.

The indexed function is 37 bytes, from `0x588D6C90` through the three-byte
`ret 4` at `0x588D6CB2..0x588D6CB4`. The next indexed function starts at
`0x588D6CC0`. ObjDiff 3.8.0 verifies the full range at 100.0%; there are no
mapped operand targets.

The receiver type, meanings of `+0x1428/+0x142C`, increment size, and visible
effect are unknown. The verified callers observed here pass only `0x0B`. No
runtime client or emulator test was performed. The instruction stream is in
[`FUN_588d6c90.cpp`](../src/client-current/Main/FUN_588d6c90.cpp).
