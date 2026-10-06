# Current Main.dll matching-list formatter

`FUN_5888E450` is a 330-byte `__thiscall` in the installed Main.dll capture.
Ghidra assigns one contiguous range, `[0x5888E450,0x5888E59A)`, ending with
`ret 8` at `0x5888E597`.

Ghidra's references and an inventory-wide call scan agree on three call sites
from two byte-matched functions. `FUN_58806F60` calls it at `0x588071FC` and
`0x58807233`, loading ECX from `0x58A245C0` and passing the short ID at
`[ESI+0x350]` with a zero second argument. `FUN_587BB700` calls it at
`0x587BD4D5` with the same receiver, the short ID at `[EBP+8]`, and second
argument one.

The function allocates a `0x300`-byte local buffer and walks the list rooted at
`[0x58A247F8]+0x0C`, following each node's `+0x78` link and comparing its short
ID at `+0x350` to the first argument. A match produces `"%s (%s)    %s"` when
`[0x58A245A8]+0x204` is 7, otherwise `"%s (%s)"`. The strings come from
receiver offsets `+0x198` and `+0x298`, and the matched node's
`+0x12E8+0x6C`; the formatted result is passed to `FUN_588D28A0`.

When the second argument is one and the observed status is not 0, 1, or 3, the
function compares the requested ID with the active object's `+0x350` field. A
match resolves the localization token
`MESSAGESTRING__YOU_HAVE_BECAME_THE_NEW_HOST` through indirect slot
`0x5898C030`, then calls `FUN_5876BAF0(0x28,text)` and `FUN_58764D30`.

The source preserves the mapped instructions and objdiff verifies all 330
bytes. The object/list types, ID and status meanings, callback contracts, and
visible UI effects remain uncertain; “new host” follows from the localization
token and caller flag and has not been confirmed at runtime. No emulator test
has been performed.
