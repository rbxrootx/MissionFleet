# Installed Core.dll buffered stream operations

This slice follows three connected operations over the same state record:
buffered position changes, bulk input, and buffered output, plus the related
single-byte update. Ghidra shows them using common object callbacks and stream
fields; labels such as “read,” “write,” and “seek” describe the observed data
flow and are not recovered source names.

The position path starts at `0x5885A3DA`, which rejects null inputs and forwards
the record values to shared-gate wrapper `0x5885A706`. `0x5885A740` provides a
second wrapper that sign-extends one input into a 64-bit pair. Both call
`0x5885A497`, which accepts operation values 0, 1, or 2, invokes callback slot
wrapper `0x58859D02`, delegates to `0x5885A61A`, and releases callback state
through `0x5885A537`. The operation routine checks flag bit 13, clears bit 3
under a lock, and asks `0x5885A541` whether the requested movement fits in the
existing buffer. That helper can call `0x5887130E` and the checked 64-bit
subtraction helper `0x5885A415`. If the fast path does not fit, the routine
flushes through `0x58859F62`, updates buffer pointers and flags, and calls
`0x5887134E` with the adjusted position.

The bulk input path is `0x5885A821` → `0x5885A77A` → `0x5885A7D5` →
`0x5885A898`. The public wrapper validates required arguments and builds the
records consumed by the inner wrappers. `0x5885A7D5` establishes a mode through
`0x5886E252`, calls the bulk routine, then restores mode through
`0x5886E2FD`. The bulk routine checks multiplication overflow, then loops over
the requested byte count: it copies already-buffered data through
`0x5884C890` or refills through `0x5886CC56` and `0x58870B79`. It updates
stream pointers and counts, sets flag bit 4 on a short transfer, and returns
the count of complete elements read. `0x5885A77A` brackets this path with
callback setup and cleanup through `0x58859D02` and `0x5885A7C9`.

The buffered output path is `0x5885AB61` → `0x5885AA66` → `0x5885AAC1` →
`0x5885ABF7`. The entry wrapper validates the object, operation constants,
size bound, and error record. The inner wrapper performs callback setup and
cleanup through `0x58859D02` and `0x5885AAB5`. The operation flushes or resets
related state through `0x58859F62` and `0x5886CE81`, clears selected flag bits
under a lock, chooses one of the observed capacities `0x140`, `0x180`, or
`0x400`, then calls `0x5885ABF7` to set flags, capacity, buffer pointers, and
remaining-byte count.

The single-byte path `0x5885AD58` calls `0x5885AC64` and exits through
`0x5885ADC3`. The worker checks mode flags, initializes buffer state through
`0x5887136C` if needed, adjusts the current pointer by one, then writes or
compares a byte according to flag bit 12. On success it updates the count and
flag bits under locks. Its exact operation name, including whether the compare
branch represents pushback, is unresolved.

The 21 newly matched functions are `0x5885A3DA` (59 bytes), `0x5885A706` (58),
`0x5885A740` (58), `0x5885A497` (157), `0x5885A61A` (236), `0x5885A541` (217),
`0x5885A415` (130), `0x5885A537` (10), `0x5885A77A` (76), `0x5885A7D5` (76),
`0x5885A7C9` (12), `0x5885A821` (119), `0x5885A898` (404), `0x5885AA66` (76),
`0x5885AAC1` (160), `0x5885AAB5` (12), `0x5885AB61` (150), `0x5885ABF7`
(51), `0x5885AD58` (101), `0x5885AC64` (244), and `0x5885ADC3` (8). They
cover 2,414 bytes and 75 relocation operands. Each matches the installed Core
image at 100% with objdiff 3.8.0 and the configured VC6 SP5 toolchain.

The object and stream record types, mode names, buffer ownership, flag
semantics, callback contracts, exact error meaning, and compatibility with
standard C file APIs remain unverified. The control flow, constants, pointer
updates, and return arithmetic are directly supported by Ghidra output from the
hash-pinned mapped image.
