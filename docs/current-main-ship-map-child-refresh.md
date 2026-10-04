# Current Main ship-map child refresh

`FUN_588D7460` is called directly by the verified `CShip_MapObjectScreen`
constructor `FUN_588E05C0` and virtual update `FUN_588E5150`. The constructor
identity is recorded in the ship-map screen notes; the update method's RTTI
and vtable entry identify the same class.

The helper uses receiver state at `+0x605C`, child count `+0x141C`, an array of
child pointers beginning at `+0x17C`, and byte flags at `+0x21C`. For states
5–30, it visits each non-null child. Flagged children obtain a packed nibble
from the receiver's data at `+0x100C`, map it through words at `+0x429C`,
decrement the result, and pass it to `FUN_58731590`; unflagged children use
receiver word `+0x42AA` plus one. For states below 4 or above 31, the helper
writes the mapped/fallback word to child `+0x26` and releases any resources at
child `+0x40` and `+0x30`. States 4 and 31 return without processing children.

The complete body is 387 bytes with 10 mapped operand targets and matches the
pinned original. Receiver/child layouts, packed-data meaning, state and flag
semantics, table values, and resource ownership remain unresolved. No runtime
client or emulator test was performed.
