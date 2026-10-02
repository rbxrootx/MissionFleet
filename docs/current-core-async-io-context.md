# Installed Core.dll async-I/O context construction

Window/context setup `0x5882DD60` allocates `0x40220` bytes, calls
`0x5882D330` with the main context at `0x58965F1C`, and stores the result at
`0x589660D0`. This is the object later passed to event handler `0x5882D710`
from the main loop and described in [the async-I/O record notes](current-core-async-io-records.md).

The constructor installs vtable address point `0x588BE7D4`. It calls
`0x5882D2F0` with receiver `+0x220`; that helper clears 65,536 DWORDs, a
`0x40000`-byte region. Together, the `+0x220` header and `0x40000`-byte table
account for the setup allocation size `0x40220`. The constructor initializes
event count `+0x214` to zero, stores the supplied context at `+0x218`, clears
outstanding count `+0x21C`, and zeroes the status buffer at `+0x104`. The
event lookup path sets ECX to object `+0x220` before calling `0x5882D6C0`,
confirming that the low-16-bit keyed buckets are this inline table.

The constructor also zeroes a 400-byte local buffer and calls registered
callback `0x58894564` with mode `2` and that buffer. If its 16-bit result is
zero, the constructor clears the buffer again, calls `0x58894568`, then retries
`0x58894564` with the returned 16-bit value. A nonzero result from either
`0x58894564` call causes it to pass mapped string `Error` to `0x587B41E0`, then
call `0x58857B5A(0)`. That wrapper enters the reset/state-transition path
documented in [the reset transition notes](current-core-async-io-reset-transition.md).
The reporting helper obtains a value through
`0x588941FC`, passes it and constants `0x1300`/`0x400` to `0x5889438C`,
forwards the local result and error string through `0x5889446C` with value
`0x10`, then calls `0x58894388` with that local result. The wrapper forwards
`(value, 0, 0)` to `0x5885796F`; its byte-matched helper path is detailed in the
reset transition notes.

This ties the event handler's counter, callback context, status string, and
keyed-record table to explicit constructor writes. Callback purposes, the
400-byte configuration schema, table-node type, vtable method roles, and
callback meanings remain unknown; no setup callback or live server event was
captured.

All four functions match the hash-pinned installed Core image at 100% under
VC6 SP5 and objdiff 3.8.0: `0x5882D330` (386 bytes), `0x5882D2F0` (58),
`0x587B41E0` (78), and `0x58857B5A` (22), totaling 544 exact bytes.
