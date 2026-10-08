# Installed Main periodic selection-state update

`FUN_5873BF90` is now reconstructed as an exact mapped-byte function: ObjDiff
3.8.0 reports all 835 bytes identical, and Capstone decodes the complete body
as 223 x86 instructions. Its source file preserves the instruction stream from
the captured mapped `Main.dll`; it does not claim to recover the original C++.

The behavior is tied to the fresh Ghidra decompilation of the function and its
byte-matched caller, `FUN_5873FE80`. At mapped call site `0x58740888`, the
caller reaches it only when receiver `+0x460` is zero, word `+0x2CE` is
nonzero, dword `+0x228` is positive, and either word `+0x2CC` equals 2 or
dword `+0x45C` is nonzero. After the call, the caller jumps over its adjacent
`FUN_5873BBA0` path. Both independent Ghidra exports report the same call edge.

Within the function, the global value at `DAT_58A2459C+0x104F4` gates the main
work to multiples of 25. One branch compares its remainder phase with receiver
`+0x4CC`, walks the global list rooted at `DAT_58A247F8+0x0C`, and scans eight
linked buckets beginning at each list entry `+0x1390` with a 16-byte stride.
The decompilation shows filters through `FUN_588D66E0` and `FUN_58775980`,
record checks at `+0x460`, calls to `FUN_5897CC90` and `FUN_5897CCA0`, and
conditional writes to receiver fields `+0x4C8..+0x4E4` and `+0x31C`. The
other phase branch calls `FUN_5873B540`, may call `FUN_587E5E10`, and restores
or clears those state fields according to the returned values. These are
observed control-flow and memory operations; names such as “candidate,”
“selection,” or “saved state” are working labels, not recovered class or field
definitions.

All eight direct calls from the function land at verified byte-matched
functions: `0x588D66E0`, `0x58775980`, `0x5897CC90`, `0x5897CCA0`,
`0x5873B540`, and `0x587E5E10` (two targets are each called twice). The
focused verifier checks the complete mapped body, the matched caller's gate,
these eight call sites, two independent fresh Ghidra body/edge exports, and the
selected fresh decompilation.

The owning class, counter units, list and bucket record schemas, field
meanings, and helper contracts remain unresolved. No live client or emulator
runtime test was performed, so this slice establishes byte identity and static
behavior only.
