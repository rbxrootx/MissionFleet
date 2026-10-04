# Current Main startup child controls

This pass follows the child controls initialized by the matched
`FUN_588A7310`. Seven constructors and setup helpers add 1,457 exact bytes.
ObjDiff 3.8.0 reports 100% for each function and checks all 52 mapped operand
targets. A depth-three call-graph audit from `FUN_588A7310` finds no unmatched
inventory-backed direct callee.

| Address | Bytes | Evidence from the mapped instructions |
| --- | ---: | --- |
| `5881B960` | 253 | Calls shared setup `589031A0`, allocates a 0x54-byte member, installs vtable pointer `0x5899D914`, initializes receiver fields `+0x50..+0x5C`, and conditionally calls `58731C60`. |
| `5881B500` | 287 | Calls `589031A0`, allocates a 0x58-byte member, installs `0x5899D8F4`, initializes receiver child/flag fields, and conditionally calls `58734A30`. |
| `5890E5A0` | 47 | Forwards five arguments to `58734A30`, installs `0x589A2D3C`, and returns with `ret 0x14`. |
| `587CEB00` | 76 | Calls `58734A30`, changes bits in receiver word `+0x24`, clears dwords `+0x50/+0x58`, and installs `0x5899B450`. |
| `58879D60` | 546 | Calls `5876E890`, installs `0x5899F0EC`, stores a caller value at `+0x180` and 7 at `+0x84`, then allocates 0xFC-byte members and calls `58907100` based on global fields `+0x160/+0x190`. |
| `58879CC0` | 156 | Clears `+0xD0..+0xE0`; for the count at `+0x84`, walks arrays at `+0xE4` and `+0x108` and calls `58907360`/`58902D20` with 0 and -0x64. |
| `5875ACD0` | 92 | Selects null or a pointer derived from global fields `+0x190/+0x140` under the `+0x160` condition, calls `58734A30`, installs `0x5898D7E0`, and clears `+0x50/+0x58`. |

The calls from `FUN_588A7310`, source addresses, relocations, and emitted code
are recorded in the per-function match evidence. The class identities, meanings
of member fields, global state, and selector values remain unresolved. This is
static identity and call-graph evidence; the screen has not been exercised in
the emulator.
