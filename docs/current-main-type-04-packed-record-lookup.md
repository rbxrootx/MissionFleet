# Current Main packed type-0x04 record lookup

`FUN_58778C40` is an 81-byte leaf helper in the pinned mapped `Main.dll`. The
complete instruction stream is preserved in
[`FUN_58778c40.cpp`](../src/client-current/Main/FUN_58778c40.cpp).

It returns null unless the packed key's low byte is `4` and the signed record
count at receiver `+0x58` is positive. It scans records beginning at receiver
`+0x64` with `0x9C`-byte strides. A row matches when its byte `+0` equals
`4`, byte `+1` equals the packed key's second byte, and word `+2` equals the
packed key's high word. It returns the matching record pointer or null. The
function ends in `ret 4` and has no mapped address operands.

The verified raw-source caller `FUN_588E9940` invokes it four times at
`0x588E99FF`, `0x588E9A14`, `0x588E9A2C`, and `0x588E9A44`. Before each call it
loads the receiver from global `0x58A2481C` and pushes a value in EAX as the
packed key. It stores the first three results at `[EBP+0xCD0]`, `[EBP+0xCD4]`,
and `[EBP+0xCD8]`. This anchors the lookup's caller data flow without assigning
semantics to the key, record type, or result fields.

The record schema, key-field meanings, receiver type, and runtime effects remain
unresolved. This reconstruction matches the mapped instruction stream and is
grounded in four calls from one verified caller; no emulator runtime comparison
has been performed.
