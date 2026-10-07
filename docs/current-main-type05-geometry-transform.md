# Current Main type-0x05 packed geometry transform

`FUN_587B1B70` is the 1,031-byte helper called by the verified type-0x05
record-backed initializer `FUN_587B2A40` at `0x587B2BEC`. The source preserves
the exact installed x86 bytes across three Ghidra body ranges and passes the
repository's pinned ObjDiff/clang-cl verification.

## Caller evidence

The matched `FUN_587B2A40` caller invokes this helper after deriving inputs
from copied record offsets `+0x224` through `+0x22C`. The initializer is
called through the observed type-0x05 branch of matched `FUN_587A6220` at
`0x587A6730`; matched `FUN_588D84D0` also calls it at `0x588D88B4` while
passing a stack-local 0x2D-DWORD record. The focused verifier checks all five
Ghidra call transfers in these two paths and the transform's outgoing calls
against the mapped Main.dll.

## Behavior visible in Ghidra

The helper reads packed words at receiver `+0x224` and `+0x226` and a stride
value at `+0xB8`. Bit fields in the first word determine integer offsets, a
coefficient-table index/step, and a low-three-bit repeat count. It uses
coefficient arrays at `0x58A0B4D8` and `0x58A0ED18`, clears a 0x200-byte local
scratch area through matched `FUN_5897CC48`, and fills paired intermediate
values. A 36-step loop applies integer two-coefficient arithmetic and writes
coordinate-like pairs into receiver storage beginning at `+1000`. The other
direct call is matched stack-probe helper `FUN_5897CE60`.

Fresh Ghidra output assigns body ranges at `0x587B1B70` (171 bytes),
`0x587B1C20` (232 bytes), and `0x587B1D10` (628 bytes), covering 315
instructions in total. Each range is decoded completely from the pinned
mapped image. Ghidra reports an injected stack-probe warning and an
unreachable block at `0x587B1BC0`; the reason for the gap is not established.

## Unresolved details

The packed fields' units, coefficient-table meanings, destination record
schema, and rendered or gameplay effect are unknown. This is an exact x86
instruction reconstruction tied to Ghidra and matched caller paths, not a
portable behavioral model or emulator runtime test.
