# Current Main.dll bounded scalar adjustment

Verified callers `FUN_5873F020` and `FUN_5873FE80` pass their receiver in
`ECX` to `FUN_5873A300`. The routine reads signed DWORD `+0x230` and
zero-extended WORD `+0x2DE`. If the current value exceeds the bound, it
multiplies by 99 with 32-bit wraparound, divides the signed result by 100
with truncation toward zero, and stores it. Otherwise it stores the bound.
It reloads `+0x230`: if now below the bound, it applies the same wrapped,
signed calculation with multiplier 101; otherwise it stores the bound.

The [instruction source](../src/client-current/Main/FUN_5873a300.cpp)
matches all 102 original bytes with no mapped operand targets. A high-level
C++ candidate did not match: the compiler reordered the loads and simplified
the division under its signed-overflow assumptions. The separate
[portable C++ model](../src/client-current/semantic/BoundedScalarAdjustment.cpp)
preserves the observed 32-bit wrap explicitly. Its
[native scenarios](../tests/native/bounded_scalar_adjustment_test.cpp) pass
for equal, below, near-above, far-above, and overflowing inputs; run
`python tools/verify_bounded_scalar_adjustment.py`.

The neighboring address `FUN_5873A370` has a distinct caller; adjacency does
not establish a shared receiver type. The scalar's unit, the bound's meaning,
and reachability of overflow during normal play remain unknown. No runtime
client test was performed.
