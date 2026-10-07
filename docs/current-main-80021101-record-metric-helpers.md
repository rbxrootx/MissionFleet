# Current Main event 0x80021101 record metric helpers

This subsystem adds three exact body matches from the installed, mapped
`Main.dll`: `FUN_587590A0`, `FUN_587583E0`, and `FUN_58758760`. Fresh Ghidra
12.1.3 headless output reports four body ranges totaling 1,680 bytes and 530
instructions. ObjDiff 3.8.0 verifies the emitted instruction streams against
the pinned mapped image; the focused verifier checks closure reachability,
complete decoding, transfer targets, caller sites, and catalog membership.

## Evidence from the original

Byte-matched `FUN_587592C0` calls the root at `0x58759E39`. Byte-matched
`FUN_587BB700` reaches that caller at `0x587BFFA6` and `0x587C0116`, both in
event `0x80021101` paths. Within the matched caller, `FUN_587592C0` invokes the
root for indices 0 through 31, reads both output slots, and retains the larger
value when updating its aggregate.

The root initializes two output slots to zero, then reads the record tables
under the pointer at receiver `+8`. It requires the indexed record kind to be
5. It checks the paired pointers at nested offsets `+0xBC0` and `+0xBC4`,
accepts low status nibbles 0 or 2, and skips entries whose corresponding
encoded status word at `+0xAC0` or `+0xAC2` is `0xAA`. For each accepted entry,
it initializes a 0x38-byte scratch context and calls `FUN_587583E0`. A status
nibble of 2 first passes the entry's `+0xA2` key to `FUN_58758760`.

`FUN_587583E0` reads the type-5 record selected for the current index, derives
a 10,000-scaled value from the scratch fields and a decoded record byte, and
then applies integer arithmetic using coefficient data at `0x58A0ED18` and
`0x58A0B4D8`. Its observed calculation loop is bounded at 1,000 iterations.
`FUN_58758760` scans the count at `DAT_58A2481C+0xE4`, queries entries through
`FUN_58778DC0` with type `0x0B`, retains at most three matching keys with
status nibble zero, compares their `+0x99` bytes, and performs a final lookup.

## Uncertainty

The record schema, field units, coefficient meanings, metric's gameplay role,
and exact tie/default behavior of the selector are unresolved. The labels
“record metric” and “calculation” describe the observed data flow only; they do
not establish a domain name. The checked-in source preserves the recovered
instruction streams for exact matching, so this match does not claim that the
three routines have been rewritten as high-level C++. No emulator runtime test
was performed.

The pinned range and transfer manifests are
[`current-main-80021101-record-metric-body-ranges.tsv`](../config/NF2_2026/current-main-80021101-record-metric-body-ranges.tsv)
and
[`current-main-80021101-record-metric-transfers.tsv`](../config/NF2_2026/current-main-80021101-record-metric-transfers.tsv).
Run `python tools/verify_current_main_80021101_record_metric.py` for the
focused closure and caller audit.
