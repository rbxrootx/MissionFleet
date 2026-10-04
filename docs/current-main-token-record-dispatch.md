# Current Main.dll tagged token-record dispatch

The pinned mapped `Main.dll` function `FUN_58843000` at `0x58843000` is 92
bytes. Its [instruction source](../src/client-current/Main/FUN_58843000.cpp)
matches all 92 under objdiff 3.8.0 with three mapped direct-call targets:
the already verified lookups `FUN_58842F60` and `FUN_58842fb0`, and the
already verified record applicator `FUN_5875A4B0`.

Verified event dispatcher `FUN_588C1650` calls it with a selected receiver in
ECX and three stack arguments. The function returns immediately if the first
stack argument is null or the third, an unsigned count, is zero. It otherwise
walks the second argument's records at 0x60-byte strides. A leading byte `0`
searches the receiver's `+0x138` list through `FUN_58842F60`, while a leading
byte `1` searches `+0x130` through `FUN_58842fb0`; both receive a query at
record `+1`. Other leading bytes skip lookup. When a lookup returns a node,
the function calls `FUN_5875A4B0` with that node in ECX and the full record
pointer on the stack. It does not call that applicator on a miss.

The [portable model](../src/client-current/semantic/TokenRecordDispatch.cpp)
and [native test](../tests/native/token_record_dispatch_test.cpp) cover null
gate, zero count, both tag routes, unsupported tags, misses, and the exact
0x60 stride and record pointer passed to the applicator. Run
`python tools/verify_token_record_dispatch.py`. The model is separate from
the byte-identical instruction source.

The first argument's type and meaning beyond its null check, the rest of the
record schema, string encoding, and user-visible result remain unknown. This
path has not been exercised in the installed client or emulator.

## Dual-list sibling at `0x58848A00`

Verified packet and event dispatchers call `FUN_58848a00` with a selected
receiver; the event path loads it from `0x58A245B4->+0xD8`. Its 92-byte
[instruction source](../src/client-current/Main/FUN_58848a00.cpp) matches
the pinned image under objdiff 3.8.0 with three mapped direct-call targets.
The null gate and zero-count exits, 0x60-byte record stride, tag handling,
and successful-record application have the same control-flow shape as
`FUN_58843000`. Its tag-zero lookup instead uses verified `FUN_58848380`
at receiver head `+0x6C`; tag one uses verified `FUN_588483D0` at `+0x64`.
It applies a found node through the same verified `FUN_5875A4B0`.

The shared native test also checks these two head routes, gate/count exits,
unsupported tags, a miss, stride, and the full record pointer. The receiver
types and purpose of the two list families remain unresolved. No original
client or emulator runtime test has been performed.
