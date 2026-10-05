# Current Main slot-state projection

`FUN_588e8570` is a 3,294-byte `__fastcall` function in the locally captured
current-client `Main.dll`. Ghidra reports two body ranges:

| Range | Bytes |
| --- | ---: |
| `0x588E8570..0x588E85B5` | 70 |
| `0x588E85C0..0x588E9257` | 3,224 |

The ten bytes from `0x588E85B6` through `0x588E85BF` are outside the reported
function body. The source generator emits only those two ranges. ObjDiff 3.8.0
matches all 3,294 bytes and checks 47 mapped operand targets.

Ghidra shows that the function clears a 0x400-byte region beginning at receiver
offset `+0x11C`, then processes 32 pointers from the table at `+0x9A4`. For
each non-null pointer, it writes a 0x20-byte slot, copies and decodes fields,
branches on record status bits, and scales six slot words by 9/10 or 11/10
according to a record flag. These are observed offsets, loop bounds, and
operations; the record schema and field meanings are not established.

Ghidra records 18 direct call references across 15 callers. Those include
`FUN_587df580`, the selector-driven control refresh, and repeated calls from
`FUN_5877c660` and `FUN_588f43f0`. The other callers and the receiver's owning
class have not been identified. No emulator runtime test was performed.

The verified state transitions and call paths of `FUN_5877c660` are recorded in
[the 32-slot child-update evidence](current-main-32-slot-child-update-helper.md).
