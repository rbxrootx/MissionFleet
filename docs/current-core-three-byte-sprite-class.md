# Installed Core.dll three-byte-target sprite class

This slice follows the next class selected by the installed ship sprite parser.
Evidence is from the hash-pinned mapped `Core.dll` at base `0x58480000`.
Its selector-1 sibling is documented in the
[adjacent class evidence](current-core-three-byte-sprite-class1.md).

## Selection and dispatch

In the parser at `0x587B6D70`, the branch where `DAT_58905F98 == 3` selects
constructor `0x587D52A0` when its local class selector is zero. The constructor
calls shared base initialization at `0x587C9800` and writes address point
`0x588BE6BC` into the new `0x38`-byte sprite object. The mapped vtable entries
are:

| Offset | Target | Role supported by evidence |
| --- | --- | --- |
| `+0x00` | `0x587D5310` | Cleanup and deleting-destructor wrapper |
| `+0x04` | `0x587D5340` | Sprite slot 1 renderer |
| `+0x08` | `0x587D6E20` | Sprite slot 2 renderer |

The common screen dispatcher at `0x587BA830` invokes slot 1 on the selected
sprite object with the target buffer, position, clipping rectangle, and final
color/effect arguments. Combining that call with this object's vtable write
identifies `0x587D5340` as the dispatched method for this class. A specific
invocation site for slot 2 has not been established.

## Observed method behavior

Both render methods first reject a null payload at object offset `+0x0C` and
nonintersecting geometry. They clip the destination rectangle, query screen
origin and pitch through shared helpers, then traverse the sprite payload.
Ghidra's slot-1 pseudocode shows separate channel-mask arithmetic selected by
the supplied color/effect values and processes multiple pixels per iteration.
Slot 2 has a closely related traversal, but its parameter contract and the
reason the caller chooses it remain unknown. The relevant target-depth and
mask globals are runtime state; their zero-filled values in the mapped capture
do not establish their values after client initialization.

The behavior description follows the installed parser, vtable, dispatcher,
and Ghidra decompilation. The original pixel-channel layout, meaning of the
class selector, exact mask setup, and complete color/effect semantics remain
uncertain. No frame has yet been compared pixel-for-pixel against the original
client.

## Byte verification

The four class functions were reconstructed from the mapped instruction stream
and verified by the pinned VC6 plus objdiff 3.8.0 pipeline at 100% (11,770
bytes). The relocation audit checked 501 captured call/address operands.
This proves the emitted bytes for these functions, not recovery of their
original high-level C++ source.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x587D52A0` | Constructor | 45 |
| `0x587D5310` | Cleanup/destructor slot | 46 |
| `0x587D5340` | Slot-1 renderer | 6,836 |
| `0x587D6E20` | Slot-2 renderer | 4,843 |
