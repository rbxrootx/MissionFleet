# Current Main event-gated child state refresh

`FUN_588A6D60` is a 141-byte helper called by byte-matched
[`FUN_587BB700`](../src/client-current/Main/FUN_587bb700.cpp) at
`0x587C04EF`. Ghidra's reference dump and a scan of the installed mapped
`Main.dll` find that single direct call. The body is one contiguous range,
`[0x588A6D60, 0x588A6DED)`, with mapped operands for `0x58A247F8` and
`FUN_58902CE0`.

## Behavior supported by the original code

At the call site, the dispatcher loads ECX from `[0x58A245A8]+0x174` and pushes
no stack argument. The call occurs in the observed event-record branch where
the word at `+0x0A` equals 1, immediately after `FUN_588A6C70`.

The helper checks byte `+0x354` on the object at `[0x58A247F8]+4`. Unless that
byte equals 1, receiver state word `+0x9C` determines whether dword `+0x50` on
child `+0xB8` is set to 0 (state `0x10`) or 1 (other states). It calls the
byte-matched `FUN_58902CE0(0x100)`. If state is not `0x10`, it ORs bit 0 into
the word at child `+0x1E4 + 0x24`. It stores 2 at receiver `+0x98`, ORs `0xF`
into the word at child `+0x160 + 0x24`, stores byte 1 at that child's `+0x100`,
and ORs bit 0 into the word at child `+0xD8 + 0x24`.

## Unresolved details

The receiver/child types, global record schema, meanings of record byte
`+0x354`, receiver state `+0x9C`, receiver field `+0x98`, and the child flags
remain unknown. The indirect child-update methods and their visible effects
have not been tested in the emulator.
