# Installed Core.dll byte-stream read and write handlers

This slice covers the paired one-byte read and write paths in the installed
mapped `Core.dll`. The reader `0x5885A0D3` is directly called by
`0x5851EFF0` and `0x58521690`. It checks object flag bit 12 at offset `+0x0C`,
uses `0x5886CC56` to select a record from `0x589699B0`, and validates record
fields at offsets `+0x29` and `+0x2D`. On the accepted path it calls
`0x5885A08C`, which decrements the remaining-byte count at record offset `+8`,
reads an unsigned byte from the current pointer, advances that pointer, and
returns the byte. If the count underflows, `0x5885A08C` delegates to
`0x5886F03E`. The reader closes through `0x5885A1E4`, which forwards to the
already matched callback wrapper `0x58859D16`.

The writer `0x5885A245` applies the corresponding object flag and table checks.
It is called by wrapper `0x5885A3A6`, which enters and leaves shared gate
helpers `0x58850C9F(0)` and `0x58850CE7`; the wrapper itself is directly called
from `0x5851F040`. The accepted writer path calls `0x5885A379`, which decrements
the remaining-byte count, writes the low byte of its first argument, advances
the pointer, and returns that byte. Underflow is delegated to `0x588710FD`.
After writing, `0x5885A371` forwards to the same callback wrapper
`0x58859D16` as the reader. `0x5885A1EC` is a related 64-bit value accessor in
this handler family: it validates two pointers, reads through `0x58867D73`,
stores the 64-bit result, and returns an error for null pointers or the all-one
sentinel.

Null and rejected-state branches write error status `0x16`; the reader calls
`0x58850FAB`, while the writer sets fields in its supplied error record and
calls `0x58850F2E`. Rejected-state branches also call `0x58850750` with
`0x58906040`. These numeric statuses and callback contracts are preserved as
observations; their names and user-visible meaning are not established.

The eight newly matched functions are `0x5885A08C` (60 bytes), `0x5885A0D3`
(267), `0x5885A1E4` (8), `0x5885A1EC` (89), `0x5885A245` (294), `0x5885A371`
(8), `0x5885A379` (45), and `0x5885A3A6` (52). Together they cover 823 bytes
and 44 checked relocation operands. Each matches the installed Core image at
100% with objdiff 3.8.0 and the configured VC6 SP5 toolchain.

The “byte-stream” label is an inference from the pointer/count decrement,
single-byte load/store, and pointer advance. Object classes, data format,
record layout, index table, error meanings, and underlying overflow/underflow
contracts remain unresolved.
