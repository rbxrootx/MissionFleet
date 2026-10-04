# Current Main screen-state update helper

`FUN_5890BD90` is a 121-byte helper directly called by five verified
functions: `FUN_587B83E0`, `FUN_587EFD60`, `FUN_587FAEC0`, `FUN_587FC9C0`, and
`FUN_587FD890`. Several callers contain repeated calls. The callsites establish
that this routine is shared; they do not establish a specific control or screen
name.

The decoded body divides the signed difference between receiver fields `+0x20`
and `+0x18` by the value at `+0x5C`. It compares receiver field `+0x88` with
that quotient and with `+0x98`. On the observed out-of-range paths it calls
`FUN_58902E10` with receiver values derived from `+0x5C`, subtracts `+0x5C`
from `+0x20`, calls `0x589081E0` with zero, invokes the function pointer stored
at `0x5898C42C`, and stores the returned value at `+0x94`.

The routine then calls `FUN_58902E10` with the negated `+0x5C`, restores `+0x20`
by adding `+0x5C`, calls the same function pointer using its second stack
argument, and passes that argument with the callback result to
`FUN_589088D0`. It returns with `ret 8`. These are the observed field accesses
and call effects; the class, field units, callback identity, and user-visible
result remain unresolved.

The source at `src/client-current/Main/FUN_5890bd90.cpp` reproduces the full
indexed extent. `tools/verify_client_matches.py` reports 121/121 bytes identical
under objdiff 3.8.0, with five relocations checked. No original-client runtime
test was performed.
