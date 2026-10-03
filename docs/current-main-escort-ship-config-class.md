# `CPannelEscortShipConfig` class evidence

This slice reconstructs one RTTI-identified UI class from the installed
`Main.dll`. Each listed body was compiled and compared with the captured mapped
image using objdiff 3.8.0; the verifier checked the listed function size and
all recorded relocation operands. This establishes machine-code equality for
these bodies, not correct high-level types or working in-emulator behavior.

## Class identity and construction path

The mapped image's RTTI type descriptor at `0x589CCC78` names
`.?AVCPannelEscortShipConfig@@`. Its vtable address point is `0x5899E830`,
with the associated complete-object locator at `0x589A87F4`.

The constructor is `FUN_5884E690` (2,583 bytes). It calls the screen base
initializer at `0x589031A0`, installs the RTTI-backed vtable, and initializes
nested screen/control objects. The direct caller `FUN_587DBA00` requests
`0xE8` bytes and calls the constructor at `0x587DC66B`, storing the result at
caller offset `+0xDD4`.

The recovered vtable methods are:

| Slot | Function | Bytes | Evidence from body |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_5884DD00` | 30 | Scalar deleting destructor; calls the class cleanup body. |
| `+0x04` | `FUN_58903400` | 30 | Previously verified method in the same table. |
| `+0x08` | `FUN_58903420` | 39 | Previously verified method in the same table. |
| `+0x0C` | `FUN_5884E500` | 316 | Virtual class method; calls the common data and child helpers. |
| `+0x10` | `FUN_5884DF70` | 590 | Virtual method; uses bounds, numeric conversion, and field helpers. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously verified method in the same table. |
| `+0x18` | `FUN_5884DD20` | 579 | Virtual method; dispatches through the selector and indexed-data helpers. |

The direct implementation helpers added in this pass are:

| Function | Bytes | Observed role and direct evidence |
| --- | ---: | --- |
| `FUN_5884DAD0` | 484 | Cleanup body called by the scalar deleting destructor. |
| `FUN_5884DCC0` | 52 | Class helper reached by the constructor and vtable method `+0x0C`. |
| `FUN_5884E1C0` | 74 | Class helper that delegates child lookup and cleanup/string operations. |
| `FUN_5884E210` | 512 | Class helper that calls the record lookup and string update routines. |
| `FUN_58731540` | 70 | Tests a point against bounds derived from receiver fields. |
| `FUN_58759F20` | 55 | Lazily allocates and initializes a 12-byte record referenced by receiver fields `+0x50` and `+0x54`. |
| `FUN_58759F60` | 74 | Initializes an object base and flags, clears fields, then installs another vtable. |
| `FUN_587B99F0` | 30 | Forwards arguments and selector `0x8001F009` to `0x58970C70`. |
| `FUN_587D89F0` | 1,143 | Looks up a selected entry, initializes bounded buffers, and processes indexed records. |
| `FUN_58875190` | 317 | Selects from a table when count `+0x164` exceeds `0x1A`, then copies observed fields to a child. |
| `FUN_588752D0` | 695 | Initializes nested screen objects, allocates children, and sets up child-list fields. |
| `FUN_588F4060` | 41 | Walks a linked chain and matches an entry by its `+0x48` value shifted right by 10. |
| `FUN_58907990` | 250 | Converts an integer to floating-point record fields and calls `0x58907820`; branches test values through 9. |
| `FUN_589087F0` | 61 | Walks child links at `+0x78`, calls a virtual cleanup slot, and clears fields through `+0x88`. |
| `FUN_589088D0` | 268 | Copies a supplied NUL-terminated string into an allocated buffer and updates receiver fields. |

## Byte-match validation and boundary corrections

All 20 functions in this class slice pass the repository's client-match
verifier: 8,224 bytes total at 100.0% objdiff match, with 267 mapped relocation
operands checked. Function sources use pinned clang-cl 19.1.4 instruction
emission; the verification records include the compiler hash and mapped-image
identity.

Five inventory extents were corrected after checking the mapped instruction
bytes: `FUN_5884DD00` now includes `ret 4`; `FUN_5884DCC0` and `FUN_588F4060`
now include their `ret 4`; `FUN_589088D0` includes its register epilogue and
`ret 0x0C`; and `FUN_587D89F0` includes the complete five-byte internal jump
ending at `0x587D8E67`. These corrections add 22 identified code bytes to the
inventory. Padding after the terminating instructions remains excluded.

## Open questions

The sprite and control identities, table record schema, selector meanings,
coordinate units, and string field roles are not resolved from these functions
alone. The caller establishes allocation size and construction order but does
not establish what the visible controls mean. No emulator runtime test was
performed, so visual behavior and interaction remain unvalidated.
