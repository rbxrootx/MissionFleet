# Current Main page-result control-menu cleanup

Ghidra assigns `FUN_588092F0` to `CPageResultOfBattle_ControlMenuScreen`. Its
byte-matched caller `FUN_58809890` occupies slot `+0x00` in the RTTI-backed
vtable at `0x5899D5F4`, whose TypeDescriptor names that class. The caller invokes
the cleanup body at `0x58809893`, then checks the low bit of its second
argument before calling the external callback thunk `FUN_5897CC42`. This is
consistent with a scalar-deleting-destructor wrapper; the thunk's runtime
deletion behavior remains unknown.

Fresh Ghidra assigns the cleanup body 1,107 bytes across two exact ranges. The
decoded instruction counts are 374 total:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `[0x588092F0, 0x5880947D)` | 397 | 132 |
| `[0x58809480, 0x58809746)` | 710 | 242 |

The body installs the class vtable on the receiver, saves exception-list
state, and walks many groups of child/object pointers and arrays. For each
non-null pointer it calls the pointed object's first virtual method (usually
with argument `1`) and clears the field. It then calls verified
`FUN_58902C10`, restores the saved exception-list pointer, and returns. Ghidra
records no other incoming callsite or direct outgoing call; indirect child
callbacks remain unresolved.

ObjDiff 3.8.0 verifies all 1,107 bytes at 100.0%. The
[focused verifier](../tools/verify_current_main_page_result_control_menu_cleanup.py)
checks the two ranges and instruction counts, the direct cleanup-helper call,
the matched vtable caller, and the original slot `+0x00` target. The emitted
instruction stream is
[`FUN_588092f0.cpp`](../src/client-current/Main/FUN_588092f0.cpp), and the
range manifest is
[`current-main-page-result-control-menu-cleanup-body-ranges.tsv`](../config/NF2_2026/current-main-page-result-control-menu-cleanup-body-ranges.tsv).

The roles and ownership rules for receiver fields, effects of the indirect
callbacks, the second value supplied to the first callback, and the contract
of `FUN_58902C10` remain unresolved. This is static byte-match evidence; no
client or emulator destruction test was performed. See the broader
[page-result control-menu reconstruction](current-main-battle-result-control-menu.md)
for the constructor, RTTI table, event/update methods, and result-row path.
