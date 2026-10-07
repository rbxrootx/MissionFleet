# Current Main communicator-configuration panel

`FUN_58843380` constructs a `CMenuScreen`-derived object whose Ghidra vtable
store is named `CPannelCommunicatorConfigPannel`. The caller
`FUN_5881de10` allocates `0x18C` bytes, passes `(parent, 100, 100, 0, 0, 0x40)`
to the constructor, and stores the result at parent offset `+0xDC`.

The constructor uses the shared resource table at `DAT_58A24768`, creates
indexed `CSpriteDataScreen` children in two repeated loops, and builds more
controls through `FUN_5875dda0`. Child coordinates are based on the `(100,
100)` constructor layout arguments. This supports the communicator-configuration
panel identity; the child labels, resource mapping, and interactions remain
unknown.

The parent also allocates an `0x84`-byte child at member `+0x158` and calls
`FUN_58833980` at `0x5884421D`. Its argument setup and observed field updates
are documented in the [child initialization notes](current-main-58833980-communicator-panel-child.md);
the child's class and content remain unidentified.

The Ghidra body has four ranges totaling 6,408 bytes:

- `58843380..58843C75` (2,294 bytes)
- `58843C80..58843D89` (266 bytes)
- `58843D90..588448F9` (2,922 bytes)
- `58844900..58844C9D` (926 bytes)

The gaps are 10, 6, and 6 bytes, with no Ghidra instruction or function
ownership. Unconditional jumps skip the first and last gaps. For the middle
gap, the preceding jump targets `58843D94`; the next code range begins at
`58843D90`, which also has a conditional incoming edge from `58843E3F`.
ObjDiff reports an exact match for all 6,408 bytes and checks 181 mapped
operands.

This validates compiled bytes against the captured installed `Main.dll`; it
does not validate the panel's labels or appearance in the emulator.
