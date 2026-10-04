# Current Main.dll resource-backed child construction path

`FUN_5875ADB0` is a 366-byte SEH-protected initializer in the hash-pinned
mapped installed-client `Main.dll`. It is directly called by verified
functions `0x5877EC80`, `0x58782CF0`, and `0x587EFD60`; the last has repeated
callsites. The complete extent matches at 100% under objdiff, including all
14 mapped operand targets.

The routine checks the resource manager at `0x58A246A4` for entry `0xCD`: the
entry count at `+0x160` must be greater than `0xCD`, and the data pointer at
`+0x190` must be non-null. When both conditions hold, it passes the entry data
at `+0x3340` to helper `0x58907100`; otherwise it passes null. After related
object initialization and cleanup calls, it writes `0x4E20` at receiver
`+0x26`, installs vtable address point `0x5898D7FC`, and applies state values
`0xFFFFFEFF` and `0x101` through `0x58902D20`. It assigns the first stack
argument through `0x58907360`, which stores that value at object offsets
`+0x60` and `+0x64`.

The routine allocates a 0xFC-byte child and initializes it through
`0x58907100`. The child pointer is stored at receiver `+0x118`; the first
argument and state value `0x101` are also applied to the child. Receiver fields
`+0x100`, `+0x108`, `+0x10C`, `+0x110`, `+0x114`, and `+0xFC` are then
initialized from arguments, constants, and the result of `0x5897CC36`.

The receiver class, purpose of vtable `0x5898D7FC`, name of resource entry
`0xCD`, meanings of the seven arguments and initialized fields, and child
object role are unresolved. Caller evidence establishes a shared composite
construction path, not its user-facing identity. Byte identity proves the
captured instruction stream only; runtime correctness and a playable-client
milestone are not established by this match.
