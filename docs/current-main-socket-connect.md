# Current Main socket connection path

This slice follows the installed current `Main.dll` from a textual server
address to a registered asynchronous socket. Three Ghidra functions now match
the mapped capture at 100.0% under objdiff 3.8.0, covering 798 bytes and 29
audited operands:

| Function | Ghidra body | Bytes |
| --- | --- | ---: |
| `FUN_58971070` | `0x58971070..0x5897111C`, `0x58971120..0x58971259` | 487 |
| `FUN_58970f90` | `0x58970F90..0x5897106F` | 224 |
| `FUN_58970f10` | `0x58970F10..0x58970F66` | 87 |

The three bytes from `0x5897111D` through `0x5897111F` are outside the parser's
Ghidra body and are excluded from its source match.

## Address parsing and connection setup

Ghidra references show `FUN_58971070` called from `FUN_58790560` at
`0x58790727`, `FUN_587936d0` at `0x58793A06`, and `FUN_587b7990` at
`0x587B7B91`. Its numeric path parses four dotted decimal components and a
port. Its other path calls the imported `inet_addr`; when that returns
`0xFFFFFFFF`, it calls imported `gethostbyname` and reads the first returned
IPv4 address. It writes address family 2, byte-swaps the port, and passes the
resulting 16-byte address structure to `FUN_58970f90`.

`FUN_58970f90` is called at `0x58971240`. If the socket field at context `+4`
is `-1`, it calls imported `WSASocketA` with arguments `2, 1, 0, 0, 0, 1` and
stores the returned handle. It caches the supplied owner object at context
`+0x2C`, then calls `WSAAsyncSelect` with the window handle at owner `+0x218`,
message `0x462`, and mask `0x10`. It sets socket option `0x1002` at level
`0xFFFF` to `0x40000`, then registers the handle before calling imported
`connect` with the address structure and length `0x10`.

The call targets are grounded in the mapped image: the pointer values at
`0x5898C438`, `0x5898C43C`, `0x5898C440`, `0x5898C44C`, `0x5898C450`, and
`0x5898C45C` equal the captured Main IAT entries for `gethostbyname`,
`inet_addr`, `connect`, `WSASocketA`, `WSAAsyncSelect`, and `setsockopt`.

The observed return rule is unusual and remains unlabeled: a nonzero `connect`
result returns 1 and leaves the registration in place; a zero result calls
`FUN_58971480` to unregister the handle and returns 0. The `WSAAsyncSelect`
failure branch returns 0 directly, without a close/reset sequence in this
function. No runtime result has been captured to establish the intended return
contract or cleanup behavior.

## Handle-table registration

At `0x58971038`, `FUN_58970f90` calls `FUN_58970f10` with ECX set to the owner
object, the socket handle on the stack, and the socket-context pointer on the
stack. The helper allocates 12 bytes and uses
`owner + 0x220 + ((handle & 0xFFFF) * 4)` as a bucket pointer. On successful
allocation it writes three DWORDs—handle, socket-context pointer, prior bucket
head—and installs the new node as the head. It increments owner `+0x21C`.
The matched removal path in [the cleanup note](current-main-socket-cleanup.md)
selects the same bucket, unlinks by full handle, and decrements that counter.

If the 12-byte allocation fails, the insert helper writes zero into the
selected bucket and still increments `+0x21C`. That mapped behavior is recorded
as observed; the reason for clearing the bucket and the counter's intended
meaning are unresolved. The string parser's port semantics, DNS result
ownership, address validation, socket result contract, and all runtime/network
effects remain untested.

The exact mapped source is in [`FUN_58971070.cpp`](../src/client-current/Main/FUN_58971070.cpp),
[`FUN_58970f90.cpp`](../src/client-current/Main/FUN_58970f90.cpp), and
[`FUN_58970f10.cpp`](../src/client-current/Main/FUN_58970f10.cpp). Their
source hashes, segment ranges, compiler flags, and operand checks are pinned in
`config/NF2_2026/client-verifications.json`.
