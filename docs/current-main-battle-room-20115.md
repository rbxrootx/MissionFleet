# Installed Main.dll battle-room `0x80020115` update closure

This subsystem adds eight byte-identical functions from the installed 2026
`Main.dll`: 3,847 bytes across thirteen exact Ghidra body ranges. Fresh Ghidra
12.1.3 headless output on the pinned mapped image supplied the decompilation,
function ranges, and references. ObjDiff 3.8.0 verifies every reconstructed
object body at 100%.

## Event route and observed behavior

The byte-matched dispatcher `FUN_587BB700` calls the root `FUN_587D0AA0` at
`0x587BCA99` inside its `0x80020115` case. The call follows a message-field
check at `+0x0A == 10`, global-state checks, and payload-dependent selection of
arguments. The dispatcher then continues through a separate handler. These
facts establish the original route; the packet structure and the particular
state represented by this branch remain unresolved.

The root stores four supplied values on its receiver, reads a selector and
walks eight bitmap words. For each word it checks five groups of five flags,
for 200 tested positions in total. Set flags can create a mode-specific
`CBattleRoomOnPage` object through `FUN_5874F8C0`, using an observed table and a
16-value offset table. With a nonzero optional record count, it copies and
scans records at stride `0xD4`; active entries update an observed grid marker,
create another page object, and pass record data to `FUN_5874BAC0`.

`FUN_5874F8C0` initializes the singleton
`battleroomfactory::CBattleRoomOnPageFactory` vtable and delegates to
`FUN_5874F1F0`. That function selects among mode-specific constructors using a
field at argument offset `+0x86`; the corresponding constructor family and
Ghidra vtable labels are recorded in
[`current-main-battle-room-page-constructors.md`](current-main-battle-room-page-constructors.md).
The remaining helpers copy 0x35-DWORD records, update or reset child-control
flags, invoke virtual methods, and append 12-byte nodes to a linked list.

| Function | Ghidra ranges | Bytes | Observed role |
| --- | --- | ---: | --- |
| `FUN_587D0AA0` | `587D0AA0–587D0C17`, `587D0C20–587D0D3A`, `587D0D40–587D0E33`, `587D0E36–587D0E40` | 910 | Event-driven bitmap and optional `0xD4`-stride record processing. |
| `FUN_5874F1F0` | `5874F1F0–5874F875` | 1,669 | Mode-to-constructor selection. |
| `FUN_5874BAC0` | `5874BAC0–5874BB3A`, `5874BB40–5874BB4F`, `5874BB50–5874BB92` | 203 | Copies record fields and updates child/control state. |
| `FUN_5874A840` | `5874A840–5874A9B0` | 368 | Synchronizes child flags and conditionally reads global state. |
| `FUN_5874B5A0` | `5874B5A0–5874B70D` | 365 | Clears record storage and resets child flags. |
| `FUN_5874F8C0` | `5874F8C0–5874F963` | 163 | Initializes the factory vtable and delegates mode creation. |
| `FUN_58789590` | `58789590–5878961D` | 141 | Appends an allocated 12-byte node to a list. |
| `FUN_58877AB0` | `58877AB0–58877ACC` | 28 | Copies 0x35 DWORDs when the source pointer is non-null. |

## Validation and uncertainty

All eight functions compile byte-for-byte against the installed mapped image.
The closure verifier checks the image hash, every exact range, complete
instruction decoding, reachability from `FUN_587D0AA0`, all nine internal
transfers, fifty transfers to byte-matched functions, and the incoming event
call at `0x587BCA99`. Run
`python tools/verify_current_main_battle_room_20115.py` to repeat those checks.

The event payload schema, bitmap and record meanings, member types, position
units, mode semantics beyond the constructor labels, virtual side effects, and
visible result remain uncertain. This work has no original-client runtime or
visual test and does not establish that the client boots.
