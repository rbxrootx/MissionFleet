# Current Main record-display refresh

Ghidra shows `FUN_58868110` refreshing a set of child controls from an encoded
record and catalog tables. It loads bounded catalog entries into child data
fields, sends computed values to matched `FUN_58907360`, and updates three
numeric controls through `FUN_587c9e80`. That helper stores a value and calls
`FUN_587c9d80`, which derives decimal digits and a sign marker into receiver
fields.

This direct-call slice closes at three functions and 2,499 bytes:

| Function | Ghidra body ranges | Bytes |
| --- | --- | ---: |
| `FUN_58868110` | `0x58868110..0x588689F3` | 2,276 |
| `FUN_587c9e80` | `0x587C9E80..0x587C9E91` | 18 |
| `FUN_587c9d80` | `0x587C9D80..0x587C9DAC`, `0x587C9DB0..0x587C9E4F` | 205 |

The digit formatter's two instruction ranges are separated by a three-byte
non-body gap. ObjDiff 3.8.0 verified all three reconstructed streams at 100.0%
and checked 37 mapped operand records. The focused verifier checks all 17
selected Ghidra call edges, 36 direct transfers for closure, and two incoming
calls that establish how the refresh is reached.

## Context and uncertainty

Open callers `FUN_58868a00` and `FUN_58869cf0` both copy a 0x60-dword state
block to receiver `+0xCC` before calling `FUN_58868110`; `FUN_58868a00` also
calls matched `FUN_5886ba60`. They remain unmatched and are context for this
callee slice, so the wider panel lifecycle is not complete. The owning
class/vtable, catalog slot meanings, actual stat labels, source-field encoding,
and live rendering effects remain unresolved. No client visual or emulator
runtime test was performed.

This batch moves the repository inventory from 7,762 to 7,765 matched
functions and from 2,462,683 to 2,465,182 matched bytes out of 10,470,295.
The current Main.dll component moves from 1,629 to 1,632 functions and from
1,489,265 to 1,491,764 matched bytes.
