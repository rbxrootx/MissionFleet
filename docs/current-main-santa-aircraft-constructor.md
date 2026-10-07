# Main.dll `CSantaAircraft` constructor

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on the complete
range `[0x588D2480, 0x588D24D7)`, containing 87 bytes and 28 instructions.
The mapped image decodes through the same end address. Fresh edge exports show
one direct incoming call, from `FUN_587F5760` at `0x587F5866`, and one outgoing
call, to byte-matched `FUN_58741C20` at `0x588D24B2`.

The constructor forwards its nine incoming stack arguments to
`FUN_58741C20`, then writes `0x589A0F38` to the object's vtable pointer. That
table's RTTI descriptor names `.?AVCSantaAircraft@@`; its RTTI class hierarchy
lists `.?AVCAircraft@@` as a base. It writes `6` to
`[this+0x560]` and `1` to `[this+0x4F8]`, returns the object pointer in EAX,
and cleans the nine argument slots with `ret 0x24`. The called constructor is
the matched `CAircraft` initializer, which allocates and initializes the base
aircraft's sprite-child and control state as documented in
[its evidence](current-main-58741c20-aircraft-constructor.md).

The meanings of the nine arguments and the two fields remain unidentified.
The direct creation caller `FUN_587F5760` is not yet byte-matched, so its
construction context is unresolved. RTTI and the base-constructor call support
the observed class and initialization sequence, but no runtime or visual
emulator test was performed.

The source preserves the exact mapped x86 instruction stream and is verified
byte-identical by objdiff 3.8.0. It is instruction-level source, not recovered
high-level C++.
