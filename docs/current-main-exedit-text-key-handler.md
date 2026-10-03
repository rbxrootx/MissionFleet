# Current Main `CExEditTextScreen` key handler

The installed FleetMission `Main.dll` maps this handler at `0x587603C0`.
Ghidra reports five body ranges totaling 2,909 bytes:
`0x587603C0..0x5876051C`, `0x58760520..0x58760D43`,
`0x58760D50..0x58760ED5`, `0x58760EE0..0x58760F0C`, and
`0x58760F10..0x58760F38`.

## Identity and original-code evidence

Ghidra records a data reference to this entry at `0x5898DBD0`. The preceding
table starts at `0x5898DBB4`; the target address is its `+0x1C` slot. The
pointer immediately before the table leads to the RTTI complete-object
locator, whose type descriptor in the mapped image contains
`.?AVCExEditTextScreen@@`. This identifies the class and virtual slot without
recovering a source-level method name. No direct code callsite was found.

## Behavior visible in Ghidra

The routine dispatches on the key value at `param_2+8`. Values `0x10` and
`0x11` update key-state flags. `0x23` moves the text position to the end,
`0x24` resets it to the start, `0x25` and `0x27` move through the text, and
`0x2E` deletes at the current position. The traversal tests bit 7 of the
current byte and advances one or two bytes accordingly; the encoding itself
is not identified. The routine calls the screen's virtual text-measurement
method while it updates buffer, caret/viewport bookkeeping, and display bytes.

Values `0x26` and `0x28` examine the active edit text when the target screen is
one of two global screen objects. The code checks ASCII prefixes including
`/whisper` and `/reply`, along with other byte sequences, updates a global
state at `DAT_58A245C0+0x5FC`, and calls different UI helpers for the resulting
states. The semantics of those additional sequences and state values are not
recovered.

The source preserves instructions from the five Ghidra body ranges and was
compared against the pinned mapped image with ObjDiff 3.8.0. Local analysis
artifacts include `var/current-main-next/587603c0-ghidra.c`, the range and
reference log, and the mapped RTTI bytes around `0x5898DBB0` / `0x589A5548`.

## Unresolved details

The exact text encoding, semantic names for buffer offsets and flags, meaning
of the non-ASCII path prefixes, and runtime effects of the up/down branches
remain unknown. The byte match verifies emitted machine code; key-flow behavior
has not been tested in the emulator.
