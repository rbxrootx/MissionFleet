# Current Main type-0x06 packed-state transform

`FUN_587B4100` is an 845-byte helper called by the byte-matched type-0x06
record-backed initializer `FUN_587B4A30` at `0x587B4AE2`. Its source preserves
the installed instruction bytes in the two exact Ghidra body ranges.

## Caller evidence

Ghidra records three matched callers of the initializer: `FUN_58758870` at
`0x58758D23`, `FUN_587A6220` at `0x587A6A01`, and `FUN_588D84D0` at
`0x588D8B48`. The latter two are documented type-0x06 child-state setup paths.
The focused verifier checks those calls and the initializer-to-helper call
against the mapped Main.dll.

## Behavior visible in Ghidra

The helper reads packed words at receiver `+0x228`, `+0x22A`, and `+0x22C`.
The low four bits of `+0x228` determine the observed entry count; bits 11-12
select one to four groups, dividing entries among them and assigning any
remainder to the first group. The low five bits of `+0x22A` seed values and
bits 5-9 provide a step. It builds six-value scratch records, then processes
each selected entry over 36 coefficient steps using arrays at `0x58A0B4D8`
and `0x58A0ED18`. Each step writes six integer results beginning at receiver
`+0x304`; the low four bits of `+0x22C` bias one result. Ghidra identifies no
direct outgoing calls.

Fresh Ghidra assigns `[0x587B4100, 0x587B4258)` (344 bytes / 104 instructions)
and `[0x587B4260, 0x587B4455)` (501 bytes / 164 instructions). Each range is
completely decoded from the pinned mapped image. The intervening eight-byte
gap is not assigned to this function by Ghidra.

## Unresolved details

The packed fields' domain units, coefficient-array meanings, destination table
schema, ownership, and downstream visual or gameplay effect remain unknown.
This is an exact instruction reconstruction with matched caller evidence, not
a portable behavioral model or emulator runtime test.
