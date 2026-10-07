# `CShip_MapObjectScreen` encoded child-state setup

The byte-matched `CShip_MapObjectScreen` constructor `FUN_588E05C0` calls
`FUN_588D6EA0` at `0x588E2FA4`. The matched caller loads a DWORD from the object
at `[ESP+0x2C]` offset `+0x110`, pushes it as the method argument, and sets
`ECX=ESI` for the screen receiver. Fresh Ghidra references report this as the
helper's only direct caller.

The complete fresh Ghidra body is the contiguous range
`[0x588D6EA0, 0x588D7352)`: 1,202 bytes and 330 instructions. It computes
`(argument >> 8) & 0xFFF`, clears the resource pointer and number state for six
child objects at receiver offsets `+0x6514` through `+0x6528`, then configures
the observed group for value zero or one of five nonzero bands: 1–10, 11–100,
101–300, 301–500, or 501–600. Values above 600 take no nonzero-band branch.

For the zero path, the code selects a version-gated global resource record at
table offset `+0x27C4`, installs it in the child at `+0x6528`, and sets that
child's flag bit 0. Each nonzero band selects the corresponding record at
`+0x27D8`, `+0x27D4`, `+0x27D0`, `+0x27CC`, or `+0x27C8` when the observed
version and table-pointer gates succeed. The method copies six record fields
into the associated child, updates child positions through matched
`FUN_58903290`, writes the encoded value through matched `FUN_58907360`, and
sets bit 0 in the observed child flags. All 17 direct call targets are already
byte-verified.

ObjDiff 3.8.0 verifies the emitted 1,202-byte body at 100.0%. The focused
[verifier](../tools/verify_current_main_ship_map_encoded_child_setup.py) checks
the fresh range and instruction count, every direct call target, the matched
constructor body range, and the original argument/receiver setup at the call
site. The exact instruction stream is in
[`FUN_588d6ea0.cpp`](../src/client-current/Main/FUN_588d6ea0.cpp).

The encoded value's meaning, child-control roles, resource-record schema,
coordinate units, and rendered result remain unknown. This is static
reconstruction evidence; no emulator or live-client visual test was performed.
The caller's class identity and constructor context are documented in the
[screen constructor notes](current-main-ship-map-screen-constructor.md).
