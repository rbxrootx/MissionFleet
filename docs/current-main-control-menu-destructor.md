# Current Main `CPageFactory_ControlMenuScreen` cleanup closure

The installed `Main.dll` has a matched `CPageFactory_ControlMenuScreen` vtable
at `0x5899B824`. Its slot `+0x00` points to the already matched
`FUN_587DA7D0` wrapper, which calls `FUN_587D7000` at `0x587DA7D3`. The
constructor `FUN_587DBA00` installs this vtable. Fresh Ghidra exports and the
captured pointer establish the path from the class vtable to this cleanup body;
the focused verifier checks the slot value and callsite against the pinned
image.

`FUN_587D7000` matches all 1,230 bytes in
`0x587D7000..0x587D74CE` (422 instructions). It restores the object's vtable
pointer, checks a sequence of receiver pointer fields, and for each non-null
field calls the pointed object's first virtual method with argument `1` before
clearing the field. It then calls `FUN_587D6740` at `0x587D70DB`, handles more
individual fields, calls matched `FUN_58902C10` at `0x587D74B5`, and restores
the saved exception list. These statements describe the observed instructions;
the pointed-to objects' types and the virtual method's contract are not
established.

The 238-byte helper `FUN_587D6740` matches all 88 instructions in
`0x587D6740..0x587D682E`. It visits 32 entries in each of six pointer arrays
whose receiver-relative starts are `+0x0C0`, `+0x140`, `+0x1C0`, `+0x240`,
`+0x2C0`, and `+0x504`. For every non-null entry it makes the same first-slot
virtual call with argument `1`, then clears that entry. After the loop it
applies the same callback-and-clear sequence to fields `+0x584`, `+0x340`, and
`+0x344`.

ObjDiff 3.8.0 verifies both functions at 100% with their complete mapped body
ranges. The reproducible evidence check is
[`verify_current_main_control_menu_destructor.py`](../tools/verify_current_main_control_menu_destructor.py);
it checks the fresh Ghidra ranges and instruction counts, both direct calls,
the matched wrapper callsite, and the vtable slot. The wrapper is independently
matched and documented in the [slot `+0x00` boundary note](current-main-control-menu-epilogue-boundary.md).

The child array element types, ownership and aliasing, virtual callback
contract, reason for the 32-entry loops, and relationship of these fields to
rendered controls remain unknown. No emulator runtime test was performed.
