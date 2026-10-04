# Current Main.dll CShipSpriteFileManager lifecycle

The installed client's pinned mapped `Main.dll` identifies the table at
`0x589A1468` through MSVC RTTI as `CShipSpriteFileManager`. Its first slot
points to deleting wrapper `FUN_588EA530`; that wrapper calls cleanup body
`FUN_588EA420`. The cleanup body installs the same vtable at `0x588EA44B`.

Both [instruction sources](../src/client-current/Main/) match under objdiff
3.8.0: 266 bytes for the cleanup body and 27 bytes for the wrapper, with nine
mapped operands checked. The cleanup body calls the first virtual slot with
argument 1 for pointers at `+0x4830` and `+0x4834`, then for entries in two
0x200-pointer arrays beginning at `+0x808` and `+0x1008`; it clears each
released pointer. It then releases a 0x200-element block beginning at `+0x1820`
through `FUN_5897D05B`, and clears and releases fields at `+0x1814` and
`+0x1808` through `FUN_5897CC42`. The wrapper optionally passes the receiver to
`FUN_5897CC42` when argument bit 0 is set, then returns it with `ret 4`.

The earlier inventory gave the cleanup body a 240-byte length, ending in the
middle of a relative call operand. The mapped `ret` at `0x588EA529` establishes
the 266-byte extent, followed by six `CC` bytes before the next function. The
wrapper ends at `0x588EA54C`, followed by two `CC` bytes. The standalone
[lifecycle verifier](../tools/verify_current_ship_sprite_file_manager.py)
checks the mapped-image hash, RTTI name, first vtable entry, installed vtable,
and both return boundaries.

Reproduce:

```text
python tools/verify_current_ship_sprite_file_manager.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 588EA420 --only 588EA530
python tools/generate_progress.py --check
```

The instructions establish the observed pointer walks and cleanup calls, but
the pointed-to object types and ownership policy remain unresolved. No runtime
teardown comparison was made.
