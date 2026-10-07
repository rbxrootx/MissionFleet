# Main.dll CRoomTypeHCB constructor

Fresh Ghidra references show byte-matched `FUN_588C9280` calling
`FUN_588CDF70` at `0x588CAC06` after `FUN_5897CC4E` accepts resource `0x70`.
The matched caller is identified from its installed vtable as
`CRoomSettingManager`. The caller sets up the constructor arguments and stores
its return at receiver `+0x1A0`. The focused verifier checks this gate, setup,
call, and pointer store against the mapped client bytes.

The constructor is exactly 18 instructions / 47 bytes in the fresh Ghidra body
range `[588CDF70, 588CDF9F)`. Its instructions forward the receiver and
constructor arguments to byte-matched `FUN_588D02E0`, install the vtable at
`0x589A0DA8`, then return the receiver with `ret 0x14`, callee-cleaning five
4-byte stack arguments. The vtable's complete-object locator points to the RTTI type
descriptor `.?AVCRoomTypeHCB@@`, independently identifying the class.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not a recovered high-level C++ implementation.
The meaning of resource `0x70`, state held by the base initializer, virtual
behavior of `CRoomTypeHCB`, and its appearance or gameplay effect remain
unresolved. This is static client and RTTI evidence; no runtime or visual
emulator test was performed.
