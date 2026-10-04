# Current Main.dll table-backed effect-object emission

This two-function slice covers emitter `FUN_588F5040` and initializer
`FUN_5876BE10`. The emitter is called from verified `CMine_MapObjectScreen`
update `FUN_587A4440` and combat-effect update `FUN_588F55C0`. The initializer
is called by the emitter and by verified combat processing function
`FUN_5873F020`.

`FUN_588F5040` receives seven stack arguments and a receiver. It derives an
iteration count from the third argument plus the result of thunk `0x5897CC36`
modulo the fourth argument, then skips the loop if the result is nonpositive.
Each iteration requests a `0x84`-byte allocation. It derives a table index from
the fifth argument plus another thunk result modulo the sixth argument. If the
index is nonnegative, below the count at object `0x58A246F0 + 0x160`, and the
table pointer at `+0x190` is non-null, it selects the entry at `base + index *
0x40`; otherwise it passes null. It calls `FUN_5876BE10` for each successful
allocation, passing the global context at `0x58A2459C + 0x10524`, the optional
table entry, the first two caller arguments, and the seventh argument.

The initializer calls base helper `FUN_58734A30`, installs vtable
`0x58995AFC`, stores the incoming values in fields at `+0x04`, `+0x08`,
`+0x54`, `+0x78`, and `+0x7C`, and clears fields `+0x50`, `+0x58`, `+0x5C`,
`+0x60`, `+0x64`, and `+0x68`. With a non-null table entry, it copies six
dwords from entry `+0x18..+0x2C` to object `+0x0C..+0x20`. Three further calls
to thunk `0x5897CC36` feed signed remainder calculations for object fields
`+0x74`, `+0x70`, and `+0x6C`.

Both functions match the mapped client at 100% under objdiff 3.8.0: 224 bytes
with nine operand targets and 196 bytes with five targets. The table schema,
object class, host operation behind the thunk, input field meanings, derived
value units, and visible effect remain unknown. The caller paths support an
effect-related use but do not prove whether these are particles, projectiles,
or another object type. No runtime timing or visual test was performed.
