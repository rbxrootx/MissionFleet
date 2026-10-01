# Installed CType1MMXHigh555 sprite-data methods

This slice follows the parser-selected `CType1MMXHigh555SpriteData` vtable.
The constructor dispatch evidence is recorded in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and call evidence

The parser at `0x58903E40` selects constructor `FUN_58937510` for format
discriminator `2`, with the High555 branch flag `0x8000` clear and record
subfield `piVar13[0xB]` equal to `1`. The constructor installs vtable pointer
`0x589A2DC8`. The mapped entries are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x58937530` | 58 | `CType1MMXHigh555SpriteData` destructor path |
| `+0x04` | `0x58937580` | 36,208 | MMX buffer-processing method reading object fields `+8` and `+0x0C` |
| `+0x08` | `0x58933B50` | 14,774 | Second MMX buffer-processing method reading those fields |

Both long methods call `FUN_58789FB0` and `FUN_5890C1C0`, which return the
32-bit values at `this+8` and `this+0x0C`. Their instruction streams contain
packed MMX operations including `MOVQ`, `PAND`, `PSRLW`, `PMULLW`, and
`PADDUSW`. The vtable relationship and these operations establish that these
are methods of this parser-selected sprite-data class; they do not establish
the exact virtual method names, arguments' meanings, buffer layout, or
result contract. Those semantics remain unresolved.

The destructor installs its class vtable, conditionally dispatches the field
at `+0x0C` through `FUN_5897CF96`, invokes the `CSpriteData` base destructor
at `0x58903AC0`, and passes `this` through `FUN_5897CC42` when its second
argument's low bit is set. The callback targets and ownership rules remain
unknown. Both MMX methods call the indexed MSVC `__security_check_cookie`
routine at `0x5897CBDA` in their epilogues.

## Verification and limits

The three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 51,040 bytes. The complete
current `Main.dll` inventory was re-verified at 100% after adding them:
77 functions and 97,383 bytes.

The sources preserve captured x86 instructions in naked assembly. This is an
exact machine-code match for the class methods; it is not yet recovered
high-level C++, proof of the full sprite format, or a verified emulator render.
The other High555 classes, their method semantics, and the resulting visuals
remain open work.
