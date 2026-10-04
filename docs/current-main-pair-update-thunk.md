# Current Main.dll pair-update thunk

`FUN_5873a2e0` is a 19-byte wrapper called five times by three verified
functions: twice each by `0x587E0090` and `0x587E3080`, and once by
`0x588B1580`. Callers pass one pointer argument while retaining their receiver
in `ECX`.

The wrapper reads two DWORDs at input offsets `+0` and `+4`, then forwards
those values and the unchanged receiver to `0x58903290`. The mapped callee
stores them at receiver offsets `+4` and `+8`, computes differences from the
previous values, and checks a linked object at receiver `+0x3C`. It walks
linked nodes and calls `0x58902e10` for nodes whose word at `+0x24` contains
bit `0x2000`. The wrapper's full 19-byte extent matches with one mapped call
target.

This evidence establishes the data movement and conditional propagation path,
but not the record/receiver types, field names, flag meaning, or domain-level
effect. No runtime behavior test was performed.
