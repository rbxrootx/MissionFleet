# `FUN_58858bd0`: ship-map resource and child selection

The matched non-type-9 timer handler `FUN_58859dd0` calls this helper at
`0x5885A078`, `0x5885A08A`, and `0x5885A15B`, each with ECX=EBX and stack
argument 0. Matched `FUN_5873FE80` calls it at `0x5874121C` with ECX from
`[0x58A245C4+0x9C]`; the stack argument is path-dependent EAX or EBX. Ghidra
records 13 direct calls total; the remaining references come from currently
unmatched functions and are preserved in the generated reference inventory.

Ghidra confirms a contiguous 533-byte body, `[0x58858BD0,0x58858DE5)`, ending
in `ret 4`. The thiscall routine clears bit 0 on child flags at receiver
`+0xA90` and `+0xA94`, then dispatches on the selected code at receiver
`+0x138 + index*4`, with the index at `+0xF4`. The observed cases 1, 2, 4,
`0x10`, and `0x40` select resource IDs 600, `0x259`/`0x25A`, argument-selected
`0x25B`–`0x260`, or `0x580`. The branches also update timer/number helpers and
child flags. Before installation, the chosen ID is checked against the
resource count at receiver `+0xA88+0x164`; the selected resource pointer is
then installed on child `+0xA8C` and six resource fields are copied.

Relevant direct callees include `FUN_5877E7A0`, `FUN_5877E770`,
`FUN_58734920` (resource installation), and `FUN_58907360` (number setter).
The reconstructed candidate emits the mapped instruction stream literally,
with the verifier checking all 18 mapped operand targets.

The dispatch values' semantic names, resource-table identity, child roles,
timer/display meaning, and visible effects remain unknown. The caller ABI
includes one DWORD stack argument; one verified caller selects it from EAX or
EBX based on path conditions. Several additional direct callers are still
unmatched. No emulator runtime test has been performed.
