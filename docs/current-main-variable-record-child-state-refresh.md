# Installed Main.dll variable-record child-state refresh

This subsystem contains `FUN_58813F10` and its direct helper
`FUN_58810540`, totaling 1,784 bytes. The matched `FUN_58807910` variable-record
update handler calls the root at `0x58807C11`. Within the selected functions,
all direct calls leaving the root reach the helper or already byte-matched
`FUN_58907360`; the helper has no direct calls or jumps.

## Original-code evidence

The root begins by calling `FUN_58810540` at `0x58813F19`, then makes seven
calls to matched `FUN_58907360`. It reads state and record data through globals
`0x58A247F8`, `0x58A24714`, and `0x58A245C4`, copies six DWORD fields into
child records, and branches on flag bits at receiver `+0xB4` to set or clear
bit 0 in ushort fields at child `+0x24`. Its two record loops use different
global table offsets for the observed mode-9 and other-mode paths, update child
record fields, and set additional child flags when a loop finds an active
record.

The helper sets bit 0 in ushort child fields at `+0x24` for a fixed group of
receiver child pointers, clears that bit across two indexed pointer groups,
then clears it on another fixed set of child pointers. It does not call any
other function in its complete 401-byte Ghidra body.

Ghidra's exact body ranges and mapped instruction-byte coverage checked by
`tools/verify_current_main_record_state_refresh.py` are:

| Entry | Exact body ranges | Bytes |
| --- | --- | ---: |
| `58813F10` | `58813F10+984`, `588142F0+399` | 1,383 |
| `58810540` | `58810540+401` | 401 |

ObjDiff 3.8.0 confirms all 1,784 bytes identical. The focused audit checks the
matched caller at `0x58807C11`, the open call at `0x58813F19`, exact Ghidra
ranges, complete instruction coverage, and 14 direct calls/jumps. No indirect
call or jump occurs in the selected bodies.

## Uncertainties and validation limits

The receiver and child types, meanings of the `+0xB4` bits, global record/table
layouts, and semantics of the mode-9 branch remain unresolved. The code
establishes conditional child-field updates, but the visible gameplay effect is
not proven. No original-client or emulator interaction test was run. The
generated source preserves the original instructions for byte matching; it is
not a semantic rewrite of the record formats or update routine.

Re-run the focused checks with:

```powershell
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58813F10 --only 58810540
rtk python tools/verify_current_main_record_state_refresh.py
```
