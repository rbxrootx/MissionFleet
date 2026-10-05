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
| `0x040000` | Checks the object's `+4/+8` coordinates against x/y values at `+0x50/+0x54` of the record pointer stored at `DAT_58A2459C+0x10524` (`<900` and `<700` absolute deltas), or checks whether the object is selected through `DAT_58A247F8+4`; on either path it calls `FUN_587E5A60(0x19)`. If `+0x60B4` is zero, it changes the phase to `0x080000` and returns. Otherwise `rand()%3` and `+0x164` gate the 32-pointer scan at `+0x17C`. Each non-null entry gets a `rand()&1` gate. A passing entry allocates `0x58` bytes, jitters its y then x coordinates by `10-rand()%20`, and calls `FUN_58907C80` on that allocation with resource record 18 and 16-bit value `(+0x42AC)+100`; it then calls `FUN_58902D20(candidate,0x102)`. The optional per-entry effect consumes another `rand()`, resolves a target for index 7..10, projects the screen position, and calls `FUN_587B7400`. If the last candidate exists and `+0x164` is zero, the post-scan path builds a second candidate from `+0x246F4` row `rand()&3`, then allocates a `0x68`-byte object from `+0x246F0` row 23 and calls `FUN_58789040`; it applies `FUN_58902D20` to both results and may call the effect and route helpers. The scan controller increments `+0x6058`; when that signed counter reaches 10 or becomes negative, it resets the counter and changes the phase to `0x080000`. |
| `0x080000` | Calls `FUN_588D9C40(0)`, derives `+0x6054` from `+0x605C / +0x6050` and subtracts 9 once when the quotient is above 8, then selects resource records and updates three child objects at `+0x60D8`, `+0x1470`, and `+0x178`. It calls `FUN_58902D20(0x101)`, clears observed bits in several child flags, and changes the phase to `0x100000`. |
| `0x100000` | Clears fields at `*(+0x6028)+0x9C` and `*(+0x23C)+0x34`, calls `FUN_587898D0` with the word at `+0x350`, and changes the phase to `0x200000`. |
| `0x200000` | Increments the frame counters at `*(+0x60D8)+0x50`, `*(+0x1470)+0x50`, and `*(+0x178)+0x50`. It then calls `FUN_588D65C0` with `(0x4F, 0x400000)` when the low five bits of the byte at `*(+0x100C)+4` equal 9 and the word at `+0x164` is nonzero; otherwise it passes `(0x31, 0x400000)`. |
| `0x400000` | Calls `FUN_587315F0(0)`, then `FUN_587F21E0(this, 1, 1)`, and ORs `0x00FF0000` into `+0x60B0`. |
| `0xFF0000` | If the DWORD at `DAT_58A2459C+0x21C34` is zero, the word at `DAT_58A2459C+0x105F0` equals 7, and this object's `+0x664C` is not 10000, writes `0x60000` to `+0x6090` and clears `+0x6648`. Other inputs fall through without a state-specific action. |

These are control-flow and data-flow observations from the Ghidra decompile,
not recovered game-design names. The thunk targets are now resolved from a
live `LoadLibrary` host for the installed client. In that process, Main's
callback slots at RVA `0x25C1F0` and `0x25C200` pointed into the loaded
WinSxS `MSVCR90.dll` version `9.0.30729.9635`: respectively export `rand` at
RVA `0x74F6D` and `operator new(unsigned int)` (`??2@YAPAXI@Z`) at RVA
`0x63E99`. The captured `rand` body matches the installed CRT bytes: it gets
the current thread's CRT state, updates the field at `+0x14` with
`holdrand = holdrand * 214013 + 2531011`, then returns `(holdrand >> 16) &
0x7FFF`. The C++ model includes that generator and leaves the seed with its
caller because the original state is per-thread and may be changed by
`srand()`; where this game seeds the thread state has not yet been traced. The
loaded runtime path was under WinSxS; the similarly named sibling file in
`D:\FleetMission` is a Windows CE CRT and is not the runtime module used by
this client.
The same `operator new` export calls `malloc`, runs the configured new-handler
path on failure, and throws if allocation still fails. The semantic harness
keeps allocation as a hook to record native request sizes and call order; its
null-allocation cases describe the observed conditional branches and are not
the normal failure behavior of that throwing CRT export.

