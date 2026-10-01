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
| `0x58902CE0` | 59 | Updates a child-list field and recursively visits nodes selected by flag `0x4000` |
| `0x58902D20` | 59 | Updates a second child-list field and recursively visits nodes selected by flag `0x8000` |

The class names above come from vtable labels written by the captured
constructors. Descriptions of unnamed fields and helper effects are limited to
the observed memory accesses and call flow; they do not assign inferred UI
meaning to controls whose role is unknown.

## Byte-match validation

The 14 functions in this screen slice compiled with the pinned MSVC 6.0 SP5
toolchain and verified at objdiff 100% against the mapped image. The whole
current-Main verification inventory also passed: 53 functions, 22,348 bytes,
with all recorded direct-call and absolute-operand destinations audited.

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
