# Installed Core.dll base-aware integer parsing

This subsystem is the client's base-aware integer-string conversion path. It
contains two parser variants with separate character readers, plus their
conversion-state wrappers and directly used arithmetic, bounds, classification,
and pushback helpers. Function names remain address-based because Ghidra found
no original symbols.

`0x5885CDC0` initializes a conversion-state record with `0x58850C9F`, transfers
the caller's parser state through `0x5885DA94`, calls `0x5885CACC`, and restores
the state with `0x58850CE7`. `0x5885D110` follows the same sequence but calls
alternate parser `0x5885CE1C`. Their callers are `0x58860A36` and `0x58860A9B`,
respectively.

Each parser checks the supplied base, skips characters whose locale class
contains mask `8`, accepts a sign, and chooses decimal, octal, or hexadecimal
when the base is zero. A `0x` prefix selects hexadecimal; otherwise a leading
zero selects octal. Explicit bases from 2 through 36 are accepted. The parser
converts decimal and alphabetic digits, multiplies the two-DWORD accumulator
with `0x58831B50`, and compares against a quotient calculated by `0x58831BA0`
to track overflow. `0x58856ABC` checks the accumulated value against the limits
selected by parser flags. The parser pushes back the first non-digit through
`0x5886132B` or `0x58861372`, and `0x58860D5F` handles the observed end-pointer
state. Invalid-base and range paths write error values `0x16` and `0x22`.

The two paths use different readers: `0x58860617` delegates to stream adapter
`0x5885A0C8`, while `0x58860656` reads through `0x58860697`. Their pushback
adapters are `0x588613B9` and `0x588613D7`; one ultimately calls the already
matched stream-byte helper `0x5885AC64`. `0x58855EA0` initializes locale
classification state when needed, `0x5885761B` performs the classification,
and `0x58861412` validates parser state. Invalid requested bases dispatch
through `0x58850F2E`.

The 23 functions cover 2,846 bytes and 77 audited relocation operands. Their
source candidates emit instruction streams from Ghidra-bounded functions in
the pinned mapped Core image. The configured verifier compiled them and objdiff
3.8.0 confirmed 100.0% byte identity for each function. This establishes the
machine-code matches. The public API names, precise signed-versus-unsigned
contract, context flag meanings, and exact end-pointer protocol remain
unresolved; the behavior above is limited to observed branches, helper calls,
field accesses, limits, and return values.
