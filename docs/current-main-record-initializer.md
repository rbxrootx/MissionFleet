# Current Main record-initialization path

The matched `FUN_5884F210` initializes an indexed object and then runs a
follow-up setup routine. Two newly matched functions add 307 exact bytes.
ObjDiff 3.8.0 reports 100% for both and checks all 14 mapped operand targets.
A depth-three call-graph audit from `FUN_5884F210` finds no unmatched
inventory-backed direct callee.

`FUN_5875F650` sets vtable pointer `0x5898DBAC`, clears fields `+0x18/+0x1C`,
copies five arguments into receiver fields `+4/+8/+0xC/+0x10/+0x14`, and
returns with `ret 0x14`. The parent stores the result in its indexed array at
`+0x1D0 + index*4`. When that entry is non-null, it calls `FUN_5875F6B0`.

`FUN_5875F6B0` has an SEH frame, calls helpers `FUN_58902B60`, `FUN_58902030`,
`FUN_58902090`, and `FUN_589023B0`, reads callback pointers from `0x5898C198`
and `0x5898C1A4`, uses string pointer `0x5898D0D4`, and updates fields
`+0x18/+0x1C`. The callback API and field meanings are unresolved, so the notes
record observed control flow without assigning higher-level semantics. No
runtime execution or visual result was tested.
