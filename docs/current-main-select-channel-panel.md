# Current Main `CPannelSelectChannel` constructor

Ghidra identifies `FUN_588ab550` by its `CPannelSelectChannel::vftable` write
after initializing the `CMenuScreen` base. Its one body range,
`0x588AB550..0x588AC106`, contains 2,999 bytes. ObjDiff 3.8.0 verified every
byte and checked 71 mapped operands.

## Evidence from the original

Ghidra records one direct caller, `FUN_5888e5e0` at `0x5888FDB2`. That caller
installs `CPannelMainControl_MenuScreen::vftable`, tying this constructor to
the main control-menu setup path. The caller's decompiler argument display is
ambiguous, so the allocation/ownership relationship is left unspecified.

The constructor stores layout values, then builds repeated children. A
five-iteration loop allocates pairs of `0x54`-byte `CSpriteDataScreen` objects
from checked resource indices `0x196` and `0x197`; additional sprite children
use checked indices `0x198` through `0x19B`. It creates six `0xAC`-byte child
controls through `FUN_5875dda0` with table offsets selected from
`0x1340..0x1480`. It then constructs more sprite children and button-like
controls through `FUN_58733280`. Sizes, table bounds, receiver fields, and
helper calls come from the Ghidra body.

## Uncertainty and validation

The individual child roles, sprite identities, table schema, layout units, and
visible channel-selection behavior remain unknown. This is a static byte
match; no original-client visual or interaction test was performed.
