# Installed CType0MMXAlphaSpriteData methods

This slice follows the parser-selected `CType0MMXAlphaSpriteData` vtable. Its
constructor dispatch is documented in
[`current-client-sprite-data-formats.md`](current-client-sprite-data-formats.md).
The byte source is the mapped installed `Main.dll` capture at base
`0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Vtable and parser evidence

Parser `FUN_58903E40` allocates the class object when the observed format
discriminator `DAT_589CDFFC` equals `4` and record subfield `piVar13[0xB]`
equals `0`. Constructor `FUN_5890E600` writes the vtable pointer
`0x589A2D58`; the three pointers read directly from that address in the mapped
image are:

| Vtable slot | Target | Bytes | Observed role |
| --- | --- | ---: | --- |
| `+0x00` | `0x5890E620` | 33 | Destructor path |
| `+0x04` | `0x5890E650` | 5,067 | Clipped packed-pixel operation |
| `+0x08` | `0x5890FA20` | 4,595 | Second packed-pixel operation |

The first long method checks the object field at `+0x0C`, clips requested
coordinates against bounds stored at `+4` and `+8`, and gets a row stride and
buffer origin through `FUN_5890C1C0` and `FUN_58789FB0`. It processes scalar
and MMX packed-pixel paths using masks `DAT_58A284DC` and `DAT_58A284E4` and
the last two stack arguments. The second long method uses the same object,
bounds, stride, and origin path; its packed operations also use
`DAT_58A284EC`, `DAT_58A284F4`, and `DAT_58A284FC` with an additional supplied
value. Both methods call the indexed security-cookie routine
`0x5897CBDA` before returning.

The destructor installs the class vtable, calls the `CSpriteData` base
destructor `FUN_58903AC0`, and passes `this` to `FUN_5897CC42` when the low bit
of its second argument is set. The callback target and ownership rule are not
resolved. The source stream, parameter roles, channel layout, mask meanings,
virtual method names, and result contracts of the pixel methods remain
uncertain; the descriptions above report observed data flow and instructions.

## Verification and limits

All three vtable methods compile with the pinned MSVC 6.0 SP5 toolchain and
match the mapped image at objdiff 100%, totaling 9,695 bytes. The complete
installed `Main.dll` inventory re-verifies at 100%: 101 functions and 355,960
bytes.

The sources preserve captured x86 instructions in naked assembly. This is
exact machine-code matching for the three methods, not recovered high-level
C++, a complete Alpha sprite format, or a verified emulator render. The
pixel-buffer and alpha semantics remain unresolved.
