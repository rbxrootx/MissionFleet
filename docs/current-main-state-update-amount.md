# Current Main.dll selected-object update amount helper

`FUN_587ECAB0` is a 492-byte routine in the hash-pinned installed-client
`Main.dll`. Verified callers `FUN_5877EC80` and `FUN_58782CF0` reach it on
alternative selected-object update branches, passing selector values 2 and 1
and then invoking `FUN_58780330`.

The body checks receiver field `+0x218C4`, derives values from globals and
floating-point constants, conditionally halves its requested integer, and
uses selector branches that multiply by 100, 50, or 70 before subtracting from
receiver field `+0x218D0` with a zero floor. It requests a `0x11C`-byte object,
then on the successful allocation path calls `FUN_5875ADB0` with the selected
record pointer and derived values. It finishes with `FUN_5877E740` and
`FUN_587BB160`, combining two zero-extended 16-bit values into a DWORD.

ObjDiff verifies the complete callable extent byte-for-byte, including the
`ret 0xC` epilogue and all 21 mapped operand targets.

The receiver and allocated-object types, global-table meanings and units,
selector meanings, helper contracts, and visible or gameplay effect remain
uncertain. The arithmetic could represent a rate, cost, capacity, or another
quantity; caller context alone does not resolve it. No emulator test was run.
