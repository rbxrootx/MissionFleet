# Main.dll `CSantaAircraft` vtable slot 0

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on two ranges:
`[0x588D24F0, 0x588D250B)` with 27 bytes / 8 instructions, and
`[0x588D250E, 0x588D2514)` with 6 bytes / 3 instructions. The mapped bytes
between them decode as a reachable `add esp, 4` at `0x588D250B`, the
fall-through after the conditional helper call if it returns. Ghidra omits this
three-byte instruction from its body ranges because it marks the helper call as
a terminator. The exact match therefore covers 36 bytes in three instruction
ranges: both Ghidra ranges plus this mapped continuation. The checked manifests
preserve the distinction between Ghidra's 33-byte body and the complete mapped
instruction stream.

The mapped vtable cell at `0x589A0F38` points to `FUN_588D24F0` at slot 0.
RTTI identifies that vtable as `.?AVCSantaAircraft@@` and lists
`.?AVCAircraft@@` in its class hierarchy. Fresh edge exports show no incoming
direct call, so the known entry is virtual dispatch.

The method writes the `CSantaAircraft` vtable pointer back to the receiver,
calls `FUN_58741990`, then tests bit 0 of the stack value at `[esp+8]`. When
that bit is set, it passes the receiver to byte-matched `FUN_5897CC42`. That
address is a six-byte indirect jump thunk whose captured target is outside
`Main.dll`; Ghidra classifies the call as a terminator. The mapped cleanup and
return bytes are still included in the exact match. It returns the receiver in
EAX and ends with `ret 4`. `FUN_58741990` is not yet byte-verified, so its
effects and role in the hierarchy remain unknown. The flag's meaning, whether
the imported target returns, and whether it releases the object are unresolved.
The slot and flag pattern are consistent with destructor dispatch, but that
reading is an inference from static code.

The emitted source preserves all 36 mapped instruction bytes and is verified
byte-identical by objdiff 3.8.0. It is instruction-level source, not recovered
high-level C++. No runtime or emulator lifecycle test was performed.
