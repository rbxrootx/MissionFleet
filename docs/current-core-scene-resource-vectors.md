# Installed Core.dll per-resource string vectors

After parsing one of the three resource files, `0x586EA6E0` calculates a
descriptor address with `0x586E94F0(scene, fileIndex)`. The base is scene offset
`+0x138`, and the helper advances by `0x0C` bytes per index. The indices are
0, 1, and 2 for `Announcement.txt`, `Patch.txt`, and `Eula.sdt`, so the mapped
scene contains three adjacent 12-byte descriptors. Vector helpers access each
descriptor as begin, end, and capacity pointers.

The loader obtains the parsed line count and calls `0x586EBCD0` on that
resource's descriptor to reserve enough capacity. It then retrieves each line,
constructs a temporary string, appends a copy through `0x5850BB30`, and destroys
the temporary. The append path compares end with capacity, uses the in-place
path when there is room, and otherwise allocates a larger buffer, inserts the
new element, transfers the existing elements, updates the descriptor, and
releases the old allocation. Elements have a 24-byte stride. The string helper
uses inline storage below 16 bytes and heap storage for longer values.

The mapped control flow establishes three per-file vectors of line strings and
their allocation/lifetime behavior. It does not establish that each string is
a visible widget, the display order or styling, or how these vectors are later
consumed by the scene. Text encoding and live screen output remain unverified.

The 25 functions covering string construction/destruction, vector append,
capacity growth, element transfer, and the scene's reserve handoff now match the
pinned Core image at objdiff 100%: **2,618 bytes**, with **99 operand targets
checked**. Evidence is the mapped Core pseudocode in
`var/core-scene-row-object.c`, `var/core-scene-row-collection.c`, and
`var/core-scene-row-vectors.c`, plus call arguments in the byte-matched scene
loader.
