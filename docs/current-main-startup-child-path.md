# Current Main startup child path

This pass follows the startup child constructed by `FUN_5888BA30`. Four
functions add 167 exact bytes: the 149-byte helper `FUN_5888B990` and three
six-byte import trampolines. ObjDiff 3.8.0 reports 100% for every function and
checks all ten mapped operand targets across the batch.

`FUN_5888BA30` calls `FUN_5888B990` at `0x5888BDB3`. The helper reads the
receiver field at `+0x80`, calls the setup routine `FUN_5875F940`, and stores
values at `+0x8C` and `+0x94`. Its other calls reach trampolines at
`0x5897CE4A`, `0x5897CE56`, and `0x5897CE3E`. Their exact instructions jump
through import pointer slots `0x5898C258`, `0x5898C260`, and `0x5898C250`,
respectively. The depth-two direct-call audit finds every inventory-backed
callee matched.

The receiver's class, the meaning of its fields, the child's role, and the
three import targets' API contracts remain unresolved. The match establishes
machine-code identity and closes the indexed direct-call branch; it does not
establish that the startup sequence runs correctly in the emulator. No runtime
or visual test was performed in this pass.
