# Current Main `CMine_MapObjectScreen` update

Ghidra's RTTI data identifies `FUN_587a4440` as a virtual method in
`CMine_MapObjectScreen`. The complete-object locator at `0x589A66D4` points to
the type descriptor `.?AVCMine_MapObjectScreen@@`; the vtable at `0x5899990C`
contains this function at slot `+0x0C`. The body is one range,
`0x587A4440..0x587A505E`, totaling 3,103 bytes. ObjDiff 3.8.0 verified all
3,103 bytes and checked 128 mapped operand records.

The method checks an enable bit at receiver offset `+0x24` and advances a
state machine using fields at `+0x4D` and `+0x4E`. Its branches adjust
timer-like and coordinate-like fields, query through `FUN_587c3d60`, and call
effect, event, and object-update helpers including `FUN_587b7260`,
`FUN_587c4450`, `FUN_588f5040`, and `FUN_587efd60`. It also advances a linked
child list and dispatches child virtual methods. Those details come from the
decompiled body and vtable data; the field names and helper argument meanings
have not been recovered.

Ghidra records no direct code callers. The vtable reference establishes that
the method is available for virtual dispatch, but the concrete dispatch sites
are not identified here. The precise method name, state and event meanings,
timing and coordinate units, and runtime mine behavior remain uncertain. No
emulator runtime or visual comparison was performed.
