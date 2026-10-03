# Current Main `CNavyFIELDScreen` destructor

The installed FleetMission `Main.dll` maps this function at `0x587C20E0`.
Ghidra reports one contiguous body, `0x587C20E0..0x587C2C6C` (2,957 bytes),
and labels the vtable stored at the start of the object as
`CNavyFIELDScreen::vftable`.

## Behavior supported by the original code

The decompilation writes that vtable through the `this` pointer, then checks a
series of global pointer slots. For each non-null slot it calls the pointed-to
object's first virtual function with `1` and clears the slot. Two slots use
virtual offset `+8`. It passes four additional globals to the callback at
`0x5898C088`, clears more screen-related pointers, and walks the four-byte
slots from `0x58A0B1C4` up to (but not including) `0x58A0B1E4`, disposing and
zeroing each non-null entry. It finishes by calling `FUN_58902C10`.

Ghidra records a direct call from `FUN_587C2CB0` at `0x587C2CB3`. That wrapper
calls this function, tests the low bit of its second argument, and calls
`FUN_5897CC42(this)` when the bit is set. This supports identifying the caller
as a deleting-destructor wrapper.

The C++ source is an instruction-level reconstruction from the installed
mapped image. The Ghidra body boundary and references came from project
`CurrentFleetMain`, module `/Main.unpacked.dll`; the decompilation and wrapper
are preserved in `var/current-main-next/587c20e0-ghidra.c` and
`var/current-main-next/587c2cb0-ghidra.c` during local analysis.

## Unresolved details

Ghidra does not establish semantic names or ownership contracts for the global
slots, nor the concrete types behind their indirect calls. The callback
contract at `0x5898C088`, the role of `FUN_58902C10`, and runtime destruction
effects have not been independently validated in the emulator. The byte match
verifies emitted machine code, not those remaining semantic details.
