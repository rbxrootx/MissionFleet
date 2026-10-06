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
| `+0x00` | `FUN_58809890` | unmatched |
| `+0x04` | `FUN_5880C1B0` | unmatched |
| `+0x08` | `FUN_5880C4E0` | unmatched |
| `+0x0C` | `FUN_5880FC50` | byte-identical |
| `+0x10` | `FUN_5880C0B0` | byte-identical |
| `+0x14` | `FUN_5880AF30` | already byte-identical |
| `+0x18` | `FUN_5880F950` | byte-identical |
| `+0x1C` | `FUN_5880B450` | unmatched |

Ghidra's original method bodies show `FUN_5880FC50` testing receiver flag bit
`0x04`, gating on state bits in `[this+0x24] & 0x1F00`, and taking child-screen
update branches. `FUN_5880C0B0` tests flag bit `0x02`, walks the child list from
`[this+0x3C]` through links at child `+0x34`, calls the child's virtual slot
`+0x10`, and reaches update helpers `FUN_5880A940` and `FUN_5880AF90`.
`FUN_5880F950` handles its observed selector-2 branch, compares the supplied
value with `[this+0x42C]`, and dispatches child-control helpers. The precise
meanings of the states, fields, and controls have not been established.

The matched global initializer `FUN_5878AF40` calls constructor
`FUN_5880DD80` at `0x5878C75A`; the constructor writes this table pointer at
`0x5880DDE8`. No direct `E8` call sites were identified for the three new
methods, so their dispatch evidence is the RTTI-backed table. ObjDiff verifies
all 2,040 method bytes and checks 90 mapped operands at 100.0%. No emulator
runtime or visual test has been performed.
