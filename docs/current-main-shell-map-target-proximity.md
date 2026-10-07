# Current Main shell-map target-proximity processing

The root `FUN_58787B70` is called at `0x588D5C23` and `0x588D5F35` by the
byte-matched `FUN_588D4300`. Its mapped vtable and RTTI identify that caller as
a `CShell_MapObjectScreen` update method; the caller evidence is recorded in
[`client-verifications.json`](../config/NF2_2026/client-verifications.json).
The root directly calls `FUN_587870B0` at `0x58787F99`. The focused verifier
checks that exact closure and both incoming caller sites against the mapped
image.

## Behavior observed in the mapped code

Fresh Ghidra 12.1.3 output gives `FUN_587870B0` one exact body range at
`0x587870B0..0x587871B7` (264 bytes) and `FUN_58787B70` one at
`0x58787B70..0x5878801D` (1,198 bytes). The root returns unless its second
argument differs from 1 and the byte at receiver `+0x88C` is nonzero. It then
walks that many entries through pointers rooted at receiver `+0x910`; the
paired coordinates are read from `+0x890/+0x894` and advanced by eight bytes
per entry. Entries whose DWORD at `+0xB8` equals the supplied object's byte at
`+0x354` are skipped. For remaining entries, it computes squared distance
from the paired coordinates to the supplied coordinates and branches on the
entry DWORD at `+0xC8`.

For observed entry states 0 and 5, the routine has branches below 600 and
through `0xB9A3`; those paths call update helpers and may allocate a `0x11C`
byte object before calling `FUN_5875ADB0` with observed mode 10. Other states
use a below-600 branch, a below-10,000 branch that calls `FUN_5876BF80` with
observed value 100, and a farther-distance path through `FUN_58780640`. The
state-0/5 path calls `FUN_587870B0` when the compared identity still differs.
When an entry identity matches the local object's byte at `+0x354`, the root
sets entry byte `+0xCE` to 1.

`FUN_587870B0` combines the supplied record's DWORD at `+8` with the packed
DWORD at the supplied object's `+0x1264` using XOR `0xAAAAAAAA`. It passes
selectors 0 and 2, with values derived from that record field, to matched
`FUN_588DCDD0`; adds the field value to a global counter indexed by the
object's byte at `+0x354`; and updates additional `+100`-derived counters in
observed local-object and matching-identity branches. In the latter branch it
increments receiver `+0x91C` and caps it at receiver `+0x918`.

The two-function closure is 1,462 bytes across two exact Ghidra ranges. Both
emitted instruction streams are byte-identical under ObjDiff 3.8.0 at 100.0%.
The mapped-code verifier confirms the exact direct-call closure, its one
in-closure call, 31 calls to already matched functions, no unmatched mapped
direct calls, and both calls from the matched screen update method. Exact
ranges are in
[`main-shell-map-target-proximity-body-ranges.tsv`](../config/NF2_2026/main-shell-map-target-proximity-body-ranges.tsv);
the focused check is
[`verify_current_main_shell_map_target_proximity.py`](../tools/verify_current_main_shell_map_target_proximity.py).

The entry and coordinate record types, meanings of fields `+0xB8`, `+0xC8`,
and `+0xCE`, coordinate units, packed encoding, counter units, selectors 0 and
2, and the visual or gameplay effects remain unresolved. These are static
observations from the mapped original; no client or emulator runtime test was
performed.
