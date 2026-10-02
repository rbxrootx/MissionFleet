# Installed Core.dll runtime-error entry and lock helpers

This slice follows the null-acquisition branch documented in
[`current-core-locale-record-cache.md`](current-core-locale-record-cache.md).
Ghidra's caller references show the cache accessor `0x58876226` entering
`0x58862710` when acquisition fails. The verified entry checks runtime state,
can dispatch through the observed callback slot, calls the diagnostic path, and
then reaches the existing state helper. Its lock and diagnostic callees are
also captured in the pinned Core image.

Eleven functions totaling 739 bytes are verified at 100% byte identity by
objdiff 3.8.0 against the mapped installed-client `Core.dll` image. They cover
the error-path entry (`0x58862710`), its runtime-state descriptor check and
lock acquire/release wrappers (`0x58873129`, `0x58873057`, `0x588730B3`),
diagnostic/reset helpers (`0x58850DAF`, `0x58850FAB`, `0x5883274E`), the
runtime-record lookup (`0x58873101`), lock cleanup (`0x588732F8`), exception
frame setup (`0x58832760`), and error-category-to-global-slot lookup
(`0x588730BF`).

The large dispatcher at `0x5887316E` is **not included or counted**: the
current Ghidra instruction inventory reports an undecoded extent, and the
candidate emitter refuses to synthesize a function with missing instructions.
Its callback targets and diagnostic side effects are also unresolved. The
remaining functions in this slice are byte-verified from the emitted
instruction candidates; this verifies machine-code identity, not complete
source semantics or successful execution of the error conditions.
