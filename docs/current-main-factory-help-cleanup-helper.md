# Current Main `CPannelFactoryHelp` cleanup helper

`FUN_58853230` is an 817-byte cleanup routine reached by the byte-matched
`FUN_588536A0`. The RTTI-backed `CPannelFactoryHelp` vtable at `0x5899E8E0`
points to that wrapper at slot `+0x38`. The wrapper calls this routine, then
conditionally releases its receiver when the supplied delete flag has bit 0
set, and returns the receiver. The vtable entry and wrapper are documented in
the [vtable coverage](current-main-factory-help-vtable.md) and
[epilogue notes](current-main-factory-help-epilogue-boundaries.md).

Both fresh Ghidra body exports agree on the complete body:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `0x58853230..0x5885346D` | 573 | 201 |
| `0x58853470..0x58853564` | 244 | 87 |
| Total | 817 | 288 |

The three bytes between the ranges are outside the function body. Ghidra's
decompilation writes `CPannelFireControl::vftable` to the receiver. It then
checks child-pointer fields and, for each nonnull pointer, calls the object's
first vtable entry with argument `1` before clearing that field. The routine
also walks repeated pointer groups and a 32-entry sequence. Its one direct
call, at `0x5885354B`, reaches the already byte-matched `FUN_58902C10`; the
child releases are indirect virtual calls. Ghidra's current project and two
fresh edge/body exports agree on the call at `0x588536A3` from the deleting
wrapper.

The source candidate emits the two Ghidra-bounded instruction ranges literally.
ObjDiff 3.8.0 verifies both ranges against the installed mapped `Main.dll`.
The tracked body and edge projections and the focused verifier compare the
candidate boundaries to both fresh Ghidra exports.

The child fields' identities and ownership rules, the relationship between
`CPannelFactoryHelp` and the installed `CPannelFireControl` vtable, and the
runtime targets of the virtual releases remain unresolved. No emulator teardown
or visual test was performed.

Run the focused checks with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-factory-help-cleanup-body-ranges.tsv
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58853230
rtk python tools/verify_current_main_factory_help_cleanup.py
```
