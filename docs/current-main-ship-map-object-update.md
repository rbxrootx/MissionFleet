# Current Main ship map-object update

Ghidra records `FUN_588e5150` in the vtable at `0x589A10EC`, slot `+0x0C`.
The preceding complete-object locator at `0x589AA384` points to RTTI type
descriptor `0x589B92E0`, named `.?AVCShip_MapObjectScreen@@`. The existing
[constructor notes](current-main-ship-map-screen-constructor.md) identify the
same class. This method has one contiguous 5,014-byte body range. ObjDiff 3.8.0
verifies it against the captured mapped client at 100%, with 221 relocation
operands checked.

The routine gates on object flags and an active field, then branches on the
state at object offset `+0x6090`. In state `0x40000`, it calls movement/control
helpers and clears one-shot fields. In state `0x60000`, it decrements a counter
or invokes a helper when it reaches zero. State `0x50000` runs the main update
path, adjusting counters and object fields and toggling many child-control
flags based on object fields and shared globals. The exact state meanings and
helper contracts are not recovered.

Ghidra's direct-reference audit records the method through vtable slot
`0x589A10F8`; dynamic dispatch callers have not been traced. Two commutative
`test` instructions use explicitly emitted original bytes (`84 D3` and
`84 CB`) because the compiler otherwise selects the opposite register order
and produces different machine code. No emulator runtime test was performed.
Its two calls to `FUN_588D6600` update child position values; the complete
callee and its corrected boundary are documented in the
[child position update notes](current-main-ship-map-child-position-update.md).
The stage-6 update path also invokes the conditional forwarder
[`FUN_5875CD10`](current-main-ship-map-conditional-forwarder.md) through the
object stored at `+0x21F08`.
