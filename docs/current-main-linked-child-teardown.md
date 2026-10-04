# Current Main.dll linked-child teardown

The pinned mapped `Main.dll` body `FUN_58843190` at `0x58843190` is 106 bytes.
The source in `src/client-current/Main/FUN_58843190.cpp` reproduces all 106
bytes under objdiff 3.8.0, with no mapped operand relocations. This is an
instruction reconstruction; `src/client-current/semantic/LinkedChildTeardown.cpp`
is a separate portable normal-path behavior model.

Verified selector parser `FUN_58846BD0` calls this function when its selector
is zero, or when its count check fails. Verified dispatcher `FUN_588C1650`
also calls it on the selected child receiver at `0x58A245B4+0xDC`.
The insertion helper `FUN_58843060` uses receiver `+0x130` as list head,
`+0x134` as list tail, and node `+0x50` as the backward link. The teardown
begins at `+0x134` and follows that link. Before each virtual slot-zero call
with argument `1`, it saves the next node from `+0x50`, so callback mutation
of that field cannot change the traversal path.

After each callback, it clears receiver `+0x144`, `+0x134`, `+0x130`, and
signed word `+0xFA` if the saved link is null or the number visited equals the
signed word. It keeps traversing a saved nonnull link even after this clear.
At exit it always clears `+0x134`, `+0x130`, and `+0xFA` and returns zero.
When the list is empty on entry, it skips the callback loop and leaves
`+0x144` untouched. The native model tests cover empty input, early clearing,
last-node clearing, and traversal after a callback mutates the node link.

The original node type, field `+0x144` role, and callback ownership semantics
are unknown. The native tests validate the reconstructed normal path, not the
installed client's runtime or emulator behavior.
