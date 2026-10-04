# Current Main.dll keyed 0x3C8-byte record refresh and insertion

`FUN_58786B40` consumes a caller-provided record, extracts its first 16-bit
word, and searches through the receiver's `+4` field using `FUN_58786750`. A
found entry receives a complete 0x3C8-byte copy at entry `+0x10`. On a miss,
the routine allocates 0x3C8 bytes, copies the input, and passes that record and
the extracted key to `FUN_58786A50`.

The insertion helper begins at receiver `+0x18`, follows links at node `+0`
and `+8`, compares the supplied key with node `+0x0C`, and observes marker
byte `+0x15`. It delegates insertion paths to `FUN_58786850` or `FUN_587A0950`
and updates the caller's two-word result record and flag. Existing verified
evidence for these helpers confirms link traversal and result-field writes;
their exact types and ownership contracts remain unknown.

Caller evidence ties the refresh routine to two paths: `FUN_587BB700` iterates
records from global object `0x58A245B8` in 0x3C8-byte steps, while
`FUN_588C4210` supplies a stack-local record. This supports batch processing
and local-record insertion/update, but does not establish domain-level names
or user-visible behavior.

Both functions match the mapped `Main.dll` bytes with objdiff 3.8.0:
`FUN_58786A50` matches 238 bytes with four relocation targets checked, and
`FUN_58786B40` matches 187 bytes with six targets checked. This is static
object-code verification only; no runtime client or emulator test was run.
