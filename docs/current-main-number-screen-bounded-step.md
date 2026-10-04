# Current Main.dll `CNumberScreen` bounded steps

RTTI identifies vtable `0x589A2938` as `CNumberScreen`. Its slots `+0x18`
and `+0x1C` are the 13-byte forwarders `FUN_58907380` and `FUN_58907390`.
Each reads the signed step at receiver `+0xEC` and returns the result of its
corresponding helper. Both forwarders now compile from C++ to their exact
original bytes, including symbolic direct-call relocations.

The original 87-byte `FUN_589072A0` body is the upper-bound path. It does
nothing and returns zero when signed current `+0x64` is already at or above
signed upper bound `+0x54`. Otherwise it uses its stack argument as a step,
clamps that step to `upper-current` if `current+step` exceeds the upper bound,
adds the applied step to `+0x64`, and returns the applied step. The parallel
88-byte `FUN_58907300` path compares current against lower bound `+0x50`,
clamps when `current-step` falls below the lower bound, subtracts the applied
step from `+0x64`, and returns it. Neither path adds an opposite-bound clamp.

On the non-early-return path, each helper checks child pointer `+0x30`, even
when the applied step is zero. When present
and bit five of its word `+0x24` is set, it calls the child's vtable slot
`+0x18` with `(receiver, 2, 0)` on the stack. Both paths then call the
already matched digit-state helper `FUN_58907040`. The early-return paths
skip both calls. The two helper bodies remain instruction-stream match
sources, totaling 175 bytes; their direct calls to `FUN_58907040` are audited.

The step's game unit, child's role, callback contract, and signed-overflow
behavior remain unresolved. No runtime client test was performed.
