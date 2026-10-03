# Current Main child-control state updater

`FUN_58810cb0` is a 3,243-byte `__fastcall` function in the locally captured
current-client `Main.dll`. Ghidra reports one contiguous body range,
`0x58810CB0..0x5881195A`. ObjDiff 3.8.0 matches all 3,243 bytes and checks 104
mapped operand targets.

The ordinary instruction-mnemonic reconstruction differed by one byte under
the recorded compiler profile. The final source emits each decoded instruction
as its exact mapped bytes (`--emit-all`); the focused verifier confirms the full
body match.

Ghidra records a direct call at `0x588144DB` from `FUN_58814480`. That caller
checks a screen-state field, invokes this function alongside sibling update
helpers in its `0x200` branch, then iterates the receiver's child list.

The callee selects a shared screen-data record from global state and copies six
words into a receiver-owned record at `+0xB8` or `+0xBC`. It changes bit 0 in
child objects at multiple receiver offsets, with branches based on receiver
flags and global state; other branches pass selected values to
`FUN_587316C0` and `FUN_58907360`. The receiver class, shared record schema,
child identities, flag meanings, and resulting visual behavior are not known.
No emulator runtime or visual test was performed.
