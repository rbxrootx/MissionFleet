# Current Main.dll intrusive-list removal

`FUN_588F5120` is an 85-byte removal helper in the hash-pinned mapped
installed-client `Main.dll`. It is called by verified functions
`0x587A4440`, `0x588D4300`, and `0x588F55C0`; `0x588D4300` has repeated
callsites. Its full extent matches at 100% under objdiff with no mapped
relocations.

The list stores its head at receiver `+4`, tail at `+8`, and count at `+0x0C`.
Each linked node stores previous and next pointers at `+4` and `+8`, with its
payload at `+0x0C`. The function returns immediately for a null payload;
otherwise it scans from the head for a matching payload. When found, it repairs
the previous or head link and the next or tail link as required, then
decrements the count. It returns with `ret 4` and does not free the removed
node. A missing payload leaves the list unchanged.

The list owner and payload type remain unknown. Caller contexts show this
helper removes embedded objects from several lists, but do not identify what
those objects represent.
