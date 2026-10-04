# Current Main.dll record-to-child text update

`FUN_588DCC10` is a 225-byte helper called at two sites each from verified
packet/message dispatcher `FUN_587BB700` and event dispatcher `FUN_588C1650`.
Each call passes a record pointer as its single stack argument and an object in
ECX.

The helper mirrors record fields `+0`, `+4`, `+8`, and `+0x0C` into receiver
offsets `+0x370/+0x1334`, `+0x374/+0x1338`, `+0x378/+0x133C`, and
`+0x37C/+0x1340`. It processes the text at record `+0x10` through callback
pointer `0x5898C198` into buffers at receiver `+0x1344` and `+0x380`.

If receiver word `+0x1338` is nonzero, the helper classifies the first output
through callback `0x5898C1A8`, derives a value from receiver `+4` and the
classifier result, updates child `+0x12EC` through `FUN_589032E0`, copies the
text into child `+0x12E0` through `FUN_58731CE0`, and sets bit 0 in the child's
word at `+0x24`. If `+0x1338` is zero, it updates the child using receiver
`+4 - 0x46`, copies global string `0x5898C922`, and clears the same bit.

All 225 mapped bytes match at 100% under objdiff 3.8.0, with all seven operand
targets checked. The record schema, callbacks, receiver and child types,
derived value's units, flag meaning, and global string meaning remain unknown.
The callers establish packet/event update paths, not the visible label or
game-level action. No runtime behavior test was performed.
