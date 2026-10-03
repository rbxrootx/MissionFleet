# Current Main control-menu vtable entry boundary

`FUN_587da7d0` is the first entry in the `CPageFactory_ControlMenuScreen`
vtable at `0x5899B824`. The generated inventory previously recorded 27 bytes,
ending after `pop esi`. The captured code then executes `ret 4` at
`0x587DA7EB`; two `int3` alignment bytes follow before the next vtable method
at `0x587DA7F0`.

The complete body is therefore 30 bytes. It calls `FUN_587d7000`, conditionally
calls `0x5897CC42` when the stack flag bit 0 is set, returns the receiver in
`eax`, and performs the stack cleanup. ObjDiff 3.8.0 matches all 30 bytes and
checks two mapped operands. The helper and flag meanings remain unknown.
