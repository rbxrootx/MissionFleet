# Current Main.dll bounded dispatcher text update

`FUN_58831D50` is a 203-byte routine reached from verified packet/message
dispatcher `FUN_587BB700` and event dispatcher `FUN_588C1650`. Both callers
check mode bits 2 on the child at receiver `+0x154` before the call and pass
record-derived values. The mapped routine ends with `ret 0x10` and contains ten
mapped operand targets.

The routine copies the input text through callback `0x5898C194` into an
0x800-byte stack buffer. The requested copy bound is capped at 0x800; smaller
bounds are incremented by one for the copy call. It compares receiver fields
`+0xC8` and `+0xCC` against the first two input values and returns early when
both are unchanged.

When the source pointer is null, the function queries collection object
`0x58A245AC` through `FUN_587538B0` with the first input key and a zero second
key. It passes the lookup result to `FUN_58731CE0` using receiver field
`+0xB4`, then updates the child at `+0xA4` through `FUN_58770A80`. For a
nonnull source it queries the same collection with the first input key and the
source pointer as the second key, passes the result through `FUN_58731CE0`
using receiver field `+0x7C`, and updates child `+0x78` through
`FUN_58770A80`.

The matched `FUN_587538B0` lookup walks 0x48-byte records in the receiver's
`+0x10` to `+0x14` range. It compares each record's first two DWORDs with the
two keys, returns record `+0x0C` on a match, and returns null when none match.
Its body is 198 bytes, including `ret 8`, with 12 mapped operand targets.

The four stack-argument roles beyond the observed keys/source/bound, copy
callback contract, meanings of the record keys and `+0x0C` payload, receiver
and child types, and user-visible text meaning remain unknown. No runtime
client or emulator test was performed.
