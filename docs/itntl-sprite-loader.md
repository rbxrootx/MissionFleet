# ITNTL sprite loader and renderer evidence

This trace is from the readable x86 `ITNTL.dll` in the supplied stock client,
SHA-256 `bf158b65e5c110aa6ac7aa6d9e64b0f4b831bdc224b444650d24c85b43db01b7`.
The matching protected `Main.dll` inventory hash is
`b3aac421e83c7b0b90224619038e4e2632a7d6ab58ebfd0f9783cbc6e6a57a31`.
Addresses use its image base `0x10000000`. This is direct static Ghidra evidence
from that binary; matching names or layouts do not by themselves prove that a
protected `Main.dll` implementation is identical.

## Screen allocation and object relationship

The export `AllocScreen` is at `0x1002E540`. It allocates `0x7c` bytes, calls
`0x10045760(this, param_2)`, and stores the returned screen pointer in two
module globals. `0x10045760` initializes the screen object and its supplied
configuration. `Main.dll` exports the same lifecycle names, including
`AllocScreen`, but the modules have separate implementations. The inventory
also shows `Main.dll` imports `LoadLibraryA` and `GetProcAddress`, so static
imports alone do not resolve its runtime module links.

The sprite draw wrapper is `0x100EB530(sprite, screen, x, y, left, top, right,
bottom, color, effect)`, with the sprite as implicit `this`. It obtains screen
origin from `screen+4/+8`, viewport edges from `screen+0x14..0x20`, and the
target pixels from `screen+0x50`. It intersects the caller clip with that
viewport, subtracts the screen origin from position and clip edges, then invokes
sprite vtable slot 1 with the screen pixel pointer and adjusted arguments.
This independently matches the object boundary found in the current-client
`Core.dll` dispatcher.

The node draw routine at `0x100EA3D0` calls the wrapper with node position plus
the parent position and node anchor at `+0x0C/+0x10`, passes its inherited clip
rectangle, and supplies node color/effect fields at `+0x28/+0x2C`. It traverses
attached child nodes before and after the node's own sprite draw. The render-node
constructor at `0x100EA4D0` initializes position at `+4/+8` and its rectangle
fields at `+0x14..+0x20`. The `AllocScreen` path constructs a screen object via
`0x10045760`, which delegates to the base screen setup and initializes the
target buffer at `+0x50`.

## File and resource loader

`0x100EB5E0` is the sprite object's loading constructor. It sets the vtable and
calls `0x100EB760(this, path, mode)`. The loader has two evidence-backed input
paths:

- `mode == 0`: open the path with `CreateFileA` and read the header and records.
- `mode == 1`: obtain a named resource with `FindResourceA`, `LoadResource`,
  and `LockResource`.

The loader compares the first `0x28` bytes against the embedded `Sangduck Sprite
File` signature, checks a byte-sum field for the header and each record, then
uses version, frame, image, and effect counts from the header. The header body
read into the object is `0x84` bytes. Resource input is accepted only for the
loader's version-1 path; the file reader has separate version handling through
version 3. Error paths report invalid CSH SPR signatures, unsupported versions, and damaged records.

For resource records, the entry table begins after the `0x84`-byte header and
its following checksum DWORD. Each image record has a checksum at record offset
`+0x48`; the decoded payload begins at `+0x4c`. The pixel-format byte is at
`+0x2c`, and width/height are at `+0x34/+0x38`. The record's format selects
different concrete sprite constructors, then the loader sets each object's
width and height at `+4/+8`.

For a 16-bit output target, format 0 converts the record's RGB888 pixels to
RGB16. Formats 1 and 2 decode span streams: a nonnegative signed 16-bit field
is the transparent skip, followed by a byte the decoder copies, a signed
16-bit literal count, then RGB888 literal pixels. The loader converts those
pixels according to the selected 16-bit display masks. `-1` is a row boundary
and `-2` ends the image; the format-1 path writes `0xffff` row markers while
format 2 preserves the row marker. The translated stream is stored at sprite
offset `+0x0c`. Other target depths use separate branches and remain outside
this 16-bit reconstruction.

After loading image objects, the loader builds animation records with a `0x40`
stride and stores their table at object offset `+0x190`; image pointers are
linked into each animation's frame table. The current-client trace independently
confirms the same `0x40` animation-record stride and the downstream timed-frame
selection path.

## Boundary and remaining proof

The supplied `Main.dll` is marked by `.vmp0`/`.vmp1`, with virtual code and data
sections that have no raw bytes in the file. A mapped-memory capture can recover
sections the runtime materializes; that is not full VMProtect devirtualization
and does not turn remaining VM bytecode into native function bodies. This
renderer trace does not require that transformation: it ties visible sprite
behavior to readable loader, node, screen, and compositor code. To establish
whether a particular installed build calls this ITNTL implementation, record
its loaded-module and export-resolution path; matching exports alone are not
enough.

The report artifacts containing the full decompiler output are kept locally at
`reports/itntl-render-trace.txt`, `reports/itntl-sprite-dispatch.txt`, and
`reports/itntl-render-framework.txt`; they are generated analysis outputs and
are intentionally Git-ignored.
