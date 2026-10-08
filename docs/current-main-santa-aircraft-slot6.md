# Main.dll `CSantaAircraft` vtable slot +0x18

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on the complete
contiguous range `[0x588D26D0, 0x588D2756)`: 134 bytes and 39 instructions.
The mapped `Main.dll` image decodes across the same range. Both fresh edge
exports reference the method from vtable cell `0x589A0F50`, slot `+0x18` in
the RTTI-identified `.?AVCSantaAircraft@@` vtable at `0x589A0F38`. The matched
constructor `FUN_588D2480` installs this same table. No direct code caller was
found, so virtual dispatch is the evidenced entry path.

The method pushes its stack argument and calls `FUN_5873C4A0`, then tests EAX;
the zero branch returns 0. On the nonzero path it reads the global object at
`DAT_58A2468C`, checks fields `+0x170` and `+0x194`, selects ECX from that
object when both checks pass, and calls byte-matched `FUN_58907990` with the
value at `DAT_58A248F8`. It repeats the state check and, when satisfied,
dispatches through a virtual function at the selected object's vtable `+4`
with argument 0. The nonzero paths return 1. In the other branch it zeroes ECX
and dereferences `[ECX]` before making an indirect call; the reachability and
runtime meaning of that path are unknown.

A separate Ghidra decompilation of `FUN_5873C4A0` shows the AP-damage state
path and `Aircraft Damaged ... AP P` diagnostic. The callback is now
byte-verified with its sibling HE path and shared indexed-state helper in
[`the damage-callback subsystem`](current-main-santa-aircraft-damage-callbacks.md).
Ghidra still types it `void` although this caller immediately tests EAX, so the
effective return contract, stack argument meaning, global field roles, numeric
helper value, and indirect callback contract remain unresolved. The null-based
fallback also needs runtime context before it can be interpreted.

The emitted source preserves the exact 134-byte x86 instruction stream and is
verified byte-identical by objdiff 3.8.0. It is instruction-level source, not
recovered high-level C++. No emulator callback test was performed.
