# Current Main.dll eight-slot linked-node cleanup

`FUN_588DE5C0` is called by the already matched state-reset routine
`FUN_588DF450` and by matched `FUN_587BB700` with an object in `ECX`.
Its [instruction source](../src/client-current/Main/FUN_588de5c0.cpp) matches
all 86 original bytes; the direct call to `FUN_5873A370` is target-checked.

The receiver contains eight 16-byte slots starting at `+0x1390`. Within each
slot, the routine follows the head pointer at `+0` through node `+8` links.
It first calls `FUN_5873A370` with each node's `+0xC` payload pointer in
`ECX`. That callee [resets three payload fields](current-main-linked-node-payload-reset.md).
It then reloads the slot head and traverses again. On this pass it
saves the next pointer before invoking the first function in each node's
vtable with stack argument `1`. Finally it zeroes slot DWORDs `+0`, `+4`,
and `+8`, leaves `+0xC` untouched, and advances to the next slot.

The [portable C++ model](../src/client-current/semantic/EightSlotNodeCleanup.cpp)
expresses the two passes using callback adapters. Its
[native test](../tests/native/eight_slot_node_cleanup_test.cpp) checks the
eight-slot sweep, payload-before-node call order, saved-next behavior, head
reload, and exact slot zeroing. Run `python tools/verify_eight_slot_node_cleanup.py`.
The model is not byte-identical and does not assume the original x86 pointer
layout; the instruction source is the counted match.

The payload fields' meanings, node destructor contract, slot field meanings,
and callback mutation rules are still unknown. No runtime client test was
performed.
