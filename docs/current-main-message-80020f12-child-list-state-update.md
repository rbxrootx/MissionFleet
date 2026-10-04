# Current Main message `0x80020F12` child-list state update

`FUN_58839CF0` is a 573-byte function in the installed 2026 `Main.dll`
capture. The prior inventory size of 559 bytes ended at `0x58839F1F`, in the
middle of the immediate for `mov ecx, 0xFFFD`. The mapped image continues with
the final immediate byte, a state-mask instruction, register restores,
`add esp, 8`, and `ret 8` at `0x58839F2A`. Three `INT3` bytes follow before
the next indexed function at `0x58839F30`. Objdiff 3.8.0 confirms the corrected
573-byte extent and its operand targets.

## Caller evidence

Verified handlers `FUN_587BB700` and `FUN_588C1650` reach this helper from
message case `0x80020F12`. In `FUN_588C1650`, action value 0 first calls
`FUN_58754CD0`; it then calls `FUN_588343B0` when the child at the observed
`+0x160` path has mode bits 2, or calls `FUN_58839CF0` when the child at the
`+0x164` path has mode bits 2. The latter call passes the record count and
record pointer.

## Observed update

The function returns without changing this path unless receiver byte `+0x2E5`
equals 5; it then sets that byte to 4. Counts from 1 through 5 drive a loop
over 0x54-byte records. For each record it toggles bit 0 on two
receiver-referenced objects and copies a bounded string from record `+0x0C`
into object-associated 0x80-byte buffers. It compares each record's dword at
`+4` with global `0x58A0B4A4` and retains the matching index. A count above 5
branches past this record-copy loop. For counts below 5, the remaining entries
have bit 0 cleared and their corresponding string slots receive the string
pointer at `0x5898C922`.

When global `0x58A0B4A8` equals 3, the function sets observed flags and fields
on receiver child objects, then calls `FUN_58903360` and `FUN_5875D890` with
the computed selection pointer. Otherwise it clears observed state bits and a
child field. These are instruction-level effects; the fields and selected
objects are not semantically named.

## Uncertainties

The message payload schema, the identities and roles of the two object arrays,
the compared dword, the meaning of mode value 3, the selection pointer's
purpose, and the UI or protocol effect remain unknown. The original extent
required correction because it cut through an instruction operand and omitted
the epilogue. No emulator test was performed.

## Sibling selected-list update

The sibling helper `FUN_588343B0` is also reached from message case
`0x80020F12`, when the selected child at receiver path `+0x160` has mode bits
2. It accepts a count and record pointer and updates only when receiver byte
`+0x321` equals 5, then resets that byte to zero. For counts 1–5, it walks
0x54-byte records, sets bit 0 on two paired objects, copies each record's
`+0x0C` string into an associated buffer (up to 0x80 bytes), and sets the
paired child `+0x50` according to whether global word `0x58A0B4A8` equals 6.
When fewer than five records are supplied, it clears remaining object flags,
fills remaining buffers from `0x5898C922`, and clears those child fields.

The indexed extent had stopped at `0x5883450E`, in the middle of the final
string-copy instruction. The original stream continues through register
restores and `ret 8` at `0x58834515`, ending at `0x58834518`; eight `INT3` bytes
separate it from the next function at `0x58834520`. The corrected complete
360-byte body matches with six mapped operands. The record schema, object and
buffer roles, mode meaning, and visible effect remain unresolved; no emulator
test was performed.
