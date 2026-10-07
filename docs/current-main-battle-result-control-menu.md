# Current Main battle-result control menu

`FUN_5880dd80` constructs the class identified by the Ghidra vtable symbols
`CMenuScreen` and `CPageResultOfBattle_ControlMenuScreen`. The already-matched
global UI initializer `FUN_5878af40` allocates `0x90C` bytes, calls this
constructor at `0x5878C75A` with arguments `(0, 100, -350, 0, 0, 0x40)`, stores
the returned pointer in `DAT_58A245A4`, and adjusts the control flags at
offset `+0x24`.

The constructor initializes inherited menu fields and creates numerous
`CSpriteDataScreen` children, plus objects returned by `FUN_58731c60`,
`FUN_5876d9c0`, `FUN_5876ddf0`, and `FUN_58733280`. It selects data-table
entries only when each table's item count reaches the accessed index and
computes child coordinates from the constructor's position arguments. For
example, two children use the `FUN_58731c60` helper with resource identifiers
`1000` and `0x3F2`. These observations establish construction and resource
selection; they do not establish the labels or interactive behavior of each
child.

The Ghidra body spans `5880DD80..5880EBB9` (3,642 bytes) and
`5880EBC0..5880F942` (3,459 bytes), totaling 7,101 bytes. The six intervening
bytes are not instructions or owned by a function. The unconditional jump at
`5880EBB8` targets `5880EBC0`. ObjDiff reports an exact match for all 7,101
bytes and checks 205 mapped operands.

The page-result's precise data schema, child-control labels and roles, and
runtime appearance remain unresolved. This match validates compiled code
against the captured installed `Main.dll`; it is not an emulator runtime test.

## Event and update methods

The RTTI-backed vtable address point is `0x5899D5F4`. Its preceding complete
object locator pointer is `0x589A7DD8`; that locator names TypeDescriptor
`0x589CC2E8`, whose string is
`.?AVCPageResultOfBattle_ControlMenuScreen@@`. The eight table entries are:

| Slot | Method | State |
| --- | --- | --- |
| `+0x00` | `FUN_58809890` | byte-identical |
| `+0x04` | `FUN_5880C1B0` | byte-identical |
| `+0x08` | `FUN_5880C4E0` | byte-identical |
| `+0x0C` | `FUN_5880FC50` | byte-identical |
| `+0x10` | `FUN_5880C0B0` | byte-identical |
| `+0x14` | `FUN_5880AF30` | already byte-identical |
| `+0x18` | `FUN_5880F950` | byte-identical |
| `+0x1C` | `FUN_5880B450` | byte-identical |

Ghidra's original method bodies show `FUN_5880FC50` testing receiver flag bit
`0x04`, gating on state bits in `[this+0x24] & 0x1F00`, and taking child-screen
update branches. `FUN_5880C0B0` tests flag bit `0x02`, walks the child list from
`[this+0x3C]` through links at child `+0x34`, calls the child's virtual slot
`+0x10`, and reaches update helpers `FUN_5880A940` and `FUN_5880AF90`.
`FUN_5880F950` handles its observed selector-2 branch, compares the supplied
value with `[this+0x42C]`, and dispatches child-control helpers. The precise
meanings of the states, fields, and controls have not been established.

Ghidra 12.1.3's read-only pass over the saved `Main.unpacked.dll` project
established the remaining vtable methods' bodies and references. It used the
saved project `var/current-main-ghidra/CurrentFleetMain` with
`DecompileSelected.java`, `DumpExactFunctionRanges.java`, and
`DumpFunctionRefs.java`; the pseudocode files, exact-range dump, and
range/reference log are under `var/current-main-next/` with the prefix
`page-result-four-methods` or the corresponding function address. Slot `+0x00`
targets `FUN_58809890`, a 27-byte body in two ranges
`[0x58809890,0x588098A5)` and `[0x588098A8,0x588098AE)`; the three-byte gap
belongs to neither range. The method calls `FUN_588092F0`, then conditionally
calls `FUN_5897CC42` when the second argument's low bit is set, otherwise
returning the receiver. This matches a scalar-deleting-destructor pattern, but
the callback's actual deletion behavior is unresolved.

Slot `+0x04` targets `FUN_5880C1B0` (815 bytes). It resets screen and child
flags, releases the active child at `+0x60`, chooses a result record using
`+0x84` and global result-table state, copies record fields into the child at
`+0x3FC`, and refreshes selection state. Slot `+0x08` targets
`FUN_5880C4E0` (551 bytes); it clears result and control fields beginning at
`+0x8E4`, resets screen transition state, calls UI/resource helpers, and
updates several children. Ghidra could not recover the final jump table at
`0x5880C705` and represented its indirect transfer as a call. Slot `+0x1C`
targets `FUN_5880B450` (649 bytes), which rebuilds selection state, marks
indexed children, branches between `FUN_58809AF0` and `FUN_5880B0D0` on a
global mode byte, and refreshes or releases the active child.

