# Installed Core.dll client exit cleanup

The event loop `0x5882E060` calls `0x5882DBD0` from both of its observed
termination paths: missing required context at `0x5882E40A`, and a queued-event
poll result at `0x5882E460`. The same cleanup routine is also called from setup
callback `0x5882DA20` at `0x5882DB18`.

`0x5882DBD0` clears three dispatch globals, then calls `0x5856E0D0`. It releases
the non-null objects in globals `0x589660D0`, `0x58965F78`, and `0x58965F74`
through each object's first virtual slot with argument 1, clearing each global.
It calls registered callback `0x58894484`, zeroes a `0x94`-byte record, sets
its first DWORD to `0x94`, and passes it to callback `0x58894134`. When a field
in that record is 2 after the callback, it calls `0x588944C0` with global
context `0x58965F1C`.

The helper `0x5856E0D0` is guarded by global `0x5896222C`, so its sequence runs
only while that byte is zero. It releases two objects through virtual slot
`+0x08`, runs helpers `0x585008C0`, `0x58500D90`, `0x585008C0`, `0x58500DB0`,
and `0x58857B5A(0)`, writes `0x41` and zero to globals `0x589604E0` and
`0x589604E1`, sets the guard, releases globals `0x58965F24` and `0x58962228`
through virtual slot zero with argument 1, then calls registered callback
`0x58894468(0)`. Global `0x58962228` holds the resource-scene object created
by `0x5856E240`, tying this path back to the startup/resource screen.

These call-site and field effects establish a teardown path in the mapped Core
image. The concrete object types, virtual-slot argument meaning, most helper
effects, callback contracts, local record schema, and status value 2 meaning
remain unknown. Runtime shutdown and repeated-call behavior were not captured.

Both functions match the hash-pinned installed Core image at 100% under VC6 SP5
and objdiff 3.8.0: `0x5882DBD0` (388 bytes) and `0x5856E0D0` (360 bytes), for
748 exact bytes. The verifier checked 42 relative and absolute operand targets.
