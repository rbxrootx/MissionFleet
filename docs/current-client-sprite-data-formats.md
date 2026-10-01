# Installed FleetMission sprite-data constructor dispatch

This evidence slice covers the twelve `CSpriteData`-family constructors called
directly by the installed 2026 `Main.dll` sprite-file parser at
`0x58903E40`. The parser is reached from the `Logo.spr` screen path documented
in [`current-client-sprite-loader.md`](current-client-sprite-loader.md). The
byte source is the mapped image at base `0x58730000`, SHA-256
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.

## Parser evidence

Ghidra's decompilation of `FUN_58903E40` shows it allocating `0x38` bytes for
the sprite-data object, selecting a constructor from the parser's observed
`DAT_589CDFFC` branch, and storing the resulting pointer in the sprite-data
array at object offset `+0x18C`. For `DAT_589CDFFC == 2`, a separate
`DAT_58A284FC & 0x8000` check selects the High555 or High565 class family. The
record subfield at `piVar13[0xB]` selects class suffix 0, 1, or 2. Branches
`DAT_589CDFFC == 3` and `== 4` select the True and Alpha families respectively.
These are the observed branch values and Ghidra vtable labels; the binary does
not establish the higher-level schema names of the fields.

| Address | Bytes | Ghidra vtable label |
| --- | ---: | --- |
| `0x5892DEF0` | 32 | `CType0MMXHigh555SpriteData` |
| `0x58937510` | 32 | `CType1MMXHigh555SpriteData` |
| `0x58943C70` | 32 | `CType2MMXHigh555SpriteData` |
| `0x5894CC60` | 32 | `CType0MMXHigh565SpriteData` |
| `0x589563E0` | 32 | `CType1MMXHigh565SpriteData` |
| `0x58962D40` | 32 | `CType2MMXHigh565SpriteData` |
| `0x5891CD00` | 32 | `CType0MMXTrueSpriteData` |
| `0x5891FB10` | 32 | `CType1MMXTrueSpriteData` |
| `0x58926C10` | 32 | `CType2MMXTrueSpriteData` |
| `0x5890E600` | 20 | `CType0MMXAlphaSpriteData` |
| `0x58910C20` | 20 | `CType1MMXAlphaSpriteData` |
| `0x58916B60` | 20 | `CType2MMXAlphaSpriteData` |

The nine 32-byte constructors store their three inputs in object slots 3, 1,
and 2, then write the selected vtable. The three 20-byte Alpha constructors
clear slots 3, 1, and 2 before writing their vtable. In the parser's observed
construction calls, the three input values are zero. The slot meanings and the
pixel-decoding behavior behind each vtable remain unresolved.

## Verification and limits

All twelve functions compile with the pinned MSVC 6.0 SP5 toolchain and match
the mapped image at objdiff 100%, totaling 348 bytes. The complete current
`Main.dll` exact-match inventory was also re-verified after adding this slice.

The source currently preserves each captured x86 constructor as naked assembly;
this is exact machine-code matching rather than recovered high-level C++. The
pixel conversion routines behind these vtables, the complete record schema,
and visual rendering in the emulator remain future work.
