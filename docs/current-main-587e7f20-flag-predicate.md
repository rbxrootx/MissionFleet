# Current Main.dll object-and-global flag predicate

`FUN_587E7F20` is a 34-byte `__fastcall` predicate with one pointer in ECX
and no stack arguments. Ghidra assigns the contiguous extent
`[0x587E7F20,0x587E7F42)`, ending in return instructions at `0x587E7F3B` and
`0x587E7F41`.

Fresh Ghidra references identify exactly two incoming calls, both from
byte-matched callers. `FUN_58853C20` calls at `0x58853CDB` with ECX loaded
from `0x58A2459C`; `FUN_58856560` calls at `0x58856612` with the same ECX
value. Neither call passes stack arguments.

The predicate returns zero only when the dword at the argument's `+0x20D40`
field is zero and bit 1 of the low byte at `[0x58A245C0+0x24]` is clear. It
returns one otherwise. The literal-x86 source preserves all 34 mapped bytes;
objdiff confirms byte identity.

The argument's object type, meaning of field `+0x20D40`, identity of the
object at `0x58A245C0`, and meaning of the flag bit are unresolved. No
emulator runtime test has been performed.
