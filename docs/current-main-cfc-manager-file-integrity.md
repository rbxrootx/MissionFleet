# Installed Main.dll CFCManager file-integrity and update-list path

The mapped client identifies the class as `CFCManager`: the vtable address point
is `0x58996358`, its Complete Object Locator is at `0x589A5A78`, and its
TypeDescriptor at `0x589BA8D0` contains `.?AVCFCManager@@`. The five adjacent
vtable entries are confirmed from pointers in the mapped image:

| Slot | Function | Observed role |
| --- | ---: | --- |
| `+0x00` | `58774DB0` | Manager event and status handler |
| `+0x04` | `58771F50` | Increments a shared lifetime counter |
| `+0x08` | `58772BD0` | Decrements the counter and performs final release work |
| `+0x0C` | `58771F60` | Stores its second argument at receiver `+4` |
| `+0x10` | `58773640` | Cleanup wrapper with the observed deleting-call flag |

`FUN_58772EB0` installs this vtable and initializes the manager's record
storage. The manager event handler calls the callback adapter at `0x58774D50`;
the adapter's event-flag branches carry the file scan and filter-dialog
functions as callback targets. Its data reference at `0x58774D6B` ties the
scan routine back to the adapter. `FUN_58774C40` enters the filter selector,
which chooses among `*.*`, `*.Data`, `*.cxf`, `*.cmf`, `*.kmf`, and `*.spr`
from observed receiver flag bits.

The file-scan route runs `FUN_587743E0` before `FUN_587745A0`. The first helper
branches on receiver flags and updates the observed `0x108`-byte record list.
The second walks `0x118`-byte file records between receiver fields `+0x6C` and
`+0x70`, builds each path with the mapped `"%s\\%s"` format, and sends the
opened file through the mapped reader. Its reporting branches use the exact
strings `"%s : Invalid File (%d / %d)"`,
`"%s : modified (%d / %d)"`, and `"%s : OK (%d / %d)"`. The current and total
record counts are included in each status. The specific file comparison
criterion is not named by the fields or format strings alone.

The adjacent update-list path includes `FUN_58773AB0` and `FUN_587741B0`.
Their Ghidra bodies branch on the literal keys `#message`, `#zipurl`, and
`#listurl`, then populate the manager's observed `0x108`-byte record storage.
The meaning of those records, any network transfer performed by neighboring
code, and the relationship between these entries and the scan results remain
unresolved. The final release path emits the observed `FCModule is
Safe-Released` message when the shared counter reaches zero, releases the
`0x108`-byte records, and clears the shared manager pointer.

The focused slice contains 59 byte-matched functions: 11,026 indexed bytes in
74 Ghidra body ranges, covering 3,766 instructions. Both fresh Ghidra body and
call-edge exports agree with the tracked exact-range manifest at
`config/NF2_2026/main-resource-integrity-scan-body-ranges.tsv`. The focused
verifier checks the RTTI record and all five vtable slots, the callback data
reference, closure reachability from the vtable and observed callback routes,
all mapped instructions, direct-transfer targets, and the filter/status/tag
strings. ObjDiff 3.8.0 reports every emitted function at 100.0%; direct
transfers resolve within the slice or to already byte-matched functions.

These source files preserve the mapped instruction bytes. They are not a claim
that the original C++ source or the whole update protocol has been recovered.
The client path that opens this manager is not yet connected to a
byte-matched caller, and 122 indirect calls plus seven indirect jumps remain
dynamic. Record schemas, most flag meanings, the exact comparison algorithm,
callback contracts, and the live client appearance are unresolved. No emulator
runtime test was performed.

Run `rtk python tools/verify_current_main_cfc_manager_file_integrity.py` with
the local mapped Main.dll and Ghidra exports to repeat the focused audit.
