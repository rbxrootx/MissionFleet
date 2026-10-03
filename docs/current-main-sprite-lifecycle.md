# Current Main sprite lifecycle

This slice follows the installed current `Main.dll` mapped capture around the
sprite parser `FUN_58903e40`. Ghidra references `FUN_58903d30` from the parser
at `0x5890427c`; that helper calls the receiver's virtual slots `+0x0C` and
`+0x10` with the same argument. The sprite bundle's mapped vtable entries at
`0x589A2520` and `0x589A2528` point to `FUN_58903c60` and `FUN_58903ce0`.

Seven functions now have source spans that reproduce their mapped x86 bytes under
the recorded VC6-compatible profile. ObjDiff 3.8.0 reports 100% for each
function, covering 726 bytes and 19 audited relocation operands:

| Address | Bytes | Evidence in the mapped function |
| --- | ---: | --- |
| `0x58903A40` | 50 | Tests flag mask `0x0004`, increments `+0x50`, then walks the chain at `+0x3C`, calling child virtual slot `+0x0C` and following the link at child `+0x38`. |
| `0x58903A80` | 37 | Installs the `CSpriteBundle` vtable and releases non-null fields at `+0x10` and `+0x14`; also passed to the bundle vector destructor iterator. |
| `0x58903AE0` | 361 | Installs the `CSpriteFile` vtable, releases two subfields in each `0x40`-byte record, and visits associated pointer arrays and a conditional resource handle. |
| `0x58903C60` | 124 | Handles the bundle vector deleting-destructor path and its ordinary field cleanup; the element stride is `0x40`. |
| `0x58903CE0` | 44 | Installs the `CSpriteData` vtable, releases its `+0x0C` field, and conditionally releases the receiver. |
| `0x58903D30` | 35 | Calls virtual slots `+0x0C` and `+0x10` with one shared argument. |
| `0x5897D05B` | 75 | Array-destruction iterator called directly by `0x58903C60`; its SEH setup and cleanup arguments match the installed image. |

The initial Ghidra bodies for the file and bundle destructors omitted reachable
instructions after allocator calls because the external release thunk was
marked non-returning. Capstone decoding of the mapped image exposed the omitted
stack adjustments and field stores. The verified extents therefore include
those instructions: 361 bytes for the file destructor in eight ranges and 124
bytes for the bundle destructor in five ranges. The two alignment-padding
spans (15 bytes total) remain excluded. ObjDiff recompiled and matched the
corrected extents byte for byte.

The evidence does not identify the array element types, resource-handle
contract, virtual callback meanings, or flag semantics. The sprite payload
format and visual result are not established by this lifecycle slice alone.
See also the [renderer and text path notes](current-main-event-dispatch.md).
