# Current Main handler for message `0x80020F02`

`FUN_58847770` is reached from verified dispatchers `FUN_587bb700` and
`FUN_588c1650` for message case `0x80020F02`. Both pass the event value as one
stack argument and load `ECX` from the nested object at
`0x58A245B4+0xE0`. The call is one step in two independently verified event
paths.

## Evidence from the original code

The method saves `ECX` as its receiver and reads the one stack value. It passes
that value plus one, together with `0x58A0B450`, through an indirect call at
`0x5898C1A4`, then branches on the result. In one path it reads the object at
`0x58A247F4+0x30` and scans eight 16-byte slots starting at offset `+0x9A8`.
For each slot it follows four pointer fields, extracts
`((word[pointer+0x5E] >> 4) & 0xFF) ^ 0xAA`, retains the maximum, and maps the
result through fixed thresholds from `0x11` to `0x7D` into selectors 0 through
10. It then copies nine dwords from `0x58A0B4A0` and forwards a local record to
`FUN_588471E0`. Other paths classify the event value's first byte and select
resources through global objects and helpers, including
`FUN_587522F0` and `FUN_5875A440`.

The complete contiguous body is 718 bytes and ends with a stack-cookie check
and `ret 4`. ObjDiff 3.8.0 matches all 718 bytes and checks 30 mapped address
operands. The reconstruction is
[`FUN_58847770.cpp`](../src/client-current/Main/FUN_58847770.cpp).

## Uncertainties

The event value's format, indirect-call contract, selector meanings, receiver
class, local record schema, and visible UI or state effect remain unresolved.
This is static evidence; no emulator test was performed.
