# Current Main CMF map-resource entry lookup

The installed `Main.dll` contains a string-keyed tree lookup used by the map and
harbor resource initializer. This slice adds 11 instruction-stream matches / 2,355
bytes at objdiff 3.8.0 byte-identical. The entries are generated from the exact
fresh Ghidra body ranges in
[`config/NF2_2026/main-map-resource-cache-entry-body-ranges.tsv`](../config/NF2_2026/main-map-resource-cache-entry-body-ranges.tsv).

## Original-code evidence

The byte-matched `FUN_58800360` initializer selects CMF filenames and resource
paths, calls `FUN_587ffaa0` at `0x5880086D`, then stores the loaded resource
pointer in the value slot returned by that routine. The root returns the address
at node offset `+0x28`; on a missing key it creates a node and returns that same
slot for the caller to fill. The node allocator requests `0x30` bytes. Key
comparison examines the stored lengths and bytes, using inline string storage
below the observed 16-byte threshold. Insertion code relinks and rotates nodes;
iterator helpers use parent/child links and the sentinel state byte at `+0x2D`.
The literal `map/set<T> too long` appears in the mapped image's exception path.
These observations support describing this as a map-like ordered tree, while the
precise C++ container and concrete key/value types remain unconfirmed.

The closure is 11 open functions across 12 exact Ghidra ranges. Its 24 internal
direct calls reach only the selected functions. The mapped instruction scan also
confirms 22 calls and three tail jumps to already byte-matched code. Ghidra exports
the three tail jumps as `CALL_TERMINATOR` control-flow edges, so the validator
checks their actual x86 `JMP` instructions separately from call instructions.
The matched map initializer, a matched `CPageFightOn_ControlMenuScreen`
destructor, and an additional open caller at `0x58748BC0` all point to the lookup
root or its iterator helper. `tools/verify_current_main_cmf_map_entry_lookup.py`
checks the manifest, full x86 instruction coverage and counts, exact internal and
outbound transfer sites, and those caller references.

## Limits

Static code establishes the cache access path, not a successful game run. The
container's exact C++ type, key normalization/case rules, concrete value type,
cache lifetime, and resource-load failure semantics remain uncertain. No runtime
lookup, client launch, or emulator visual test was performed for this subsystem.
