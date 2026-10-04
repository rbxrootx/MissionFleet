# Current Main indexed child-resource refresh

`FUN_5888CEE0` is called by verified update routines `FUN_58890110` and
`FUN_58893860` at multiple sites. Both pass the receiver in ECX; the helper
takes no stack arguments.

It returns immediately when receiver byte `+0xAC` is 8 or 9. Otherwise it gets
an active count through `FUN_58908170` on the object at `+0x4CC`, limits the
count to six, and updates child pointers beginning at `+0x4D0`. At each active
index it uses `FUN_58908140` to obtain the indexed item and checks the global
resource object at `0x58A246A4` for an entry at index `+0x68E`. A present entry
is stored in child `+0x50` and supplies six observed DWORDs from `+0x10` through
`+0x24`, copied into child fields beginning at `+0x0C`; a missing entry clears
child `+0x50`. When receiver dword `+0x15C` equals `0x120000`, it sets mask
`0x000F` on active child word `+0x24`; otherwise it clears mask `0xFFF0`. It
also clears `0xFFF0` on unused slots through six.

The complete 347-byte body and all 12 mapped operand targets match the pinned
original. The container and resource-entry contracts, child-slot roles, and
flag-mask meanings remain unresolved. No runtime client or emulator test was
performed.

## Shared indexed-node accessor

The helper's `FUN_58908140` dependency is now independently matched. That
41-byte routine takes a signed index, starts at receiver `+0x78`, follows
next-pointers at node `+0x14` for positive indices, and returns the selected
node's DWORD at `+8`. A null node returns `-1`; zero and negative indices use
the head without advancing. Three verified routines call it, including the
six-slot refresh above. Its list/node types, ownership, and negative-index
policy remain unresolved. ObjDiff checked the full body; it contains no mapped
operand targets.
