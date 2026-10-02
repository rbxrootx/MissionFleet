# Installed Core.dll locale-record lifetime path

This slice closes the locale cache's direct retain/release and nested cleanup
calls. Ghidra shows the cache setter `0x588762A7` retaining a changed-in record
through `0x58875F5D`, decrementing the old record through `0x588761A5`, and
calling `0x58875FDA` when the observed old-record count reaches zero. The
paired retain/release routines update the record's fixed counter fields and
six repeated entry pairs with x86 atomic operations. They also adjust a related
object count at `+0xB0` through `0x58876122` and `0x5887617C`.

The release path checks pointer counts and static sentinels before freeing
nested allocations through the already matched `0x5886CC10`. It releases two
nested pointer groups through `0x588762F7` and `0x58876756`; `0x5887614B`
checks the related object's count, invokes `0x58876C7D` at zero, then releases
the object. That cleanup routine visits the object's repeated pointer ranges
through `0x588769DC`, which releases each slot through `0x5886CC10`.

The 10 functions in this slice total 1,337 bytes and each passed the local
objdiff 3.8.0 byte verifier at 100%. Their direct cleanup edges remain inside
this slice or reach the previously matched allocator release routine.

The source-level record types, meanings of the individual counters, default
sentinels, and constructor/clone paths remain unresolved. The null-cache
failure path through `0x58862710` is also outside this lifetime slice.
