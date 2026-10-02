# Installed Core.dll numeric-string parser

This connected parser family consists of two parallel entry points and their
special-token handlers. Ghidra does not expose original symbols, so all names
remain address-based.

`0x5885BB18` and `0x5885BF85` both consume a string through caller-provided
reader state. Each records a sign, collects decimal or `0x`-prefixed
hexadecimal significand digits into a bounded output buffer, recognizes a
locale-provided decimal separator, processes an `e`/`E` or `p`/`P` exponent,
and returns status values including incomplete-input and exponent-range paths.
The second function follows the same broad structure but uses a distinct set
of character-reader and pushback helpers; why the original keeps both paths is
not established.

When the leading token is `inf`, the entry point dispatches to `0x5885C3F2` or
`0x5885C4AD`, which consume the case variants of `INF` and optional `INITY`.
For `nan`, it dispatches to `0x5885C568` or `0x5885C670`. These handlers accept
the `NAN` token and examine optional parenthesized payloads using the four
small table-comparison helpers `0x5885C778`, `0x5885C7B2`, `0x5885C7EC`, and
`0x5885C826`. The handlers return distinct status values for the paths they
recognize.

The ten functions cover 3,400 bytes and 124 audited relocation operands. Their
candidate sources emit instruction bytes from the Ghidra-bounded functions in
the pinned mapped Core image. The configured local verifier compiled them and
objdiff 3.8.0 reported 100.0% byte identity for every function. This proves
the machine-code match; the intermediate output structure, status-code names,
and reason for the parallel parser paths remain unresolved. The behavior above
is limited to control flow, data accesses, constants, and helper relationships
observed in Ghidra.
