# Current Main paired-child state update at `0x588A6A30`

Ghidra identifies `FUN_588a6a30` as a 567-byte function with an ECX-passed
receiver. Its contiguous extent is `0x588A6A30` through `0x588A6C66`. The
literal instruction source in
[`FUN_588a6a30.cpp`](../src/client-current/Main/FUN_588a6a30.cpp) matches all
567 bytes, including 26 checked relocations. Ghidra records a direct call from
`FUN_58808AD0` at `0x58808CFD`, but that caller is not yet matched.

## Behavior visible in the original code

The function enters its update paths only when bit 0 differs between the words
at `+0x24` of child pointers stored at receiver `+0x194` and `+0x198`.

- When the bit at child `+0x194` is clear, receiver state word `+0x9C` selects
  one of two fixed-code message calls. State `0x0C` calls
  `FUN_587B95E0(1)`; other states call `FUN_587B9620` with receiver words
  `+0x96` and `+0x94`, in that order. Both paths call child vtable slots
  `+4` and `+8` through receiver fields `+0x188` and `+0x18C`, then clear the
  low four bits of the word at child `+0x198`, offset `+0x24`.
- When the bit at child `+0x194` is set, the function first calls matched
  `FUN_588EB130`. If that result is nonzero and state `+0x9C` is not `0x0C`,
  it calls matched `FUN_58907990` twice with the values at globals
  `0x58A248F8` and `0x58A248FC`. It conditionally selects children from the
  object at global `0x58A246D8`, calls their vtable slot `+4` with zero,
  calls `FUN_587B9600` with receiver words `+0x96` and `+0x94`, clears the
  low four flag bits on child `+0x194`, calls child `+0x188` slot `+8`, and
  tail-jumps through child `+0x18C` slot `+4`.
- If state `+0x9C` is `0x0C`, the function instead calls byte-matched
  [`FUN_58807E80`](current-main-58807e80-state-dependent-update-gate.md);
  when it returns nonzero, the code calls matched
  `FUN_587B95E0(0)` and `FUN_587315C0(0)`, calls vtable slots on children
  `+0x188` and `+0x18C`, and clears the low four flag bits at child fields
  `+0x1A0` and `+0x1A4`.

[`FUN_587b9600.cpp`](../src/client-current/Main/FUN_587b9600.cpp) is a
byte-matched 29-byte wrapper. It forwards
`(0x80010019, arg1, arg2, 0, 0, 0)` to byte-matched `FUN_58970C70` and returns
with `ret 8`. Its code meaning and the meanings or units of its two forwarded
words are unknown. Ghidra records three other callers that remain unmatched:
`FUN_588A6E30` at `0x588A6F3A`, `FUN_588A8A70` at `0x588A8BE3`, and
`FUN_588060F0` at `0x58806139`. The other fixed-code wrappers used here are documented in
the [`0x587B95E0` notes](current-main-587b95e0-fixed-code-message-wrapper.md)
and [`0x587B9620` notes](current-main-587b9620-fixed-code-message-wrapper.md).

## Unresolved details

The receiver and child types, state meaning, flag meaning, global roles,
message-code meanings, virtual method contracts, and visible effect are not
established by this function. `FUN_58807E80` and its direct checks at
`FUN_588044A0` and `FUN_58805D90` now match their observed mechanics; the
identified caller remains unmatched. Ghidra did not recover a jump table at
`0x588A6C06` and treated the indirect tail jump as a call in its pseudocode;
the literal source retains the original instruction bytes. No emulator runtime
test has been performed.
