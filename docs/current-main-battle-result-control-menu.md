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
