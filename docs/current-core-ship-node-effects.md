# Installed Core.dll ship render-node color and effect setup

This slice follows render-node state setup in the mapped installed `Core.dll`
at runtime base `0x58480000`.

## Setter behavior from Ghidra

`0x587B5540` stores its input at node offset `+0x28`, then traverses the
circular child chain rooted at `+0x3C` using each child's `+0x38` link. It
recursively applies the value to children whose flag word at `+0x24` has bit
14 set.

`0x587B55B0` follows the same child chain and stores its input at node offset
`+0x2C`. It recurses into children whose signed flag word at `+0x24` is
negative (bit 15 set).

The ship scene constructor at `0x58525B10` installs vtable address point
`0x588A6FD8`, builds ship-render children, and calls these setters with values
including color `0`, color `0x80`, effect `0x101`, and effect `0xFFFFFEFF`.
For example, the mapped callsite at `0x58526702` loads one indexed child into
`ECX` and passes `0xFFFFFEFF` to the effect setter; at `0x58526725` it loads a
child reference and passes `0x80` to the color setter.

Those callsites establish the constants and the propagation rules. They do not
yet prove that one particular sprite node receives color `0x80` and effect
`0x101` together: the constructor uses several child references, and the
recursive flag conditions affect descendants. Therefore the compositor's
`color=0x80`, `effect=0x101` branch remains a valid code path, but its use by a
specific ship sprite has not been independently established here.

## Byte verification

The constructor and two setters match the hash-pinned mapped image at 100%
with the repository's VC6 plus objdiff 3.8.0 verification pipeline: 5,703 bytes
and 136 captured operand targets.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x58525B10` | Ship scene construction | 5,507 |
| `0x587B5540` | Recursive color setter | 98 |
| `0x587B55B0` | Recursive effect setter | 98 |

The constructor's original class name, child-array meanings, flag names, and
same-node parameter pairing remain unresolved. Byte identity verifies the
captured instructions, not recovery of original C++ source.
