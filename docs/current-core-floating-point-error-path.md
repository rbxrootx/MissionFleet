# Installed Core floating-point error path

This slice follows the installed mapped `Core.dll` from math-result
classification through exception translation and the optional math-error
callback. Evidence comes from Ghidra decompilation of the pinned mapped image,
including `var/allocator-region-functions.txt`,
`var/math-error-direct-helpers.txt`, `var/math-error-runtime-leaves.txt`, and
the data-reference trace in `var/math-error-handler-refs.txt`.

`0x588647D0` calls classifier `0x58864910`. The classifier examines operation
and floating-point status bits, normalizes subnormal values through
`0x58859720`, checks rounding/control state through `0x588721E0`, and delegates
selected exception flags to `0x58870160`. When classification reports an
error, `0x588647D0` builds the exception record through `0x58864C70`, maps
domain/range cases to thread error values 33/34 when no handler is registered,
or routes a matching operator through the table at `0x588C4A30` and callback
invoker `0x58873EE0`.

The callback reader and invoker decode global `0x58969C40`; setter
`0x58873ED0` stores its supplied value there. Ghidra found no direct callsite
for the setter, so its public API name and live use remain unverified. The
exception builder maps status bits to NTSTATUS values in the
`0xC000008E`-`0xC0000093` range and calls the mapped RaiseException entry at
`0x5889439C`. `0x58864C40` is a forwarding adapter to that builder.

The supporting functions preserve x87 status/control access, x87/MXCSR state
combination, rounding-field checks, and subnormal normalization. Their mapped
behavior is supported by the direct Ghidra pseudocode and callsites; exact
public CRT names, all operation-code meanings, and hardware-specific rounding
effects are still uncertain. No math-error callback or floating-point exception
was induced in a live client.

All 17 functions below match the captured image at 100% with the pinned
VC6-compatible toolchain and objdiff 3.8.0, totaling 3,292 bytes and 74 checked
operand targets:

| Function | Bytes | Function | Bytes |
| --- | ---: | --- | ---: |
| `0x588647D0` | 310 | `0x58864910` | 809 |
| `0x58864C70` | 785 | `0x58864FE0` | 255 |
| `0x58864C40` | 35 | `0x58873ED0` | 15 |
| `0x58873EB0` | 29 | `0x58873EE0` | 57 |
| `0x58870110` | 19 | `0x58870130` | 44 |
| `0x58870160` | 91 | `0x588701C0` | 18 |
| `0x588721E0` | 15 | `0x58873F20` | 38 |
| `0x58873F50` | 471 | `0x58859720` | 270 |
| `0x5887D0C0` | 31 |  |  |
