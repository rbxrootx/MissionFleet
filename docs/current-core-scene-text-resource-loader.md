# Installed Core.dll scene text-resource loader

The post-construction scene setup routine at `0x586EB810` calls
`0x586EA6E0` three times. The strings at mapped Core addresses `0x588B3094`,
`0x588B30A8`, and `0x588B30B4` decode directly as `\Announcement.txt`,
`\Patch.txt`, and `\Eula.sdt`; each is paired with table index 0, 1, and 2
respectively. The dispatcher calls `0x586EB810` immediately after constructing
the scene object at `0x586E8270`.

Ghidra shows `0x586EA6E0` opening the supplied path through `0x587B3300`,
recording success/failure for the selected index, reading the file into a
size-plus-one buffer, closing the handle, and parsing the buffer with
`0x58797A90` and the table at `0x588B318C`. It obtains a record count, creates
an object for the first record and one for each remaining record, stores the
count in indexed state, frees the temporary buffer, and releases a temporary
resource through `0x58797BF0`. The roles of those objects and the text format
are still unknown; no live screen comparison has identified how this content is
presented.

The first Ghidra inventory extent for `0x586EA6E0` was 664 bytes and ended at
the first byte of `mov esp, ebp`. The mapped x86 stream continues with that
epilogue, `pop ebp`, and `ret 8` at `0x586EA97C`; three `int3` alignment bytes
follow before the next function at `0x586EA980`. The inventory builder now uses
the full 669-byte function span so matching covers the actual return sequence.

The loader and its three-call setup wrapper match at objdiff 100%: **669** and
**57 bytes**, with **50 captured operand targets** audited. The complete Core
verification profile passes all 140 recorded functions at 100%. This verifies
the mapped code and the recorded string/call targets; it does not establish the
record structure or the final UI behavior.
