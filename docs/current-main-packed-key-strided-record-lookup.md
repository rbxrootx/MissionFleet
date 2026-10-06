# Current Main packed-key strided-record lookup

`FUN_58778B80` is an 84-byte leaf helper in the pinned mapped `Main.dll`. The
entire instruction stream is preserved in
[`FUN_58778b80.cpp`](../src/client-current/Main/FUN_58778b80.cpp).

The helper returns null unless the packed key's low byte is `1` and the signed
record count at receiver `+0x1C` is positive. It scans records from receiver
`+0x28` at `0x390`-byte strides. A record matches when its byte `+0` equals
`1`, its byte `+1` equals the packed key's second byte, and its word `+2`
equals the packed key's high word. For a match at index `i`, it returns the
dword at receiver `+0x14` plus `i * 0xCE`; it returns null if no record matches.
The function ends with `ret 4` and has no mapped address operands.

Verified caller `FUN_588E9940` invokes the helper at `0x588E99C0`. It loads
the packed key from `[EBP+0x6C]`, loads the receiver from global
`0x58A2481C`, pushes the key, calls the helper, and stores the return value
at `[EBP+0xCC4]`. This call path confirms how the exact lookup result is used;
it does not identify the key fields or establish the stored value's semantics.
The nearby verified `FUN_58778B20` scans the same receiver record count/base
and stride using the same packed-key fields, but returns the matching record
itself rather than the `+0xCE`-stride value.

The record schema, packed-key meanings, secondary table's type and ownership,
and runtime effect remain unresolved. No emulator runtime comparison has been
performed.
