# Current Main event-state child refresh

`FUN_588DAA20` is called by verified mission-event routine `FUN_587A90D0` and
fleet/battle screen updater `FUN_587F8760`; both pass one stack value and the
receiver in ECX.

It reads mode state at `0x58A2459C+0x218E0`, the active-object pointer at
`0x58A247F8+4`, and the supplied value. Depending on those conditions and the
receiver's state byte at `+0x354`, it updates receiver `+0x1258` and child
`+0x60` fields through pointers at `+0x12E8`, `+0x12EC`, `+0x12F4`, and
`+0x12F8`. The observed color constants include `0x00FF9B00`, `0x000000FF`,
`0x000086FF`, and `0x00FFFFFF`. Resource-selected branches use global object
`0x58A246A4`, with observed indices 3 and `0xCF`; they save the resource at
the child reached through receiver `+0x60FC`, field `+0x54`, and copy six
DWORDs from the selected resource. Null-resource branches clear that pointer
and retain the child updates.

The complete body is 309 bytes with all 9 mapped operand targets verified
against the pinned original. The argument, state-byte, child, color, and
resource meanings remain unknown. No emulator runtime test was performed.
