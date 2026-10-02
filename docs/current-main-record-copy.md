# Current Main.dll fixed-record copy path

This note records one narrow, byte-verified slice from the installed client's
captured `Main.unpacked.dll`. The four reconstructed functions total 189 bytes
and are listed in `config/NF2_2026/client-verifications.json`.

## Evidence from the original mapped image

Ghidra analysis of the captured image shows:

- `0x58753590` advances source and destination by `0x48` bytes and copies 18
  DWORDs for each element when the destination is non-null.
- `0x58753DE0` masks the receiver with `0xffffff00`, then calls
  `0x58753590` with the range and a receiver field at `this + 8`.
- `0x587535C0` advances both pointers by `0x808` bytes and copies `0x202`
  DWORDs per element when the destination is non-null.
- `0x58753E10` has the same wrapper shape as `0x58753DE0` and calls
  `0x587535C0`.
- The routines at `0x587540C0` and `0x58754360` call the corresponding wrappers
  twice and use the matching copy helpers at Ghidra call sites `0x587542A6`,
  `0x5875430E`, `0x58754575`, and `0x587545E3`. Their decompilation provides
  caller context; those parent routines are not part of this match set.

## Validation and limits

The emitted x86 instruction bytes were checked against the captured mapped
image with the current Main verifier and objdiff: all four functions compare
at 100.0%, covering 189 bytes. The progress inventory increased by four
functions and 189 bytes.

The exact record types, the purpose of the low-byte mask, and the runtime
conditions that reach these callers are still unknown. No dynamic trace or
visible-client behavior was established by this slice. The candidates encode
the captured instruction bytes directly in naked assembly; the byte match is
evidence of machine-code identity, not recovered original C++ or a playable
client feature. The broader current Main client inventory and capture limits
are described in [client unpacking](client-unpacking.md).
