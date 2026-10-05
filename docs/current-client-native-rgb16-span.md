# Native Core RGB16 slot-1 renderer

The current `Core.dll` dispatcher `0x587BA830` invokes the selected sprite's
vtable slot 1 with the target pixel pointer, screen-local position and clip,
color, and effect. For compressed format-2 sprites on a 16-bit target, the
loader selects one of two mask-specialized classes. Constructor `0x588009C0`
installs vtable `0x588BE71C`, whose slot 1 is `0x58800A60`; the sibling
constructor `0x5880D370` installs `0x588BE72C`, whose slot 1 is `0x5880D420`.
The vtable entries and bodies are verified against the pinned mapped capture.

[`CoreRgb16SpriteSlot1.cpp`](../src/client-current/semantic/CoreRgb16SpriteSlot1.cpp)
connects the existing scene → render-node → screen-dispatch semantic path to a
bounded surface supplied by the emulator. Its portable sprite view contains
the compressed payload and dimensions; the target binding supplies buffer
capacity, pitch, and height because the dispatcher itself forwards only the
pixel pointer. This view is not asserted to be the original C++ ABI layout.

The first class currently supports two source-backed cases:

- `color=0x100, effect=0`: copy literal RGB16 words, preserving transparent
  skipped pixels.
- `color=0x80, effect=0x101`: apply the RGB565 arithmetic reconstructed from
  the nonzero-effect branch in `0x58800A60`, preserving the original shift,
  mask, multiply, and add order.

Other argument pairs and the sibling mask-specialized class return
`unsupportedMode` without touching the framebuffer. The constructor/setter
trace records `0x80` and `0x101`, but does not prove that one sprite node
receives both values together. The effect formula is therefore implemented as
an observed branch and is not claimed as the proven default ship draw mode.

Run the native composition test, which checks scene → node → screen dispatch →
actual writes, screen-origin translation, clipping, transparent spans, the
hand-calculated RGB565 result `0xD8E0`, and the explicit unsupported cases:

```text
python tools/verify_core_rgb16_sprite_slot1.py
```

The same slot-1 implementation is also compared against the independent
Python behavioral model on the hash-pinned installed `D:\FleetMission\SPR\en-us\Logo.spr`
payloads:

```text
python tools/verify_native_logo_blit.py D:\FleetMission\SPR\en-us\Logo.spr --output-dir build/native-logo-slot1
```

The two opaque framebuffers match the prior recorded hashes exactly. The
opaque path copies 8,570 `ComLogo.bmp` pixels and 84,365 `Login.bmp` pixels;
the clipped login case writes 3,710. The effect branch matches the Python
model for both a complete real payload and a clipped login draw. These are
cross-checks against the independent reconstruction, not original-client
framebuffer captures. Target pitch is supplied by the emulator surface. No
live display-mask selection or pixel-for-pixel comparison against the running
client is included, and the alternate class remains unported.

The original `0x58800A60` machine-code source is separately byte-matched in
[`Core/FUN_58800a60.cpp`](../src/client-current/Core/FUN_58800a60.cpp); this
behavioral implementation does not replace or alter that byte-verification
source. The shared span parser and opaque RGB16 primitive are in
[`Rgb16OpaqueSpan.cpp`](../src/client-current/semantic/Rgb16OpaqueSpan.cpp).
