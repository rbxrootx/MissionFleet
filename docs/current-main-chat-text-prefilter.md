# Current Main.dll chat text prefilter

`FUN_587B81A0` is a 226-byte helper called by verified routines
`FUN_587FC9C0` and `FUN_58890110`, both documented chat input paths. The latter
passes a 0x30-byte record, a second pointer, and selector 1; each call sets ECX
to global object `0x58A2458C`.

The helper calls verified `FUN_587A2D40` with the string at the first argument
`+0x30`. A nonzero result returns 0. Otherwise it copies 0x30 bytes from the
first argument, then compares the null-terminated byte sequence at copied
offset `+0x18` against strings beginning in up to three receiver slots starting
at `+0x130` and spaced by `0x18` bytes. If a slot matches, it calls
`FUN_587B7BD0` with the third argument. When that helper
returns nonzero, the function dispatches through `FUN_58970C70` using selector
`0x80020A00`, flags `0x20000` and `0x50000`, the first and second arguments,
and a zero field. All non-early-return paths return 1; the function cleans
three stack arguments with `ret 0x0C`.

The 226 mapped bytes match at 100% under objdiff 3.8.0, with all seven operand
targets checked. `FUN_587A2D40` rejects null and slash-prefixed strings before
delegating other values to host callback `0x5898C03C`; the callback's policy
meaning is unknown. The record schema, slot meanings, purpose of
`FUN_587B7BD0`, and visible meaning of selector `0x80020A00` are also unknown.
Static caller evidence ties this to chat input, but runtime behavior was not
tested.
