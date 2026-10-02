# Installed Core.dll async-I/O record dispatch

`WinMain`'s main loop `0x5882E060` routes event code `0x462` to context method
`0x5882D710` when the context object at global `0x589660D0` exists. The handler
increments field `+0x214`, formats the mapped string `Notify %5d` into the
context buffer at `+0x104`, and resolves a keyed record from a low-16-bit bucket
table before dispatching the event subcode.

The subcodes observed in `0x5882D710` are:

- `1`: pass the context to record parser `0x5882C520`.
- `2`: if the record's `+0x30` state is zero, set it to one and call its virtual
  slot `+0x0C`.
- `4`: call `0x584A0DA0`, which returns one.
- `0x10`: call `0x5882CC40`, which forwards values through registered callback
  `0x58894538`.
- `0x20`: if record field `+0x0C` is nonzero and its key is not `-1`, clear its
  `+0x30` state, call virtual slot `+0x10`, remove it from the keyed table,
  decrement context field `+0x21C`, call registered callback `0x58894558`, and
  mark the key `-1`.

`0x5882C520` maintains a growable and compactable receive buffer. It queries
available data through callback `0x58894550`, reads through `0x58894534`, and
processes complete records with a `0x14`-byte header. The first DWORD must be
`0x01020304`. The checksum path accumulates
`(header_byte[i] + 7) * i * 0x1D` for 20 header bytes and
`(payload_byte[i] + 0x0B) * i * 0x0D` for the payload. One state path xors the
result with `0xF3A91CD0`; another uses the already byte-matched table helper
`0x5848BCB0`, then xors and advances a per-context value by `0x0D`. A valid
record dispatches through virtual slot `+0x14`; a checksum mismatch dispatches
through `+0x04`. The special code `0x8002030D` enters `0x5882CCF0`.

For that special code, `0x5882CCF0` derives a value with constants
`0xF3A91CD0` and `0x7C8BA106`, replaces an object at context `+0x40`, allocates
a `0x9C`-byte object and an `0x800`-byte backing buffer, writes state and
derived values at offsets `+0x48`, `+0x4C`, `+0x54`, and `+0x58`, and submits
record code `0x8002030E` through `0x5882C990`. The send helper constructs a
20-byte header with marker `0x01020304`, computes weighted header/payload
checksums, and submits the record through callback `0x58894530`. For context
state `+0x44` nonzero, it follows a modified checksum path. A callback error
other than `0x3E5` enters cleanup `0x5882C440`.

The table helpers use `(key & 0xFFFF) * 4` to locate a bucket, follow 12-byte
linked nodes, and unlink a matching key before releasing the node through
`0x58831034`. `0x5882D670` decrements the tracked count only when it is nonzero
and the supplied key is not `-1`. Receive-buffer allocation goes through
`0x58831042` to the already byte-matched allocator `0x58831004`; copies use the
already byte-matched helper `0x5884C890`.

This establishes a mapped receive/dispatch/send lifecycle and exact checksum
arithmetic, but not a complete transport protocol specification. The registered
I/O callback ABI, context and record type names, meanings of most subcodes and
record codes, checksum/key purpose, payload schemas, and behavior for real
server traffic are unresolved. No packet capture or live client/server session
was available, so the observed arithmetic is not claimed to be cryptographic
or authenticated.

Eighteen functions from this path match the hash-pinned installed Core image at
100% under VC6 SP5 and objdiff 3.8.0, totaling 3,280 bytes. The mapped helpers
`0x5848BCB0`, `0x5884C890`, and `0x58831004` were already verified separately.
