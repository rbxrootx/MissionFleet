# Current Main.dll fleet-join proposal record update

`FUN_588391B0` is now recorded as a 677-byte byte-identical function in the
installed 2026 `Main.dll` capture. This is a static match; it does not establish
that the original game or an emulator can run.

## Extent correction

The prior inventory extent was 669 bytes and stopped after `pop edi; pop esi`.
Disassembly of the mapped image continues at `0x5883944D` with `pop ebp`,
`pop ebx`, `add esp, 0x0C`, and `ret 8`. The function therefore ends at
`0x58839455`, immediately before eleven `INT3` alignment bytes and the next
indexed function at `0x58839460`. The full span from `0x588391B0` is 677 bytes.
Objdiff confirms all 677 bytes and all 29 audited operand targets match.

## Caller and behavior evidence

Verified callers are `FUN_587BB700` and `FUN_588C1650`. Both load a nested
receiver from the global object rooted at `0x58A245B4` and pass two stack
values. In `FUN_588C1650`, the path follows a localized
`MESSAGESTRING__MEMBER_FLEET_JOIN_PROPOSE` notification for receiver states 5
or 6, then calls `FUN_588391B0`. Its other nearby state-3 branch uses a squad
proposal message and a different helper. This supports a fleet-join proposal
context for that caller path, not a complete semantic label for this function.

The function checks two receiver-owned arrays. The first uses 0x54-byte
records; it searches a byte at record offset `+0x2D`, removes a match by
shifting later records left, and shrinks the array end. The second contains
pointers; the function searches it and can append through `FUN_588F6890`. If
the flag word at receiver `+0x24`, masked with `0x1F00`, equals `0x200`, it
calls helpers using receiver fields `+0x24C`, `+0x250`, and `+0x254`, then
updates `+0x220` using counts derived from the two collections.

## Uncertainties

The semantic types and ownership of the two collections, the key stored at
record `+0x2D`, the meaning of flag value `0x200`, helper contracts, and the
user-visible effect remain unresolved. The fleet-proposal connection is
supported by the `FUN_588C1650` message path, but the exact event relationship
and runtime behavior need additional evidence. No emulator test was performed.
