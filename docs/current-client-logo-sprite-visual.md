# Installed client Logo.spr visual-path verification

The byte-matched installed `Main.dll` logo-screen constructor at `0x5878D6D0`
requests `Logo.spr`. Its sprite parser at `0x58903E40` is also byte-matched.
The installed file at `D:\FleetMission\SPR\en-us\Logo.spr` has SHA-256
`36b4df976909f15f6ac7fe3a73d2f88ab1df0b1dcd6acd571478c71123a21f1b`.
The indexed file is Sangduck version 3.3 with 188 image records. This
verification targets its first two `format_bytes=[2,2,0,0]` records:

| Frame | Source name | Dimensions | Payload SHA-256 | Literal pixels |
| --- | --- | --- | --- | ---: |
| 0 | `ComLogo.bmp` | 800×600 | `56b08a6b78e4520df6a258bb6d84fc86a360e7bf6d149d502f2157cff0e36d88` | 8,570 |
| 1 | `Login.bmp` | 1024×768 | `1003c4e0f94498d447bcc529f9d8d7292d2e12fadfe21c30d92f126b86b302ad` | 84,365 |

[`verify_logo_sprite_visual.py`](../tools/verify_logo_sprite_visual.py)
reads the original payloads through the indexed loader, independently decodes
them into transparent RGBA with `sprite_preview.decode`, and draws the same
packed RGB16 spans into an opaque surface with
`ship_sprite_runtime.blit_opaque_rgb16_spans`. It checks every literal
pixel's RGB value, every transparent pixel's untouched black destination,
and each frame's literal count. It writes inspectable PNGs and a manifest to
`build/logo-visual/` without adding original sprite bytes to Git. Run:

```text
python tools/verify_logo_sprite_visual.py D:\FleetMission\SPR\en-us\Logo.spr
python -m pytest tests/test_sprite_preview.py tests/test_ship_sprite_runtime.py -q
```

The source-backed opaque path is the installed `Core.dll` screen dispatcher
`0x587BA830` and RGB16 compositor `0x58800A60`; both remain recorded as exact
byte matches. A fresh objdiff check of those two methods (37,005 bytes) and
the Main constructor/parser pair (15,160 bytes) passed at 100% using the
project's pinned clang-cl 19.1.4 as an alternate assembler for their
instruction sources. The configured VC6 compiler could not launch on this
Windows host during this check (`WinError 623`, illegal system DLL relocation).
This did not change the catalog's previously recorded compiler provenance or
byte-match counts.

These PNGs show original asset frames through the reconstructed opaque RGB16
span path. They do not establish the complete logo/login screen composition,
animation timing, text and controls, non-opaque effects, or a pixel-for-pixel
comparison with a captured original-client framebuffer. The file's remaining
186 image records and unparsed tail are outside this check.
