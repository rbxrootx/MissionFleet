# `FUN_5888D5C0`: linked-entry-based child-coordinate update

Fresh Ghidra analysis confirms one contiguous body,
`[0x5888D5C0, 0x5888D651)`, with 145 bytes and no holes. The candidate at
[`src/client-current/Main/FUN_5888d5c0.cpp`](../src/client-current/Main/FUN_5888d5c0.cpp)
matches all 145 bytes at 100% objdiff; the verifier checks four mapped
operands. The function ends with `ret` at `0x5888D650`; the following 15 bytes
are `0xCC` padding.

The function reads child objects at `this+0x4C4` and `this+0x4C8`. For each,
it compares the child's `+0x88` value with `FUN_58908170`'s linked-entry
result and a threshold (9 for the first child, 6 for the second). When the
difference is positive, it scales that difference by `0x54`, divides by the
child span, subtracts the quotient and `0x0E` from `this+8`, then passes that
coordinate to `FUN_58903360` for the corresponding child at `this+0x4A4` or
`this+0x4A8`. Both helpers are already byte-matched. This establishes two
data-dependent child-coordinate updates; the child-control identities and
visible UI result remain unknown.

Ghidra finds 12 direct callers. The byte-matched `FUN_58893E80` calls at
`0x5889464F` with ECX=EDI and no stack arguments. Byte-matched
`FUN_58890110` calls it at `0x58892DA2`, `0x58892DD2`, `0x58892E94`,
`0x58892ED4`, `0x58892F66`, `0x58892F8D`, and `0x58892FE9`, each with
ECX=EBP and no stack arguments. `FUN_58893430` has four additional calls at
`0x58893760`, `0x588937A3`, `0x588937DC`, and `0x5889382A`; mapped
instructions load ECX=ESI at each site, but that caller is not yet byte-
matched.

The helper's linked-entry interpretation follows the matched
`FUN_58908170` implementation, which traverses the child chain and returns
its count (or `-1` for a missing head). `FUN_58903360` stores the supplied
coordinate and propagates its delta through flagged linked entries. The exact
meaning of the `+0x88` values, the thresholds, the resulting visual layout,
and runtime behavior remain unverified. Bytes immediately before this
function include padding and pointer-like values whose ownership is unknown.
