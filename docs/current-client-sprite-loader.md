# Installed FleetMission sprite-file loader

This record covers the installed 2026 `Main.dll` sprite-file path used by the
logo/control screen. The byte source is the locally captured mapped image at
base `0x58730000`; its installed-file SHA-256 is
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd`, and the
mapped capture SHA-256 is
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Evidence-backed call path

Ghidra’s decompilation of the installed screen constructor at `0x5878D6D0`
shows it loading `Logo.spr` through `FUN_588F3D70`. That wrapper initializes
the object with `FUN_58906DE0`, installs the `CSpriteFileFDL` vtable, and checks
the sprite, effect, and bundle arrays. Only when all three are empty and its
last flag is `1` does it call `FUN_587750B0` with mode `2`.

`FUN_58906DE0` installs the `CSpriteFile` vtable and calls the core parser at
`0x58903E40`. If the object is null or the parser reports zero, it resets the
header fields and writes the fallback 40-byte `Sangduck Sprite File` signature.
The parser has two input paths: a host-resource path when its third argument is
nonzero, and a file-callback path otherwise. Both validate the same signature.
The file path reads a `0x84`-byte header and validates the check value. Header
version bytes `1`, `2`, and `3` select different record layouts. The parser
allocates effect, sprite, and bundle tables; reads and validates record extents;
converts packed sprite payloads; and formats malformed-file errors through
`FUN_5874BA60`.

The wrappers around those operations are also included in the matched slice:

| Address | Bytes | Observed role |
| --- | ---: | --- |
| `0x588F3D70` | 201 | Sprite-file/FDL wrapper and empty-array fallback call |
| `0x58906DE0` | 192 | `CSpriteFile` initialization and parser dispatch |
| `0x58903E40` | 12,100 | Resource/file parser and sprite/effect/bundle record loading |
| `0x587750B0` | 515 | Bounded path/message construction and host file callbacks |
| `0x58731BD0` | 140 | Bounded string append helper |
| `0x5874BA60` | 92 | Bounded formatting wrapper |
| `0x5897CEC8` | 6 | Indirect host callback thunk used with a backslash argument |
| `0x58731500` | 59 | Bounded string scan with a register-based output path |
| `0x5897CE38` | 6 | Indirect host callback thunk used by the formatting wrapper |

The sizes for `FUN_587750B0` and `FUN_58903E40` correct the Ghidra inventory’s
body-byte counts. Their contiguous mapped spans include the final security-cookie
epilogues and `ret 8`, making them 515 and 12,100 bytes respectively; the
inventory had counted 509 and 12,095.

## Verification and limits

All nine functions compile with the pinned local MSVC 6.0 SP5 compiler and pass
objdiff at 100% against their mapped-image bytes. Their 447 direct-call and
absolute-operand destinations are separately audited. The mapped-source
generator now emits the original encoding for identity-`lea` instructions:
VC6 uses these as padding, and assembling the mnemonic alone can shorten the
instruction and shift all later bytes.

The current matching source preserves the captured x86 instruction stream in
naked assembly, with Ghidra decompilation and call-site evidence documenting
what that stream does. This is exact function-level machine-code coverage; it
is not a recovered high-level C implementation. The parser’s many record
constructors and decoder helpers, the callback targets and signatures, sprite
structure field meanings, and runtime loading in the emulator remain unresolved.
No bootable-client or in-emulator test is implied by these matches.