The mapped helper bytes also identify `FUN_58907C80` as the constructor for
the allocated candidate: it calls `FUN_58734A30`, installs vtable
`0x589A2988`, and returns the object. `FUN_58902D20` writes its argument to
candidate offset `+0x2C` and recursively visits linked children whose flags
at `+0x24` include `0x8000`. The readable model follows the outer scan and
post-scan branches, MSVCR90 RNG, allocations, jitter, record selection,
projection arithmetic, counter transition, and observed helper arguments.
For the optional effect path, the mapped arithmetic is
`x = objectX - (((right-left)>>1)*1000)/scale - referenceX` and
`y = (((bottom-top)>>1)*1000)/scale - objectY + referenceY`, retaining the
x86 32-bit wrap, signed division, and arithmetic shift. Constructors, the
recursive helper, effect rendering, and route rendering remain hooks because
their full source object layouts or visible renderer behavior are not
recovered. The 32-entry array's semantic element type, meaning of the scene
modes, and player-visible effect names remain unknown. The `srand()` seed
source is also unresolved, so deterministic tests supply their own seed/RNG
callback. `FUN_588D65C0` receives `0x400000` as its second argument at both
call sites, but its contract is not established. The host did not run a game
frame, and no emulator/client visual test was performed.

The callback observation can be repeated by launching
[`load_module_host.ps1`](../tools/load_module_host.ps1) in the 32-bit Windows
PowerShell host, then passing its PID and reported Main base to
[`inspect_live_module_host.ps1`](../tools/inspect_live_module_host.ps1) while
the process remains alive. This only loads the DLL for address resolution; it
does not launch the game or exercise a rendered frame.

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
hooks with their observed receiver/arguments. This tail model does not claim
the earlier `0x040000` child/effect loop or `0x080000` indexed-resource setup.
The bounded handler table is supplied by the test harness, and invalid test
input fails closed where the original assumes valid memory. Run:

```powershell
rtk run python tools/verify_ship_map_visual_state_tail.py
```

The native tests cover all four modeled phases, wraparound, callback order and
arguments, and the terminal guard. The model is not included in objdiff totals
and has not been integrated into a complete client or exercised in the emulator.

## Resource-setup phase model

[`ShipMapVisualStateSetup.cpp`](../src/client-current/semantic/ShipMapVisualStateSetup.cpp)
models the `0x080000` phase from the instruction block at `0x588DBA7A` through
`0x588DBD7A`. It calls `FUN_588D9C40(this, 0)`, performs signed division of
`+0x605C` by `+0x6050`, and subtracts 9 once when the quotient is at least 9.
The quotient selects the `+0x6054` child frame value; the code does not use a
general modulo operation. The phase clears bit 0 on up to seven configured
nodes, selects either three consecutive `0x40`-byte records or the indexed
record at `(word(+0x100C+0x0A) & 7) + 1`, then copies the six DWORDs at record
offsets `0x18..0x2C` into child offsets `0x0C..0x20`. On the indexed branch,
the `+0x60D8` and `+0x1470` frame values are the quotient times `0x32`; the
`+0x178` child is left untouched. Missing records clear the observed record
pointer but leave the six copied fields as they were, matching the instruction
path's conditional copies.

The model then preserves the two observed callback boundaries for
`FUN_58902D20(this+0x60FC, 0x101)` and clears only the observed low flag bits.
Finally it zeros `+0x603C/+0x6040` and selects phase `0x100000` using the
observed `AND 0xFF10FFFF / OR 0x00100000` sequence. Resource-list and child
field names remain offset-based; the two helper contracts and the actual game
meaning of each record field remain unknown. Inputs that would trap the native
signed divide are reported as `InvalidSignedDivision`; valid client divisors
are assumed for normal-path equivalence.

Run `rtk run python tools/verify_ship_map_visual_state_setup.py` for native
tests covering both resource branches, signed quotient behavior, one-time
subtraction, callback order, copied fields, untouched fields, and flag masks.
The `0x040000` child/effect phase has a tested readable model in
[`ShipMapVisualStateChildScan.cpp`](../src/client-current/semantic/ShipMapVisualStateChildScan.cpp).
It uses the resolved MSVCR90 `rand()` sequence and the observed
`operator new` call target to model the scan throttle, per-entry gate,
allocation request sizes and call order, jitter, projection, record selection,
and post-scan object sequence. The allocator itself remains a hook; candidate
constructors, the recursive state helper, and the two rendering helpers remain
hooks where source object layouts or renderer behavior need further recovery.
Run
`rtk run python tools/verify_ship_map_visual_state_child_scan.py` for the native
tests. All semantic models remain test harnesses and are not linked into a full
client or tested on the emulator.
