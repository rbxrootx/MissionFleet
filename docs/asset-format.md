# Observed Sangduck sprite layout

These observations apply to the installed client and are not a universal format
specification. The parser is original code written from local structural
observations. The game binaries were never loaded or executed.

Static inspection of the unprotected `ITNTL.dll` sprite loader showed a 132-byte
file header, version checks, 112-byte image headers for v3.2/v3.3, and a separate
4-byte field before each payload. Relevant virtual addresses in this exact DLL:
`0x100EB7FF` (file header read), `0x100EB82D` (major version check),
`0x100EBCCA` (image count), `0x100EBE6E` (112-byte image header),
`0x100EBF5F` (following 4-byte field). Use the inventory SHA-256 to identify the
binary; these addresses are not valid assumptions about another version.

| Absolute file offset | Observed field |
|---|---|
| 0–39 | ASCII `Sangduck Sprite File` padded with spaces to 40 bytes |
| 84–85 | Two version bytes; this parser accepts `(3, 2)` and `(3, 3)` |
| 92–95 | Little-endian image count |
| 104–107 | Little-endian embedded sound record count |
| 132–135 | Extra v3 field, semantics unresolved |
| 136 onward | Image records, when the sound count is zero |

Each image record contains a 112-byte header, a 4-byte field and a payload.

| Relative image header offset | Observed field |
|---|---|
| 4–43 | Original image filename, zero-terminated within a 40-byte field |
| 44–47 | Format bytes; not all values have established meaning |
| 48–51 | Payload size in bytes |
| 52–55 | Width |
| 56–59 | Height |
| 112–115 | Extra field, semantics unresolved |
| 116 onward | Payload |

Advancing by these sizes successfully indexes every image-only file in this
installation (1,626 files, 367,391 records). The parser records any remaining
tail bytes without assigning animation/palette semantics. It rejects the 23
files containing sound records and does not scan around them heuristically.

## Experimental literal-run RGB565 preview

For the observed `(2, 2)` pixel format, the implemented subset uses a
little-endian 16-bit control value. `0xFFFF` advances a row and resets the cursor;
`0xFFFE` ends the final row/image. Other values skip that many bytes relative to
the current row cursor, followed by a one-byte run mode, a little-endian 16-bit
byte count and pixel bytes. Mode zero copies literal RGB565 pixels. Skipped
pixels remain transparent. Other modes are rejected.

Two layers of `ShipStructureF000.spr` were decoded and visually inspected:
`FF2_bottom.bmp` and `FF2_top.bmp`, each 488 by 218 pixels. Tests verify relative
skips, row reset, color channels, transparent pixels and malformed input bounds.
Exact original palette conversion, all sprite formats, animation, cropping,
anchors and compositor behavior have not been verified.

A broader sample of the first frame of 12 ship-structure files decoded 6 and
rejected 6 with unsupported run layouts. Results are in the generated
`reports/preview-validation.json`. This decoder must not be presented as covering
every `(2, 2)` image or every sprite file.
