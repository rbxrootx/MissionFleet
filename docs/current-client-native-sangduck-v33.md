# Native Sangduck v3.3 image index

The installed `Main.dll` logo-screen constructor at `0x5878D6D0` requests
`Logo.spr`. The installed `ITNTL.dll` loader `FUN_100EB760` reads its 132-byte
header, a following four-byte check value, and each v3.3 image's 112-byte
record plus four-byte value before the payload. The loader's resource branch
computes check values by adding bytes as signed `char` values: 132 bytes for
the file header and record bytes for its resource layout. The installed
`Logo.spr` stores exactly that signed-byte sum in its header field and in all
188 v3.3 image-record check fields. The file-path branch visibly reads these
fields; whether it rejects a mismatch there is not established by this trace.

[`SangduckSpriteV33.cpp`](../src/client-current/semantic/SangduckSpriteV33.cpp)
implements the image-only v3.3 file layout in portable C++. It checks the
40-byte padded signature, version, signed-byte check values, image count,
record and payload bounds, and dimensions. It returns checked offsets into
caller-owned bytes without copying the payloads. Embedded sound records are
rejected. The 6,328 bytes after the image records are retained as an unparsed
tail. This is a semantic implementation; it is not included in the objdiff
byte-match count.

[`verify_native_logo_index.py`](../tools/verify_native_logo_index.py) builds a
small C++ executable from that parser and the existing opaque RGB16 compositor.
It pins the original `Logo.spr` SHA-256
`36b4df976909f15f6ac7fe3a73d2f88ab1df0b1dcd6acd571478c71123a21f1b`,
compares all 188 native record names, formats, dimensions, offsets, sizes, and
check values with the independent Python index, then renders `ComLogo.bmp` and
`Login.bmp` directly from the original sprite bytes. Their native RGB16
framebuffer hashes are, respectively,
`db1208c975bb3c01bfc01b9394cde909c89673e38ba6309b7bfb579d338ce392`
and `8ff42992a043928c4bff3cbca97da42176bbdf8011ece8579630ab80db611454`.
Those match the previously pinned native compositor results. The verifier also
requires rejection of modified header and record check values and a truncated
payload. Run:

```text
python tools/verify_native_logo_index.py D:\FleetMission\SPR\en-us\Logo.spr
```

The executable, raw framebuffers, PNGs, and manifest are generated in
`build/native-logo-index/`; original sprite bytes stay outside Git. Native
indexing currently covers v3.3 image records only. Animation, effects, audio,
the trailing records, runtime image selection, and the complete screen are not
implemented here. The two framebuffers are compared with the evidence-backed
portable model, not with a captured original-client framebuffer. This does not
make the client bootable.
