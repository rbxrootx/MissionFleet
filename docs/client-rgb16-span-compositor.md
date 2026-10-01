# Main.dll RGB16 span compositor

`0x1015A8A0` is a 37,130-byte leaf function in the mapped 2062 `Main.dll`.
Ghidra decompiles it as a `__thiscall` method with nine explicit parameters.
Its accesses and clipping arithmetic are consistent with a target surface,
position, clip rectangle, color value, and effect value; those parameter roles
remain inferred because the owning class and dispatch path are unresolved. The
method reads a run-encoded sprite stream and writes 16-bit pixels, connecting
the recovered Main.dll image to sprite-render behavior traced through `Core.dll`
and `ITNTL.dll`.

## Evidence from Main.dll

The decompiled entry checks the stream pointer at `this+0x0C`, derives the
source bounds from `this+0x04` and `this+0x08`, and intersects the requested
rectangle with those bounds. It gets the destination buffer from
`param_1+0x08` and the destination pitch from `param_1+0x0C`. When clipping
removes rows, the code walks the encoded stream to the retained row. Within a
row, nonnegative signed 16-bit values advance across transparent pixels; the
following record carries a literal-byte count at `+3`, with pixel data starting
at `+5`. A `-1` control advances to the next row and controls below `-1` end the
walk.

The body has separate paths for color/effect combinations. Its pixel arithmetic
uses three runtime masks at `DAT_101C9300`, `DAT_101C9308`, and `DAT_101C9310`,
and includes packed 16-bit vector operations. The masks are loaded from globals
rather than fixed RGB565 constants. `FUN_10102C40` copies these three 64-bit
mask fields from host table offsets `+0x4C`, `+0x54`, and `+0x5C` into their
globals; that evidence ties them to host-provided renderer configuration. The
readable client's independently traced span loader
and compositor use the same five-byte run header and row/end controls; see the
[ITNTL sprite loader evidence](itntl-sprite-loader.md) and the
[current-client sprite render path](client-render-path.md).

The mapped image contains a code-pointer-table slot at `0x10176B90` whose value
is `0x1015A8A0`; neighboring entries point to other functions in the same code
region.
Ghidra reports no direct call targets or code references to this function, so
the table's owning class and the runtime dispatch path remain unresolved. The
pointer-table evidence supports a method-dispatch role, but does not identify a
specific sprite subclass or prove which live render path selects it.

## Byte-match validation and limits

The reconstructed source preserves each mapped instruction, including the
implicit string and packed-pixel instructions that VC6's inline assembler
cannot express. `tools/verify_client_matches.py --only 1015A8A0` compiles the
source with the recorded VC6 flags and confirms all 37,130 bytes at 100% objdiff
similarity. `/Zm200` raises VC6's internal compiler heap limit for this unusually
large inline-assembly function; it does not alter code generation. The function
has no direct-call relocations to resolve.

The Ghidra signature does not recover the original parameter names or the
meaning of each effect value. The runtime target masks can vary with display
configuration, and this static reconstruction has not yet been compared against
a captured live frame. Byte identity is verified against the mapped Main.dll
capture; the owner class and exact runtime caller are still open questions.
