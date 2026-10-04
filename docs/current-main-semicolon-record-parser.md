# Current Main.dll semicolon-delimited record parser

`FUN_58849360` and `FUN_58849440` are paired routines in the hash-pinned mapped
installed-client `Main.dll`. The first is 216 bytes with five operand targets;
the second is 242 bytes with nine operand targets. Both are byte-matched under
objdiff and reached through verified packet/message dispatcher
`FUN_587BB700` and event dispatcher `FUN_588C1650`.

When the third argument is zero, the function calls `FUN_58848610` on its
receiver and then invokes receiver subobject `+0x30`, vtable slot `+0x18`, with
observed values `1` and `0xEE49`. Otherwise it scans the byte string from the
first argument up to the second argument's length minus one, splitting tokens
at semicolon (`0x3B`). It starts each token with a zeroed 24-byte local buffer,
compares it with global string `0x58A0B450` through callback `0x5898C1A4`, and
calls `FUN_58849210` for non-equal tokens. That helper's callers tie it to
appending localized joined-fleet notice objects. The parser does not show an
explicit token-length check against its 24-byte local buffer; the caller's
input limits and token-size invariant are unresolved.

After parsing, if global dword `0x58A0B4A0` is zero and the signed word at
receiver `+0xF0` differs from input length minus one, it calls
`FUN_58848610`. It then dispatches the same observed `0xEE49` callback. The
receiver type, third-argument meaning, global-string suppression policy,
callback contract, and visible message effect remain unknown. No runtime or
emulator test was performed.

## Count-checked token batch path: `FUN_58849360`

Both dispatchers load the receiver from global object `0x58A245B4` plus
`0xD8` and pass three stack values used by the routine as input pointer, input
length, and requested record count. It clears receiver word `+0xF2`. A zero
requested count skips token parsing and calls `FUN_58848680` before dispatch.
Otherwise it scans to input length minus one, splits on semicolon, copies each
segment into a zeroed 24-byte local buffer, and passes the buffer with the
receiver to `FUN_588490F0`. It stops at the mapped `0x1000` iteration bound.
After parsing, it compares the sign-extended word at receiver `+0xF2` with the
requested count and calls `FUN_58848680` on mismatch. It then dispatches
`0xEE49` through receiver child `+0x30`, vtable slot `+0x18`, with a zero
argument.

The function table previously ended after `add esp,0x20` at `0x58849432`,
omitting `ret 0x0C` at `0x58849435..0x58849437`. Eight `CC` padding bytes follow
before `FUN_58849440` at `0x58849440`. The corrected extent test checks the
return and padding boundary. The exact token schema, `FUN_588490F0` and
`FUN_58848680` contracts, requested-count meaning, and callback's visible
effect remain unknown; no runtime test was performed.

## Parallel dispatcher-fed batch path: `FUN_58846B00` and `FUN_58846BD0`

The verified packet/message dispatcher `FUN_587BB700` and event dispatcher
`FUN_588C1650` both call `FUN_58846B00` with receiver `0x58A245B4+0xD8`.
It splits a length-bounded byte string on semicolons into cleared 24-byte
buffers, passes each token to `FUN_58842DC0`, and compares receiver word
`+0xF8` with the caller's requested count. A zero count skips parsing; a
mismatch or zero count calls `FUN_58842EF0`. It then sends message `0xEE49`
through receiver child `+0x30`, vtable slot `+0x18`, with argument zero.
The complete function is 205 bytes, including its `ret 0x0C`, and has five
mapped operand targets.

The event dispatcher also calls `FUN_58846BD0` with receiver
`0x58A245B4+0xDC`. A zero selector calls `FUN_58843190`; otherwise it parses
semicolon-delimited tokens, compares each with global string `0x58A0B450`
through callback `0x5898C1A4`, and sends matching tokens to `FUN_58843060`.
When global `0x58A0B4A0` is zero, it compares receiver word `+0xFA` with
input length minus one and resets through `FUN_58843190` on mismatch. Both
paths dispatch `0xEE49` with argument one. The complete function is 242 bytes,
including `ret 0x0C`, and has nine mapped operand targets.

`FUN_58843190` and `FUN_58842ef0` have now been byte-matched. Their distinct
list teardown behavior is
recorded in [the linked-child teardown evidence](current-main-linked-child-teardown.md).
The event dispatcher also uses byte-matched `FUN_58842fb0` to search the
`+0x130` token list by nested name; its evidence is in
[the linked-name lookup notes](current-main-linked-name-lookups.md).
The relationship between these receivers and the earlier `+0xD8` parser pair,
the token record schema, selector/count meanings, global
suppression policy, and message callback's visible result remain unknown.
These functions have not been exercised at runtime or in the emulator.

## Token record insertion helpers: `FUN_58842DC0` and `FUN_58843060`

The count-checked parser `FUN_58846B00` passes its cleared 24-byte token buffer
to `FUN_58842DC0`. That helper requests a 0xB4-byte object, initializes it
from receiver fields `+4`, `+8`, and `+0xCC`, prepares its record through
callback `0x5898C198` and `FUN_5875A4B0`, then appends it to the list with head
`+0x138`, tail `+0x13C`, and node links `+0x54/+0x50`. It increments receiver
word `+0xF8`. Its full SEH-protected body is 293 bytes, including `ret 4`,
with eight operand targets.

The selector parser `FUN_58846BD0` calls `FUN_58843060` for tokens that match
global string `0x58A0B450`; `FUN_588C1650` also calls it directly with a local
record. It similarly requests a 0xB4-byte object and prepares it through the
same callback/helper pair, using receiver field `+0x90`. It appends through
head `+0x130`, tail `+0x134`, and increments receiver word `+0xFA`. Its full
SEH-protected body is 295 bytes, including `ret 4`, with eight operand
targets. Both helpers clear observed bits in the node word at `+0x24` and link
through node fields `+0x54/+0x50`.

The node class, prepared-record schema, callback/helper contracts, list field
roles, and semantic relationship between the two receiver objects remain
unidentified. Their caller data shows token and message paths, but no runtime
or emulator behavior has been verified.
