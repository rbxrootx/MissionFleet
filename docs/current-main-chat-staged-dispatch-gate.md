# Current Main.dll staged chat dispatch gate: FUN_587B7BD0

`FUN_587B7BD0` is a 311-byte native x86 function called by the verified chat
dispatchers `FUN_587B8110` and `FUN_587B81A0`. Both callers use its return value
to decide whether to dispatch selector `0x80020A00`, placing the helper in the
chat path. Its complete body was rebuilt as a literal instruction stream and
matched the installed `Main.dll` byte for byte: objdiff 3.8.0 reports 100%,
with 18 relocation targets checked.

The function calls through `0x5898C42C` and compares that result with receiver
fields at offsets `+0x194`, `+0x198`, and `+0x19C`. It tracks a counter and an
active flag using absolute-delta thresholds `0x3E8` and `0x1D4C0`. The active
path resets the flag when the larger threshold is exceeded; otherwise it
formats the fixed string at `0x5899A1C0` with `0x6464FF`, sends the result
through `0x5888D250`, and returns zero. The inactive path increments the
counter while the smaller threshold holds. After the counter exceeds three, it
formats/sends the same fixed string, stores the sampled value and sets the
active flag. A delta at or above the smaller threshold stores the sample,
resets the counter to one, and returns one. A null fourth stack argument also
returns one.

The evidence establishes the control flow, constants, memory offsets, calls,
and caller relationship. It does not establish that the callback returns a
clock value, the unit of either threshold, the string's user-visible meaning,
or the contracts of the callback/helper functions. No runtime client or
emulator test was performed.
