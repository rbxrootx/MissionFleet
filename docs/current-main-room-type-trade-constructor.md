# Main.dll CRoomTypeTrade constructor

Fresh Ghidra references show byte-matched `FUN_588C9280` calling
`FUN_588D1F60` at `0x588CAB4F` after `FUN_5897CC4E` accepts resource `0x70`.
The matched caller is identified from its installed vtable as
`CRoomSettingManager`. It passes the allocated object in ECX and five stack
arguments taken from ESI, EBP, EBX, `[ESI+0x68]`, and `[ESI+0x12C]`. After the
constructor or its null path, the caller stores the result at receiver
`+0x180`. The focused verifier checks this resource gate, argument setup, call,
and pointer store against mapped caller bytes.

The constructor is exactly 18 instructions / 47 bytes in the fresh Ghidra body
range `[0x588D1F60, 0x588D1F8F)`. It forwards the five stack arguments to
byte-matched base constructor `FUN_588D02E0`, installs vtable `0x589A0EE8`,
returns `this` in EAX, and uses `ret 0x14` to clean the five 4-byte arguments.
The vtable's complete-object locator points to RTTI descriptor
`.?AVCRoomTypeTrade@@`, confirming the class identity.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not a recovered high-level C++ implementation.
The meanings of resource `0x70`, the arguments, state initialized by the base
constructor, virtual behavior, and visible or gameplay effect remain
unresolved. This is static client and RTTI evidence; no runtime or visual
emulator test was performed.
