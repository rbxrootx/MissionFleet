# Installed Core.dll scene resource-vector cleanup

The phase-8 dispatcher constructs the 0x14C-byte scene object through
`0x586E8270`, whose mapped vtable is `0x588B3194`. After construction,
`0x586EB810` loads `Announcement.txt`, `Patch.txt`, and `Eula.sdt` into three
adjacent 12-byte descriptors beginning at object offset `+0x138`; see the
[scene resource loader](current-core-scene-text-resource-loader.md) and
[vector population](current-core-scene-resource-vectors.md) evidence.

Ghidra identifies `0x586E9510` as the deleting-destructor wrapper for the
cleanup routine `0x586E9070`. The wrapper calls cleanup unconditionally and,
when bit 0 of its second argument is set, passes the object and size `0x14C` to
`0x58831034` before returning the original pointer. Cleanup resets the vtable,
releases and clears multiple stored object pointers through virtual slot 0, then
uses `0x586EBD10` to count the 12-byte descriptors at `+0x138`. For each
descriptor, it calls `0x586EBB80`.

`0x586EBB80` checks whether begin and end differ. If the vector is non-empty,
it destroys the live 24-byte string-element range through `0x58504AE0` and sets
end equal to begin. This helper leaves the vector's allocation and capacity
fields untouched at that point. Cleanup then clears another vector and calls
additional helpers `0x586E9050` and `0x5856B7C0`.

Four functions in the deleting wrapper, scene cleanup, descriptor count, and
string-vector clear path now match the pinned mapped Core image at objdiff
100%: **1,121 bytes**, with **13 operand targets checked**. The class's recovered
name, most child-field ownership semantics, allocator contracts, and whether
any controls consume or display the loaded lines remain unresolved. The
decompilation proves the cleanup sequence, not the visible client result.

Evidence is the mapped Core Ghidra output in `var/core-scene-descriptor-callers.log`
and `var/core-scene-row-vectors.c`, plus the byte-matched constructor and
resource-loader call sites.
