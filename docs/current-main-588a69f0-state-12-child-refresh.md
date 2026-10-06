# Current Main state-12 child refresh

`FUN_588A69F0` is a 41-byte helper called by byte-matched
[`FUN_58805940`](../src/client-current/Main/FUN_58805940.cpp) at `0x58805979`
and byte-matched [`FUN_58807910`](../src/client-current/Main/FUN_58807910.cpp)
at `0x58807CD2`. The complete Ghidra extent is one contiguous range,
`[0x588A69F0, 0x588A6A19)`, with no operand relocations.

## Behavior supported by the original code

The function compares the receiver's word at `+0x9C` with `0x000C`. If equal,
it calls vtable slot `+4` on the child pointer stored at receiver `+0x188`,
then ORs `0x000F` into the word at `+0x24` of the child pointer stored at
receiver `+0x194`. If the state word differs, it makes no child calls or flag
changes. The function preserves ESI and returns with `ret 4`.

Both matched callers load ECX from their receiver's `+0x174` field. The
`FUN_58807910` caller reaches this helper in the observed event-value-2 branch
and pushes zero; `FUN_58805940` reaches it in an equality branch and pushes its
observed stack value. This supports the call sites, but not a semantic meaning
for the callee's stack slot.

## Unresolved details

The receiver and child types, meaning of state `0x0C`, vtable slot `+4`
contract, and low four child flag bits are unknown. Ghidra's recovered
`__fastcall` prototype omits the observed callee cleanup: the code uses ECX as
receiver and returns with `ret 4`. No emulator runtime test has been performed.
