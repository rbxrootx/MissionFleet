# Current Main `CWarehouseTradePanel` child path

This pass follows the matched `CWarehouseTradePanel` constructor
`FUN_58900400`. Seven newly matched functions add 3,468 exact bytes; ObjDiff
3.8.0 verifies every byte and checks 149 mapped operand targets. The reusable
call-graph audit reports no unmatched inventory-backed direct-call edges from
the panel constructor through depth three.

The constructor calls child initializer `FUN_587C9340` twice and geometry
helper `FUN_587C9780` twice. `FUN_587C9340` installs observed vtable address
point `0x5899AFE4`, branches on values `0xC`, `0xD`, and `0x2C`, and reaches
nested initializer `FUN_587C8960`, which installs `0x5899AFC4` and loads child
sprite data through `FUN_588F3D70`. The geometry helper delegates to verified
`FUN_58903290`. `FUN_58907360` and `FUN_587C9A20` forward state to matched
helpers `FUN_58907040` and `FUN_58907100` respectively.

The same constructor graph includes the compiler security-cookie failure
path. Its matched `___report_gsfailure` handler records status `0xC0000409`
and reaches the six-byte import thunk `FUN_5897DA9C`; the imported host API
remains unidentified.

The child classes' RTTI names, sprites and resource records, mode meanings,
control roles, layout units, and import API identity remain unresolved. The
call-graph audit covers direct calls to functions present in the inventory;
indirect virtual dispatch and runtime screen behavior were not exercised.
