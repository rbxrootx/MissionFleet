# Current Main component-record update helper

`FUN_58806F60` is a 1,032-byte `__thiscall` helper in the installed `Main.dll`.
The byte-matched event handler `FUN_58807910` calls it once per variable-size
record at `0x58807A65`, passing the current record, its `+0x114` subrecord, and
a boolean derived from the optional record mask. A second caller,
`FUN_588075E0`, calls it at `0x5880786C` after copying a 0x13C-byte queue record
to local storage. That caller dispatches IDs `0x04000008` and `0x04000009`,
passing boolean 0 and 1 respectively. Those callsite bytes are in the pinned
mapped image, but the queue's broader purpose is still unknown.

## Behavior supported by the original code

The handler checks that byte `record + 0x68` is `1`. Otherwise it formats a
diagnostic with the record's `+6` string and reports
`SetNewPlayerData_TypeOfComponent is 0` through the captured error callbacks.
It derives a count from
`((DWORD at record + 0x44) >> 1) & 0x1F` and uses the supplied `record + 0x114`
region with an 0x18-byte stride.

When the boolean argument is nonzero, it passes the record range to
`FUN_587AF1F0`, calls `FUN_588A6410` with byte `record + 2`, and walks the linked
list rooted at `[0x58A247F8] + 0xC`. It compares the record's string at `+6` to
each node key at `+0x356`. A matching node reaches `FUN_58778B20` and
`FUN_58731CE0`, then sets bit 0 in fields at `+0x24` on two child objects.

When the boolean is zero, the helper calls `FUN_58789FE0` to obtain an object
from the record and supplied region. It then makes record-derived update calls,
branches on subtype values `0x1C3`, `0x6F`, `0x13E`, and `0x1C5`, reads a pair
from a table selected with the object's byte at `+0x354` and word at `+0x352`,
updates flag fields, and increments receiver counters for observed subtype
groups 8 and 6/7. The complete indexed stream ends with `ret 0xC`. The literal
instruction source at
[`FUN_58806F60.cpp`](../src/client-current/Main/FUN_58806F60.cpp) is verified
against the pinned mapped image with the repository's pinned clang-cl compiler.
When receiver `+0x1B6` equals `2`, this function also calls the shared
[`FUN_58805ba0` eight-slot refresh helper](current-main-58805ba0-eight-slot-refresh.md)
at `0x58807260` with ECX=receiver.
Its three calls to `FUN_588d6cc0` at `0x5880719D`, `0x588071D0`, and
`0x58807207` use ECX=ESI and pass `0`, `1`, and `1`; the target's paired bit
updates are described in the
[child-bit helper notes](current-main-588d6cc0-paired-child-bit-helper.md).
The same control flow calls sibling `FUN_588d6d10` at `0x588071A6` with `0`
and at `0x58807242` with `1`, again using ECX=ESI; see the
[sibling helper notes](current-main-588d6d10-paired-child-bit-helper.md).

## Unresolved details

The record and object types, semantic names for fields, the meaning of the
count/subtype values, the boolean's alternate-path meaning, the linked-node
identity, and gameplay/UI effects remain unknown. Most called update helpers
are not matched, and the broader role of the `FUN_588075E0` queue dispatch
remains unknown. This is a static byte match; no emulator runtime test has been
performed.
