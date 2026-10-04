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
