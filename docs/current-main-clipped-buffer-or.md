# Current Main.dll clipped buffer OR compositor

`FUN_587E5CB0` is a 338-byte routine in the hash-pinned mapped installed-client
`Main.dll`. It is directly called by verified functions `0x5873FE80`,
`0x588D4300`, and `0x588E5150`; `0x5873FE80` contains two callsites. The
complete extent matches at 100% under objdiff, including its one mapped operand
target.

The routine accepts four stack arguments and returns with `ret 0x10`. It scales
two arguments with signed multiply/divide sequences, temporarily decodes the
receiver bounds at `+0x1054C` and `+0x10550` using XOR `0xAAAAAAAA`, and derives a
base address from receiver `+0x10548`. It clips source and destination
coordinates to those bounds. Nested row and byte loops OR each in-range source
byte into the destination; negative source coordinates skip the source read.
The encoded bounds are restored before return.

The receiver class, argument roles and units, byte-plane or pixel format, and
the exact visual feature remain unknown. The callsites pass coordinate-like
values, but do not identify a particular rendering format. The byte match
establishes the captured routine's instructions, not its full runtime contract.
