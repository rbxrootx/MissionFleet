# Current Main ready/cancel-on-join panel constructor

Ghidra identifies `FUN_588a7310` as the constructor that installs
`CPannelReadyNCancelOnJoin::vftable` after calling its base initializer. The
body has two ranges totaling 5,977 bytes. The emitted source matches the local
mapped `Main.dll` bytes exactly under ObjDiff 3.8.0, with 193 operands checked.

Its only direct caller is `FUN_58806150` at `0x58806440`. That caller allocates
`0x208` bytes, passes its parent pointer plus layout arguments `(0, -100, 0, 0,
0x40)`, then stores the returned panel at parent offset `+0x174`.

The constructor creates resource-gated sprite controls using global table
entries `0x191` and `0x192`, then builds additional controls through
`FUN_5881b960` and `FUN_5881b500`. It also creates a `CControlMenuScreen` with
paired `CSpriteBundleScreen` children and sets their layout and flag fields.
These operations and the vtable name support the panel identity; the exact
visible labels and ready/cancel interaction behavior remain unverified.

Ghidra excludes the three-byte gap `588A81ED..588A81EF`; it has no instruction
ownership and is skipped by an unconditional jump. The resource-entry meanings,
control field semantics, and runtime appearance remain uncertain. No emulator
runtime test was performed.
