# Current Main control-menu state update

Ghidra RTTI identifies `FUN_587e44c0` as a method in the
`CPageFactory_ControlMenuScreen` vtable at `0x5899B824`, slot `+0x0C`. The
method's body is split across four ranges totaling 5,224 bytes:
`587E44C0..587E4C29`, `587E4C30..587E53D5`, `587E53E0..587E5535`, and
`587E5540..587E5941`. ObjDiff 3.8.0 verifies the emitted source against the
captured mapped client at 100%, with 162 relocation operands checked.

The routine first checks object flags and mode fields. In modes `0x100` and
`0x400`, it moves two values toward their respective targets, limiting each
step to `0x20`; when both values settle it runs separate follow-up branches.
Mode `0x200` runs a much larger child-control update path that changes flags
using object state and shared globals. Mode `0xD00` has a separate path gated
by a field reaching `100`, which invokes two indirect callbacks, clears a
global, and dispatches a virtual method. These are observed operations; the
meaning of each mode and child field remains unresolved.

Ghidra's direct-reference audit records the function in a vtable slot and no
direct callsite; virtual dispatch callers have not been traced. The skipped
spans `587E4C2A..587E4C2F` (6 bytes), `587E53D6..587E53DF` (10 bytes), and
`587E5536..587E553F` (10 bytes) contain no instructions. Branches target the
next included ranges. Runtime appearance and behavior remain untested in the
emulator.

## Direct callees

The state updater calls the following twelve functions directly. Each source
was compared against the captured mapped `Main.dll`; all 5,908 bytes matched,
with 246 relocation operands checked. This verifies the direct call boundary,
not the full recursive call graph.

| Address | Bytes | Caller evidence |
| --- | ---: | --- |
| `587D6AA0` | 172 | Called after loading a byte-sized state value. |
| `587B6090` | 13 | Conditional call in the early object-state path. |
| `588B2700` | 45 | Called with a child pointer loaded from `[esi + 0xDB8]`. |
| `58888D80` | 167 | Called after pushing `0x30000`. |
| `58893860` | 1,517 | Called after a condition check with `0x220000`. |
| `587D74D0` | 843 | Called after updating and storing an object field. |
| `588E64F0` | 49 | Called in the repeated-record path. |
| `5876C8B0` | 24 | Called in a later state branch. |
| `5876D880` | 45 | Receives the child pointer at `[esi + 0xD84]`. |
| `5876D0A0` | 198 | Also receives the child pointer at `[esi + 0xD84]`. |
| `587E4230` | 647 | Called in the later object-update path. |
| `588C0DA0` | 2,188 | Called after pushing `0x12C`. |

The callee bodies provide machine-code evidence for these exact operations, but
their underlying meanings and UI effects remain partly unknown. Recursive
tracing found additional unmatched callees below several of these functions;
those are not included in this direct-callee batch. Emulator behavior remains
unvalidated.
