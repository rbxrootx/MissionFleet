# Current Main shared object initializer at `0x5875BE60`

`FUN_5875be60` occupies 915 bytes in the captured `Main.dll`. Its contiguous
extent is `0x5875BE60..0x5875C1F3`; the final instruction is `ret 0x34` at
`0x5875C1F0`. The next indexed function starts at `0x5875C200`, leaving 13
bytes after the return. ObjDiff 3.8.0 verifies all 915 bytes and checks 23
mapped address operands.

## Evidence from the original code

Two verified callers reach this method. The `CShell_MapObjectScreen` update
`FUN_588d4300` and weapon-fire handler `FUN_587b4b70` each pass the receiver in
`ECX` and 13 stack values. Both use the returned pointer-like value in a
following `FUN_5875BAE0` call and store it at receiver offset `+0x198`. The
caller context links this helper to shell-screen and weapon-fire paths, but
does not prove the exact object or effect.

The body saves `ECX` as the receiver, forwards caller values to `FUN_5875BB10`,
initializes receiver fields including offsets `+0x12C` through `+0x180`, calls
additional helpers such as `FUN_5897CC4E`, `FUN_587B7350`, and
`FUN_58907990`, then restores its exception state and registers before
returning. The `ret 0x34` confirms that it removes 52 bytes of stack arguments.
The exact order and meaning of those arguments and fields are not known.

The two verified caller records provide the surrounding evidence:
[shell map-object update](current-main-shell-map-object-update.md) and
[weapon-fire event handler](current-main-weapon-fire-event.md). The
instruction-level reconstruction is
[`FUN_5875be60.cpp`](../src/client-current/Main/FUN_5875be60.cpp).

## Uncertainties

The original class name, object schema, argument meanings, helper contracts,
and resulting visual or gameplay effect remain unresolved. No emulator test
was performed.
