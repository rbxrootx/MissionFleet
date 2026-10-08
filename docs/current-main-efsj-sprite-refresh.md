# Installed Main EFSJ sprite-bundle refresh

`FUN_588DDCE0` is an exact mapped-byte match: ObjDiff 3.8.0 verifies all 808
bytes, and Capstone decodes the complete function as 242 x86 instructions. The
source preserves the installed client's mapped instruction stream; it does
not claim to recover the original C++.

The fresh Ghidra decompilation ties this routine to the matched event handler
`FUN_58806F60`. At `0x5880709E`, the handler calls it on its `param_4 == 0`
path when the 16-bit value at the resolved object's `+0x100C`, offset `+2`, is
`0x1C3`, `0x006F`, `0x013E`, or `0x1C5`. The caller then sets byte `+0x1368`
on that object. The precise meaning of those event values is not established.

The body lazily allocates and loads `SPR\EFSJ.spr`, then creates up to three
children whose vtable is identified by Ghidra as `CSpriteBundleScreen`. The
constructor arguments use coordinates relative to the receiver, including
offsets `-0x7F/-0x3F` for one child and `-0x82/-0x122` for the other two. The
routine clears selected flag bits, makes three calls to `FUN_58902D20(0x101)`,
and attaches up to three records from the loaded bundle. The records are spaced
by `0x40` bytes; each child receives a record pointer at `+0x54` and six copied
DWORDs in fields `+0x0C..+0x20`. These are observed data-flow details, not
recovered field names.

All eleven direct calls reach four already byte-matched functions:
`0x5897CC4E`, `0x58906DE0`, `0x589031A0`, and `0x58902D20`. The focused verifier
checks mapped bytes and calls, the caller's event-ID branch, targeted fresh
Ghidra body coverage and calls, and agreement between two independent Ghidra
body and edge exports.

The event meanings, owning class, sprite-record schema, child-field meanings,
asset contents, and final rendered appearance remain uncertain. No live client
or emulator runtime test was performed.
