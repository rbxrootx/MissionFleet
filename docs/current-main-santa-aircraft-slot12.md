# Main.dll `CSantaAircraft` vtable slot +0x30

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on one complete
range, `[0x588D2910, 0x588D29E8)`: 216 bytes and 77 instructions. A separate
read-only Ghidra run confirms that extent and the three direct calls. Both edge
exports reference the function from cell `0x589A0F68`, slot `+0x30` in the
RTTI-identified `.?AVCSantaAircraft@@` vtable at `0x589A0F38`. The mapped cell
contains `0x588D2910`, and matched constructor `FUN_588D2480` installs the
same table. No direct code caller was found.

Ghidra pseudocode shows a method that first checks bit `0x04` in the word at
`this+0x24`. If set, it scans the null-terminated text at `this+0x6C`. For
nonempty text, it compares the value at `this+0x04` with the difference between
`this+0x70` and `this+0x8C`. One branch calls byte-matched `FUN_589032E0` with
the value at `this+0x04` minus `this+0x80`, then adds `this+0x80` to `this+0x0C`.
The other branch checks whether `this+0x88` equals 1. If so, it copies text
from `this+0x84` into `this+0x6C` using byte-matched `FUN_58731CE0`, invokes the
global callback at `DAT_5898C1A8` with the value at `this+0x84` and address
`this+0x8C`, then calls virtual slot `+4` on the object at `this+0x50` with
that value and the callback result. It clears `this+0x88`, calls
`FUN_589032E0` with `this+0x78`, and stores `this+0x70 - this+0x78` at
`this+0x0C`.

The method then starts from the node at `this+0x3C`, follows each node's
pointer at `+0x38`, and invokes that node's virtual slot `+0x0C`. When a link
returns to the original node, mapped instructions restore saved registers and
tail-jump to the final callback. Ghidra warns that it could not recover a jump
table at `0x588D29E6` and represents this terminal indirect transfer as a call;
the mapped bytes resolve the actual tail jump.

The two direct helpers are byte-verified. Their Ghidra output supports bounded
text copying in `FUN_58731CE0` and a state update plus propagation through
flagged descendants in `FUN_589032E0`. The method's field meanings, bit meaning,
global callback signature, object role at `this+0x50`, and virtual callback
contracts remain unknown. No emulator callback or runtime test was performed.
The emitted source preserves the exact x86 instruction stream; it is not
recovered high-level C++.
