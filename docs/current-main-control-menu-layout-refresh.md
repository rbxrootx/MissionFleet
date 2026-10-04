# Current Main control-menu layout refresh

`FUN_588ed750` is a 1,274-byte function in the installed, mapped `Main.dll`.
The instruction stream fully decodes, and objdiff 3.8.0 checks all 38 mapped
operands against the hash-pinned client image.

## Evidence from the original code

Ghidra and the verified caller bodies show direct calls from
`FUN_587e2e80` at `0x587E2ED1` and `FUN_587e4230` at `0x587E4389`. The first
caller is the `+0x04` virtual entry of `CPageFactory_ControlMenuScreen`; both
callers pass the child at receiver offset `+0xDAC` in `ECX` and the word at
receiver offset `+0x60` as the stack argument.

The callee stores that 16-bit argument at child offset `+0x13C`. It then ORs
`0x000F` into the `+0x24` flag word of six child pointers at offsets `+0x120`
through `+0x134`. Subsequent branches read counts and pointers through shared
state at `0x58A246BC`, select record data, and copy fields into child objects.
The body calls matched helper `FUN_58903290` 30 times; that helper updates
position fields and propagates their deltas through flagged descendants. The
body also calls `FUN_588ECEA0` once.

## Uncertainties

The receiver and child types, the input and `+0x13C` meanings, shared record
schemas, selector roles, coordinate units, control identities, and the final
helper's contract remain unknown. “Layout refresh” describes the observed
callers, shared-record selection, and repeated position updates; it does not
identify a specific visible control or screen effect. No emulator runtime or
visual test was performed.
