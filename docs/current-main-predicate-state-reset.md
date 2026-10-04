# Current Main.dll predicate-linked state reset

`FUN_588DD310` is a 95-byte state-reset routine in the hash-pinned mapped
installed-client `Main.dll`. It is called by verified functions
`0x58856560`, `0x588E4260`, and `0x588E5150`; each calls it only after
`FUN_588DD2A0` returns 1. Its full extent matches at 100% under objdiff, with
all seven mapped operand targets checked.

The routine has no explicit stack arguments. It first compares the receiver
with the active pointer at `0x58A247F8+4`. If they match and the object at
`0x58A245C4` has field `+0x2CC == 0x40000000`, it clears that field, calls
`0x58853570(global, 0)`, then calls `0x587A6190(object, 0)` on the object at
`0x58A2459C+0x20C9C`. Independently, if receiver field `+0x6094` equals
`0x40000000`, it calls `0x588D8100(receiver, 0)`. That helper clears
`+0x6094` and writes zero to fields `+0x110` and `+0x114` on the associated
children.

The meaning of state value `0x40000000`, ownership of the global objects, and
user-visible effect of the reset remain unknown. Call order connects this
routine to the preceding encoded-field predicate, but does not identify the
gameplay state by name.
