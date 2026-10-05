# Current Main type-0x05 record child-state initializer

`FUN_587B2A40` is a 592-byte x86 routine in the pinned mapped `Main.dll`.
Its current source preserves the mapped instruction stream exactly and is
verified through the repository's pinned ObjDiff/clang-cl workflow.

## Caller evidence

Two already matched functions call this routine. `FUN_587A6220` invokes it in
the branch gated by the observed record byte `0x05`, after preparing the child
from a `0x2D`-DWORD record. At `FUN_588D84D0:0x588D88B4`, the map-state builder
passes a pointer to a stack-local `0x2D`-DWORD record, an entry index, and the
word at its receiver offset `+0x350`; it then calls virtual slot `+0x30` on
the child. These call sites establish the argument roles as record pointer,
index, and caller-supplied word without assigning domain names to them.

## Behavior visible in the mapped instructions

The callee copies 45 DWORDs to receiver `+0x18C`, stores the supplied index
at `+0x138`, and sets receiver `+0x25C` from the copied record's first bytes,
16-bit field, and the threshold field at source `+0xA0`. It resolves a
record-indexed entry using receiver `+0x150`, the copied word at `+0x190`, and
a 64-byte stride. If that pointer is nonnull, it copies six DWORDs into child
state at `+0x3D8+0x0C..+0x20` and stores the source pointer at `+0x3D8+0x54`.
It also sets bit `0x8000` in the child-state word at `+0x24`.

The routine derives XOR-`0xAAAAAAAA` values at receiver `+0x154` and `+0x158`,
uses a global-pointer comparison and `FUN_58854230` to select the latter's
source, and calls `FUN_587B1850`, `FUN_587B08C0`, and `FUN_587B1B70`. It stores
the caller-supplied word at `+0x24C`, assigns `+0x254` categories at the
observed 500/1000/1500 thresholds, writes `0x15` at `+0x258`, clears
`+0x243E4`, and stores a lookup result from `FUN_58778D00` at `+0x243E8` (or
zero when the lookup returns null).

The instruction stream and match record are in
[`src/client-current/Main/FUN_587b2a40.cpp`](../src/client-current/Main/FUN_587b2a40.cpp).
The caller paths are also summarized in the [record-backed 32-slot builder
notes](current-main-record-backed-32-slot-builder.md) and [ship-map screen
constructor notes](current-main-ship-map-screen-constructor.md).

## Unresolved details

The record schema, field names and units, meaning of record type `0x05` and
tested IDs, global-context semantics, helper contracts, ownership, and
runtime visual effect remain unknown. This is an exact x86 instruction
reconstruction tied to Ghidra and two verified callers; it is not yet a
portable model or an emulator runtime test.
