# Installed Core.dll sprite screen dispatch

This semantic port reconstructs `Core.dll!FUN_587BA830` and its screen helper
reads. The function is 272 bytes at runtime address `0x587BA830` in the
hash-pinned mapped Core image (`2b8ed57633a6d1d4bb51d45c28d6d2117c4525dd7c9d9028454e946c7f90261a`); its original installed-file hash is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.
`src/client-current/Core/FUN_587ba830.cpp` remains a byte-emission source and
matches all 272 captured bytes with 15 audited call relocations.

The sprite is the implicit `this`; the explicit input is the screen, position,
four clip edges, color, and effect. Screen origin comes from `+0x04/+0x08` and
the viewport rectangle from `+0x14..+0x20`. The four edge helpers at
`0x584A0630`, `0x584A0670`, `0x584A0650`, and `0x584A0610` return the viewport
edges after adding the corresponding screen origin. The dispatcher clamps the
input edges with signed comparisons, subtracts the origin from position and
all edges using 32-bit x86 arithmetic, obtains the target pixel pointer from
`+0x50`, then invokes sprite vtable slot `+4`.

The x86 caller stack at that virtual call contains nine DWORDs: target pixel
pointer, local x/y, four local clip edges, color, and effect. This matches the
slot-1 compositor epilogue `ret 0x24` and the readable ITNTL wrapper at
`0x100EB530`. This call-stack evidence resolves the Ghidra pseudocode's
misattributed helper arguments. No explicit inverted-rectangle or empty-clip
check appears here; the adjusted values always reach slot 1.

The C++ port lives in
`src/client-current/semantic/CoreSpriteScreenDispatch.cpp`. It preserves
signed edge comparisons, DWORD wraparound, the unchanged input clip, the
screen's target pointer, and unconditional slot-1 forwarding. The
`missionFleetCoreSpriteDrawBridge` connects it to the generic node port. The
native test composes the scene wrapper, node callback, screen dispatcher, and
an injected sprite slot-1 implementation in one call path.

## Limits

The slot-1 target is injected because concrete sprite classes have distinct
pixel-format implementations. This slice proves screen geometry and dispatch
arguments; pixel writes still depend on the concrete sprite compositor and
the runtime screen format. No original-client framebuffer comparison is
claimed.

## Validation

`python tools/verify_core_sprite_screen_dispatch.py` checks the full mapped
image and dispatcher hashes plus the exact bytes of the origin, viewport, and
pixel-buffer accessors before compiling and running the composed native test.
`python tools/verify_client_matches.py --config
config/NF2_2026/core-verifications.json --only 587BA830` separately recompiles
the byte-emission source and confirms its 100% match.