The matched global initializer `FUN_5878AF40` calls constructor
`FUN_5880DD80` at `0x5878C75A`; the constructor writes this table pointer at
`0x5880DDE8`. No direct `E8` call sites were identified for the three new
methods from the first pass or the four just matched methods; Ghidra records
only their respective data references from the vtable, so dispatch evidence
is the RTTI-backed table. ObjDiff verifies the four newly matched methods'
2,042 bytes and checks 113 mapped operands at 100.0%; the preceding three
event/update methods contribute another 2,040 exact bytes. The full vtable is
now matched. No emulator runtime or visual test has been performed.

## Result-row population path

The already-matched vtable methods enter a separate, byte-matched result-row
path. `FUN_5880B450` and `FUN_5880C1B0` call the row builder and shared control
reset; `FUN_5880F950` calls the two result-population branches and the row
window updater; `FUN_5880C0B0` also calls the row window updater. The direct
callsites and their expected targets are checked in
[`verify_current_battle_result_control_menu.py`](../tools/verify_current_battle_result_control_menu.py).

This batch covers 13 Ghidra functions and 7,203 bytes:

| Function | Body bytes | Ghidra body ranges (half-open) | Observed role |
| --- | ---: | --- | --- |
| `FUN_58809AF0` | 1,893 | `[58809AF0,58809B79)`, `[58809B80,5880A25C)` | Builds row values from the selected record and linked entries; updates row text and visibility. |
| `FUN_5880A260` | 1,740 | `[5880A260,5880A7DD)`, `[5880A7E0,5880A889)`, `[5880A890,5880A936)` | Clears and rebuilds the result controls, including repeated row children. |
| `FUN_5880B0D0` | 876 | `[5880B0D0,5880B365)`, `[5880B370,5880B447)` | Alternate result-row population path. |
| `FUN_5880A940` | 122 | `[5880A940,5880A9BA)` | Decrements and clamps the row-window index, then refreshes the visible interval. |
| `FUN_58870130` | 60 | `[58870130,5887016C)` | Sets and clears observed child-control state bits and fields. |
| `FUN_588C6510` | 405 | `[588C6510,588C6589)`, `[588C6590,588C65DA)`, `[588C65E0,588C662A)`, `[588C6630,588C667A)`, `[588C6680,588C66BE)` | Resets a result row and clears its associated text buffers and child fields. |
| `FUN_588C6AA0` | 1,183 | `[588C6AA0,588C6F3F)` | Constructs a `CResultRecord_Screen` row and its observed child controls. |
| `FUN_588C66C0` | 361 | `[588C66C0,588C6829)` | Stores row values and updates four child text buffers. |
| `FUN_588C6830` | 323 | `[588C6830,588C6939)`, `[588C6940,588C697A)` | Updates row visibility and child-control state for a supplied interval. |
| `FUN_588D6C40` | 68 | `[588D6C40,588D6C84)` | Reads one of two indexed fields from the result record with observed defaults. |
| `FUN_588EB2D0` | 15 | `[588EB2D0,588EB2DF)` | Clears four child fields. |
| `FUN_588C6470` | 151 | `[588C6470,588C6507)` | Propagates four values and state fields to associated child controls. |
| `FUN_5875F310` | 6 | `[5875F310,5875F316)` | Sets bit `0x04` in a child-control state word. |

The read-only Ghidra 12.1.3 audit used the saved
`var/current-main-ghidra/CurrentFleetMain` project and fully covered each
listed body with decoded instructions. The main row methods and shared
dependencies are recorded in the `page-result-helpers` and
`result-row-dependencies` audit logs and decompilations under
`var/current-main-next/`; the small row leaves are in the `result-row-leaves`
and `result-row-thunk` audit outputs. Ghidra reports one unreachable block at
`0x5880A13D` in `FUN_58809AF0`, but its two body ranges are instruction-complete.
The noncontiguous gaps shown above are outside each function body and are not
emitted as code.

ObjDiff 3.8.0 confirms all 13 functions at 100.0%, checking 205 relocation
operands. The verifier also checks 34 direct CALL/JMP edges from the matched
page methods through the row-population helpers; the final edge in
`FUN_588C6470` is a tail jump to `FUN_5875F310`. The shared construction, text,
and state helpers called by these functions are already byte-matched or
included in this batch, so this closes the direct row-population call path.
Field names, row-column meanings, control
identities, and the visual result remain unresolved; this is a binary match,
not an emulator screenshot test. The separate `FUN_5880AF90` event/state path
was audited but left out because it calls five additional unmatched control
helpers outside this row-population path.
