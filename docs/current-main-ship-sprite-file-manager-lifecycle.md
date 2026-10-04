# Current Main.dll CShipSpriteFileManager storage lifecycle

The installed client's pinned mapped `Main.dll` identifies the table at
`0x589A1468` through MSVC RTTI as `CShipSpriteFileManager`. Its first slot
points to deleting wrapper `FUN_588EA530`; that wrapper calls cleanup body
`FUN_588EA420`. The cleanup body installs the same vtable at `0x588EA44B`.
The mapped screen constructor `FUN_587C35A0` calls manager initializer
`FUN_588EADE0`, which installs that table at `0x588EAE15`.

The initializer calls `FUN_588FFDB0` on embedded state at `+0x1808`, initializes
0x200 records of 0x18 bytes at `+0x1820` through `FUN_5897D0BE`, creates and
stores two objects at `+0x4830` and `+0x4834` through `FUN_588F3D70`, initializes
two 0x200-entry arrays at `+0x808` and `+0x1008` through `FUN_58752830`, and
then calls `FUN_588EA770` to reset the manager state.

Three more matched manager methods use that storage. `FUN_588EA580` uses an
index argument to access a 0x18-byte record group at `+0x1820`, adjusts the
associated count at `+8`, and updates pointer ranges through allocation helpers
and indirect callbacks. `FUN_588EA770`, called by the initializer, releases the
object at `+0x4820`, resets fields `+0x4820`, `+0x4828`, and `+0x482C`, then
walks two 0x200-entry arrays rooted at `+0x808` and `+0x1830`. `FUN_588EA850`
uses the index at `+0x482C` to select a record group at `+0x1820`, sets
`+0x4828`, and calls `FUN_587AEDB0`, `FUN_5876BAF0`, and `FUN_58764D30`.

The indexed access group adds three methods. `FUN_588EAB30` reads the active
state and selected index, the two per-index pointer arrays, and the 0x18-byte
records. It updates record ranges, obtains a related buffer through
`FUN_588DB440`, and has branches that call `FUN_587AEDB0` or clear the selected
index and its associated pointers. `FUN_588EAF30` increments the indexed count
at `+8` and returns the two pointers at `+0x808` and `+0x1008` through its
output arguments when both entries exist. `FUN_588EB130` scans up to 0x200
records at 0x18-byte stride, checks the difference between fields `+0x0C` and
`+0x10`, and calls `FUN_588EAF30` on its nonempty path. This direct edge ties
the scan to the accessor in the original instructions.

The cleanup body calls the first virtual slot with argument 1 for pointers at
`+0x4830` and `+0x4834`, then for entries in two 0x200-pointer arrays beginning
at `+0x808` and `+0x1008`; it clears each released pointer. It releases the
0x200-element block beginning at `+0x1820` through `FUN_5897D05B`, and clears
and releases fields at `+0x1814` and `+0x1808` through `FUN_5897CC42`. The
deleting wrapper optionally passes the receiver to `FUN_5897CC42` when argument
bit 0 is set, then returns it with `ret 4`.

All nine [instruction sources](../src/client-current/Main/) match under objdiff
3.8.0: 2,971 bytes, with 119 mapped operands checked. The previous inventory
length for `FUN_588EADE0` was 316 bytes and ended before its epilogue and `ret`;
the mapped return at `0x588EAF26` establishes the complete 327-byte extent,
followed by nine `CC` bytes. The cleanup body was also corrected from 240 to
266 bytes after its mapped `ret` at `0x588EA529`; six `CC` bytes follow. The
deleting wrapper ends at `0x588EA54C`, followed by two `CC` bytes.

The [lifecycle verifier](../tools/verify_current_ship_sprite_file_manager.py)
checks the mapped-image hash, RTTI name, first vtable entry, constructor and
destructor vtable stores, and all three lifecycle return boundaries.
Reproduce:

```text
python tools/verify_current_ship_sprite_file_manager.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 588EADE0 --only 588EA580 --only 588EA770 --only 588EA850 --only 588EAB30 --only 588EAF30 --only 588EB130 --only 588EA420 --only 588EA530
python tools/generate_progress.py --check
```

The instruction streams establish observed storage offsets, loops, and helper
calls, but record meanings and ownership policy remain unresolved. No runtime
initialization, iteration, or teardown comparison was made. No direct code
caller was identified for `FUN_588EA580`, `FUN_588EA850`, or `FUN_588EAB30`;
their external invocation remains unknown.
