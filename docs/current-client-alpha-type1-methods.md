# Installed CType1MMXAlphaSpriteData methods

This slice follows the parser-selected `CType1MMXAlphaSpriteData` vtable. Its
constructor dispatch is documented in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and parser evidence

Parser `FUN_58903E40` selects constructor `FUN_58910C20` when the observed
format discriminator `DAT_589CDFFC` equals `4` and record subfield
`piVar13[0xB]` equals `1`. The constructor writes vtable pointer
`0x589A2D68`; the three pointers read directly from that address in the mapped
image are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x58910C40` | 33 | Destructor path |
| `+0x04` | `0x58910C70` | 12,482 | Clipped stream and packed-pixel operation |
| `+0x08` | `0x58913D40` | 11,807 | Second clipped stream and packed-pixel operation |

Both long methods check the object field at `+0x0C`, clip requested
coordinates against bounds at `+4` and `+8`, then obtain row stride and buffer
origin through `FUN_5890C1C0` and `FUN_58789FB0`. They traverse signed-word
entries in the source stream; the clipping path advances over variable-sized
records using the word at record offset `+3`. Both then use scalar or MMX
packed-pixel operations and masks `DAT_58A284DC` and `DAT_58A284E4`. The second
method also uses `DAT_58A284EC`, `DAT_58A284F4`, and `DAT_58A284FC`. Both call
the indexed security-cookie routine `0x5897CBDA` before returning.

The destructor installs the class vtable, invokes the `CSpriteData` base
destructor `FUN_58903AC0`, and calls `FUN_5897CC42` with `this` when the low
bit of its second argument is set. It does not itself clear or release the
field at `+0x0C`. The callback ownership rule, stream schema, parameter roles,
pixel/channel layout, mask meanings, virtual method names, and return contracts
remain unresolved; the method summaries follow observed data flow only.

## Verification and limits

All three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 24,322 bytes. The complete
installed `Main.dll` inventory re-verifies at 100%: 104 functions and 380,282
bytes.

The sources preserve captured x86 instructions in naked assembly. This is
exact machine-code matching for the three methods, not recovered high-level
C++, a complete Alpha sprite format, or a verified emulator render. Pixel
stream and blending semantics remain unresolved.
