# Current Main factory-help state update

`FUN_58853010` is the `+0x0C` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0`. The constructor `FUN_588522B0` installs that vtable.
The original vtable slot at `0x5899E8EC` contains `0x58853010`. The method
occupies one contiguous 540-byte body range.

## Evidence from the original code

The body reads a 16-bit state value at object offset `+0x24` and checks its
`0x1F00` mask. For masked value `0x0200`, it calls `FUN_58852D60` and stores
the returned 16-bit value at `+0x274`. For `0x0100` and `0x0400`, it compares
coordinates at `+4/+8` with targets at `+0x50/+0x54`, computes step sizes, and
calls `FUN_58902E10`. It then advances `+0x58/+0x5C` toward `+0x28/+0x2C`,
capping each step at `0x20`, through `FUN_58902D20` and `FUN_58902CE0`.
When the coordinates settle, it changes the masked state bits. Finally, it
walks the child chain and calls each child's virtual method at vtable offset
`+0x0C`.

ObjDiff 3.8.0 compares the source object against the captured target at 100.0%
for all 540 bytes, and the verifier resolves all nine recorded operand targets.
The source uses only explicit `_emit` bytes, so this match pins Clang-cl 19.1.4
by SHA-256 for source compilation. The other matches continue to use the
recorded MSVC 6 compiler.

## Uncertainties and validation status

The numeric state meanings, helper semantics, animation meaning, and child
chain terminator are unresolved. Emulator behavior has not been tested. The
recorded MSVC 6 compiler cannot launch on this host (Windows error 623), so the
function uses a separately pinned compiler for its explicit machine-byte body.
