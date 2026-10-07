# Message-code handler evidence for `FUN_58882d80`

Ghidra decompiles `FUN_58882d80` as a `__thiscall` routine with a receiver,
message value, and payload/state arguments. No reliable C++ class name is
assigned. It clears receiver fields at `+0x92` and `+0x94`, gates on the active
state, then dispatches message codes `0x8002C101` through `0x8002C104`.

Observed branches include null-payload handling through helper message ID
`0xFA2`, non-null handling through `FUN_58880F00` followed by helper ID
`0x1004`, payload-byte copies into global fields, record/state helper calls,
and updates to child state. The code also switches on a 16-bit subcode for
several branches. These operations and constants are directly visible in the
decompilation; the semantic names of the protocol fields and helper IDs remain
unknown.

The non-null `0x8002C101` branch and its 16-function update closure are
documented separately in
[`current-main-message-8002c101-update.md`](current-main-message-8002c101-update.md).

## Caller evidence

Ghidra records one direct caller, `FUN_587bb700`. Its switch contains a
`0x8002C005` arm that stages three words from its second argument and a payload
pointer from its third argument before invoking `FUN_58882d80`. This confirms
the dispatch relationship and message constant; it does not establish the
wire format or whether this value is received from a server.

## Validation and limits

Ghidra reports five body ranges:

- `0x58882D80..0x58883198` — 1,049 bytes
- `0x588831A0..0x588832FC` — 349 bytes
- `0x58883300..0x5888356C` — 621 bytes
- `0x58883570..0x58883C3C` — 1,741 bytes
- `0x58883C40..0x58883DD6` — 407 bytes

The four gaps are outside the reported function body. `tools/generate_mapped_client_asm.py`
emits source from the locally captured mapped image for these ranges. ObjDiff
verified all 4,167 bytes and 214 mapped operand records. This is an exact
machine-code match, not verification of the protocol contract or runtime
behavior. No live message capture or emulator test was performed.
