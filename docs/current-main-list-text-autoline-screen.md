# Current Main.dll CListTextAutoLineScreen lifecycle

The pinned installed `Main.mapped.bin` identifies the vtable at `0x589A1424`
through MSVC RTTI as `CListTextAutoLineScreen`. The already verified 77-byte
constructor `FUN_588EA0B0` stores that table into the receiver at
`0x588EA0F1`. Its first vtable slot points to `FUN_588EA100`. The other 15
slots match the verified `CListTextScreen` table. The
[`list-control verifier`](../tools/verify_current_list_control_vtable.py)
checks all 16 original pointers and that each target is byte verified.

The new [instruction source](../src/client-current/Main/FUN_588ea100.cpp)
reproduces all 36 original bytes at objdiff 3.8.0 100%, with three mapped
operands checked. The wrapper installs vtable `0x589A1424`, calls verified
base cleanup `FUN_58908050`, optionally passes the receiver to
`FUN_5897CC42` when bit 0 of its stack argument is set, then returns the
receiver with `ret 4`. The earlier 33-byte inventory entry ended before that
return. The complete body ends at `0x588EA123`; 12 `CC` bytes precede the next
function at `0x588EA130`.

Reproduce:

```text
python tools/verify_current_list_control_vtable.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 588EA100
python tools/generate_progress.py --check
```

The RTTI establishes the class name and the instruction stream establishes
the wrapper's calls and branch. Allocation ownership behind the cleanup
thunk remains unresolved. No original-client runtime deletion or framebuffer
comparison was performed.
