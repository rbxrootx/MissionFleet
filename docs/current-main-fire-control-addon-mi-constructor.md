# Current Main `CPannelFireControlAddOnMI` constructor

`FUN_5885d380` is one contiguous body at `0x5885D380..0x5885E375` (4,086 bytes).
The generated source uses this exact Ghidra-reported body range and the captured
mapped Main image. ObjDiff 3.8.0 confirms a byte-identical match and checks 132
operand targets.

Ghidra assigns the `CPannelFireControlAddOnMI::vftable` after the shared screen
base initializer. The one direct caller is `FUN_58854a00` (`CPannelFireControl`),
which stores the child at receiver offset `+0xA4` (slot `+0x29`). The constructor
stores child pointers at receiver offsets `+0xA8` through `+0x11C`, sourced from
shared sprite tables and helper constructors, then sets the field at `+0x120` to 1.

Those class, call, field, and table observations come from Ghidra and its caller.
The user-facing names and exact roles of individual child controls, sprite-table
entries, and the final state field remain unresolved. No emulator or visual test
has been performed for this slice.
