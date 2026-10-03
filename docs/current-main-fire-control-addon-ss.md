# `CPannelFireControlAddOnSS` initializer

`FUN_588609f0` is a 4,843-byte `__thiscall` initializer in the installed 2026
`Main.dll` mapping. Ghidra resolves the vftable assigned at entry as
`CPannelFireControlAddOnSS::vftable`; the function first calls
`FUN_58857f30`, then stores that vftable in the receiver. Its direct-reference
audit records one caller, `FUN_58854a00` at `0x58855CE1`. In that caller's
construction path, a `0x768`-byte allocation precedes the call and the returned
pointer is stored at receiver slot `+0xA0`.

The body creates child controls using indexed shared-table data and helper
routines, stores child pointers in receiver slots, and updates child flags. It
contains repeated control-construction loops with iteration counts of five,
four, and three. Those patterns describe the recovered code flow only; the
shared-table schemas, resource identities, labels, and interactive meaning of
the children are not established. No runtime behavior was tested.

Ghidra identifies two code ranges totaling 4,843 bytes:

| Range | Bytes |
| --- | ---: |
| `0x588609F0..0x58860F0C` | 1,309 |
| `0x58860F10..0x58861CDD` | 3,534 |

The three bytes at `0x58860F0D..0x58860F0F` are not part of either range. The
generated source matches the mapped original byte-for-byte under the recorded
Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0, across both ranges with 148
relocation operands checked. The complete receiver layout and runtime
appearance remain unresolved.
