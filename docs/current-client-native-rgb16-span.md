# Native opaque RGB16 span compositor

The current `Core.dll` sprite dispatcher at `0x587BA830` calls a selected
sprite's slot-1 renderer. In the format-2 class, the byte-matched method
`0x58800A60` has an opaque/effect-zero branch beginning near `0x58800B69`.
That branch reads a signed 16-bit control: nonnegative values skip transparent
bytes; the next five-byte run header holds one ignored byte and a 16-bit
literal-byte count; `-1` advances to the next row and `-2` ends the image.
It copies the literal RGB16 words to the clipped destination without color
conversion. The original body has other color/effect branches not covered here.

[`Rgb16OpaqueSpan.cpp`](../src/client-current/semantic/Rgb16OpaqueSpan.cpp)
implements this branch in portable C++ with explicit source, target, pitch,
position, and clip parameters. The implementation validates geometry and
stream bounds before each read or write. It is a semantic port, not a
byte-identical recompilation of the large original method. The original
instruction source remains in the byte-match catalog separately.

[`verify_native_logo_blit.py`](../tools/verify_native_logo_blit.py) builds
a small native executable, extracts the first two image payloads from the
hash-pinned installed `Logo.spr`, and compares its raw RGB16 framebuffer
against the existing Python model byte for byte. The original data yielded:

| Frame | Dimensions | Copied pixels | Native framebuffer SHA-256 |
| --- | --- | ---: | --- |
| `ComLogo.bmp` | 800×600 | 8,570 | `db1208c975bb3c01bfc01b9394cde909c89673e38ba6309b7bfb579d338ce392` |
| `Login.bmp` | 1024×768 | 84,365 | `8ff42992a043928c4bff3cbca97da42176bbdf8011ece8579630ab80db611454` |

The verifier also draws `Login.bmp` at `(-80,-100)` onto a 360×260 target
with clip `(20,10,340,240)` and a nonzero seed buffer; both implementations
copy exactly 3,710 pixels and leave the other target bytes unchanged. A
truncated terminator is rejected by the native executable. Run:

```text
python tools/verify_native_logo_blit.py D:\FleetMission\SPR\en-us\Logo.spr
```

The generated native framebuffer, PNGs, executable, and manifest are under
`build/native-logo/`. This proves agreement with the evidence-backed Python
model on these real and clipped inputs. It does not prove the original game
selects this particular color/effect branch for either frame, nor compare
against an original-client framebuffer. The client window, controls, other
sprite formats, blends, and game render scheduling remain outside this port.

The [native v3.3 sprite index](current-client-native-sangduck-v33.md) now feeds
the same C++ compositor directly from the original `Logo.spr` bytes and
reproduces both pinned framebuffers without Python extracting their payloads.
