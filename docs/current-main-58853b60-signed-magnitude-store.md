# Current Main nested signed-magnitude store

`FUN_58853B60` is a 43-byte leaf helper called at two sites by two already
byte-matched functions: `FUN_588DEB30` at `0x588DF114` and `FUN_588E5150` at
`0x588E631B`. Both fresh Ghidra projects agree on the same contiguous
43-byte/12-instruction body, exactly those two incoming calls, and no outgoing
calls. The mapped image decodes fully across the body.

The helper reads one signed stack argument. A nonnegative input is written
directly to offset `+0xBC` of the object reached through receiver offset
`+0x2BC`. A negative input is negated with the observed `CDQ; XOR; SUB`
sequence and written to that same nested field. Both paths return with `ret 4`.
For `INT_MIN`, this two's-complement operation wraps to `INT_MIN`.

At each caller, ECX is loaded from the global at `0x58A245C4`. The caller reads
a value through `[ESI+0x23C]+0x50`, XORs it with `0xAAAAAAAA`, and uses the
`0x51EB851F` multiply/high-word shift plus sign correction to compute signed
division by 100 before pushing the argument. The exact source-field meaning is
not established. The shared receiver global is also installed by a matched
constructor previously tied to a `CPannelFireControl` vtable, but this helper
has no direct RTTI or vtable ownership evidence, so its class attribution
remains uncertain.

The byte match is checked with ObjDiff. The focused verifier checks both fresh
Ghidra exports, complete mapped instruction coverage, the no-call leaf body,
both byte-matched callsites, and their receiver and arithmetic instruction
windows. No client or emulator runtime test has been performed for this helper.

Unresolved: the role of source offset `+0x50`, the type and purpose of the
pointer at receiver `+0x2BC`, and the semantic meaning of the destination at
child `+0xBC`.
