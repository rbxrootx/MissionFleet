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

## Counted sibling at `0x58842EF0`

Verified parser `FUN_58846B00` calls `FUN_58842ef0` for zero requested count
or a mismatch with receiver word `+0xF8`. The mapped function is 104 bytes
through the `ret` at `0x58842F57`; Ghidra's 101-byte inventory extent omitted
the final `pop esi; pop ebx; ret`. The next eight bytes are `INT3` padding.
The complete 104 bytes match objdiff 3.8.0 with no mapped operands.

This sibling starts from receiver tail `+0x13C`, follows saved node `+0x50`
links, and releases each visited node through virtual slot zero with argument
`1`. Its guard and stopping rule differ from `FUN_58843190`: if signed word
`+0xF8` is nonpositive or tail `+0x13C` is null, it returns without changing
any receiver fields. Otherwise it stops as soon as the saved link is null or
the visit count reaches `+0xF8`; it does not release a nonnull remainder.
It then clears `+0x140`, `+0x13C`, `+0x138`, and `+0xF8` and returns.
The shared native model tests cover both guard paths, count-limited release,
terminal-link release, and the saved-link behavior.

The sibling node type, callback ownership, and receiver `+0x140` role remain
unknown. No installed-client or emulator runtime test has been performed.
