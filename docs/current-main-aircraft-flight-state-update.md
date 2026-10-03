# Current Main aircraft flight-state update

`FUN_5873e4e0` occupies the contiguous Ghidra range
`0x5873E4E0..0x5873EFE0`, totaling 2,816 bytes. The source emits the decoded
instruction stream from the pinned mapped `Main.dll`; ObjDiff verifies it under
the recorded Visual C++ 6.0 SP5 profile.

## Evidence from the original code

Ghidra reports one direct caller, `FUN_5873f020`, at `0x5873F612`. The verified
caller checks an aircraft subtype/state and invokes this function before
continuing its update. The sibling command handler `FUN_5873cee0` has separately
verified diagnostic strings naming aircraft move, attack, and return-to-base
commands.

This routine reads and writes a state field at object offset `+0x31C`, current
and target scalar values at `+0x33C` and `+0x340`, and additional control values
at `+0x348`. It updates target coordinates at `+0x4A0/+0x4A4`, reads target or
linked-object pointers around `+0x4D8/+0x490`, compares squared coordinate
distances, and branches through observed state values 0, 1, 2, and 3. The body
also computes heading/velocity-like values from mapped lookup tables, calls
effect and projectile-related helpers, and submits command 5 to the verified
`FUN_5873cee0` handler in one terminal path. These descriptions follow the
observed reads, writes, strings, and calls; they do not assume recovered units.

ObjDiff reports a 100% match for all 2,816 bytes, with 85 mapped operand targets
checked against the captured image.

## Uncertainties

The owning class and meanings/units of the fields remain unknown. The effect
helper and its exact firing semantics are not confirmed. The method has not been
exercised in the emulator, and no runtime aircraft movement or combat test was
performed.
