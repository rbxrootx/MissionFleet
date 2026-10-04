# Current Main.dll text-buffer update

`FUN_58770A80` is a 57-byte helper in the hash-pinned mapped installed client
`Main.dll`. Its complete body matches at 100% under objdiff, with its one
mapped indirect-call operand checked.

The function takes a source-string pointer, loads the destination pointer
from receiver `+0x80`, and calls the indirect routine at `0x5898C198` with the
destination and source arguments. It scans the resulting destination buffer
to count bytes before the terminating NUL, stores that count at receiver
`+0x8C` and `+0x94`, and returns with `ret 4`.

Three verified functions call this helper: `0x587B83E0`, `0x58890110`, and
`0x588A9F20`. Ghidra's decompilation of `0x587B83E0` shows it obtaining
`MESSAGESTRING_ALL_CHATTING` through the observed string lookup function and
passing that result here. `0x58890110` contains repeated calls with text values
built in stack buffers. This supports the string-copy behavior; the exact
identity of `0x5898C198`, buffer ownership/capacity, and the roles of the two
length fields remain unknown.
