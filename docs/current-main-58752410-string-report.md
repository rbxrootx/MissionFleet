# Current Main.dll validation-gated string report helper

`FUN_58752410` is a 161-byte function in the captured Main.dll image. Ghidra
assigns the complete contiguous extent `[0x58752410,0x587524B1)`, ending in
`ret 4` at `0x587524AE`. It accepts one stack argument; its entry ECX value is
not read.

Fresh Ghidra references and an independent inventory-wide direct-call scan
identify exactly two callers, both byte-matched. `FUN_58806F60` calls it at
`0x5880712D` with ECX loaded from `0x58A245B0` and EBX pushed as the argument.
`FUN_58890110` calls it at `0x58893240` with the same ECX value and EAX from
the immediately preceding `FUN_58759EB0` pushed as the argument.

The helper calls `FUN_587522F0` with the argument and returns early when that
call returns zero. Otherwise it compares the input to the value at
`0x58A0B450` in two-byte steps. When they differ, it formats the input into a
local buffer through the indirect function pointer at `0x5898C3C4` and format
address `0x5898D0D4`. It then calls `FUN_587B91B0` with ECX loaded from
`0x58A24588` and arguments `(buffer, 1, 0xFFFFFFFF)`. The source preserves the
full mapped instruction stream, and objdiff confirms all 161 bytes match.

The captured image has zero bytes at `0x58A0B450`; that value may be
initialized elsewhere. The validation contract of `FUN_587522F0`, the
indirect formatter and format string semantics, the meaning of the report
helper's arguments, and the user-visible effect remain unknown. No emulator
runtime test has been performed.
