# Installed Core.dll ship render-node construction and child lists

This slice traces the ship scene's node-construction path through the shared
base initializer, optional animation-record setup, and both parent-child list
insertions. Behavioral evidence comes from Ghidra output for the installed
mapped `Core.dll` image at base `0x58480000`; the source-code interpretation is
limited to the fields and control flow visible in that output. The installed
file SHA-256 is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.

## Constructor and attachment path

The scene constructor at `0x58525B10` calls `0x58482270` for its root object,
then repeatedly allocates child nodes through `0x58482320` and
`0x58486810`; it also creates a derived node through `0x58534900`. Those direct
calls and the surrounding child-field stores appear in the selected Ghidra
decompilation at `var/current-core-ship-setup.c`.

`0x58482270` delegates to `0x584822D0`, installs vtable address point
`0x58894C00`, copies constructor inputs to `+0x50` and `+0x54`, sets `+0x58`
to `0x100`, and clears `+0x5C`. `0x584822D0` calls the shared initializer
`0x587B4990`, installs `0x58894BE0`, and sets bit 5 in the 16-bit flags field
at `+0x24`.

The other node constructors use the same base initializer. `0x58482320`
installs vtable address point `0x58894C20`, clears `+0x50`, and calls
`0x58485F30` with an optional record. When present, that record pointer is
stored at `+0x50`; two DWORDs at record `+0x10` are copied to node `+0x0C` and
`+0x10`, and four DWORDs at record `+0x18` are copied to node `+0x14` through
`+0x20`. `0x58485990` supplies the `+0x10` pointer, while the already matched
`0x58482CD0` supplies the `+0x18` pointer. The sibling constructor
`0x58486810` installs vtable address point `0x58894C94` and uses the already
matched animation-record attachment helper `0x58486C60`.

The derived constructor `0x58534900` calls `0x58486810`, installs vtable
address point `0x588A7020`, clears node fields `+0x50`, `+0x5C`, `+0x64`, and
`+0x68`, and sets `+0x58` to 1. It initializes `+0x60` to the value returned
by `0x584C9DE0` minus 1. That getter returns zero when the object pointer at
`+0x54` is null; otherwise it returns the 16-bit value at that object's
`+0x0C`, through `0x584C9DC0`. Ghidra's pseudocode misrepresents the getter
argument as a stack-cookie value; mapped instructions at `0x58534956` load the
node pointer into `ECX` before the call, consistent with the getter reading
the node's `+0x54` field.

`0x587B4990` initializes the common vtable, position and size, flags, signed
ordering key at `+0x26`, color/effect defaults, and link fields for two child
lists. If its explicit parent argument is nonzero, it calls `0x584AED70` with
the parent and new node. That wrapper calls `0x587B4C00` first and
`0x587B4CE0` second:

| List | Parent root | Child links | Order | Observed structure |
| --- | --- | --- | --- | --- |
| First | `+0x3C` | `+0x34` / `+0x38`; parent at child `+0x30` | signed 16-bit child `+0x26`, ascending | Circular doubly linked list; a singleton's links point to itself |
| Second | `+0x4C` | `+0x44` / `+0x48`; parent at child `+0x40` | signed 16-bit child `+0x26`, ascending | Null-terminated doubly linked list; equal keys are inserted after existing equals |

The insertion routines also detach an already-linked node before inserting
it. `0x587B4C00` checks child `+0x30`; when nonzero, it returns early if the
signed DWORD at the start of the child is negative, otherwise it calls
`0x587B50A0`. That remover repairs the old parent's circular links, updates
the `+0x3C` head when the removed node was first, restores the child's
`+0x34/+0x38` self-links, and clears `+0x30`. `0x587B4CE0` calls
`0x587B5130` when child `+0x40` is nonzero. That remover repairs the old
parent's null-terminated links or `+0x4C` head, then clears child `+0x40`,
`+0x44`, and `+0x48`. Thus the code supports detaching and reinserting a node
in both lists; the validity of arbitrary or corrupted link states is not
tested.

## Byte verification

The 15 functions in this node-construction/list slice match the hash-pinned
mapped image at 100% with the repository's VC6 byte-emission toolchain and
objdiff 3.8.0. They add 1,990 bytes and 23 captured operand targets. Across
this `Core.dll` verification profile, all 61 recorded ship-path functions
match 257,242 bytes.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x58482270` | Root-node constructor | 96 |
| `0x584822D0` | Root base constructor | 76 |
| `0x58482320` | Geometry-node constructor and record hookup | 133 |
| `0x58485F30` | Optional record geometry copy | 86 |
| `0x58485990` | Record `+0x10` accessor | 17 |
| `0x58486810` | Animation-node constructor | 133 |
| `0x58534900` | Derived node constructor | 177 |
| `0x584AED70` | Two-list attachment wrapper | 38 |
| `0x587B4990` | Shared node base initializer | 461 |
| `0x587B4C00` | Ordered circular-list insertion | 215 |
| `0x587B4CE0` | Ordered null-terminated-list insertion | 198 |
| `0x587B50A0` | Circular-list removal | 133 |
| `0x587B5130` | Null-terminated-list removal | 158 |
| `0x584C9DE0` | Conditional record-field getter | 51 |
| `0x584C9DC0` | 16-bit record-field accessor | 18 |

Byte identity confirms the emitted instructions against the captured mapped
image; it does not recover the original C++ class or field names. Constructor
exception behavior, the delegated relink routines, higher-level parent/child
semantics, and live-client node behavior remain unverified.
