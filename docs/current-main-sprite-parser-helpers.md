# Current Main sprite parser helpers

This slice follows the directly selected helper functions from the installed
current `Main.dll` sprite parser at `0x58903E40`. The parent parser's byte match
and its call sites provide the evidence for this boundary; the helper names
remain Ghidra labels unless otherwise stated.

Twelve helpers now reproduce their mapped x86 bytes exactly under the recorded
VC6-compatible profile. ObjDiff 3.8.0 reports 100% for all twelve, covering
1,469 bytes and 63 audited relocation operands:

| Address | Bytes | Parser evidence |
| --- | ---: | --- |
| `0x5897D53A` | 6 | Repeatedly reached from malformed-header and payload error paths. |
| `0x58907A90` | 45 | Selected in the format-2 path; installs the observed object state and calls `0x5896CAE0` with flag `1`. |
| `0x589073B0` | 510 | Selected after the parser's table lookup in its format-2 variant-0 path. |
| `0x5896C460` | 71 | Selected in the format-2 variant-0 path and delegates through `0x58907A90`. |
| `0x5896C010` | 569 | Selected in the format-2 high-color variant path. |
| `0x5896BF10` | 22 | Selected from a later format-2 payload path. |
| `0x5897CD4C` | 6 | Indirect-call thunk reached on the format-3 path. |
| `0x5897D0BE` | 77 | Construction/cleanup helper called on two parser paths; emitted with a valid C alias for Ghidra's quoted symbol. |
| `0x5897D7BC` | 69 | Exception-registration prolog called by the construction helper. |
| `0x5897D10B` | 24 | Cleanup helper that invokes `__ArrayUnwind` with captured count, stride, and callback arguments. |
| `0x5897D801` | 20 | Exception-registration epilog called by the construction helper. |
| `0x5897CFFD` | 50 | `__ArrayUnwind`, called by the cleanup helper; exact indexed byte extent matched as literal bytes. |

The helper roles above are bounded to their parser branch, call targets, and
observed machine instructions. The format table schema, object-field meanings,
and host callback targets remain unresolved.

The construction/exception-cleanup branch now matches byte-for-byte. Ghidra's
indexed 50-byte extent for `__ArrayUnwind` is not fully decoded, so the candidate
emits the mapped bytes literally and records zero inferred relocation operands.
This proves the indexed byte span, not the instruction boundaries or runtime
semantics; those remain unknown. The complete parser call-graph sweep through
depth five reports no unmatched callees.
