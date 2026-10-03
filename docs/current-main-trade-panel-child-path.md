# Current Main `CPannelTrade` child path

This pass follows unmatched constructor and child-tree calls from the
RTTI-identified `CPannelTrade` initializer `FUN_588B61E0`. Five functions add
3,582 byte-exact bytes; ObjDiff 3.8.0 verifies all five and checks 116 mapped
operand targets. The three-level call-graph audit reports no remaining
unmatched inventory-backed direct calls in this path.

The parent constructor calls `FUN_588BB6F0` and `FUN_588BD1C0` at sites passing
observed offsets `0x7D` and `0x82`. They initialize nested panels with vtable
address points `0x589A09D8` and `0x589A09F8`; both build repeated controls and
branch on resource IDs observed at child field `+0x164`. The same parent calls
the already matched `FUN_5886DDA0` child-tree initializer. That initializer
calls `FUN_587B62B0` and calls `FUN_5877E800` seven times. The latter constructs
another repeated child path through `FUN_588EB280`, which installs vtable
address point `0x589A14D0`.

These call sites ground the control-flow relationship in the original code,
but RTTI names for the nested classes, resource IDs, labels, field meanings,
and screen appearance remain unknown. The audit covers indexed direct-call
targets and does not resolve indirect virtual dispatch. No runtime screen or
trade-flow test was performed.
