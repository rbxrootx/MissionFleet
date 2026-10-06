# `FUN_587E6670`: state consistency validator and report gate

Fresh Ghidra analysis of the installed `Main.dll` identifies a `__fastcall`
function with its receiver in ECX and 2,046 body bytes across two exact ranges:

- `[0x587E6670, 0x587E6C18)` — 1,448 bytes
- `[0x587E6C20, 0x587E6E76)` — 598 bytes

The eight bytes between those ranges decode as `lea esp,[esp]` followed by
`nop`; Ghidra excludes them from the function body. The candidate emits only
the two body ranges and records all 158 mapped operand targets.

The function first returns if `[0x58A247F8+4]` is null. It then checks groups
of global values in `0x58A242F8–0x58A2436C`, `0x58A24388–0x58A243B4`, and
`0x58A2449C–0x58A244D0` against fixed constants. When those checks pass, it
computes a runtime value from object fields and compares values decoded from
selected records. Its loop advances through 0x18-byte records and is bounded by
`([object+0x394] >> 1) & 0x1F`; record types 0x05, 0x06, and 0x0D lead to further
lookups and field comparisons.

On mismatches, the function calls `FUN_587B9B30` with observed report codes
2, 3, 4, 7, or 8, then calls `FUN_58970AE0`. Both callees are already
byte-matched. The first forwards its code and packed values through selector
`0x80015000`; the second performs the confirmed socket shutdown and close
cleanup. The exact meanings of these codes and the validated fields remain
unknown, so this is described as a consistency report path rather than given a
more specific gameplay label.

Ghidra records one direct incoming call, from byte-matched
`FUN_587FD890` at `0x587FE71F`. The caller loads its receiver from ESI into ECX
and passes no stack arguments. It invokes the validator only when its byte at
`+0x20E40` is zero, then advances that byte. The caller is referenced by slot
`+0x0C` in mapped vtable `0x5899D180`.

The global configuration fields, object/record types, lookup contracts, and
report-code meanings are unresolved. The socket cleanup is established from
matched static code; no emulator runtime test has been performed.
