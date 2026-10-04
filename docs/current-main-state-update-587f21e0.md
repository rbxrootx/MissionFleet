# Current Main.dll state update at `0x587F21E0`

`FUN_587f21e0` is a 1,670-byte, three-argument handler called twice by
`0x587FAEC0` and once by `0x587FD890`. Callers provide an object pointer as the
first stack argument and two scalar controls; one site passes `0x40000000`.

The mapped body clears bit 0 in the word at input-object offset `+0x24`, reads
the 16-bit value at `+0x350`, and compares it with receiver field `+0x104C8`.
On equality, it copies a 16-bit value from the object reached through global
`0x58A247F8` and clears receiver fields `+0x10554`, `+0x10558`, and `+0x10568`
before calling `0x587eac40`. It also reads eight global status words at offset
`+0x64`, conditionally adjusts a count, and updates receiver state through
multiple branches and helper calls. The complete extent matches with 53 mapped
operands checked.

The object types, identifier meaning, control argument roles, status flags, and
domain interpretation of the receiver fields remain unknown. The evidence
supports the data flow and state changes only. No runtime behavior test was
performed.
