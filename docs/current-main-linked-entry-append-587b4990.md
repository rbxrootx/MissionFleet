# Current Main.dll linked-entry append helper

`FUN_587B4990` allocates a 0x14-byte entry, installs vtable address
`0x58999FC0`, stores the supplied pointer at entry `+0x0C`, and initializes
fields `+4`, `+8`, and `+0x10`. For an empty collection it sets head `+4` and
tail `+8` to the new entry. Otherwise it sets the old tail's next link to the
new entry and the new entry's previous link to the old tail, then advances the
tail. It increments collection count `+0x0C`.

Verified callers `FUN_587B4B70` and `FUN_588D4300` pass a supplied pointer and
use collection objects at receiver-derived `+0x94`. The collection and entry
types, stored pointer meaning, and ownership remain unknown. In the observed
nonempty allocation-failure branch, the function continues into link writes
with a null new entry; no safe failure semantics are inferred.

The complete 147-byte body matches mapped `Main.dll` under objdiff 3.8.0;
all four mapped operand targets were checked. No runtime client or emulator
test was performed.
