# Installed Core.dll scene resource line parser

The three-path loader at `0x586EA6E0` passes the file buffer and the mapped
descriptor at `0x588B318C` to parser constructor `0x58797A90`. The descriptor's
first bytes in the pinned mapped image are `0A 00`; the delimiter set is a
single line-feed byte. The parser delegates to `0x58797CE0`, which splits the
buffer on that delimiter, skips empty spans, copies each line into a string,
removes one terminal carriage return when present, and appends the line to its
collection. Thus CRLF input becomes individual strings without the CR/LF
terminators. Encoding and the scene's rendering of those strings are not
established here.

`0x58857B70` implements the in-place split: it builds a 256-bit membership map
from the NUL-terminated delimiter bytes, skips delimiters at the cursor,
terminates each returned token by replacing the next delimiter with NUL, and
updates the cursor for the next call. Invalid pointer combinations take the
runtime error path with code `0x16`. Accessors `0x58797EE0` and `0x58797F30`
return the first and subsequent collection elements while advancing the stored
index; the scene loader uses these accessors to create one child object per
parsed line.

Evidence comes from the mapped `Core.dll` Ghidra decompilation at
`var/core-scene-record-parser.c`, the loader trace in
`var/scene-post-constructor-setup.txt`, the byte at `0x588B318C`, and direct
references from `0x586EA6E0`. The parser initializer, split routine, two
accessors, and tokenizer now match the pinned Core image at objdiff 100%:
**5 functions / 1,039 bytes**, with **39 captured operand targets checked**.
These exact machine-code matches verify the implementation; the semantic
description above follows the decompiled control flow and mapped delimiter.
The string encoding, runtime collection internals, child-object types, and
visible UI result remain unverified.
