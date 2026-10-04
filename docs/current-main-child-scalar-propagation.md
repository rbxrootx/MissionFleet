# Current Main.dll child scalar propagation: FUN_587A6190

`FUN_587A6190` is called by the verified selector dispatcher `FUN_587A75E0`
and state-clear routine `FUN_588DD310`. The latter passes zero through the
object at global `0x58A2459C` offset `+0x20C9C`. The full 132-byte x86 body
rebuilds byte for byte against the installed `Main.dll` under objdiff 3.8.0.
There are no mapped external operand targets.

The function copies its one argument to receiver `+0x94`. It then visits eight
16-byte groups beginning at receiver `+8`, each containing four child pointers.
For every non-null pointer, it writes the stored value to child fields `+0x114`
and `+0x110`. It ends with `ret 4`.

The 132-byte companion `FUN_587A7110` walks the same 32 slots. It stores its
argument at receiver `+0x98` and copies it to `+0x11C/+0x118` on each non-null
child. Verified `FUN_587A75E0` calls it with `0x40000000` and with zero. Its
complete body also matches byte for byte and has no external operand targets.

Two 73-byte companions use a counted pointer array instead: `FUN_588D8100`
stores the argument at receiver `+0x6094` and copies it to child
`+0x114/+0x110`; `FUN_588D8150` stores at receiver `+0x6098` and copies to
child `+0x11C/+0x118`. Both iterate the signed count at receiver `+0x141C`
over pointers beginning at `+0x17C`, skipping null children. They both match
byte for byte with no external operand targets. Verified `FUN_588DD310` calls
the first with zero; verified `FUN_588E4260` calls both variants.

The memory accesses and call sites are observed in verified code. The object
types, scalar meaning, array capacity, and effect of these paired child fields
remain unknown. No runtime client test was performed.
