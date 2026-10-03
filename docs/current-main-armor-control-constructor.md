# Current Main armor-control constructor

`FUN_58817900` constructs a `CMenuScreen`-derived object whose Ghidra vtable
store is named `CPannelArmorControl`. The constructor loads `spr\\ITPNAMR.spr`.
Its direct caller, `FUN_587dba00`, allocates `0xAC` bytes and stores the
constructed pointer at parent offset `+0xDC8`.

The constructor creates text children through `FUN_58731c60`, followed by
repeated `CSpriteDataScreen` and `CSpriteBundleScreen` children selected from
count-checked entries in the loaded resource table. It also creates controls
through `FUN_5877e800`, `FUN_58733280`, and `FUN_5875dda0`, and stores the
children at fixed receiver offsets. The panel name and asset filename support
an armor-control role; the individual labels, resource-index mapping, and
interaction semantics remain unresolved.

The Ghidra body spans four ranges totaling 6,580 bytes:

- `58817900..58817B6C` (621 bytes)
- `58817B70..58818B5C` (4,077 bytes)
- `58818B60..58818E28` (713 bytes)
- `58818E30..588192C0` (1,169 bytes)

The intervening gaps are 3, 3, and 7 bytes. Ghidra reports no instruction or
function ownership in them; unconditional jumps skip to the next range. ObjDiff
reports an exact match for all 6,580 bytes and checks 237 mapped operands.

This validates compiled bytes against the captured installed `Main.dll`. It
does not validate the panel's appearance or behavior in the emulator.
