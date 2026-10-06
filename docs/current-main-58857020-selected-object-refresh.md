# Current Main selected-object component and cargo refresh

`FUN_58857020` is called by byte-matched handler `FUN_58807910` at
`0x58807C06`, on the `0x80020113` event path. The call loads `ECX` from
`[0x58A245C4]` and passes the word at the currently selected object `+0x350`.
Ghidra records no other direct caller.

## Behavior supported by the original code

The function initializes receiver state and counters, then reads the active
object from `[0x58A247F8]+4`. It walks the slot count encoded in bits 10..14 of
word `[activeObject+0x100C]+0x0C`, resolves each descriptor through
`activeObject+0xE8C`, and updates the corresponding receiver child at
`+0x108+4*index`. Empty or carriage-return descriptors clear the child's bit
0. Descriptor first-byte values 5 and 6 call `FUN_58857EC0` and increment
separate per-slot counters. Other nonempty descriptors request a computed
resource through `FUN_589032E0` and set the child flag.

It then processes ten cargo positions. The code checks the active object's
descriptor and enable/capacity fields, logs `Cargo%d : %d(%d)`, decodes two
packed 10-bit values using XOR masks, and dispatches updates through different
helpers when the object's low-five-bit type equals 9. A later pass updates four
word-valued slots. The tail initializes a buffer with the literal string
`submarine_temp`, selects resource requests and state writes using the observed
type-9, cargo-count, and global-state branches, calls `FUN_588597F0` (and
`FUN_58862460` for type 9), then dispatches a final update and clears receiver
counters `+0x2CC` and `+0x2D0`.

The source at
[`FUN_58857020.cpp`](../src/client-current/Main/FUN_58857020.cpp) matches the
complete 2,091-byte linear extent through `ret 4` at `0x5885784A`. Ghidra
counted 2,070 instruction bytes across three disjoint ranges; the indexed
inventory now includes the otherwise omitted alignment bytes and mapped
epilogue so the callable body is compared in full. Verification uses the
repository's pinned clang-cl compiler.

## Unresolved details

The receiver and active-object types, slot/cargo schemas, meaning of the
XOR-encoded values and type codes, resource IDs, and visible/gameplay effects
remain unknown. Most resource and update helpers are still unmatched. This is a
static byte match; no emulator runtime test has been performed.
