# Current Main eight-slot value refresh

`FUN_58805ba0` is shared by two byte-matched update paths. `FUN_58806F60`
calls it at `0x58807260`, and `FUN_58807910` calls it at `0x58807B9D`;
both paths first compare the receiver's 16-bit field at `+0x1B6` with `2` and
load that receiver into ECX. Ghidra also records a direct call from
`FUN_58807370` at `0x58807542`, whose caller is not yet byte-matched.

## Behavior supported by the original code

If `[0x58A247F8]+4` is null, the helper returns. Otherwise it clears eight
DWORD accumulators at receiver `+0x290..+0x2AC`. For each index 0 through 7 it
walks the linked list rooted at `[0x58A247F8]+0x0C`, following node `+0x78`,
and selects nodes whose byte `+0x354` equals that index. For each match it reads
the DWORD at `[node+0x100C]+0x74` and accumulates an x87-converted value using
receiver ushort `+0x1C4`, `FUN_5897CC90`, and qword constant `0x5898CF20`.

It derives a second rounded quantity from receiver `+0x1C4` and those same
operands. The helper sums the seven accumulators whose index differs from the
active object's byte `+0x354`, multiplies that sum by the derived quantity,
and divides by the accumulator selected by the active object's byte. It writes
the result at `+0x64` of the object reached through `[0x58A245C0]+0x4A0`,
passes the value to `FUN_58907360`,
then calls `FUN_588A5400` eight times with each index and accumulator and
ECX=`receiver+0x174`.

The source at
[`FUN_58805ba0.cpp`](../src/client-current/Main/FUN_58805ba0.cpp) covers the
complete 496-byte linear body through `ret` at `0x58805D8F`. Ghidra counted 488
bytes across two disjoint ranges and omitted the contiguous 8-byte restore/ret
epilogue at `0x58805D88..0x58805D8F`; the indexed extent was corrected before
verification.

## Unresolved details

The receiver, linked-node, and eight-slot field meanings are unknown, as are
the semantic units of the arithmetic and the effects of `FUN_58907360` and
`FUN_588A5400`. The source preserves the original x87 instructions, but numeric
runtime behavior has not been tested in the emulator.
