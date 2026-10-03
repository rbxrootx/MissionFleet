# State-update method evidence for `FUN_58798d60`

Ghidra decompiles `FUN_58798d60` as a `__thiscall` method with a 16-bit
selector, an object/state pointer, and additional integer arguments. No
reliable C++ class name is assigned. Its main switch contains selectors `1`,
`2`, `3`, `5`, `6`, `0xB`, `0xC`, `0xD`, and `0xE`; selectors `0x1C` through
`0x1F` appear in a nested dispatch.

The observed body first writes state fields and flags, releases an existing
state object on a replacement path, clears or resets a group of child-control
flags, and then branches by selector. Branches read shared sprite-data tables,
update child sprites, and copy values from the supplied object into receiver
fields or child objects. These writes, branches, and helper calls are direct
Ghidra observations. The selector meanings, receiver type, record schema, and
visible control semantics remain unresolved.

## Caller evidence

Ghidra's direct-reference audit records nine call instructions across five
callers. Four are in `FUN_587e3080`, whose decompilation passes selector values
`1`, `2`, `3`, and `0xD` to this method along separate state-update paths. The
call sites establish selector values and argument order only; their user-facing
names are not inferred here.

## Validation and limits

Ghidra reports three body ranges: `0x58798D60..0x58798E5F` (256 bytes),
`0x58798E6A..0x58798E85` (28 bytes), and `0x58798E8F..0x58799E62` (4,052
bytes), totaling 4,336 bytes. The 10-byte and 9-byte gaps are outside the
reported body and are not claimed as owned by this function.

`tools/generate_mapped_client_asm.py` emits source only for those ranges from
the locally captured mapped client image. ObjDiff verified all 4,336 bytes and
60 mapped operand records. This is an exact machine-code match, not proof that
the high-level behavior or live runtime effects are fully recovered. No
emulator runtime test was performed.
