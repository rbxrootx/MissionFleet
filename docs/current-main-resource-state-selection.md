# Current Main.dll resource-state selection helper

`FUN_587ECCA0` is a 484-byte routine in the hash-pinned installed-client
`Main.dll`. Verified update routines `FUN_587FD890` and `FUN_588E5150` call it
when their saved byte at receiver `+0x218D9` must change. Both caller bodies
compare that byte with an observed result from `FUN_587871C0` and pass selector
1 or 2 on the corresponding transition. Other complete source paths show
selector 0 as well.

The helper stores its byte argument at `+0x218D9`. For selectors 0, 1, and 2,
it selects two resource offsets using the resource's `+0x160` threshold and,
on some paths, a non-null pointer at `+0x190`. It stores each selected pointer
in destination objects rooted at receiver `+0x10B64` and `+0x10B68`, then
copies six DWORD payload fields into each object. Values outside 0..2
only update the saved byte and return. ObjDiff validates the entire callable
extent, including `ret 4` and all eight mapped operand targets.

The resource/destination types, threshold meaning, selector labels, and effect
of choosing this resource pair remain unknown. The matched caller branches
show state transitions based on a boolean lookup, but do not identify a named
visual mode. No emulator test was run.
