# Main.dll `CScrollTextScreen` vtable slot 0

The mapped address point at `0x589A0F5C` is preceded by Complete Object Locator
`0x589AA244`. Its RTTI names `.?AVCScrollTextScreen@@` and lists
`CStaticTextScreen`, `CTextScreen`, and `CScreen` as bases. Both fresh Ghidra
edge exports reference `FUN_588D2840` from slot 0 at that address point.

Fresh Ghidra body exports include four ranges totaling 70 bytes and 23
instructions. They omit three reachable post-call bridges because Ghidra marks
calls to the matched `FUN_5897CC42` free thunk as non-returning. Mapped x86 bytes
show the calls return into stack cleanup and pointer clearing at `0x588D2859`,
`0x588D2879`, and `0x588D2897`. Including those 26 bytes gives a contiguous
96-byte body, `[0x588D2840, 0x588D28A0)`, with 28 instructions. Its `ret 4` ends
at `0x588D289F`; the next independent function begins at `0x588D28A0`.

The method installs the `CScrollTextScreen` vtable, conditionally releases and
clears `this+0x84`, then installs the `CStaticTextScreen` vtable, conditionally
releases and clears `this+0x6C`, and calls matched `FUN_58903450` for base
cleanup. If the low bit of its flag is set, it releases the receiver through
the matched free thunk before returning the receiver. This slot-0 flag pattern
and free behavior identify a scalar-deleting-destructor form; the source-level
label is an inference from the ABI and mapped body.

RTTI establishes the table's class ownership, but no constructor or allocation
caller for this class was established in this slice. The meanings of fields
`this+0x6C` and `this+0x84` and the base cleanup helper's contract remain
unknown. No emulator lifecycle test was performed. The emitted source preserves
the complete mapped x86 instruction stream; it is not recovered high-level C++.
