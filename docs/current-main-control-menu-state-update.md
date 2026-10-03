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
