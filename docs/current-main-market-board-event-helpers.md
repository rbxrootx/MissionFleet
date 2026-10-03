# Current Main `CMarketBoard` event helpers

This layer follows the two RTTI-backed `CMarketBoard` virtual event methods
already matched at `0x5879FA60` (slot `+0x14`) and `0x5879F810` (slot `+0x18`).
Their direct event and state helpers now add 5,618 exact bytes across 14
functions. ObjDiff 3.8.0 verifies every body at 100% and checks 155 mapped
operand targets.

The trace reaches the verified `FUN_5879B3B0` detail renderer from three
small board handlers, `FUN_5879D3F0`, `FUN_5879D480`, and `FUN_5879D550`.
Those paths check receiver state at `+0x300`, query existing control helpers,
and refresh the detail renderer. The larger `FUN_5879D630` path reads repeated
child state and repeatedly calls text/row and geometry helpers. The board's
`FUN_58797960` helper branches on observed selectors `0xB`, `0xC`, and `0xD`;
`FUN_58797F10` follows a mode-`0xD` path, updates state at `+0x254`, and checks
child values before dispatching updates. `FUN_58798850` branches on the
observed state byte at `+0x2D8` and routes through the existing child, message,
and input helpers. The remaining short leaves and update handlers are directly
connected to the same two vtable methods.

The exact action names, event schema, meaning of selectors and state fields,
child-record types, text labels, and numeric units remain unresolved. These
matches establish machine-code identity and direct call relationships; they do
not prove the reconstructed client renders or handles events correctly. No
emulator runtime test was performed.
