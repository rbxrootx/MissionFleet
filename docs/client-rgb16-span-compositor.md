# Main.dll RGB16 span compositor

The mapped 2062 `Main.dll` contains a family of span-render methods, including
`0x1015A8A0` (37,130 bytes), `0x1014DF30` (36,606 bytes), `0x101481E0`
(15,988 bytes), and `0x10144810` (14,687 bytes). Ghidra decompiles the first
three as `__thiscall` methods with nine explicit parameters, and the last with
ten explicit parameters.
Their field accesses and clipping arithmetic are consistent with a target
surface, position, clip rectangle, color value, and effect value; those
parameter roles remain inferred because the owning class and dispatch paths are
unresolved. The methods read run-encoded sprite data and write 16-bit pixels,
connecting the recovered Main.dll image to sprite-render behavior traced through
`Core.dll` and `ITNTL.dll`.

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
the table's owning class and runtime dispatch path remain unresolved. The
pointer-table evidence supports a method-dispatch role, but does not identify a
specific sprite subclass or prove which live render path selects it.

## Sibling blend method

`0x1014DF30` is a separate 36,606-byte `__thiscall` method with the same
Ghidra parameter layout. Its pseudocode reads the same stream fields and host
mask globals, clips against the destination bounds, and walks transparent runs
and row controls. It branches into additional 16-bit color/effect loops. The
record field at `+3` also selects paths using bits 1 and 2; the exact meaning of
those flags is not established by the pseudocode.

The mapped function-pointer table slot at `0x10176B84` contains
`0x1014DF30`; slot `0x10176B90` contains `0x1015A8A0`. Ghidra found no direct
calls or code references for the sibling either. These nearby entries and their
shared stream/mask behavior support treating them as a renderer method family,
while leaving the table owner and runtime dispatch unresolved.

`0x101481E0` is another method in this family. It uses the same target surface,
clipping pattern, and encoded span stream, with two additional masks:
`DAT_101C92F0` and `DAT_101C92F8`. `FUN_10102C40` copies them from host-table
offsets `+0x6C` and `+0x64`, respectively. Its packed pixel arithmetic reads
these masks alongside `DAT_101C9300`, `DAT_101C9308`, and `DAT_101C9310`.
The mapped pointer-table slot at `0x10176B78` contains `0x101481E0`; Ghidra
found no direct calls or code references to it. The role of the two extra masks
and this method's exact effect modes remain uncertain.

`0x10144810` has the same source stream, source bounds, clipping, and target
buffer/pitch accesses, and it reads the same five host-supplied mask globals.
Its Ghidra signature has one additional explicit integer parameter; the body
uses three trailing values in packed per-channel arithmetic, but their separate
roles are not identified. The pointer-table slot at `0x10176B70` contains
`0x10144810`. Ghidra found no direct calls or code references to the function,
so its dispatch path and connection to the other methods remain uncertain.

## Byte-match validation and limits

The reconstructed sources preserve each mapped instruction, including the
implicit string and packed-pixel instructions that VC6's inline assembler
cannot express. `tools/verify_client_matches.py --only 10144810 --only 101481E0
--only 1014DF30 --only 1015A8A0` compiles all four sources with the recorded
VC6 flags and confirms 104,411 bytes at 100% objdiff similarity. `/Zm200` raises
VC6's internal compiler heap limit for these large inline-assembly functions;
it does not alter code generation. None has direct-call relocations to resolve.

The Ghidra signature does not recover the original parameter names or the
meaning of each effect value. The runtime target masks can vary with host
configuration, and this static reconstruction has not yet been compared against
a captured live frame. Byte identity is verified against the mapped Main.dll
capture; the owner class and exact runtime caller remain open questions.
