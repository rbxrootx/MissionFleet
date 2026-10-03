# Current Main.dll `CPannelJump_AddOn` cleanup and selector helpers

## Evidence source and call graph

The evidence is the captured mapped client image and the RTTI-backed
`CPannelJump_AddOn` vtable at `0x5899F9BC`, documented in
[`current-main-jump-addon-vtable.md`](current-main-jump-addon-vtable.md).
Vtable slot `+0x00`, `FUN_58886ED0`, calls `FUN_58886CD0` at `0x58886ED3`.
Slot `+0x18`, `FUN_58888270`, calls `FUN_58886E90`, `FUN_58887510`, and
`FUN_588876B0` repeatedly in its selector branches. In particular, it calls
`FUN_58886E90` eight times at `0x588882B0`, `0x588882E3`, `0x58888319`,
`0x5888834F`, `0x58888385`, `0x588883BB`, `0x588883ED`, and `0x5888841F`.
The selector handler also calls `FUN_58887510` with argument zero at
`0x5888845D`.

## Matched methods

| Function | Bytes | Captured behavior |
| --- | ---: | --- |
| `FUN_58886CD0` | 443 | Writes the AddOn vtable pointer, visits pointer fields from `+0x64` through `+0x98` and two pointer arrays at `+0x9C` and `+0xBC`, calls the first virtual method with argument 1 for each non-null child, clears the pointer, then calls `0x58902C10` on the receiver. |
| `FUN_58886E90` | 52 | Passes its word argument and global `0x58A245B8` to `0x587867E0`, calls `0x58786490` with that global, and returns whether the result equals `0x58A0B4A0` and is positive. |
| `FUN_58887510` | 407 | Accepts only receiver mode 1 or 2, looks up a word through a table with stride `0xE84`, performs observed registry reads/writes, updates global state in mode 2, calls `0x587BAB60`, prepares a child argument for `0x58903360`, then dispatches receiver vtable slot `+0x08`. |
| `FUN_588876B0` | 134 | Traverses a list rooted at `0x58A247F4+0x14`, inspects node fields at `+0x5E`, `+0xA4`, and `+0x1C0`, and returns according to the observed comparisons. A later path bounds an input-derived value before an indirect table dispatch. |

Objdiff 3.8.0 verifies all 1,036 bytes and 31 mapped operands. The candidates
preserve the exact captured instruction streams; their notes do not assert
recovered C++ source structure.

## Limits

The destructor's child ownership and cleanup argument, the selector helpers'
input types and state meanings, the registry schema, and the list node type are
not established. The apparently unconditional self-compare at `0x588876F1`
remains as captured and is not assigned a guessed purpose. No emulator runtime
or visual test was performed.
