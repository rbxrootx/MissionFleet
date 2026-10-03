# Current Main sprite parser helpers

This slice follows the directly selected helper functions from the installed
current `Main.dll` sprite parser at `0x58903E40`. The parent parser's byte match
and its call sites provide the evidence for this boundary; the helper names
remain Ghidra labels unless otherwise stated.

Seven helpers now reproduce their mapped x86 bytes exactly under the recorded
VC6-compatible profile. ObjDiff 3.8.0 reports 100% for all seven, covering
1,229 bytes and 56 audited relocation operands:

| Address | Bytes | Parser evidence |
| --- | ---: | --- |
| `0x5897D53A` | 6 | Repeatedly reached from malformed-header and payload error paths. |
| `0x58907A90` | 45 | Selected in the format-2 path; installs the observed object state and calls `0x5896CAE0` with flag `1`. |
| `0x589073B0` | 510 | Selected after the parser's table lookup in its format-2 variant-0 path. |
| `0x5896C460` | 71 | Selected in the format-2 variant-0 path and delegates through `0x58907A90`. |
| `0x5896C010` | 569 | Selected in the format-2 high-color variant path. |
| `0x5896BF10` | 22 | Selected from a later format-2 payload path. |
| `0x5897CD4C` | 6 | Indirect-call thunk reached on the format-3 path. |

The helper roles above are bounded to their parser branch, call targets, and
observed machine instructions. The format table schema, object-field meanings,
and host callback targets remain unresolved.

The construction/exception-cleanup branch remains open. Its 77-byte helper is
named `` `eh_vector_constructor_iterator' `` in the inventory; that quoted
Ghidra label produced invalid C++ when emitted, so it did not pass the byte
verifier. Its caller's helper chain also reaches `__ArrayUnwind` at `0x5897CFFD`,
whose indexed Ghidra function extent is not fully decoded. I left that chain
out of verified progress rather than infer bytes or substitute a host runtime
implementation. This does not affect the seven verified helpers listed above.
