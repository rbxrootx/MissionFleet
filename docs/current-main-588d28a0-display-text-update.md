# Current Main.dll conditional display-text update helper

`FUN_588D28A0` is a 110-byte `__thiscall` in the captured Main.dll image.
Ghidra assigns the contiguous body `[0x588D28A0,0x588D290E)`, with two
`ret 4` exits at `0x588D28EA` and `0x588D290B`. It takes one stack argument.

Fresh Ghidra references identify three direct callers. Byte-matched
`FUN_5888D390` calls at `0x5888D443` with ECX from `[EBP+0x194]` and a pointer
to its formatted local buffer. Byte-matched `FUN_5888E450` calls at
`0x5888E51E` with ECX from `[ESI+0x194]` and its formatted local buffer.
Unmatched `FUN_5888FFB0` calls at `0x58890072` with ECX from `[ESI+0x4FC]`
and EAX from the preceding indirect call through `0x5898C030` as the
argument.

The helper checks whether the receiver's C-string at `+0x6C` is empty. If so,
it calls `FUN_58731CE0` with the incoming argument, obtains the object at
receiver `+0x50`, and calls its vtable slot `+4` with the argument and the
result of indirect function pointer `0x5898C1A8(argument, receiver+0x8C)`.
When the string is nonempty, it stores 1 at receiver `+0x88` and calls
indirect function pointer `0x5898C198(receiver+0x84, argument)`. The emitted
source preserves all 110 mapped bytes; objdiff confirms byte identity.

The receiver type, meanings of its fields, contracts of the helpers and
indirect callbacks, and resulting UI behavior remain unresolved. One incoming
caller is unmatched, leaving its wider context incomplete. No emulator
runtime test has been performed.
