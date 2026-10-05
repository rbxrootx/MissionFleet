# Current Main.dll message text list insertion

`FUN_58752000` is a 416-byte routine in the hash-pinned installed-client
`Main.dll`. Verified callers `FUN_58890110` and `FUN_588C1650` reach it with
text in event/message paths. `FUN_588C1650` invokes it during event
`0x80020F04` and also passes a composed local text buffer before walking
related linked objects. `FUN_58890110` calls it when `FUN_587522F0` reports no
existing match for a text pointer returned through `FUN_58759EB0`.

The routine searches receiver list head `+0x90`, follows node link `+0x54`,
and compares each node text pointer at `+0x70/+0x6C` with the input in
two-byte steps. It also suppresses text equal to the global string at
`0x58A0B450`. For a new, non-suppressed value, it allocates a `0xB4`-byte
object, initializes it through `FUN_5875A7E0`, runs the input and a local
buffer through callback `0x5898C198`, and initializes its text/control fields
with `FUN_5875A4B0`. It clears observed bits in the node word at `+0x24`,
appends the node through receiver head/tail fields `+0x90/+0x94` and node links
`+0x50/+0x54`, then increments count `+0xA0`.

ObjDiff verifies all 416 bytes, `ret 4`, and 11 mapped operand targets. The
receiver/node types, callback, global-string policy, and visible message
semantics remain uncertain. No live client test was run.

The existing-match check has now also been matched in
[`FUN_587522F0.cpp`](../src/client-current/Main/FUN_587522F0.cpp). This 69-byte
helper walks receiver list `+0x90` via node link `+0x54`, passes the nested
node value at `+0x70/+0x6C` and the supplied argument to the callback pointer at
`0x5898C1A4`, and returns the first node for which that callback returns zero.
It returns null for an empty list or when traversal finds no such node. The
complete body and its one mapped operand match under objdiff 3.8.0. The callback
contract and comparison/encoding rules remain unresolved.
Verified `FUN_58847770` calls the helper at `0x588479AE` and `0x58847A07`.
Verified `FUN_58890110` calls it at `0x5889320E`, `0x588932FA`, `0x58893357`,
and `0x5889338D`; the first path inserts on a null result, while the other
paths read fields `+0x9E` or `+0x80` from returned nodes. Those field meanings
are still unknown.
