# Current Main.dll unique-string fanout

`FUN_58831AE0` receives an input record and a collection owner from both the
verified packet/message dispatcher `FUN_587BB700` and event dispatcher
`FUN_588C1650`. For a non-null record, it walks the collection at receiver
`+0x98` by index through `FUN_589080E0` and compares each returned string with
the record text at `+0x2D`. If a match is found, it returns without changing
either collection.

On a miss it calls `FUN_589088D0` on collection `+0x98` with the `+0x2D`
string, DWORD at record `+0`, and constant `0x83ADD7`. It then calls that
helper on collection `+0x9C` with the string pointer at record `+0x0C`, DWORD
at record `+4`, and the same constant. The record layout, collection types,
constant's role, and domain meaning of the associated strings and IDs remain
unresolved.

The complete 163-byte function matches mapped `Main.dll` under objdiff 3.8.0;
all four mapped operand targets were checked. No runtime client or emulator
test was performed.
