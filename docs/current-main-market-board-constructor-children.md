# Current Main `CMarketBoard` constructor children

The matched `FUN_58799EB0` constructor now has all 20 inventory-backed direct
call targets covered by verified function records. Five previously unmatched
child initializers add 1,449 byte-exact bytes; ObjDiff 3.8.0 checks all five
at 100% and verifies 45 mapped operand targets. The direct-call audit is
reproducible with `python tools/audit_match_callgraph.py 58799EB0`.

The constructor calls `FUN_5876E890` twice, passing observed selectors
`0x212` and `0x211`; that routine installs vtable address point `0x58995C04`
and sets field `+0x7C` to `0x100`. Its guarded child path also calls
`FUN_587A0460`, which installs `0x589984A8`, branches on fields `+0x160` and
`+0x190`, and creates `0x54`-byte children. Two other constructor sites call
`FUN_5890BCA0` and `FUN_5890B900` to initialize children with observed
vtable writes and paired `0x6C`-byte child paths. Finally,
`FUN_58907AC0` is reached in two branches driven by the child field at
`+0x194`; it installs vtable address point `0x589A2960` and invokes the
observed state helpers.

The other 15 direct targets were already verified in the project catalog.
The exact RTTI class names for these child vtables, control roles, resource
labels, branch meanings, and field semantics remain unresolved. Static byte
matches do not establish runtime appearance or behavior; no emulator test was
performed.
