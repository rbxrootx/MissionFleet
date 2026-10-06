# `FUN_588628d0`: type-9 ship-map timer and child refresh

`FUN_588628d0` is reached from two callers already matched byte-for-byte:
`FUN_588DEB30` at `0x588DF19A` and `FUN_588E5150` at `0x588E6346`. Both load
ECX from `[0x58A245C4+0xA0]`, pass no stack arguments, and gate the call on the
current record's low five type bits being 9. The first caller also performs
`FUN_5885FC40` before this call.

Ghidra places the complete body at `[0x588628D0,0x58862D41)`, a contiguous
1,137-byte range ending in `ret`. The function loops over the receiver count at
`+0x118`; each record with state 2 at `+0x28` follows a timer path controlled
by a global state word. In the active branch it calls `FUN_587A1640` and
`FUN_587A15E0` while changing encoded values, per-entry counters, and child
state bits. It accumulates timer fields, computes a resource-relative value
using a ushort at resource `+0x0C`, and updates the selected seconds display
through `FUN_5877E740`. Once the observed elapsed value exceeds six seconds,
the routine copies resource fields from a global table entry at offset `+0x580`
into a child at receiver `+0x72C`. The alternate branch polls `FUN_58793E10`,
clears a latch, adjusts child flags, and for state 4 calls `FUN_588EBEB0` and
`FUN_58907990` before indirect child-vtable operations.

The reconstructed source emits the mapped instruction stream literally and
records 43 operand targets for the verifier. This gives an exact machine-code
match, not a semantic confirmation of the subsystem.

The receiver and record layouts, timer units, encoded-value meaning,
resource-table identity, child visibility/state semantics, helper contracts,
and vtable behavior are uncertain. Ghidra shows a possible zero divisor at
resource `+0x0C`; the runtime invariant that may prevent it is unknown. No
emulator runtime test has been performed.
