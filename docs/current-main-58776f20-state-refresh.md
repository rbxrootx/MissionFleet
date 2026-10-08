# Current Main.dll nested-range state refresh

`FUN_58776F20` scans receiver-held DWORD ranges. It finds an outer record whose
byte at `+0x4` matches the supplied object's byte at `+0x354`, then walks
nested ranges. When the indirect comparison through `0x5898C1A4` returns zero
for the observed values at `+0x6C`, it calls `FUN_58737080` on the selected
nested entry. The helper checks the entry's short at `+0xF0`: when it is not 4,
the helper clears the entry's `+0x1C` pointer and writes 2 to the related
object's `+0x11C`; otherwise it scans the linked list rooted at
`0x58A247F8+0x0C`, checks matching candidates through byte-matched
`FUN_588D66E0`, and stores the candidate with the greatest observed value at
`[candidate+0x100C]+0x60`.

This is an exact two-function closure: the root is 690 bytes and 218
instructions, and the helper is 111 bytes and 41 instructions. The tracked
[body ranges](../config/NF2_2026/main-58776f20-body-ranges.tsv), independent
inventory and targeted Ghidra [body exports](../config/NF2_2026/main-58776f20-body-exports.tsv),
and independent inventory and fresh Ghidra [call edges](../config/NF2_2026/main-58776f20-call-edges.tsv)
agree. The root has 31 direct calls to matched `FUN_5897CC72` and one internal
call to the helper; the helper calls matched `FUN_588D66E0`. ObjDiff verifies
both reconstructed instruction streams at 100%.

Byte-matched `FUN_588DF450` calls the root at `0x588DF69B` only after testing
bit 0 of `[0x58A2459C+0x105A8]` and requiring `[receiver+0x6070] == 0`. The
call loads ECX from `[0x58A2459C]+0x21C48` and pushes ESI. Its source and the
mapped bytes preserve this gate and call exactly. The indexed byte-matched
caller extent is 595 bytes; fresh Ghidra reports 589 instruction bytes in two
ranges, with a six-byte gap. The call site falls inside the second range and
inside the matched indexed extent; the two extent measures are recorded
separately rather than treated as equivalent.

The collection and record schemas, ownership, compared-byte meanings, the
callback contract at `0x5898C1A4`, and the significance of short value 4,
stored state 2, and the `+0x60` value remain unresolved. The indirect callback
destination is not recovered. The original byte stream does not identify
domain-level names for these fields. No emulator runtime test was performed.
The focused evidence check is
[`verify_current_main_58776f20_state_refresh.py`](../tools/verify_current_main_58776f20_state_refresh.py).
