# Main.dll `CSantaAircraft` vtable slot +0x1C

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on the complete
contiguous range `[0x588D2760, 0x588D27EB)`: 139 bytes and 41 instructions.
The mapped `Main.dll` image decodes across the same range. Both fresh edge
exports reference the method from vtable cell `0x589A0F54`, slot `+0x1C` in the
RTTI-identified `.?AVCSantaAircraft@@` vtable at `0x589A0F38`. The matched
constructor `FUN_588D2480` installs this same table. No direct code caller was
found, so virtual dispatch is the evidenced entry path.

The method passes its two stack arguments to `FUN_5873C790`, tests EAX, and
returns 0 on the zero branch. Otherwise it reads the global object at
`DAT_58A2468C`, checks fields `+0x170` and `+0x194`, selects ECX from that
object when both checks pass, and calls byte-matched `FUN_58907990` with the
value at `DAT_58A248F8`. It repeats the state check and, when satisfied,
dispatches through a virtual function at the selected object's vtable `+4`
with argument 0. The nonzero paths return 1. In the other branch it zeroes ECX
and dereferences `[ECX]` before an indirect call; the reachability and runtime
meaning of that path are unknown.

A separate Ghidra decompilation of `FUN_5873C790` shows aircraft-state writes
and the diagnostic string `Aircraft Damaged ... HE P`. That helper is not yet
byte-verified, and Ghidra types it `void` although this caller immediately
tests EAX. The effective return contract, stack-argument meanings, global
field roles, numeric-helper value, and indirect callback contract remain
unresolved. The null-based fallback needs runtime context before it can be
interpreted.

The emitted source preserves the exact 139-byte x86 instruction stream and is
verified byte-identical by objdiff 3.8.0. It is instruction-level source, not
recovered high-level C++. No emulator callback test was performed.
