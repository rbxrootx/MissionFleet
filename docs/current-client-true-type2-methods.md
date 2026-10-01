# Installed CType2MMXTrue sprite-data methods

This slice follows the parser-selected `CType2MMXTrueSpriteData` vtable. The
constructor dispatch evidence is recorded in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and parser evidence

Parser `FUN_58903E40` selects constructor `FUN_58926C10` when the observed
format discriminator `DAT_589CDFFC` is `3` and record subfield
`piVar13[0xB]` is `2`. The constructor installs vtable `0x589A2DA8`. Its
mapped entries are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x58926C30` | 58 | `CType2MMXTrueSpriteData` destructor path |
| `+0x04` | `0x58926C70` | 17,246 | Clipped run-stream and packed-color path using MMX |
| `+0x08` | `0x5892AFD0` | 12,063 | Second packed-color buffer operation using MMX |

The first long method reads object fields at `+4`, `+8`, and `+0x0C`, checks
requested coordinates against stored bounds, and walks a signed-word encoded
source stream. Its loop skips nonnegative entries using the following encoded
length, then branches on negative signed-word values. Both long methods call
`FUN_58789FB0` and `FUN_5890C1C0`, which return the 32-bit fields at `this+8`
and `this+0x0C`. The methods use packed color masks at `DAT_58A284DC` and
`DAT_58A284E4`, with MMX operations including `MOVQ`, `PAND`, `PSRLW`,
`PMULLW`, `POR`, `PANDN`, and `EMMS`. The source-stream schema, channel
layout, weighting arguments, buffer organization, virtual method names, and
return contracts remain unresolved.

The destructor installs its class vtable, conditionally dispatches the field
at `+0x0C` through `FUN_5897CF96`, invokes the `CSpriteData` base destructor
at `0x58903AC0`, and passes `this` through `FUN_5897CC42` when its second
argument's low bit is set. Callback targets and ownership rules remain
unknown. Both long methods call the indexed MSVC `__security_check_cookie`
routine at `0x5897CBDA` in their epilogues.

## Verification and limits

The three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 29,367 bytes. The complete
current `Main.dll` inventory was re-verified at 100% after adding them:
98 functions and 346,265 bytes.

The sources preserve captured x86 instructions in naked assembly. This is an
exact machine-code match for the class methods; it is not yet recovered
high-level C++, a complete sprite format, or a verified emulator render. The
rendering semantics and visual output remain open work.
