# Current Main.dll EnableChildEvent helper

`FUN_587A88A0` is a 709-byte, 214-instruction function from the installed
2026 `Main.dll`. Its reconstructed instruction stream matches the mapped image
at ObjDiff 3.8.0 100%, including all 49 relocation checks. The complete Ghidra
body range is `0x587A88A0..0x587A8B64`; the separate targeted decompilation
reports 214 instructions covering all 709 bytes and agrees with the
independent Main function-body inventory.

The matched `FUN_587A90D0` dispatcher calls it at `0x587A9136`. The caller
first checks whether its event pointer is null and, if so, invokes the
`p_Event && "DoAction"` assertion helper. It then calls `FUN_587A88A0` and
switches on the event field at `+0x74`. The null check does not gate the helper
call in the observed code.

Inside the helper, the assertion text is
`p_Event && "EnableChildEvent"` at `MissionEventManager.cpp` line `0x541`.
When the observed byte at event `+0x0A` is zero, a conditional pass through
related entries can set their bytes at `+0x9C` to `3`; the event byte at
`+0x27` is then set to `3`, and the function returns `1`. On the other branch,
the helper marks one or more entries at `+0x9C` as `1`, may mark related
entries as `3`, sets the event byte at `+0x27` to `2`, and returns `1`.

All 28 direct calls have a closed matched boundary: one to `FUN_5897CECE`,
25 to `FUN_5897CC72`, one to `FUN_58834B00`, and one to `FUN_587A5080`. The
25 repeated `FUN_5897CC72` calls are associated with iterator and bounds
checks in the Ghidra body.

The assertion string supplies the routine name, but the event/container
schemas, field types, meanings of values `1`, `2`, and `3`, and the caller's
wider state contract are unresolved. The work validates the original bytes and
static call behavior; it has not been exercised in the live client or emulator.

The focused verifier is
[`tools/verify_current_main_enable_child_event.py`](../tools/verify_current_main_enable_child_event.py).
