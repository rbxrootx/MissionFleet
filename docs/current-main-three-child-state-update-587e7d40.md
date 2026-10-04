# Current Main.dll three-child state update

`FUN_587E7D40` is called with its receiver in ECX from both
`FUN_587E8A40` and `FUN_587FD890`. It checks the receiver's word at `+0x105A2`
against 7. In the other mode it writes `0x100` and `0x40000000` to `+0x7C`
and `+0x74` on child pointers at receiver `+0x10C00` and `+0x10C04`, then
invokes each child's vtable slot `+4`. It clears receiver DWORDs `+0x218E4`
and `+0x218E8`. Mode 7 sets low flag bits `0xF` on the third child's word
`+0x24`; the other mode clears mask `0xF` from all three child words there.
Both modes end by dispatching `0x80020600` through global object
`0x58A24588` with five zero arguments.

The exact child classes, mode meaning, flag meaning, virtual-call contract,
and message meaning are not established by the available static evidence.
The call sites support setup/update use, not a higher-level interpretation.

The complete 183-byte function matches mapped `Main.dll` with objdiff 3.8.0;
both mapped operand targets were checked. This verifies generated object-code
bytes only. No runtime client or emulator test was run.
