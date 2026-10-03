# Installed FleetMission logo/control screen

This subsystem covers the installed 2026 `Main.dll` constructor for the logo
and control screen, plus its direct child constructors and small child-list
helpers. The byte source is the locally captured mapped image at base
`0x58730000`; the mapped capture SHA-256 is
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Evidence from the installed client

Ghidra identifies `0x5878D6D0` as `CLogoControlMenuScreen` from the vtable
writes in the constructor. Its pseudocode shows initialization of the screen
base, `CMenuScreen`, and logo-screen vtables; it loads `Logo.spr`, `IMGLDN.spr`,
`IMGLGN.spr`, `Interface.spr`, and `ITDM0A.spr`, then allocates and initializes
the controls below. The caller that allocates/registers this screen is not yet
traced. Sprite parsing for the `Logo.spr` path is documented separately in
[`current-client-sprite-loader.md`](current-client-sprite-loader.md).

The direct constructor/helper slice is:

| Address | Bytes | Ghidra evidence / observed role |
| --- | ---: | --- |
| `0x5878D6D0` | 3,060 | `CLogoControlMenuScreen`; loads the screen's sprite files and constructs the listed controls |
| `0x587C75E0` | 419 | `CNFScreenShot`; allocates child objects and creates a static-text child |
| `0x5897CBC2` | 6 | Indirect host-callback thunk called from the screen constructor |
| `0x58793FF0` | 87 | `CLoopBackSpriteBundleScreen`; initializes its sprite-count-derived state |
| `0x58761090` | 780 | Initializes a text/sprite-bundle edit control and its internal buffers |
| `0x5890A5B0` | 69 | `CPasswordEditTextScreen`; delegates to its base initializer then installs its vtable |
| `0x58748E40` | 230 | Reallocates and clears three buffers when the requested length changes |
| `0x5875F420` | 129 | `CEffectText`; initializes the static-text base and state flags |
| `0x5875F0D0` | 13 | Writes a supplied value to object offsets `+0x70` and `+0x74` |
| `0x58907FD0` | 116 | `CListTextScreen`; initializes the static-text base and list state |
| `0x5876E510` | 164 | `CFadeMovingSpriteBundleScreen`; initializes from a sprite bundle and stores screen parameters |
| `0x5875B000` | 140 | `CDataEncryptor`; initializes fields and constructs nested state |
| `0x5890B370` | 323 | Base initializer reached through `FUN_5890A5B0` on this screen's construction path |
| `0x587B66E0` | 165 | Shared helper reached through `FUN_5876E510`; other callers exist |
| `0x588C60E0` | 143 | Helper reached through `FUN_5875B000`; dispatches two indirect host callbacks |
| `0x589728D0` | 25 | Helper reached through `FUN_587C75E0`; delegates into `FUN_58972850` |
| `0x58972850` | 124 | Child-initialization helper called from `FUN_589728D0` |
| `0x589724B0` | 79 | First helper called by `FUN_58972850` |
| `0x58972500` | 79 | Second helper called by `FUN_58972850` |
| `0x5897D5D0` | 6 | Shared indirect callback thunk called by both child helpers |
| `0x5897CC3C` | 6 | Indirect callback thunk used by `FUN_588C60E0` |
| `0x5897CC36` | 6 | Indirect callback thunk used by `FUN_588C60E0` |
| `0x58902CE0` | 59 | Updates a child-list field and recursively visits nodes selected by flag `0x4000` |
| `0x58902D20` | 59 | Updates a second child-list field and recursively visits nodes selected by flag `0x8000` |

The class names above come from vtable labels written by the captured
constructors. Descriptions of unnamed fields and helper effects are limited to
the observed memory accesses and call flow; they do not assign inferred UI
meaning to controls whose role is unknown.

## Byte-match validation

The 24 functions in this screen slice cover 6,287 bytes and verify at objdiff
100% against the mapped image. The original 14 were built with the pinned MSVC
6.0 SP5 toolchain; the ten added instruction-stream helpers were compiled with
the recorded clang-cl toolchain. Their direct-call and absolute-operand
destinations were audited. The screen-constructor call-graph audit through
depth six now has no unmatched callees. Overall project progress is tracked in
[`STATUS.md`](../STATUS.md).

During validation, `0x58748E40` exposed a Ghidra extent error. The inventory's
191-byte size stopped in executable code. Disassembly reaches `ret 4` at
`0x58748F23`, followed by INT3 padding through the next indexed function at
`0x58748F30`; the corrected function extent is 230 bytes. The verifier passed
that corrected span.

The matching source currently preserves captured x86 instructions in naked
assembly. It proves byte identity for these functions but does not yet recover
high-level C++ source. The caller/registration route, many field meanings,
individual child-control purposes, runtime UI behavior, and successful emulator
execution remain unverified. No bootable-client claim follows from this slice.
