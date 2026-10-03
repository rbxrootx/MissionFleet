# Current Main fire-control panel constructor

Ghidra identifies `FUN_58854a00` as the constructor that installs
`CPannelFireControl::vftable` after setting up its `CMenuScreen` base. Its body
is the single contiguous range `58854A00..588561ED`, 6,126 bytes. The generated
source matches the captured mapped `Main.dll` bytes exactly under ObjDiff 3.8.0,
with 167 operands checked.

The only direct caller in Ghidra's reference list is `FUN_5878af40` at
`0x5878C7DD`. That global UI initializer allocates `0x320` bytes, calls this
constructor with layout arguments `(0, 0, 600, 0, 0, 0x40)`, and stores the
returned panel in `DAT_58A245C4`.

The decompiled body initializes base and derived screen fields, builds 32
repeated `CSpriteBundleScreen` children, and iterates four indexed positions to
create paired controls. It also creates other sprite-data and menu controls
from bounded global resource tables and calls shared setup helpers. These are
directly visible operations; they do not establish the exact labels or actions
of the individual controls.

The resource index meanings, control field semantics, specific fire-control
actions, and runtime appearance remain unresolved. This is a byte match against
the locally captured mapped client image, not a successful emulator or
in-client test.
