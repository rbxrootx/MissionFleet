# Screen event handler evidence for `FUN_587e3080`

Ghidra decompiles `FUN_587e3080` as a `__thiscall` function with a 32-bit
message value and two additional state arguments. Its receiver class and exact
event contract are not identified. The function first gates on event/state
values, compares incoming message values against stored receiver slots, checks
object and child-control state, updates receiver and child fields, and
dispatches to other UI/state routines.

The decompilation resolves message keys including
`MESSAGESTRING__SHIP_REFORM`,
`MESSAGESTRING__ADDITIONAL_ARMOUR_SETTING`,
`MESSAGESTRING__CHANGE_ENGINE`, and `MESSAGESTRING__DOCKNUMBERINFO`. Other
branches resolve `MESSAGESTRING__TEXT_KONGJIAN2`,
`MESSAGESTRING__TEXT_KONGJIAN5`, `MESSAGESTRING__TEXT_KONGJIAN7`, and
`MESSAGESTRING__CANT_LAUNCH_3`. The message keys and branch conditions are
directly present in the original image; what each numeric event means and the
exact user-visible sequence remain uncertain.

## Cross-reference evidence

Ghidra finds no direct code caller. Its reference report records a data
reference from `0x5899B83C`, whose mapped dword is `0x587E3080`; the data
structure and owner are unidentified. The handler directly calls the previously
matched `FUN_58798d60` with selectors `1`, `2`, `3`, and `0xD` along distinct
state-update paths. This ties the message handling to state-update behavior
without assigning names to the numeric selectors.

## Validation and limits

Ghidra reports three body ranges:

- `0x587E3080..0x587E336C` — 749 bytes
- `0x587E3370..0x587E3846` — 1,239 bytes
- `0x587E3850..0x587E4153` — 2,308 bytes

The 3-byte and 9-byte gaps are outside the reported body. The mapped-image
source generator emits only the three ranges. ObjDiff verified all 4,296 bytes
and 217 mapped operand records. This proves a machine-code match; no live event
capture, screenshot comparison, or emulator test was performed.
