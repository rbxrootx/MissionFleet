# Installed Core.dll ship-node property setters

This slice follows seven small property setters called directly by the
installed ship-scene constructor at `0x58525B10`. Their bodies were
decompiled from the hash-pinned mapped `Core.dll` at runtime base
`0x58480000`; the relevant source exports are kept locally in
`var/current-core-node-setters.c`. The installed file SHA-256 is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.

## Setter behavior

Five setters edit selected bits in the 16-bit field at node `+0x24`:

| Address | Field operation | Constructor use observed |
| --- | --- | --- |
| `0x58485DA0` | Replace bit 14 with input bit 0 | Called with zero on a scene-held node |
| `0x58485DE0` | Replace bit 1 with input bit 0 | Called with zero on the scene and child nodes |
| `0x58485E40` | Replace bit 15 with input bit 0 | Called with zero on child nodes |
| `0x58485EE0` | Replace bit 0 with input bit 0 | Called with zero on the scene and child nodes |
| `0x58485F90` | Replace bits 0–3 with the input low nibble | Called with zero on the scene and a child |

The flag operations preserve all bits outside their masks. The mapped callsites
show the receiver loaded into `ECX` and the value pushed as the sole explicit
argument. They do not establish human-facing names for the flags.

`0x58485E80` writes its 16-bit input to the signed ordering field at `+0x26`.
If the node has a second-list parent in `+0x40`, it calls `0x587B4CE0` with
that parent and the node; if it has a first-list parent in `+0x30`, it then
calls `0x587B4C00`. Those already matched insertion routines detach the node
from the current list and insert it again using the updated key. This keeps
each attached node in sorted order when its key changes. The scene constructor
passes fixed keys such as 10,000 and 20,000, plus a key derived from its
16-bit constructor input. No later live reordering was observed.

`0x58485F10` stores a DWORD at object `+0x68`. The constructor calls it with
`0x10101` on a child stored at scene object offset `+0x12138`; the field's role
and the constant's meaning remain unknown.

## Byte verification

The seven functions match the hash-pinned mapped image at 100% with the
repository's VC6 byte-emission toolchain and objdiff 3.8.0. They add 353 bytes
and two captured operand targets. The complete ship-node property and list
slice has 22 matched functions totaling 2,343 bytes; the whole installed
`Core.dll` ship path had 68 matched functions totaling 257,595 bytes before the
subsequent ordered child-render scheduler slice.

| Address | Bytes |
| --- | ---: |
| `0x58485DA0` | 51 |
| `0x58485DE0` | 50 |
| `0x58485E40` | 51 |
| `0x58485E80` | 88 |
| `0x58485EE0` | 47 |
| `0x58485F10` | 22 |
| `0x58485F90` | 44 |

The object-field and flag meanings not directly exposed by instructions remain
unresolved. Exact matching confirms emitted bytes against the mapped runtime
capture; it does not by itself recover original C++ names or behavior under a
running client.
