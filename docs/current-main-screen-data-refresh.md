# Current Main event-driven screen-data refresh

`FUN_588afbf0` is a 3,159-byte `__thiscall` function in the locally captured
current-client `Main.dll`. Ghidra reports five body ranges:

| Range | Bytes |
| --- | ---: |
| `0x588AFBF0..0x588AFC29` | 58 |
| `0x588AFC30..0x588B0268` | 1,593 |
| `0x588B0270..0x588B0295` | 38 |
| `0x588B02A0..0x588B042C` | 397 |
| `0x588B0430..0x588B0860` | 1,073 |

The gaps between these ranges are excluded. ObjDiff 3.8.0 matches all 3,159
bytes and checks 36 mapped operand targets.

Ghidra records direct callers `FUN_588b0870`, `FUN_588b1360`, and
`FUN_588b1480`. The matched event dispatcher `FUN_587bb700` calls
`FUN_588b0870` for subcase 10 of event `0x80021034`; subcase 9 follows a
different route. The two sibling state handlers call this function with
different second-argument values: `FUN_588b1360` passes 1 and
`FUN_588b1480` passes 0.

The callee always issues fixed and receiver-derived coordinate calls. With a
nonzero second argument, it selects records from shared global tables and
copies fields into receiver-owned child objects. With a zero second argument,
it clears pointer fields across the corresponding children. Bounds checks,
record offsets, and coordinate arguments are visible in Ghidra; the receiver,
resource schema, child identities, event meaning, and visual effects remain
unknown. No emulator runtime or visual test was performed.
