# Current Main mode-dependent selected-object child update

`FUN_588a6720` is a 709-byte `__thiscall` helper. Ghidra records four calls
from three byte-matched callers: `FUN_58805880` at `0x588058A9`,
`FUN_588058D0` at `0x58805909`, and `FUN_58807910` at `0x58807C8D` and
`0x58807CAE`. The first two callers serve queue ID `0x20`; the third is an
event-handler path. Arguments are a receiver and one stack value, passed from
the first two as observed state predicates or record-derived values.

## Behavior supported by the original code

The helper branches on its stack argument and the receiver's word at `+0x9C`.
For a zero argument, it clears receiver `+0x200` and sets `+0xA0`, then chooses
among the following observed state paths:

- States 4, 5, 6, 10, 11, 13, 14, and 16, plus state 15 when
  `[0x58A245A8 + 0x1B8]` is zero, use a configuration path. When receiver
  `+0xA8` is zero, that path calls the `+4` virtual slot of the child at
  receiver `+0x11C`, clears the child's `+0x50`, calls `FUN_587B95E0(1)`, and
  clears receiver `+0xA4`. If the object at `[0x58A247F8]+4` has dword
  `+0x608C` equal to `0x40000000`, receiver `+0xA8` selects one of two sets of
  child virtual calls. When that object dword is zero, the code clears the
  low four bits in words at `+0x24` of children `+0x194` and `+0x198`, and
  sets those bits on child `+0x1A8`.
- State 12 sets receiver `+0xA8`, calls the `+8` virtual slots for children
  `+0x11C` and `+0x1AC`, and conditionally calls the `+4` slot for `+0x1AC`
  when object dword `+0x608C` is `0x40000000` and receiver `+0xA4` is nonzero.
- Other states call the `+4` virtual slot for child `+0x11C`, clear its
  `+0x50`, call `FUN_587B95E0(1)`, and clear receiver `+0xA4`.

For states 8 and 9, the zero-argument path also updates child `+0x11C` field
`+0x50` with zero when its descriptor at `+0x54` is null, or with
`word[descriptor+0x0C] * dword[descriptor+8]` otherwise, then calls its `+8`
virtual slot. A nonzero stack argument takes a separate path: state 12 sets
receiver `+0xA8`, calls child `+0x11C` slot `+8`, clears `+0xA4`, and returns;
other states update the same descriptor-derived child `+0x50`, call slot `+8`,
clear receiver `+0xA0`, and return.

The literal x86 source at
[`FUN_588a6720.cpp`](../src/client-current/Main/FUN_588a6720.cpp) matches the
complete contiguous 709-byte extent from `0x588A6720` through `0x588A69E4`.

## Unresolved details

The receiver and embedded-child types, state meanings, object `+0x608C` meaning,
descriptor units, virtual method contracts, and visible effect are unknown.
The direct helpers `FUN_587B95E0` and `FUN_587B9620` are not byte-matched. No
emulator runtime test has been performed.
