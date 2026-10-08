# Current Main LeaveTab subsystem

This slice closes the RTTI-identified CPannelCommunicatorConfigLeaveTab
primary vtable in the installed Main.dll capture. It is a byte-match result,
not a claim that the tab has been behaviorally recreated or tested in the
emulator.

## Original-code evidence

Two independent fresh Ghidra projects (58758EE0-FRESH and 587CEF70-FRESH)
agree on the function bodies, instruction counts, transfers, and data
references recorded in
[the body exports](../config/NF2_2026/current-main-leave-tab-body-exports.tsv)
and
[the call-edge exports](../config/NF2_2026/current-main-leave-tab-call-edges.tsv).
The complete-object locator at 0x589A8460 points to the type descriptor at
0x589CC668, whose decorated name is
.?AVCPannelCommunicatorConfigLeaveTab@@. The primary vtable address point is
0x5899E184.

| Vtable slot | Original function | Status |
| --- | --- | --- |
| +0x00 | FUN_588336D0 | Matched in this slice |
| +0x04 | FUN_588337A0 | Matched in this slice |
| +0x08 | FUN_58833640 | Matched in this slice |
| +0x0C | FUN_588336F0 | Previously matched |
| +0x10 | FUN_5873B360 | Previously matched |
| +0x14 | FUN_58902FE0 | Previously matched |
| +0x18 | FUN_58833680 | Matched in this slice |

The matched constructor FUN_58833980 writes the address point 0x5899E184 in
the instruction beginning at 0x588339ED (the immediate starts at 0x588339EF);
its byte-matched parent FUN_58843380 calls it at 0x5884421D and stores the
returned child at parent offset +0x158. This ties the RTTI table to the
constructed child.

The four open slots reach exactly seven functions: 58753E80, 587B9320,
58833550, 58833640, 58833680, 588336D0, and 588337A0. The two fresh exports
agree on 8 body ranges, 750 bytes, 241 instructions, 22 direct transfers,
and four data references to the open vtable entries. The transfers consist of
21 calls and one tail jump. Three transfers stay inside the closure; the
other 19 target ten functions already marked as byte-identical. The mapped
image verifier independently decodes those exact ranges and compares every
direct transfer and vtable reference.

## Observed behavior

Ghidra pseudocode for FUN_58833680 handles event value 2. A control pointer
matching receiver field +0x7C calls FUN_587B9320; one matching +0x80 invokes a
virtual method through the object at +0x30, passing 62000 (0xF230) and zero.
FUN_587B9320 forwards message identifier 0x80010F0B and the globals at
0x58A0B4A0 and 0x58A0B4A4 to FUN_58970C70.

FUN_58833640 changes receiver state bits from 0x0200 to 0x0400 under mask
0x1F00, then clears bit 1. FUN_588337A0 runs when the same mask equals
0x0500, rewrites those state bits, calls FUN_58731CE0 four times with one
address, and conditionally processes the two globals through the observed
helpers. The deleting destructor FUN_588336D0 calls cleanup FUN_58833550,
then tail-jumps to matched FUN_5897CC42 when the deleting flag's low bit is
set. The cleanup body destroys non-null child pointers at offsets +0x64
through +0x80, clears them, and calls FUN_58902C10.

The small helper FUN_58753E80 forwards two DWORDs to FUN_58753980; the
constructor calls it at 0x5883389E. These statements describe the decompiled
operations, not inferred UI labels.

## Validation and remaining uncertainty

All seven emitted instruction-stream candidates passed ObjDiff 3.8.0 against
the mapped current Main.dll: 750/750 bytes matched. The subsystem verifier
checks RTTI, all seven vtable slots, constructor installation and parent
call, both fresh Ghidra exports, complete mapped instruction decoding,
transfer/data boundaries, source hashes, and pinned compiler provenance.

The framework meanings of the state values and virtual slot +0x04, the
control identities, message text, global field meanings, indirect callback
targets, and server-authoritative effects remain unknown. This slice has not
been run in the emulator, so it makes no claim about runtime visuals or
playability.
