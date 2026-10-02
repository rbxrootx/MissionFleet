# Installed Core.dll runtime-error dispatcher and diagnostic helpers

This slice follows the null-acquisition branch documented in
[`current-core-locale-record-cache.md`](current-core-locale-record-cache.md).
Ghidra's caller references show the cache accessor `0x58876226` entering
`0x58862710` when acquisition fails. The verified entry checks runtime state,
can dispatch through the observed callback slot, calls the diagnostic path, and
then reaches the existing state helper. Its lock and diagnostic callees are
also captured in the pinned Core image.

Fourteen function spans totaling 1,372 bytes are verified at 100% byte identity
by objdiff 3.8.0 against the mapped installed-client `Core.dll` image. They cover
the error-path entry (`0x58862710`), its runtime-state descriptor check and
lock acquire/release wrappers (`0x58873129`, `0x58873057`, `0x588730B3`),
diagnostic/reset helpers (`0x58850DAF`, `0x58850FAB`, `0x5883274E`), the
runtime-record lookup (`0x58873101`), lock cleanup (`0x588732F8`), exception
frame setup (`0x58832760`), error-category-to-global-slot lookup
(`0x588730BF`), and the dispatcher (`0x5887316E`). The notification chain adds
`0x58850EF7` (40-byte local buffer setup, notifier call, and cleanup),
`0x58850FBB` (the sibling five-zero-argument wrapper), and `0x58850FD9`
(the reporter that routes status `0xC0000417` through observed callback slots).
The three direct callees of `0x58850EF7` were already independently verified.

Ghidra reports dispatcher body ranges `0x5887316E..0x588732E5` and
`0x58873308..0x5887335F` (464 summed bytes). The complete mapped instruction
stream is contiguous from entry through the assigned cleanup `INT3` at
`0x5887335F`, a 498-byte span. It includes the normal epilogue beginning at
`0x5887333C` and bytes between Ghidra's discontiguous ranges, including the
independently matched lock-cleanup helper at `0x588732F8`. The inventory now
records that evidence-based linear span. Consequently, progress byte totals
sum function spans and do not represent unique image-byte coverage.

The callback targets, category meanings, and diagnostic side effects remain
unresolved. Ghidra marks the first call from `0x58850FBB` as non-returning even
though the decompiled body of `0x58850EF7` returns, so reachability of its
second call remains uncertain. All fourteen spans are byte-verified from the
emitted instruction candidates; that establishes machine-code identity, not
complete source semantics or successful execution of the error conditions.
