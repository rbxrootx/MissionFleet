# Current Main queued component-record dispatcher

`FUN_588075e0` drains 0x13C-byte records from a ring buffer and dispatches
their first DWORD. Byte-matched callers `FUN_58807D50` and `FUN_58808080` reach
it at `0x58807E57` and `0x588080A6`. Their connected event/update path and the
remaining direct callees are covered in the
[queue event/update notes](current-main-queue-event-update.md).

## Behavior supported by the original code

The receiver's pending count is at `+0x254`; current index, capacity, boundary,
and record-storage fields are at `+0x25C`, `+0x250`, `+0x258`, and `+0x260`.
For each pending record, the code updates the ring index, copies `0x4F` DWORDs
from the selected 0x13C-byte record to local storage, and dispatches on its
first DWORD. Observed IDs are `1`, `3`, `4`, `0x10`, `0x20`, `0x40`, `0x50`,
`0x70`, `0x100`, `0x400`, `0x04000008`, and `0x04000009`.

The connected cases include:

- ID `0x70` calls byte-matched `FUN_58805940` at `0x588077F9` when receiver
  `+0x114` is zero.
- IDs `0x04000008` and `0x04000009` call byte-matched
  [`FUN_58806F60`](current-main-58806f60-component-record-updater.md) at
  `0x5880786C`, passing boolean 0 and 1 respectively.
- ID `0x20`, when receiver `+0x114` is zero, selects between byte-matched
  [`FUN_58805880`](current-main-58805880-queue-conditional-selected-update.md)
  and [`FUN_588058D0`](current-main-588058d0-queue-selected-value-update.md).
  It calls `FUN_58805880` when receiver `+0x110` is zero and the observed
  global word at `+0xA06` is 7 or 12; otherwise it calls `FUN_588058D0`. ID
  `0x100` obtains an object
  through `FUN_5878A160`, assigns its word at `+0x352`, then calls
  `FUN_588D81A0` and `FUN_58805100`. The other observed IDs dispatch to
  `FUN_58807370`, `FUN_588051C0`, `FUN_58805210`, `FUN_58805260`,
  [`FUN_588059B0`](current-main-588059b0-linked-record-selected-field-action.md)
  for record ID `0x40` with `local_148`, `local_14c`, and zero, and
  `FUN_58805150` in the branches shown by the original switch.

After each dispatch, a nonzero local pointer is passed to `FUN_5897CC42`; the
loop continues until the pending count is empty, then performs the captured
security-cookie check and returns.

The source at
[`FUN_588075e0.cpp`](../src/client-current/Main/FUN_588075e0.cpp) matches the
complete 711-byte linear body through `ret` at `0x588078A6`. Ghidra counts 708
bytes in two ranges, omitting the mapped three-byte stack cleanup at
`0x58807882..0x58807884`; the indexed 708-byte span also stopped on the first
byte of the frame restore. The function extent was corrected before matching.

## Unresolved details

The queue schema, meanings of its IDs and fields, and some user-visible effects
remain unresolved. All observed direct dispatch callees and both direct callers
are now byte-matched; indirect virtual-call behavior and runtime results have
not been tested in the emulator.
