# Installed Core.dll scene layout constructor

This slice reconstructs the 3,336-byte function at `0x586E8270` from the
hash-pinned mapped `Core.dll` image at runtime base `0x58480000`. The ship-scene
dispatcher calls it at `0x58531333` when state code 1 reaches phase 8, passing
the scene pointer and literal arguments `0x70`, `0x54`, `0x400`, `0x300`, and
`11000`. The dispatcher then stores the returned pointer, calls
`0x586EB810`, and invokes virtual slot `+4` on the new object.

Ghidra shows a constructor-shaped sequence. The function forwards all six
arguments to `0x5856B700`, then writes vtable address point `0x588B3194` to the
new object's first DWORD. It allocates a `0x198`-byte object through
`0x587803B0` and stores it at DWORD slot `0x21` (byte offset `+0x84`). It then
creates four `0x54`-byte children with `0x58482320`, using entries 0 through 3
from `0x58484B20` and positions derived from the constructor's x/y arguments.

The function loops three times to build `0xAC`-byte child records through
`0x584CBCE0`, with x position decremented by each `0x585D26D0` result plus 10.
It creates 15 repeated `0x70`-byte records through `0x584823B0`, stores their
pointers at DWORD slots `0x29` through `0x37`, links each through
`0x584860A0`, initializes its value through `0x587B5540`, and calls
`0x58485E80` with `11000 + 400`. Additional `0xAC`-byte records are created
through `0x584CBCE0` at several fixed offsets derived from the input position.
Finally, the function initializes fields and runs a three-iteration helper
sequence through `0x586E8FE0`, `0x586EBC70`, and `0x58521CD0`.

After this constructor returns, dispatcher `0x58531000` invokes
`0x586EB810`, which loads the mapped `Announcement.txt`, `Patch.txt`, and
`Eula.sdt` resource paths through `0x586EA6E0`. The loader sequence is recorded
in the [scene text-resource report](current-core-scene-text-resource-loader.md).

The original code establishes allocation sizes, table indices, call ordering,
field slots, and the supplied coordinates and dimensions. It does not establish
the class's user-facing purpose, the child types, table entry meanings, or the
visual result. Those remain open pending analysis of the helper contracts and
a live frame comparison.

The reconstructed x86 extent matches the mapped image at objdiff 100%: **3,336
bytes**, with **166 captured operand targets** audited. The complete Core
verification profile passes all 140 recorded functions at 100%. This verifies
the mapped code and direct call destinations; it does not prove the constructed
screen renders identically.
