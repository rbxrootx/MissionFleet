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

When the source pointer is null, the function follows the branch through
global object `0x58A245AC` and `FUN_587538B0`, passes the result through
`FUN_58731CE0` using receiver field `+0xB4`, and updates the child at `+0xA4`
through `FUN_58770A80`. For a nonnull source it uses receiver field `+0x7C`
with `FUN_587538B0`, calls `FUN_58731CE0`, and updates child `+0x78` through
`FUN_58770A80`.

The four stack-argument roles, copy callback contract, resource/string lookup,
receiver and child types, and user-visible text meaning are not established by
these call sites or instructions. No runtime client or emulator test was
performed.
