# Current Main combat-effect state update

The installed FleetMission `Main.dll` maps `FUN_588f55c0` at
`0x588F55C0..0x588F60EE`, one contiguous Ghidra body totaling 2,863 bytes.
Ghidra reports no direct code caller and one data reference at `0x589A19D0`;
the runtime dispatch path and owning class remain unidentified.

## Behavior supported by the original code

The routine reads a state at word offset `0x50`. State `-1` runs two cleanup
helpers, conditionally calls `FUN_588F5120`, and invokes the object's virtual
slot `+0`. Values other than `1` return without entering the active update
path.

In state `1`, the substate at word offset `0x4F` controls the update. One branch
advances counters and position values at word offsets `0x5D` and `0x5E` using
increments at `0x49` and `0x4A`. It compares a weighted squared-distance
expression against thresholds at `0x5F` and `0x60`, then checks a result from
`FUN_588F4B10`. Result branches update or create visual/effect objects through
helpers including `FUN_587B7260`, `FUN_587B7400`, and `FUN_58907C80`. On the
successful hit path, it computes a value and calls
[`FUN_587EFD60`](current-main-combat-hit-resolver.md), the separately
byte-matched combat hit/damage resolver. Other branches move the substate
toward completion or set the state to `-1`.

On the active-state fallthrough, the routine walks the linked child list rooted
at word offset `0x0F` and calls virtual slot `+0x0C` on each node.

The source preserves the instructions from the Ghidra body and was compared
with the pinned mapped image using ObjDiff 3.8.0. Local analysis artifacts
include `var/current-main-next/588f55c0-ghidra.c` and its Ghidra extent and
reference log.

## Unresolved details

The class name, meanings and units of the state, coordinate, and threshold
fields, and the exact transition causes are unknown. The evidence is consistent
with a moving combat effect, but does not establish whether the object is a
shell, projectile, or another effect type. No original-client or emulator
timing test was performed.
