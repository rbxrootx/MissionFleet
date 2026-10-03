# Current Main `CMarketBoard` child state and geometry

This pass follows the constructor-child calls already matched in
`FUN_58799EB0`. Nine newly matched functions add 1,120 exact bytes; ObjDiff
3.8.0 verifies all nine at 100% and checks 52 mapped operand targets. A
two-level audit from child initializer `FUN_5896CAE0` confirms that its
inventory-backed callees through `FUN_5896C9A0` are now all verified.

The matched paths establish these observed relationships:

- `FUN_5896C7D0`, called twice by `FUN_5890B900`, constructs a child through
  `FUN_58909010`, installs vtable address point `0x589A2E60`, and stores
  arguments in fields `+0x58`, `+0x5C`, and `+0x60`.
- `FUN_5896CAE0` installs vtable address point `0x589A2E94`, checks shared
  state at `0x58A28534` and `0x58A28538`, and conditionally dispatches
  `FUN_5896C9A0`. That routine reaches two captured import thunks, the verified
  allocator, and `FUN_5890B5E0`.
- `FUN_5890B5E0` initializes a value with vtable address point `0x589A2B34`,
  zeroes four float fields and an integer field, then calls `FUN_5890B4C0`.
  The latter has three observed security-cookie paths.
- `FUN_589075C0` reads shared state and selected child data into receiver
  field `+0x1C`. `FUN_58907040` computes state at `+0xE8` and writes observed
  value `0xB` into indexed entries when `+0x60` is nonzero.

Class names, import identities, field units, state meanings, and the UI role
of these children remain unknown. The audit covers direct calls whose targets
are indexed as functions; it cannot resolve indirect virtual calls. No
emulator runtime test was performed.
