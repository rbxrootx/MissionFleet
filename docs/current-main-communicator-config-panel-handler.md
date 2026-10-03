# Current Main communicator-configuration panel message handler

Ghidra's RTTI metadata identifies the vtable at `0x5899E400` as
`CPannelCommunicatorConfigPannel`; `FUN_588450b0` occupies slot `+0x18`. The
existing constructor evidence for `FUN_58843380` records the same vtable name.
This handler has two body ranges totaling 5,567 bytes:
`588450B0..5884526C` and `58845270..58846671`. ObjDiff 3.8.0 verifies the
emitted source against the captured mapped client at 100%, with 180 relocation
operands checked.

The `__thiscall` body dispatches on values passed in its third argument,
including `62000` (`0xF230`), `0xF232`, `0xF231`, `2`, and `0xF765`. It compares
the sender pointer against stored child pointers, calls virtual methods on the
panel and its children, and changes child state fields and flags. In the
`0xF765` path it checks cursor coordinates against rectangles obtained from
four child controls. These are observed code paths; message meanings and
child-to-control mappings are not inferred.

The only direct reference recorded by Ghidra is the class-vtable entry at
`0x5899E418`; the virtual-dispatch call sites have not been traced. The
three-byte span `5884526D..5884526F` contains no instructions and is skipped by
the recorded branch edges. Exact member names, message contracts, labels,
actions, and runtime appearance remain uncertain. No emulator runtime test was
performed.
