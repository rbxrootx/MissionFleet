# Current Main pointer and key event handler

`FUN_588b96b0` occupies the contiguous Ghidra range
`0x588B96B0..0x588BA1AC`, totaling 2,812 bytes in the pinned mapped
`Main.dll`. ObjDiff verifies the emitted instruction stream against the mapped
image.

## Evidence from the original client

Ghidra records a data reference to the function pointer slot at `0x589A0964`.
That slot contains `0x588B96B0` in the captured image. Adjacent entries contain
addresses for several nearby routines, including `0x588B4E00`, `0x588B52D0`,
`0x588B5840`, and `0x588B5B90`; the table's type and owning class have not been
recovered.

The routine reads an event discriminator at `param_2+4`, additional event fields
at `+8` and `+0xA`, walks a linked child-handler chain, and branches on the
observed values `0x100`, `0x200`, `0x201`, `0x202`, `0x203`, `0x204`, and
`0x20A`. Its branches invoke child virtual methods, toggle stored child state,
call control adjustment helpers with several step amounts, and update local
flags at receiver indices `0x5D`, `0x71`, and `0x72`. Some paths pass strings
from the mapped image to a prompt/display helper. ObjDiff verifies all 2,812
bytes and checks 139 mapped operand targets.

## Uncertainties

The owner class, callback table layout, child-control identities, and event
payload meanings remain unresolved. The numeric values resemble standard
Windows keyboard and pointer messages, but that mapping is an inference rather
than a recovered declaration. No emulator input test was performed.
