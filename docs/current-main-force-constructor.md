# `CForce` constructor evidence

Ghidra identifies `FUN_5877cc30` and shows it assigning the
`CForce::vftable` after calling the `CMenuScreen` base initializer. The complete
body is one range, `0x5877CC30..0x5877DD2B`, totaling 4,348 bytes.

The constructor copies `0x60` four-byte words from its second argument into the
receiver beginning at `+0x50`. It then XORs several receiver fields with
`0xAA`-derived masks. It allocates and initializes repeated sprite-backed child
objects, including `CSpriteDataScreen` and `CSpriteBundleScreen` instances,
using values from shared tables at `DAT_58A246C4`, `DAT_58A2478C`, and
`DAT_58A24794`. These actions and constants are visible in Ghidra; the input
record schema, field meanings, control identities, and resource labels are not
known.

## Caller evidence

Ghidra's direct-reference audit records five callers:
`FUN_588F43F0`, `FUN_588B4980`, `FUN_588B8980`, `FUN_588F6940`, and
`FUN_588FA930`. The decompiled call paths allocate `0x27C` bytes before calling
the constructor. They pass pointers into caller-owned data, and some paths
construct multiple `CForce` objects from repeated records. One path advances
its source pointer by `0x180` bytes for each instance. This establishes the
observed allocation and repetition patterns, but not the record format or
ownership contract.

## Validation and limits

`tools/generate_mapped_client_asm.py` emits the source from the locally captured
mapped client image for the Ghidra-reported function extent. ObjDiff verified
all 4,348 bytes and 113 mapped operand records. This is an exact machine-code
match; it does not prove that the high-level source or runtime behavior has been
recovered. No emulator runtime test was performed.
