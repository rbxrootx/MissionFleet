# Installed Core.dll locale-record cache path

This slice follows the locale table pointer used by character classification
and wide-character conversion in the installed client. Ghidra's direct call
references show that accessor `0x58863F1F` is used from both scan output helpers
(`0x58861476` and `0x588614EC`) and classifier `0x5885761B`, as well as other
Core routines.

The accessor obtains the current runtime state through `0x58868BA0`, reads its
cached locale pointer at `+0x4C`, asks `0x5886CF21` to refresh that pointer when
the global locale changes, and returns the resulting pointer. The updater
compares the cached pointer to `DAT_58969984`, checks the runtime-state flag,
and obtains a replacement via `0x58876226`. That helper checks the cache under
lock index 4, publishes the shared pointer through `0x588762A7`, and releases
the lock through `0x58876286` / `0x58863C64`; the lock-entry wrapper
`0x58863C1C` dispatches through its corresponding indirect callback. The cache
setter retains a changed-in pointer through `0x58875F5D`, releases the old
pointer through `0x588761A5`, and passes a non-static record with zero
references to `0x58875FDA` for release. Those retain/release and cleanup paths
are byte-matched in [`current-core-locale-record-lifetime.md`](current-core-locale-record-lifetime.md).

All nine functions in this slice, totaling 346 bytes, were verified at 100%
byte identity by objdiff 3.8.0 against the pinned mapped `Core.dll` image.

The runtime state's source-level type and flag, lock callback targets, and
null-allocation failure path remain unresolved. The zero-reference error path
through `0x58862710` is outside this verified slice.
