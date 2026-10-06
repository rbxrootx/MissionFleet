# Current Main.dll `_AfxAygshellState` initializer

The function at `0x58748BE0` has the Ghidra label `_AfxAygshellState`. The
byte-matched event dispatcher `FUN_587BB700` calls it at `0x587BD30E` and
`0x587BD355`; the byte-matched state updater `FUN_587F8760` also calls it.
This documents the observed guard and global-object path without treating the
label as proof of a particular framework or class contract.

The function establishes an SEH frame and stack cookie, then reads guard byte
`0x589CFC44`. If clear, it sets the guard, calls `FUN_58748B60` with ECX set
to `0x589CFC0C`, and registers pointer `0x5898AF50` through `_atexit` at
`0x5897CE0F`. In either branch it returns the global address `0x589CFC0C`.

The initializer (103 bytes), object constructor `FUN_58748B60` (94 bytes),
`_atexit` wrapper (23 bytes), `__onexit` registration routine (156 bytes),
and four small CRT helpers/thunks (27 bytes total) now all reproduce their
mapped instructions exactly: 403 bytes across eight functions. The constructor
calls the already matched `FUN_587FF3E0` and `FUN_588FFDB0`; the registration
chain reaches already matched SEH helpers and the newly matched thunks at
`0x5897D7A8`, `0x5897D7AE`, and `0x5897D7B4`.

A depth-five direct-call audit from `0x58748BE0` reports every edge in this
slice as byte-verified. The `__onexit` routine also dispatches through runtime
pointer slots, including `0x5898C388`, `0x5898C38C`, and `0x5898C394`; matching
their six-byte jump thunks does not identify the targets loaded at runtime.
The callback at `0x5898AF50`, object type, registration-list representation,
shutdown behavior, and runtime initialization path remain unverified. No
emulator execution test has been performed.
