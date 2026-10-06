# Current Main shared status-message and state transition

`FUN_587E8750` is a 722-byte helper reached by two byte-matched callers. Its
observed x86 contract is a context/root pointer in `ECX`, followed by two
callee-cleaned stack arguments: subject object at entry `[ESP+4]` and mode at
`[ESP+8]`. It ends with `ret 8`. `FUN_588DA9E0` calls it twice, at `0x588DAA07`
and `0x588DAA10`, keeping `[0x58A2459C]` in `ECX` and passing its receiver
with mode 5 or 1. `FUN_588DFFB0` calls it at `0x588E009C` with the same `ECX`
context, `ESI` as subject, and mode 0; its mode push is at `0x588E0075`.
Both caller bodies are byte-matched in the installed client. The call
instruction and argument setup are preserved in
[`FUN_588da9e0.cpp`](../src/client-current/Main/FUN_588da9e0.cpp) and
[`FUN_588dffb0.cpp`](../src/client-current/Main/FUN_588dffb0.cpp).

The helper returns immediately when subject `+0x100C` is null. Modes 0 through
4 and 6 pass a matching `MESSAGESTRING__...` key and a subject value reached
through `+0x12E8/+0x6C` to the recovered string-format callback, writing to
subject `+0x3A0`. The keys identify sunk, out-of-field, wiped-out,
lost-connection, retreated, and forced-retreat notices. Mode 5 uses
`MESSAGESTRING__START_OBSERVE` and formats into a stack buffer instead. These
are recovered resource keys, not verified localized display text.

After formatting, the function calls `FUN_5890BD90` with value `0xFFFF` or
`0xFFFF00`, selected by whether subject `+0x1258` is zero; it then calls
`FUN_58907990([0x58A248F8])`. The next virtual call uses slot `+4` through an
object derived from `DAT_58A246D8`: when `[DAT_58A246D8]+0x170 > 0x1D` and
`+0x194` is nonzero, the object pointer comes from
`[[DAT_58A246D8]+0x194]+0x74`; otherwise Ghidra shows the local pointer left
zero before an unconditional dereference. Whether that path is prevented by
a runtime invariant is unknown. Further state changes are gated by context
`+0x105F0 == 7`. For nonzero modes it can set subject `+0x664C` to
10000 and, when the subject equals the active object at `[0x58A247F8]+4`, set
`DAT_58A245A4+0x8D8` and context-child `+0xAC` (the latter is 1 for modes 1
and 4, otherwise 0). Mode 0 can call `FUN_587CC700(1)` when subject `+0x6648`
is nonzero, then chooses subject `+0x664C` from 75, 125, 200, or 250 using
the low five bits of the word at `[subject+0x100C]+4`.

The Ghidra decompilation and extent/ref audit are recorded in
`var/current-main-next/587e8750-ghidra.c` and
`var/current-main-next/587e8750-ghidra.log`; the body matches the pinned
mapped `Main.dll`. Field schemas, localized string contents, the meanings of
the selected values, and the formatting, notification, and virtual-call
contracts remain uncertain. Known verified callers exercise modes 0, 1, and
5; the other switch cases are supported by the helper's own mapped code, not
by caller evidence. No emulator runtime test was performed.
