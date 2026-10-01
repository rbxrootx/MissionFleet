# Installed Main.dll child-list routines

This subsystem is from the installed 2026 `Main.dll`, SHA-256
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd`. The
mapped image used for Ghidra analysis and byte matching is pinned separately in
[the current-client capture notes](client-unpacking.md). Do not merge these
addresses with archived 2062 `Main.dll` functions.

## Call-site and field evidence

Ghidra's decompilation of the installed screen constructor at `0x587C35A0`
shows it repeatedly checking child fields at offsets `+0x40` and `+0x30`, then
calling `FUN_58902F50` and `FUN_58902EE0`. The screen base initializer at
`0x589031A0` initializes those owner fields, both link pairs, and the priority
word at `+0x26`; when its second argument is nonzero, it calls both insertion
helpers. The two insertion helpers detach an already-owned node through their
paired removal helper before reinserting it.

The observed data structures are:

| Structure | Owner's head | Child owner | Previous | Next | Order key |
|---|---:|---:|---:|---:|---:|
| Circular doubly linked list | `+0x3C` | `+0x30` | `+0x34` | `+0x38` | signed 16-bit at `+0x26` |
| Null-terminated doubly linked list | `+0x4C` | `+0x40` | `+0x44` | `+0x48` | signed 16-bit at `+0x26` |

Both insertion routines maintain ascending order by the signed key and place a
new equal-key node after existing equal-key nodes. The circular-list removal
routine restores the remaining ring and resets the removed node's links to
itself. The null-terminated-list removal routine reconnects adjacent nodes,
updates the owner head when removing its first node, then clears the removed
node's owner and links. The initializer establishes the link defaults used by
these paths. These descriptions follow Ghidra's pseudocode and the mapped
instruction operands; the user-facing purpose of either list is unknown.

## Byte-match validation

The five source bodies are `FUN_589031a0.cpp`, `FUN_58902ee0.cpp`,
`FUN_58902f50.cpp`, `FUN_58902c20.cpp`, and `FUN_58902c70.cpp` under
`src/client-current/Main/`. Their extents are 198, 99, 129, 78, and 99 bytes,
respectively. They rebuild with the recorded Visual C++ 6 SP5 settings and
match the hash-pinned mapped image at objdiff 100%; each recorded direct-call
destination is audited against the original operand. The installed-client
verifier confirms all 25 current `Main.dll` functions in the profile, totaling
3,362 bytes.

This validates the recovered instruction bodies and the static call/data
relationships. It does not independently exercise the list operations in a
live game scene, establish higher-level field names, or validate the complete
screen-construction tree.
