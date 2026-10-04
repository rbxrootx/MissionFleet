# Current Main.dll 0x54-byte record append/growth helper

`FUN_58836AF0` is called by verified record handlers `FUN_58838CB0` and
`FUN_58839460`. It treats collection fields `+0x0C`, `+0x10`, and `+0x14` as
start, used end, and capacity end pointers; entries are 0x54 bytes. When the
used count is below capacity, it calls `FUN_58834AD0` to initialize the slot
at the used end and advances `+0x10` by one entry.

When the collection is full, it checks the start/end relationship through
`0x5897CC72` on the observed inconsistent path and delegates growth to
`0x58836A20`, passing the collection, old end, incoming record, and a local
output address. The exact initializer and growth-helper contracts, ownership,
collection type, and record schema remain unresolved.

The complete 158-byte function matches mapped `Main.dll` under objdiff 3.8.0;
all three mapped operand targets were checked. No runtime client or emulator
test was performed.
