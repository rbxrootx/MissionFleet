# Shared child-state reset and release routine

`FUN_58788620` is a 340-byte routine in the installed, mapped `Main.dll`.
ObjDiff 3.8.0 verifies its reconstructed instruction stream byte-for-byte and
checks all ten mapped operand targets.

## Evidence from the original

Both known callers gate the call on the observed `0x0F` mode value and pass
their child pointer at receiver offset `+0x21C4C`. `FUN_587E98A0` reaches it
when its owner field `+0x218C4` is zero and owner word `+0x105F0` is `0x0F`.
The mapped resource initializer `FUN_58800360` compares the global object's
word `+0x204` with `0x0F` before calling it.

The routine conditionally resets receiver `+0x928` and, when `+0x910` is
nonzero, checks a child field at `+0xC8` against value `5` and compares another
field with a byte at global-chain child `+0x354`. It then walks six pointers
from global object `0x58A245C4` at four-byte intervals and clears bit zero in
each pointed-to object's word at `+0x24`. For receiver ranges rooted at
`+0x870` and `+0x858`, it calls `FUN_587AEDB0`, whose verified body updates a
two-word range pair. It frees and clears `+0x910`, then invokes the first
virtual method with argument `1` on non-null children at `+4`, `+8`, and
`+0x10`; the body explicitly clears `+4` and `+8` after their calls.

## Uncertainty and validation

The receiver and child types, mode/status meanings, six-entry table schema,
range-helper ownership effects, and virtual method contracts remain unknown.
Callers place this operation in resource-initialization and state-reset
paths, but do not establish a user-visible effect. The indexed 340-byte body
ends at a shared continuation after its final virtual call. No runtime or
emulator test was performed.
