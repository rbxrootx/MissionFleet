# Current Main CMF file parser

The installed `Main.dll` has a `CMapFileFDL` constructor and parser used by the
map/harbor resource initializer. This slice adds three exact instruction-stream
matches / 2,283 bytes at objdiff 3.8.0 byte-identical. Their exact Ghidra body
ranges are recorded in
[`config/NF2_2026/main-cmf-file-parser-body-ranges.tsv`](../config/NF2_2026/main-cmf-file-parser-body-ranges.tsv).

## Original-code evidence

The byte-matched `FUN_58800360` chooses a CMF path, calls
`FUN_587969d0(path)` at `0x5880084C`, then stores the returned map-file object in
the existing map-resource entry. Ghidra names the derived vtable
`CMapFileFDL::vftable` and the base vtable `CMapFile::vftable`. The derived
constructor initializes the base with a null path, installs its own vtable, and
calls the parser for a non-null path. The base constructor clears fields at
object offsets `+0x90` and `+0x94` on the null-path branch.

The parser reads a 0x8C-byte header followed by a 4-byte checksum. It compares
the first 40 header bytes with the mapped, space-padded string `Sangduck Map
File`, then performs four interleaved byte-sum accumulations over the header and
compares their combined result with the stored checksum. It allocates an array
of 0x7C-byte records from the observed count, branches on two record type bytes,
and reads record headers of 0x7C, 0x74, or 0x5C bytes. Additional checks compare
record sums and allocate per-record payload arrays from observed dimensions.

The three-function direct-call closure contains eight exact body ranges, three
internal calls, and nine outbound calls to already byte-matched functions. It
has no unresolved direct-call targets. The focused verifier checks full mapped
instruction coverage/counts, the exact internal and outbound transfer sites,
the matched initializer callsite, and the 40-byte mapped signature. The
constructor's zero-EAX path also calls matched `FUN_587750b0(path, 4)`.

## Limits

The fresh Ghidra decompilation types the parser as `void`, while the constructor
tests EAX after the call. The exact success/failure contract therefore remains
unresolved. The indirect file callback identities, remaining record schema,
payload encoding, and resource ownership are also unknown. The `FUN_587750b0`
mode-4 behavior is not established by this callsite alone. No runtime CMF parse,
client launch, or emulator visual test was performed for this subsystem.
