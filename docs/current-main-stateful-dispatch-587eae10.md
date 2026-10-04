# Current Main stateful update at `0x587EAE10`

`FUN_587eae10` is a 1,079-byte method in the captured `Main.dll`. Its mapped
extent runs from `0x587EAE10` through the `ret` at `0x587EB246`. The next
indexed function begins at `0x587EB250`, leaving nine bytes between the return
and that entry. ObjDiff 3.8.0 verifies all 1,079 bytes and checks 59 mapped
address operands.

## Evidence from the original code

The verified queue-screen update `FUN_587fd890` calls this method at
`0x587FE74C` with `ECX=ESI`, and only when its receiver field `+0x20E28` is
nonzero. The verified `CPannelFactoryHelp` method `FUN_58853c20` calls it at
`0x58853CEA` with `ECX` loaded from `0x58A2459C`. Neither caller pushes stack
arguments. The two call paths connect the helper to queue-screen updates and
factory-help events, but do not identify its exact UI effect.

The body first calls `FUN_588D6510` with the object at `0x58A2459C+0x7C` and
returns on a false result. It also tests receiver/global state before entering
the main path. That path reads fields including receiver offsets `+0x20E20`,
`+0x20C9C`, `+0x20E24`, and `+0x20CA0`. A word at `+0x20C9C+0x90` selects one
of three codes (`0x11`, `0x12`, or `0x13`). The method scans indexed receiver
state, calls `FUN_587A5840`, updates indexed values, advances a shared value at
`0x58A24900`, and conditionally dispatches through global objects and virtual
calls. These are instruction-level observations; the offset names and code
meanings are not known.

The last instructions restore saved registers, check the stack cookie, release
the `0x104`-byte local frame, and return. This confirms the captured extent
includes the full normal epilogue. Source:
[`FUN_587eae10.cpp`](../src/client-current/Main/FUN_587eae10.cpp).

## Uncertainties

The receiver class, field identities, selected-code meanings, shared value's
purpose, and visible behavior remain unresolved. The contracts of
`FUN_588D6510`, `FUN_587A5840`, and the global virtual calls are also unknown.
No emulator test was performed.
