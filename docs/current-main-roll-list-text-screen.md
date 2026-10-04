# Current Main.dll CRollListTextScreen update and lifecycle

The installed `Main.mapped.bin` identifies vtable `0x589A2B6C` through MSVC
RTTI as `CRollListTextScreen`. Verified constructor `FUN_5890BD30` stores this
table in the receiver. Its slot `+0x0C` points to `FUN_5890BE10`, and slot
`+0x00` points to `FUN_5890BEA0`. Both [instruction sources](../src/client-current/Main/)
now reproduce the original x86 bytes at objdiff 3.8.0 100%: 140 and 36 bytes,
respectively, with seven mapped operands checked. All 16 entries in this
vtable now target byte-verified functions.

`FUN_5890BE10` gates its work on receiver flag bit 2 at `+0x24`. With receiver
`+0x88` nonnull, it reads a clock through `0x5898C42C` and makes two unsigned
elapsed comparisons: current value minus `FUN_58908140` must exceed twice
receiver `+0x90`, and current value minus receiver `+0x94` must exceed `+0x90`.
On that path it calls `FUN_58902E10` with receiver `+0x5C` as a position delta,
subtracts the same value from receiver `+0x20`, calls `FUN_589081E0` with zero,
and stores the current clock value at `+0x94`. It then traverses the child
chain at `+0x3C` through child `+0x38` links, invoking each child's virtual
slot `+0x0C`. These branches and offsets come from the matched instruction
stream; the clock unit and resulting visible motion have not been measured.

`FUN_5890BEA0` reinstalls vtable `0x589A2B6C`, calls the already verified
base cleanup `FUN_58908050`, and optionally calls `FUN_5897CC42` with the
receiver when bit 0 of its stack argument is set. It returns the receiver.
The previous inventory length of 33 stopped before `ret 4`; the complete body
is 36 bytes through `0x5890BEC3`, followed by 12 `CC` padding bytes.

[`verify_current_list_control_vtable.py`](../tools/verify_current_list_control_vtable.py)
checks the pinned mapped-image hash, three related RTTI names, constructor and
wrapper vtable stores, all 16 roll-list slots against verified functions, and
the corrected return/padding boundary. Reproduce the exact byte comparison:

```text
python tools/verify_current_list_control_vtable.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 5890BE10 --only 5890BEA0
python tools/generate_progress.py --check
```

The RTTI establishes the class name. Ownership behind the cleanup thunk,
clock units and wrap behavior, scroll geometry, and child callback effects
remain unresolved. No original-client runtime or framebuffer comparison was
performed.
