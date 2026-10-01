# Installed CType2MMXHigh565 sprite-data methods

This slice follows the parser-selected `CType2MMXHigh565SpriteData` vtable.
The constructor dispatch evidence is recorded in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and parser evidence

In parser `FUN_58903E40`, the format discriminator is `2`. The test
`(DAT_58A284FC & 0x8000) != 0` selects the High565 family, and record subfield
`piVar13[0xB] == 2` allocates a `0x38`-byte object and calls constructor
`FUN_58962D40`. That constructor installs vtable `0x589A2E08`. Its mapped
entries are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x58962D60` | 58 | `CType2MMXHigh565SpriteData` destructor path |
| `+0x04` | `0x58962DE0` | 37,154 | Clipped rectangle/run-stream path using packed MMX operations |
| `+0x08` | `0x5895F370` | 14,793 | Second buffer path using packed MMX operations |

The first long method reads object fields at `+4`, `+8`, and `+0x0C`, checks
requested coordinates against stored bounds, and walks the signed-word encoded
source stream. Both long methods call `FUN_58789FB0` and `FUN_5890C1C0`, which
return the 32-bit fields at `this+8` and `this+0x0C`. Their instruction streams
contain `MOVQ`, `PAND`, `PSRLW`, `PMULLW`, `PADDUSW`, `PANDN`, `POR`, and
`EMMS`. The High565 association follows the parser's observed branch and
Ghidra vtable label; the exact mask-to-channel mapping, arguments, stream
schema, buffer layout, virtual method names, and result contract remain
unresolved.

The destructor installs its class vtable, conditionally dispatches the field
at `+0x0C` through `FUN_5897CF96`, invokes the `CSpriteData` base destructor
at `0x58903AC0`, and passes `this` through `FUN_5897CC42` when its second
argument's low bit is set. Callback targets and ownership rules remain
unknown. Both long methods call the indexed MSVC `__security_check_cookie`
routine at `0x5897CBDA` in their epilogues.

## Verification and limits

The three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 52,005 bytes. The complete
current `Main.dll` inventory was re-verified at 100% after adding them:
89 functions and 276,308 bytes.

The sources preserve captured x86 instructions in naked assembly. This is an
exact machine-code match for the class methods; it is not yet recovered
high-level C++, a complete sprite format, or a verified emulator render. The
rendering semantics and visual output remain open work.
