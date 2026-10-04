# Current Main.dll nested-state transition

`FUN_587CC700` is a 66-byte state helper in the hash-pinned mapped installed
client `Main.dll`. It is directly called by verified functions
`0x587EFD60`, `0x587FAEC0`, and `0x587FD890`; the last has two callsites. Its
complete extent matches at 100% under objdiff, with both mapped operand targets
checked.

The function reads the nested object at receiver `+0x24`. If that object's
byte `+0x74` is already 1, it returns. For argument 1 or 2, it calls
`0x587C9F30(nestedObject, 1, 0)`, then writes 2 or 1 respectively to the
nested object's byte `+0x75`. Other argument values return without changes.
The function returns with `ret 4`. All observed callsites pass 2, so their
executed branch writes 1 to `+0x75` after the helper call, unless `+0x74` is
already 1.

The two byte fields, helper mode, and user-visible state remain unidentified.
Caller evidence confirms the common argument and branch but does not assign a
semantic label to the state transition.
