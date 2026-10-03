# Current Main input and chat dispatch

`FUN_58890110` at `0x58890110` is referenced by a mapped pointer at
`0x5899FCAC`; Ghidra records that data reference and no direct calls. The
surrounding words include other code pointers and the
`MESSAGESTRING_SHIP_CLASS_NONE` string. The owning table and class are not
identified, so this note does not assign one.

The routine forwards the supplied message through child virtual slot `+0x10`
when receiver flags at `+0x24` do not contain `0x0002`. It then dispatches on
the message identifier at argument `+4`, with observed cases `0x201` through
`0x204`, `0x20A`, `0x100`, and `0x102`. Its character-input path handles Enter,
updates receiver state, and selects chat modes using localized keys for all,
team, fleet, squadron, and direct-fleet chat. It also parses slash-prefixed
input, including `/w`. The complete command grammar and downstream message
contracts remain unresolved.

Ghidra assigned twelve ranges totaling 12,952 bytes. Five gaps contain
continuation code after calls to `FUN_5897CC42` that Ghidra marks
non-returning: four `add esp,4` plus backward-jump sequences, and one stack
cleanup before a jump into the same function. These reachable instructions add
35 bytes. Capstone confirms the other seven gaps are alignment NOPs. The
corrected 12,987-byte function is emitted as 18 ranges and matches at 100% under
ObjDiff 3.8.0, with 923 operand values checked against the mapped image.

The virtual signature, owning table, receiver-field meanings, command details,
and runtime chat behavior have not been validated in the original client.
