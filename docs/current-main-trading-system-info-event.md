# Current Main.dll trading-system InfoData event path

This slice closes the installed client's open direct-call path rooted at
`FUN_588F70E0`. Ghidra's fresh decompilation of the byte-verified dispatcher
`FUN_587BB700` places its call at `0x587C12C5` in switch case `0x80027103`.
The mapped x86 instructions immediately before the call load two 16-bit
values, the packet pointer from `[EBP+8]`, `EBX`, and `EBX+0xE0`; `ECX` is
loaded from global `0x58A245F4` plus `0x60`. This ties the reconstructed path
to a specific original dispatch case and argument setup.

The Ghidra body for `FUN_588F70E0` clears receiver byte `+0x62`. A nonzero
first stack argument enters the helper path through `FUN_588F74C0` and
`FUN_588F72D0`. Otherwise, selector `0` calls the kind-0 setup path
`FUN_588F6D20`; selectors `1` and `2` call the kind-1 setup path
`FUN_588F6C60`. These labels describe the recovered branches, not the
gameplay meanings of the packet fields.

The object type is grounded by the constructor `FUN_588F6210`, whose first
stored vtable is identified in Ghidra as `CTradingSystem_InfoData::vftable`.
The paired setup routines allocate that object, initialize either the
kind-0 or kind-1 payload, and compare two payload fields against values on the
current child object. If both fields match, or both current values are zero,
they call `FUN_588F6E70` and set bit 0 of the current child's flags. The apply
helper copies the two selected values to owner offsets `+0x68` and `+0x6C`,
chooses a kind-specific helper, and sets the low four flag bits on selected
children. `FUN_588F74C0` lazily allocates a separate singleton whose vtable is
identified as `CTradingSystem_MessageBox::vftable`; this supports describing
the nonzero branch as the message-box helper path, while its event semantics
remain unresolved.

The verified slice is the full open direct-transfer closure, not a set of
unrelated extracted functions. Every row below was reached from
`FUN_588F70E0` through the listed Ghidra call graph. The transfers shown
include verified leaves outside the selected closure; two edges are tail
jumps rather than call instructions.

| Function | Bytes | Direct calls or tail jumps observed in Ghidra |
| --- | ---: | --- |
| `5886DCF0` | 162 | `58731C60`, `5897CC4E` |
| `5886FFA0` | 23 | `5886BA60` |
| `588BE810` | 499 | `588E8570`, `589087F0`, `589088D0` |
| `588BEDC0` | 1,681 | `58731CE0`, `588BE810`, `588E8570`, `58907360` |
| `588C61A0` | 55 | — |
| `588E9F60` | 322 | `588C61A0`, `588E9940` |
| `588F6210` | 26 | — |
| `588F6290` | 105 | `5897152E`, `5897CC4E`, `5897CD4C` |
| `588F6300` | 137 | `5897152E`, `5897CC4E`, `5897CD4C` |
| `588F6470` | 16 | `587A54D0` |
| `588F6480` | 197 | `58731CE0`, `5874BA60`, `5897CBDA`, `5897CC48` |
| `588F6550` | 39 | `58731CE0`, tail jump to `5875F940` |
| `588F6580` | 219 | — |
| `588F6940` | 564 | `5877CC30`, `5886DCF0`, `5886DDA0`, `5886FFA0`, `588F6580`, `588F6890`, `58903160`, `5897CC4E`, `5897CC72` |
| `588F6B80` | 183 | `588BEDC0`, `588E9F60`, `58903290`, `5897CC4E` |
| `588F6C60` | 178 | `588F6210`, `588F6290`, `588F6470`, `588F6E70`, `5897CC4E` |
| `588F6D20` | 178 | `588F6210`, `588F6300`, `588F6470`, `588F6E70`, `5897CC4E` |
| `588F6E20` | 69 | `588F6550` |
| `588F6E70` | 127 | `588F6480`, `588F6940`, `588F6B80`, `588F6E20` |
| `588F70E0` | 98 | `588F6C60`, `588F6D20`, `588F72D0`, `588F74C0` |
| `588F7230` | 69 | `58764D30`, `5876BAF0` |
| `588F72D0` | 97 | `58764D30`, `5876BAF0`, tail jumps to `588F7230` |
| `588F74C0` | 151 | `5897CC4E` |

The complete set is 23 functions / 5,195 bytes across 24 Ghidra body ranges;
`FUN_588F7230` has two discontiguous ranges. The open-closure audit found 95
direct transfers from this closure into already verified functions (94 call
instructions and one tail jump), no unresolved internal targets, and no
Ghidra body-coverage gaps. Each selected body was
emitted from the pinned mapped `Main.dll` instruction ranges and passed the
pinned objdiff comparison at 100.0%; the focused verifier also checks the
closed call graph and the matched dispatch call/argument setup.

This is byte-exact instruction-level source for these functions, not recovered
portable C++ for the whole path. Packet field meanings, the owning class's
complete layout, the visible UI effect, and behavior in the emulator remain
unverified. No live-client or emulator rendering test was run.
