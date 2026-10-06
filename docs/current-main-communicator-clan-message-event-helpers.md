# Current Main.dll ClanMessage event helpers

These four direct callees are shared by the byte-matched ClanMessage input
handler `FUN_58823950` and notification handler `FUN_58823EB0`. Their call
sites are visible in the matched instruction streams, and each callee decodes
through its complete indexed extent. The descriptions stay close to the
observed fields and calls because the child-control schema is not established.

`FUN_58823110` passes the string pointer at `[[this+0x70]+0x80]` to the
function pointer at `0x5898C1A8` and returns if the result is nonpositive. It
then compares `[0x58A0B468] XOR 0xAAAAAAAA` with `0x3E8`. One branch calls
`FUN_5876BAF0` with four zero arguments, then passes its result to
`FUN_58764D30`. The other branch passes the string and its measured length to
`FUN_587B9820` with ECX=`[0x58A24588]`; if that returns zero, it calls the
helper at `0x5898C030` with pointer `0x5899C598` and color `0x006464FF`, then
calls `FUN_5888D250` with `[0x58A245C0]`. This higher-threshold path finishes
with a tail jump to `FUN_5875F940` with ECX=`[this+0x70]`. The complete extent
is 142 bytes and ends at that jump.

Its text-request gate, `FUN_587B9820`, calls `FUN_587A2D40` with ECX=`[0x58A24578]`
and the text pointer/length. A nonzero result returns zero. Otherwise it calls
`FUN_58970C70` with ECX equal to the incoming context and stack arguments
`(0x8001AA01, 0, 0, text pointer, length, 0)`, then returns one. The 69-byte
extent is fully decoded. The gate and external-call contracts remain unknown.

`FUN_58823210` reads child `[this+0x74]` and its `+0x88` value, subtracts 7 to
get a span, and starts with `[this+8]+0x25`. If the span is positive, it calls
`FUN_58908170`, scales the result by `0x46`, divides by the span, and adds the
quotient. It clamps the value to `[this+8]+0x25` through `[this+8]+0x6B`, then
calls `FUN_58903360` with ECX=`[this+0x98]` and the clamped value. Its extent
is 93 bytes.

`FUN_588231A0` reads the value on child `[this+0x74]` through `FUN_58908170`.
If the value is positive and child `+0x88` exceeds 7, it reads the value again,
subtracts one, and passes the result to `FUN_58908190` on that child. Its
extent is 44 bytes.

`FUN_588231D0` reads the same child value and helper result. If the current
value is below child `+0x88 - 7`, and `+0x88` exceeds 7, it reads the value
again, adds one, and passes the result to `FUN_58908190`. Its extent is 55
bytes.

The callee contracts, child-control identities, and visible UI results remain
unknown. These matches establish the original machine-code paths; no emulator
interaction test has been performed. A depth-three direct-call audit from both
handlers reports no unmatched indexed callees.
