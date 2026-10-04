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
