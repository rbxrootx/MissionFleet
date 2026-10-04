# Current Main.dll progress-grid state update

`FUN_58780330` is a 771-byte routine in the hash-pinned mapped installed-client
`Main.dll`. It is directly called by verified functions `0x5877EC80`,
`0x587808A0`, and `0x58782CF0`; the first and last contain repeated callsites.
The complete extent matches at 100% under objdiff, including all 17 mapped
operand targets.

The routine reads the first stack argument and adds it to receiver field
`+0xAC`. While receiver byte `+0x5C` is below `0x18`, it derives a progress
value from `+0xAC` and `+0xA8`, updates indexed per-slot byte state and two
parallel slot-record arrays using a global lookup table, and writes the
resulting progress byte to `+0x5C`. It then checks a global state word. When
that word is `0xF`, it computes and stores a value into the object at receiver
`+0xB0`; under additional field guards it calls `0x587BA230` and sets receiver
byte `+0xCC`. The function returns with `ret 8`; although it cleans two stack
arguments, it reads only the first one.

The receiver type, units and meaning of the accumulated argument, identity of
the per-slot records, and user-visible role of the global table and state are
unresolved. The three callers show this is a shared state update used in
multiple client paths, but they do not identify the state machine. Byte
identity verifies the captured instruction stream; it does not establish
runtime correctness or a playable-client milestone.
