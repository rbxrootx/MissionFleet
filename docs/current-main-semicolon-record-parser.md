# Current Main.dll semicolon-delimited record parser

`FUN_58849440` is a 242-byte routine in the hash-pinned mapped installed-client
`Main.dll`. Verified callers are packet/message dispatcher `FUN_587BB700` and
event dispatcher `FUN_588C1650`; both pass a pointer, a length, and a third
selector value. The complete function extent matches at 100% under objdiff,
including all nine mapped operand targets.

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
