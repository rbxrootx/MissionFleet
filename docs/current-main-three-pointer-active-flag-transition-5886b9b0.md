# Current Main.dll three-pointer active-flag transition

`FUN_5886B9B0` compares receiver pointers at `+0x88`, `+0x94`, and `+0x218`.
Depending on those relationships and bit `0x10000000` in the object at `+0x84`,
it stores one of the pointers at `+0x94`, `+0x218`, or `+0x2A4` into receiver
`+0x88`. It marks the selected object's word at `+0x24` with low bits `0xF`
and clears those bits on the other observed objects.

The helper is reached from verified routine `FUN_5886BA60` after a pointer
comparison, and twice from `FUN_588B96B0` after virtual calls on the object at
caller `+0x16C`. This confirms control/update use but does not identify the
object classes, guard-bit meaning, or state represented by these pointers and
flags.

The complete 169-byte body matches mapped `Main.dll` under objdiff 3.8.0 and
has no mapped operand targets. This is static byte verification; no runtime
client or emulator test was performed.
