# Shared linked-record removal helpers

`FUN_58848450` and `FUN_58848530` are parallel 215-byte functions in the
installed, mapped `Main.dll`. ObjDiff 3.8.0 verifies both instruction streams
byte-for-byte and checks all four mapped operand targets in each.

## Evidence from the original

The verified packet dispatcher `FUN_587BB700` calls it at three sites, and the
verified event dispatcher `FUN_588C1650` calls it at two. Each caller loads
`ECX` from global object `0x58A245B4` plus `0xD8` and pushes one pointer
argument drawn from a record, register, or local stack value. The callsites
establish packet/event dispatch use, but do not identify a game-level record
type.

The helper starts from receiver field `+0x6C` and follows node field `+0x54`.
For each node, it reads values through node fields `+0x70` and `+0x6C` and
passes them with the supplied pointer to comparison callback `0x5898C1A4`.
When the callback reports a match, it updates the links at node `+0x50` and
`+0x54`, repairs receiver references at `+0x6C`, `+0x70`, `+0x100`, and
`+0x108` when they point to that node, and conditionally calls
`FUN_5875A100` when node field `+0xA4` is nonzero. It then calls the node's
first virtual method with argument `1`, decrements receiver word `+0xF2`, and
returns. If the starting node is null or the walk finds no match, it returns
without those changes. The body returns with `ret 4`.

The parallel `FUN_58848530` has two calls in each dispatcher and receives the
same owner at global object `0x58A245B4` plus `0xD8`. It follows the same node
link fields and comparison callback, but starts from receiver `+0x64`, repairs
receiver references at `+0x64`, `+0x68`, `+0xFC`, and `+0x10C`, and decrements
receiver word `+0xF0`. It also conditionally calls `FUN_5875A100`, invokes the
node's first virtual method with argument `1`, and returns with `ret 4`.
Together, the two byte-matched helpers account for separate linked ranges in
the same receiver; the original code does not name those ranges.

## Uncertainty and validation

The receiver and node types, compared-key schema, callback contract, meaning
of the receiver references and counts, and `FUN_5875A100` contract remain
unresolved. No client or emulator runtime test was performed.
