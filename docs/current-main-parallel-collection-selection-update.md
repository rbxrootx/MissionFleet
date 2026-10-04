# Current Main.dll parallel collection selection updates

`FUN_58834190` and `FUN_58839890` are parallel 188-byte routines called by
both verified dispatchers, `FUN_587BB700` and `FUN_588C1650`. The first is
called with a receiver from global object `0x58A245B4+0x160`; the second uses
`+0x164`. Each receives a pointer to a dispatcher-local record and returns
with `ret 4`. Each body has 12 mapped operand targets.

`FUN_58834190` scans the receiver collection at `+0x24C`, bounded by its
`+0x88` count. For each entry it obtains text through `FUN_589080E0` and
compares it with the supplied pointer through callback `0x5898C1A4`. A match
returns immediately. On no match it obtains a current index from the child at
`+0x21C`, resolves text pointer `0x5899E1B0` through callback `0x5898C030`,
and checks collection `+0x250` with the current scan index. If that second
lookup matches, it passes the decremented value from child `+0x218+0x64` to
`FUN_58907360`. It then calls `FUN_589081E0` with the scan index for collections `+0x24C`, `+0x250`,
and `+0x254`, and finishes through `FUN_58834030`.

`FUN_58839890` uses the parallel collections `+0x210`, `+0x214`, and
`+0x218`, with index children `+0x1E0` and `+0x1DC`, then calls
`FUN_58839730`. Its scan, comparison, second lookup, and conditional helper
call follow the same mapped structure.

The collection and entry types, callback and helper contracts, resource text
meaning, index roles, and visible result remain unresolved. The dispatcher
calls prove the receiver paths and local-pointer inputs, but not the feature's
domain meaning. No runtime client or emulator test was performed.

## Indexed collection support

`FUN_589080E0` is the indexed getter used by these handlers. It starts at
receiver head `+0x78`, follows `+0x14` next pointers for a positive index
(nonpositive indices select the head), and returns the selected node's DWORD
at `+4`, or null if traversal fails. It is a 40-byte function with no mapped
operand targets and returns with `ret 4`.

`FUN_589081E0` removes an indexed node. It follows the same head/next chain,
repairs previous/next links `+0x10/+0x14`, updates receiver head/tail
`+0x78/+0x7C` and current-node pointers `+0x80/+0x84`, and decrements count
`+0x88`. If the child at `+0x30` has bit 5 set in word `+0x24`, it dispatches
message 2 through vtable slot `+0x18`; it then invokes the removed node's first
virtual method with argument 1. Negative indices and failed traversals return
without mutation. The body is 201 bytes, including `ret 4`, with three mapped
operand targets.

The node's DWORD at `+4`, receiver pointer roles, callback effect, and removed
node's virtual method remain unidentified; no runtime behavior test was run.
