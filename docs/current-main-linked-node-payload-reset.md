# Current Main.dll linked-node payload reset

The verified eight-slot cleanup routine `FUN_588DE5C0` visits each node in
its first pass and passes the node's `+0xC` payload pointer in `ECX` to
`FUN_5873A370`. The 31-byte callee writes three DWORD fields in order:
payload `+0x470 = 0`, `+0x4C8 = 5`, and `+0x31C = 3`. It then returns.

The [ordinary C++ reconstruction](../src/client-current/Main/FUN_5873a370.cpp)
recompiles to all 31 original bytes under the pinned compiler, with no mapped
operand targets. This resolves the earlier ambiguity: the first cleanup pass
resets payload fields; it does not visibly release those payload objects.

The payload type and meanings of the three values remain unknown. The callee
does not check for a null receiver, so its caller must supply a valid payload
pointer. That precondition has not been established for all runtime states.
No runtime client test was performed.
