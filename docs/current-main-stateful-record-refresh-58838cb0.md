# Current Main stateful record refresh

`FUN_58838cb0` is a state-dependent receiver update routine in the installed,
mapped `Main.dll`. The compiler-built source matches the corrected 1,279-byte
extent at 100% under objdiff 3.8.0, with all 64 mapped operand targets checked.

## Evidence from the original code

The verified event-routing method `FUN_587bb700` and verified dispatcher
`FUN_588c1650` each contain three direct calls to this function. Their call
branches inspect the receiver's byte at `+0x321`; calls pass a record pointer or
null as the stack argument.

The callee reads that pointer and gates its work on receiver byte `+0x321`.
In state `1`, a null pointer leads to a `0x24C`-byte allocation and initializer
call. With a record pointer, the code reads fields at `+0x0C`, `+0x2D`,
`+0x46..+0x5A`, and `+0x5C`; bounded copies through verified `FUN_58731ce0`
write strings into child receivers at `+0xC4`, `+0xC8`, and `+0x178`. It also
updates child fields and uses mapped callbacks to construct values from two
triples of 16-bit record fields. When the record byte at `+0x5A` is nonzero, the
method stores state `5` and calls byte-matched `FUN_587b92b0`; the other branch
clears that state byte after updating controls. The wrapper forwards the value
from record `+0x5A`, payload pointer at `+0x5C`, and selector `0x80010F12` to
the verified outbound sender. See [the wrapper notes](current-main-simple-outbound-messages.md)
for its exact argument mapping and unresolved payload meaning.

In state `6`, it processes the string at record `+0x24`, scans collections
referenced at receiver `+0x190` and `+0x258`, and calls insertion/update helpers
when entries match. It then updates receiver field `+0x220` through verified
`FUN_58907360` and clears `+0x321`.

The shared range helper reached while processing the `+0x258` collection is
documented in [the helper notes](current-main-shared-collection-range-helper.md).

## Corrected function boundary

The original 1,262-byte inventory extent ends after `pop ebp` at `0x5883919D`,
before the saved `EBX` restore and return sequence. The mapped bytes continue
with `pop ebx` at `0x5883919E`, the stack-cookie check call at `0x588391A1`,
`add esp, 0xD0`, and `ret 4` at `0x588391AC`. The corrected 1,279-byte extent
ends after that return. The following `int3` at `0x588391AF` is alignment; the
next indexed function starts at `0x588391B0` and remains outside this body.

## Uncertainties

The owner class, record schema, state meanings, collection roles, callback
contracts, child identities, and visible gameplay effect are unknown. The
event callers establish a dispatch path, not raw socket framing or server
protocol semantics. No client runtime or visual test was performed.
