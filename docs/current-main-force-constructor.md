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

## Repeated-record child factory: `FUN_588F43F0`

The verified packet/message dispatcher `FUN_587BB700` and verified routine
`FUN_58882D80` both call this helper with receiver `0x58A247F4` and one input
pointer. `FUN_58882D80` makes the call only when its source pointer in EDI is
nonzero. The factory allocates `0x27C` bytes and passes the input pointer to
`FUN_5877CC30`, whose `CForce::vftable` assignment identifies the constructed
object as a `CForce` child.

After construction, it calls `FUN_5877B130` with the new object and receiver
subobject `+0x10`. If the child's dword `+0xB8` is not `-1`, the factory walks
the receiver chain beginning at `+4`, following each object's `+0xCE4` link,
and compares the object's dword `+0x48 >> 10` with the child key. A match uses
the child's word `+0x5E >> 12` as an index into the matched object's pointer
array at `+0x9A4`, stores the child there, calls `FUN_588E8570`, and returns
the child. If the key finds no match, the factory writes `-1` to the child at
`+0xB8` and passes it to `FUN_5877B130` through receiver subobject `+0x20`.

The complete body is 210 bytes with seven mapped operand targets. Its first
return path is at `0x588F44AA`; the alternate path ends with a short jump back
to the shared epilogue at `0x588F4485`. Fourteen `CC` bytes follow before the
next indexed function at `0x588F44D0`. The input record, key and index
meanings, collection contracts, chain ownership, and refresh helper's visible
effect remain unresolved. No emulator runtime test was performed.

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
