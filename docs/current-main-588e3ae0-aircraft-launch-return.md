# `FUN_588E3AE0`: aircraft launch and return event handler

The candidate at [`src/client-current/Main/FUN_588e3ae0.cpp`](../src/client-current/Main/FUN_588e3ae0.cpp)
preserves 1,894 body bytes from the installed mapped `Main.dll` across three
Ghidra ranges: `[0x588E3AE0, 0x588E3C9E)`, `[0x588E3CA0, 0x588E3FED)`, and
`[0x588E3FF0, 0x588E424B)`. The two omitted gaps contain alignment
instructions (`mov edi,edi` and `lea ecx,[ecx]`). The final range includes the
stack cleanup and `ret 4`. The body is emitted as literal x86 instruction
bytes and matches the mapped body at 100% objdiff using the pinned compiler;
verification also checked all 96 mapped operand relocations.

The matched caller `FUN_588E4260` routes command `0x16` to this handler. At
`0x588E4943`, it retains the receiver in ECX and pushes EDI as the payload
pointer. Ghidra also identifies two calls from `FUN_58738940` at
`0x58738BD4` and `0x58738C34`; these load ECX from `[ESI+0x0C]` and pass EAX or
EDX as the payload pointer, but that caller is not yet byte-matched.

The handler uses the payload's low five bits as an index into a receiver
table. The selected entry must have a string whose first byte is carriage
return; the payload's high three bits choose an aircraft-event mode. Mode 0
processes launch records and checks reported count bounds. The decompilation
contains the class labels `Scouter`, `Fighter`, `Torpedo Bomber`, and `Dive
Bomber`. Modes 1 and 2 process return records, with mode 2 taking an additional
local-player/target path. One invalid-count route reports code 5 through
`FUN_587B9B30` and calls `FUN_58970AE0`, whose shutdown behavior is separately
matched.

The full packet schema, receiver-field meanings, unmatched helper effects,
and mode-2 target behavior remain uncertain. No packet replay or emulator
test has been performed, so this match establishes native code identity, not
end-to-end aircraft behavior.
