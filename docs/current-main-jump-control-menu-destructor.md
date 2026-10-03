# Current Main.dll `CPannelJump_ControlMenuScreen` cleanup body

## Evidence source

The captured RTTI-backed vtable for `CPannelJump_ControlMenuScreen` is at
`0x5899FB0C`. Its slot `+0x00` scalar deleting destructor,
`FUN_588889D0`, calls `FUN_58888480` at `0x588889D3`. The cleanup body also
writes `0x5899FB0C` to the receiver vtable field, which independently ties this
method to the same class. The class constructor and vtable methods are
documented in [`current-main-jump-control-menu-screen.md`](current-main-jump-control-menu-screen.md)
and [`current-main-jump-control-menu-vtable.md`](current-main-jump-control-menu-vtable.md).

## Observed cleanup

The 662-byte body visits pointer fields at offsets `+0x60`, `+0x64`, `+0x68`,
`+0x6C`, `+0x6C` again, `+0x7C`, `+0x70`, `+0x80`, `+0x84`, `+0x8C`, `+0xAC`,
`+0x90`, `+0x94`, `+0xB0`, `+0xB4`, `+0xF0`, `+0xF4`, `+0xF8`, `+0x78`,
`+0xD4`, `+0xD8`, `+0xDC`, `+0xE0`, `+0xE4`, `+0xE8`, and `+0xFC`. For each
non-null pointer, it calls the first method in the pointed-to vtable with
argument 1, then clears the receiver field. It finishes by calling
`0x58902C10` on the receiver.

Objdiff 3.8.0 verifies all 662 bytes and four mapped operands.

## Limits

The child ownership rules, cleanup argument meaning, base helper contract, and
the repeated cleanup of `+0x6C` are unresolved. These notes describe the
captured instruction sequence, not reconstructed high-level C++. No emulator
runtime destruction test was performed.
