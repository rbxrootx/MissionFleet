# Current Main ship-map screen constructor

The constructor at `0x588E05C0` is named `CShip_MapObjectScreen` by its vtable
reference in Ghidra. Two functions call it: `FUN_587374b0` at `0x5873754F`, and
`FUN_58789FE0` at `0x5878A046` and `0x5878A0A0`.

Ghidra's body installs that vtable, calls initialization helpers, reads values
from mapped client records, initializes a large set of receiver fields and
counters, and repeatedly calls `FUN_589031A0` while preparing associated child
objects. The decompilation does not establish the full receiver layout, helper
contracts, or the meaning of those objects and record fields, so those are left
unlabeled here.

Ghidra assigns six code ranges totaling the inventory's 13,492 bytes. Capstone
decodes the five gaps between ranges as alignment NOPs (`lea ecx,[ecx]` and
`lea esp,[esp]` forms); they are excluded from the emitted function segments.
The source is generated from the captured mapped bytes with every instruction
encoded explicitly. ObjDiff 3.8.0 reports 100% for all six compiled segments;
633 immediate and address operands were checked against the mapped image.

This establishes a byte match and static control-flow facts. The constructor was
not exercised in the original client, and the decompiler output does not
establish the original high-level source or runtime visual result.
