# Archived 2062 resource-backed UI tree

This subsystem is one composite UI construction path in the archived 2062
`Main.dll`. The parent constructor at `0x1008F9C0` is called from `0x1007FAB4`.
It creates two sibling objects and stores their returned pointers at `this+0xE0`
and `this+0xE4`: `FUN_10086240` is called at `0x100901DE`, and `FUN_1008AD20`
at `0x10090223`. Both receive the same resource context and layout arguments.

Both constructors call the shared base initializer `FUN_10047F90`, install
different vtables (`0x10175E44` and `0x10175E70`), initialize common geometry
fields, and create many `0x54`-byte child controls through allocator thunk
`0x1016C7A0`. Their child setup uses common resource/control helpers including
`FUN_100FE9B0` and `FUN_100172C0`. Their vtable entries reference the paired
30-byte deleting-destructor wrappers `FUN_100884A0` and `FUN_1008D070`.

The five reconstructed extents total 21,499 bytes and compare at 100% with
Visual C++ 6.0 SP5 and objdiff 3.8.0 against the mapped capture:

| Address | Role evidenced by Ghidra | Bytes | Source |
| --- | --- | ---: | --- |
| `0x1008F9C0` | Composite parent constructor | 3,608 | [FUN_1008f9c0.cpp](../src/client-2062/Main/FUN_1008f9c0.cpp) |
| `0x10086240` | First resource-backed sibling; stored at parent `+0xE0` | 8,795 | [FUN_10086240.cpp](../src/client-2062/Main/FUN_10086240.cpp) |
| `0x1008AD20` | Second resource-backed sibling; stored at parent `+0xE4` | 9,036 | [FUN_1008ad20.cpp](../src/client-2062/Main/FUN_1008ad20.cpp) |
| `0x100884A0` | Destructor wrapper for vtable `0x10175E44` | 30 | [FUN_100884a0.cpp](../src/client-2062/Main/FUN_100884a0.cpp) |
| `0x1008D070` | Destructor wrapper for vtable `0x10175E70` | 30 | [FUN_1008d070.cpp](../src/client-2062/Main/FUN_1008d070.cpp) |

The verified source preserves the captured instructions exactly; it does not
assign inferred product names or replace the observed resource lookups with
guessed UI semantics. These functions have not yet been exercised in a live
framebuffer comparison. The exact panel names, child labels, resource-index
meanings, and the overall screen purpose remain unknown. Their matched caller,
constructors, and destructor wrappers establish the object relationships and
machine behavior, but not those higher-level labels.
