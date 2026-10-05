# Ship-map child visual state update at `0x588DB610`

`FUN_588DB610` is a 2,291-byte function in `Main.unpacked.dll`. Ghidra reports
one contiguous body from `0x588DB610` through `0x588DBF02`. Its direct caller is
`FUN_588E5150`, the byte-verified `CShip_MapObjectScreen` vtable update method.
That caller invokes this function at `0x588E604D` only when
`(this + 0x60B0) & 0xF0000000` equals `0x40000000`; it calls the separate
`FUN_588DBF10` immediately afterward. Within this function, a different mask,
`(this + 0x60B0) & 0x00FF0000`, selects the phase below. The masks describe two
parts of the same observed field; their exact type is unknown.

| Phase selected from `+0x60B0` | Observed operations and next phase |
| --- | --- |
| `0x040000` | Checks the object's `+4/+8` coordinates against x/y values at `+0x50/+0x54` of the record pointer stored at `DAT_58A2459C+0x10524` (`<900` and `<700` absolute deltas), or checks whether the object is selected through `DAT_58A247F8+4`; on either path it calls `FUN_587E5A60(0x19)`. If `+0x60B4` is zero, it changes the phase to `0x080000` and returns. Otherwise, when `+0x164` is zero and the indirect callback tests permit it, it may process 32 pointers starting at `+0x17C`, perform child/effect setup, and increment `+0x6058`. When that counter is outside `0..9`, it resets the counter and changes the phase to `0x080000`. |
| `0x080000` | Calls `FUN_588D9C40(0)`, derives `+0x6054` from `+0x605C / +0x6050` and subtracts 9 once when the quotient is above 8, then selects resource records and updates three child objects at `+0x60D8`, `+0x1470`, and `+0x178`. It calls `FUN_58902D20(0x101)`, clears observed bits in several child flags, and changes the phase to `0x100000`. |
| `0x100000` | Clears fields at `*(+0x6028)+0x9C` and `*(+0x23C)+0x34`, calls `FUN_587898D0` with the word at `+0x350`, and changes the phase to `0x200000`. |
| `0x200000` | Increments the frame counters at `*(+0x60D8)+0x50`, `*(+0x1470)+0x50`, and `*(+0x178)+0x50`. It then calls `FUN_588D65C0` with `(0x4F, 0x400000)` when the low five bits of the byte at `*(+0x100C)+4` equal 9 and the word at `+0x164` is nonzero; otherwise it passes `(0x31, 0x400000)`. |
| `0x400000` | Calls `FUN_587315F0(0)`, then `FUN_587F21E0(this, 1, 1)`, and ORs `0x00FF0000` into `+0x60B0`. |
| `0xFF0000` | If the DWORD at `DAT_58A2459C+0x21C34` is zero, the word at `DAT_58A2459C+0x105F0` equals 7, and this object's `+0x664C` is not 10000, writes `0x60000` to `+0x6090` and clears `+0x6648`. Other inputs fall through without a state-specific action. |

These are control-flow and data-flow observations from the Ghidra decompile,
not recovered game-design names. In particular, the `0x040000` path calls
indirect thunks at `0x5897CC36` and `0x5897CC4E` (their pointer slots are
`0x5898C1F0` and `0x5898C200`); this capture does not identify the targets.
The 32-entry array's element type, child resource record schema, meaning of
the scene modes, helper contracts, and player-visible effect names remain
unresolved. `FUN_588D65C0` receives `0x400000` as its second argument at both
call sites, but its contract is not established. No live client/emulator run
was performed.

The exact mapped body is an instruction-level candidate in
[`FUN_588db610.cpp`](../src/client-current/Main/FUN_588db610.cpp). Its comments
and evidence derive from the selected Ghidra function and the mapped image;
it preserves the original instruction bytes and is not a claim that the
original high-level C++ source has been recovered. ObjDiff 3.8.0 verifies all
2,291 bytes at 100.0%, with 68 operand targets checked. The candidate is
compiled by clang-cl 19.1.4, whose executable hash is pinned in the verification
inventory for this function. The bundled VC6 compiler could not launch on this
Windows host, so this result proves the candidate's byte match under the pinned
clang-cl path; it does not test a complete client link or emulator runtime.

## Readable tail-phase model

[`ShipMapVisualStateTail.cpp`](../src/client-current/semantic/ShipMapVisualStateTail.cpp)
ports the directly observed tail phases `0x100000`, `0x200000`, `0x400000`,
and `0xFF0000` into ordinary C++. It preserves the phase masks and call order:
the `0x100000` phase clears the two observed fields, dispatches the selected
global handler with the word at `+0x350`, and advances to `0x200000`; the tick
phase wraps three frame counters and chooses selector `0x4F` only when
`(+0x100C+4)&0x1F == 9` and `+0x164` is nonzero; the finish phase calls the
child reset and global finalizer before OR-ing `0x00FF0000`; the terminal phase
applies the three observed guards before writing `+0x6090` and clearing
`+0x6648`.

Direct calls whose implementations or game meaning remain open are exposed as
hooks with their observed receiver/arguments. This model intentionally does
not claim the `0x040000` child/effect loop or the `0x080000` indexed-resource
setup phase; those remain the next work in this function. The bounded handler
table is supplied by the test harness, and invalid test input fails closed
where the original assumes valid memory. Run:

```powershell
rtk run python tools/verify_ship_map_visual_state_tail.py
```

The native tests cover all four modeled phases, wraparound, callback order and
arguments, and the terminal guard. The model is not included in objdiff totals
and has not been integrated into a complete client or exercised in the emulator.
