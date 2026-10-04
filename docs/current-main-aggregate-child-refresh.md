# Current Main.dll aggregate and child-state refresh

`FUN_587E7E00` is a 281-byte routine in the hash-pinned mapped installed-client
`Main.dll`. Its verified callers are setup/update routine `FUN_587E8A40` and
battle-object update `FUN_587FD890`; the latter calls it when the receiver's
`+0x24` flags masked by `0x1F00` equal `0x0700`. The complete function matches
at 100% under objdiff, including all four mapped operand targets.

The original function inventory marked this extent as 273 bytes, ending at
`0x587E7F11` in the middle of the final instruction. The mapped bytes continue
with the immediate `1`, restore `EDI`, `ESI`, and `EBX`, and return at
`0x587E7F18`. The next indexed function begins at `0x587E7F20`, with seven
`0xCC` padding bytes between the return and that entry. The inventory now
records the full 281-byte body, and a regression test checks both the return
boundary and padding.

The function clears global dword `0x58A24900`. Unless receiver byte
`+0x20D64` is set, it resets receiver dword `+0x10A18`, walks the linked chain
rooted at global object `0x58A247F8+0x0C`, and adds a child's dword `+0x60` to
the receiver field when the child byte `+0x354` differs from the global
reference child's byte `+0x354` and the child pointer at `+0x100C` is nonnull.
It then zeroes twenty consecutive dwords from receiver `+0x124` through
`+0x170`. If receiver dword `+0x218E4` is zero, it calls `FUN_588B3720` for up
to eight child pointers beginning at `+0x218F0`, bounded by count `+0x104D0`,
sets `+0x218E4` to one, and returns.

The receiver class, global chain type, field units and meanings, callback
behavior, and user-visible result remain unresolved. No runtime or emulator
test was performed.
