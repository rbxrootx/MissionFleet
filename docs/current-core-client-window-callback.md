# Installed Core.dll window callback dispatch

Window/context setup `0x5882DD60` places callback pointer `0x5882DA20` in a
`0x30`-byte record and passes that record to registered callback `0x58894438`.
Ghidra records the direct call site at `0x5882DDE7`. This ties the following
dispatch to the startup and event-loop path rather than an unreferenced helper.

`0x5882DA20` switches on its second argument. Code 2 calls teardown
`0x5882DBD0`. Code 3 obtains two values through callback `0x588944B8` and stores
them at offsets `+0x58` and `+0x5C` using `0x5882E530`. Code `0x10` forwards a
local record through a stored object's virtual slot `+0x10`. Code `0x1C`
invokes callback `0x58894448`, then calls `0x587BD560` when global
`0x58965F74` is nonzero. Code `0x20` calls `0x588944B4(0)`. After the switch,
every path reaches `0x5856E040`; a nonzero result calls `0x58894448` with the
original arguments.

`0x5856E040` returns 1 by default. For code 1 it calls `0x588944BC` with value
1. For code 7 it obtains a 16-byte record through `0x588944B8` and sends it to
`0x588944B0`. For code `0x112`, it returns zero when the third argument masked
with `0xFFF0` is `0xF100`. The helper `0x587BD560` independently checks receiver
offsets `+0x50`, `+0x68`, and `+0x6C`, calling `0x587C8930` for each nonzero
field.

The install site and message-like codes suggest this is a window-message
callback, but its native callback ABI has not been captured. The registered
callback contracts, local record layouts, coordinate meanings, object types,
receiver identity at the `0x587BD560` call, and symbolic meanings of codes 1,
2, 3, 7, `0x10`, `0x1C`, `0x20`, and `0x112` remain unresolved. No live window
messages were observed.

All four functions match the hash-pinned installed Core image at 100% under
VC6 SP5 and objdiff 3.8.0: `0x5882DA20` (328 bytes), `0x5882E530` (31),
`0x5856E040` (134), and `0x587BD560` (74), totaling 567 exact bytes.
