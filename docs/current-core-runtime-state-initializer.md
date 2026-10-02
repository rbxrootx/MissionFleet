# Installed Core.dll one-time state initializer and callbacks

Reset helper `0x5885781F` passes a three-pointer record in ECX to
`0x58857887`. The initializer sets up a 20-byte local record through
`0x58832760(&0x588ED100, 0x14)`, checks completion byte `0x5896960C`, and sets
lock word `0x58969604` under a locked write when initialization is still
pending. These are observed fields; their synchronization and state meanings
are not named in the binary.

The first value addressed by the record controls two branches. For value zero,
the routine compares stored value `0x58969608` with `0x58906040`; if unequal, it
transforms the stored value with `0x5885786C` and calls the result as a function
pointer. It then processes record `0x589698A8` through `0x58865C2B`. For value
one, it processes record `0x589698B4` through the same helper. Value zero also
causes the initializer to walk callback range `[0x5889465C,0x5889466C)`. The
second callback range `[0x58894670,0x58894674)` is always walked. The iterator
`0x58865E63` skips null entries and invokes the others. In the captured mapped
image, the first range contains `0`, `0x588690DF`, `0x5887C5BB`, and
`0x58859C70`; the single slot in the second range is zero. Runtime code may
change those slots.

Callback `0x588690DF` builds a small local record with two DWORD values set to
4 and calls `0x58868DAB`. That helper initializes a 12-byte record, checks the
global pointer at `0x58969984` against sentinel `0x58907460`, conditionally
transforms it through `0x588762A7`, then calls `0x58868E0D`. Callback
`0x5887C5BB` reads `0x58907D30` and calls slot `0x588942F8` unless the value is
`-1` or `-2`.

The third callback pointer, `0x58859C70`, targeted executable bytes that Ghidra
had not assigned to a function. Its entry was seeded from this table reference,
named `FUN_58859C70`, and exported as a 76-byte function. It calls
`0x5885A030` and `0x588701D2`, iterates three DWORD pointers at
`0x58969618`, calls `0x5886CE81` for each stored value and callback slot
`0x58894218` with that value plus `0x20`, releases the array through
`0x5886CC10`, and clears `0x58969618`.

For either selected global record, `0x58865C2B` prepares local fields set to 2
and calls `0x58865972`. That function initializes a 12-byte record, calls
`0x58865B3B`, cleans a field through `0x588659C1`, and returns the helper's
result. `0x58865B3B` decodes a stored callback range with `0x58906040`, walks it
backward, overwrites each consumed entry with the cookie before invoking its
decoded callback, refreshes the endpoints after callbacks, releases a
non-sentinel allocation through `0x5886CC10`, and writes the cookie to three
record fields. The null-start path returns `-1`; other paths return zero. The
callback record and allocator contracts are unknown.

The initializer sets `0x5896960C` and the record's output byte to one when its
second pointed value is zero. This captures the direct writes and conditions;
it does not establish what higher-level state they represent. Callback
identities, function-pointer ABIs, local record layouts, cookie runtime value,
and callback side effects remain unresolved.

The 11 functions in this slice match the hash-pinned installed Core image at
100% under VC6 SP5 and objdiff 3.8.0, totaling 865 bytes with 60 relocation
operands checked: `0x58857887` (196), `0x5885786C` (27), `0x58865E63` (43),
`0x58865C2B` (57), `0x58865972` (76), `0x58865B3B` (218), `0x588659C1` (12),
`0x588690DF` (39), `0x5887C5BB` (23), `0x58868DAB` (98), and the newly
indexed callback `0x58859C70` (76).
