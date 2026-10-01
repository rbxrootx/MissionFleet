# Installed CType2MMXHigh555 sprite-data methods

This slice follows the parser-selected `CType2MMXHigh555SpriteData` vtable.
The constructor dispatch evidence is recorded in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and parser evidence

In parser `FUN_58903E40`, the format discriminator is `2`, the High555 flag
test `(DAT_58A284FC & 0x8000) == 0` selects this format family, and record
subfield `piVar13[0xB] == 2` allocates a `0x38`-byte object and calls
constructor `FUN_58943C70`. The constructor installs vtable `0x589A2DD8`.
Its mapped entries are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x58943C90` | 58 | `CType2MMXHigh555SpriteData` destructor path |
| `+0x04` | `0x58943CE0` | 36,733 | Clipped rectangle/buffer path using packed MMX instructions |
| `+0x08` | `0x589402F0` | 14,711 | Second rectangle/buffer path using packed MMX instructions |

Both long methods call `FUN_58789FB0` and `FUN_5890C1C0`, which read the
sprite-data object's 32-bit fields at `+8` and `+0x0C`. Ghidra's decompilation
shows comparisons that clip the requested rectangle against stored bounds and
loops over a signed-word encoded stream before processing pixel buffers. The
decoded instruction streams contain `MOVQ`, `PAND`, `PSRLW`, `PMULLW`,
`PADDUSW`, and `EMMS`; the first long method also contains packed mask and
blend operations. These observations establish the vtable roles and broad
buffer behavior, but not the exact method names, argument meanings, stream
schema, pixel-buffer layout, or return contract.

The destructor installs its class vtable, conditionally dispatches the field
at `+0x0C` through `FUN_5897CF96`, invokes the `CSpriteData` base destructor
at `0x58903AC0`, and passes `this` through `FUN_5897CC42` when its second
argument's low bit is set. Callback targets and ownership rules remain
unknown. Both long methods call the indexed MSVC `__security_check_cookie`
routine at `0x5897CBDA` in their epilogues.

## Verification and limits

The three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 51,502 bytes. The complete
current `Main.dll` inventory was re-verified at 100% after adding them:
80 functions and 148,885 bytes.

The sources preserve captured x86 instructions in naked assembly. This is an
exact machine-code match for the class methods; it is not yet recovered
high-level C++, a complete sprite-stream schema, or a verified emulator render.
The rendering semantics and visual output remain open work.
