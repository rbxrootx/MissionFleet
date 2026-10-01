# Installed CType0MMXHigh565 sprite-data methods

This slice follows the parser-selected `CType0MMXHigh565SpriteData` vtable.
The constructor dispatch evidence is recorded in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and parser evidence

In parser `FUN_58903E40`, the format discriminator is `2`. The test
`(DAT_58A284FC & 0x8000) != 0` selects the High565 family, and record subfield
`piVar13[0xB] == 0` allocates a `0x38`-byte object and calls constructor
`FUN_5894CC60`. That constructor installs vtable `0x589A2DE8`. Its mapped
entries are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x5894CC80` | 58 | `CType0MMXHigh565SpriteData` destructor path |
| `+0x04` | `0x5894CCC0` | 16,012 | Clipped rectangle/buffer path using packed MMX operations |
| `+0x08` | `0x58950B50` | 7,797 | Second buffer path using packed MMX operations |

The first long method reads object fields at `+4`, `+8`, and `+0x0C`, checks
requested coordinates against the stored bounds, and accesses the data buffer
at `+0x0C`. Both long methods call `FUN_58789FB0` and `FUN_5890C1C0`, which
return the 32-bit fields at `this+8` and `this+0x0C`. Their instruction streams
contain `MOVQ`, `PAND`, `PSRLW`, `PMULLW`, `PADDUSW`, and `EMMS`; they also use
`PANDN` and `POR` to combine masked packed values. The parser's class label
establishes the High565 branch, but the exact mask-to-channel mapping,
arguments, buffer layout, method names, and result contract remain unresolved.

The destructor installs its class vtable, conditionally dispatches the field
at `+0x0C` through `FUN_5897CF96`, invokes the `CSpriteData` base destructor
at `0x58903AC0`, and passes `this` through `FUN_5897CC42` when its second
argument's low bit is set. Callback targets and ownership rules remain
unknown. Both long methods call the indexed MSVC `__security_check_cookie`
routine at `0x5897CBDA` in their epilogues.

## Verification and limits

The three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 23,867 bytes. The complete
current `Main.dll` inventory was re-verified at 100% after adding them:
83 functions and 172,752 bytes.

The sources preserve captured x86 instructions in naked assembly. This is an
exact machine-code match for the class methods; it is not yet recovered
high-level C++, a complete sprite format, or a verified emulator render. The
rendering semantics and visual output remain open work.
