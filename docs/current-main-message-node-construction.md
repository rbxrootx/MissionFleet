# Main message-node construction and setup

This verified subsystem covers the 0xB4-byte child constructed by
`FUN_5875A7E0` and populated by `FUN_5875A4B0`. Both helpers are called in
sequence from `FUN_58752000` while appending message text to a linked list and
from `FUN_58849210` while building the joined-fleet notice. Those caller
relationships and the localized joined-fleet text path are recorded in the
current Main verification manifest.

`FUN_5875A7E0` calls the observed base initializer, installs two vtable values,
creates a set of text/control children, and conditionally binds resource-backed
children using count and pointer checks against global resource state. It also
creates a child at parent offset `+0xB0`, links it back to the parent, writes
observed geometry/timing values, and copies four child fields into the parent.
The body is 1,077 bytes, is SEH-protected, returns with `ret 0x1C`, and has 34
mapped operand targets.

`FUN_5875A4B0` consumes the caller's 0x60-byte record. It sets the primary text
child from the string at record `+1`, stores the leading byte, updates a child
flag and count, and releases old child resources when present. It copies the
record's fields at `+0x3C`, `+0x40`, `+0x44`, `+0x48`, and `+0x58` into the
parent, selects resource entries under observed `>0x59` and `>0x5A` gates,
copies six words into two children, applies `0x101` to one child, and updates
two more children from fields at `+0x34` and `+0x1C`. The body is 806 bytes,
returns with `ret 4`, and has 27 mapped operand targets.

The source reconstruction preserves each instruction as literal x86 bytes;
verification recompiles the source and compares the function body and mapped
operand targets to the pinned original. The exact meanings of the record
schema, control/resource types, resource counts, flag, setting, and geometry
remain unknown. No emulator runtime test has been performed.

## Shared record append path: `FUN_588490F0`

The count-checked semicolon parser `FUN_58849360` passes this helper each
zeroed token buffer. Event-message helper `FUN_58814FD0` also passes it a local
record in the observed message-resource path. At both call sites, the receiver
is in ECX and the record pointer is the single stack argument. The distinct
callers establish two uses of the append path, but do not prove both buffers
share one semantic schema.

The helper requests a 0xB4-byte object through `FUN_5897CC4E`. On the observed
non-null path, it initializes that object through `FUN_5875A7E0`, taking values
from receiver offsets +4, +8, and +0xAC. It calls callback `0x5898C198` with
the input pointer and a stack-local buffer, passes the resulting local record
to `FUN_5875A4B0`, and applies mask `0x7FFF` to the new object's word at +0x24.
For the first object it stores the node at receiver +0x6C and +0x100. Later
objects are linked from the prior tail through +0x54 and back through the new
node's +0x50. It increments receiver word +0xF2, stores the new tail at +0x70,
and calls `FUN_588486E0`.

The complete SEH-protected body is 283 bytes with nine mapped operand targets;
it returns with `ret 4` at `0x58849208`, followed by five `CC` bytes before
`FUN_58849210` at `0x58849210`. The receiver and node types, input schema,
callback contract, field meanings, and allocation-failure behavior remain
unresolved. No runtime or emulator test was performed.

## Post-append linked-record refresh: `FUN_588486E0`

Both appenders call this helper after storing their new tail and incrementing
their respective receiver counts. They pass zero, so these observed paths do
not toggle the receiver's word at +0xF6. With a nonzero argument, the helper
toggles +0xF6 between 0 and 1 only when its current value is one of those two;
other values are left unchanged. State 0 uses receiver pointer +0x6C and words
+0xFA/+0xF2, while state 1 uses pointer +0x64 and words +0xF8/+0xF0.

For active nodes it changes masks in node word +0x24, computes up to five
0x1C-spaced offsets below 0x8C, calls `FUN_58903290` with receiver coordinates
from +4/+8 and each offset, and follows node link +0x54 while +0xF6 is 1. The
remaining loops clear mask 0xFFFE on the applicable nodes. These operations
are visible in the mapped instructions; the UI meaning of the states, node
flags, offsets, and helper call is not established.

The corrected body is 390 bytes with three mapped operand targets and returns
with `ret 4` at `0x58848863`. Its previous 383-byte catalog extent stopped
after the first byte of a conditional branch. The corrected extent includes
that branch and the epilogue, then stops before ten `CC` bytes and the next
function at `0x58848870`. No client runtime or emulator test was performed.
