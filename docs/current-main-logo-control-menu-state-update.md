# Current `CLogoControlMenuScreen` state-update path

The installed 2026 `Main.dll` RTTI names `CLogoControlMenuScreen`; vtable
address point `0x58996BFC` has the method at slot `+0x0C`, address
`0x58791590`. Its direct-call closure adds 42 functions. Fresh Ghidra 12.1.3
body exports cover 4,756 instructions, 66 exact ranges, and 14,771 bytes. The
range manifest is
[`main-logo-control-menu-state-body-ranges.tsv`](../config/NF2_2026/main-logo-control-menu-state-body-ranges.tsv).

## Evidence from the mapped client

The root first requires receiver field `+0x24` bit 2, then dispatches on the
`+0x24 & 0x1F00` state value. The observed branches include `0x0100`, `0x0200`,
`0x0400`, `0x0700`, `0x0800`, `0x0D00`, and `0x0E00`. Several paths advance
receiver fields `+0x58` and `+0x28` with a per-update step capped at `0x24`.
Those numeric values and fields are recorded as observed; their source-level
names and intended design meanings are unknown.

In one `0x0200` subphase, the method allocates `0x600` bytes and passes the
object to the byte-matched `FUN_58756F80` `CCloudOpeningScreen` initializer. It
then registers the object, calls `FUN_58731590(11000)` and
`FUN_58758150(1)`, opens `NFCOSFO.RPT`, and makes a child virtual call. The
separate opening-screen note records that call path; the report's purpose is
not established. In the observed `0x0D00` path, the method checks `+0x4854`
against 100, opens `NFALRINT.RPT`, resets child state, and iterates children.
The `0x0E00` path releases two global objects through vtable slot `+8` and
calls a global function pointer. Common exit work calls `FUN_5878AB00` and
iterates the child list through virtual slot `+0x0C`.

The closure also contains RTTI-identified `CPannelHotKeysInfo` and
`CPannelNotice` initializers. Their bodies load `HOTKEYSINFOPNL.SPR` and
`NTCPNL.SPR`; related code parses `HKIN.sdt`, `Announcement.txt`, `Patch.txt`,
and `Eula.sdt`. The reached helpers include dynamic record containers with
observed `0x1C`- and `0x18`-byte strides. Those strides come from pointer
arithmetic and loop steps; source types and the records' complete semantics
have not been recovered.

The root's class identity is independently supported by the RTTI TypeDescriptor
at `0x589C2F40` and the vtable slot above. The already byte-matched constructor
`FUN_5878D6D0` installs the class vtable. The related matched method
`FUN_5878E2D0` is documented in
[`current-main-logo-control-menu-screen.md`](current-main-logo-control-menu-screen.md).
The constructor's sprite assets and rendered logo-frame evidence are described
in [`current-client-logo-screen.md`](current-client-logo-screen.md).

## Match and limits

All 43 emitted instruction streams pass ObjDiff 3.8.0 at 100% against the
captured mapped image. The root has two Ghidra ranges:
`[0x58791590, 0x587917F9)` and `[0x58791800, 0x58791DDF)`. The seven-byte gap
between them is not part of the function. The focused verifier confirms all
4,756 instructions decode without gaps, all 43 functions are reachable from
the root, and 304 direct calls leaving the closure target 56 already verified
functions. It also checks the RTTI name, vtable slot, and eight incoming open
call sites from seven functions. This is a rooted direct-call closure, not a
whole-program caller closure; virtual dispatch targets are not expanded.

The generated source preserves original x86 instruction streams in naked
assembly. This establishes byte identity for the mapped functions but does not
recover their original high-level C++ source. Numeric state meanings, many
object/global fields, report-file purposes, indirect calls, and in-emulator
visual behavior remain unverified. No emulator runtime test was performed.

Regenerate the candidates from the reviewed Ghidra ranges with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-logo-control-menu-state-body-ranges.tsv
rtk python tools/verify_current_main_logo_control_menu_state.py
```

The focused verifier is
[`verify_current_main_logo_control_menu_state.py`](../tools/verify_current_main_logo_control_menu_state.py).
