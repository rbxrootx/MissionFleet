# `CCloudOpeningScreen` initializer

`FUN_58756f80` is a 4,528-byte `__thiscall` initializer in the installed 2026
`Main.dll` mapping. Ghidra shows it assigning `CCloudOpeningScreen::vftable`,
loading `IMGDMM.spr`, and traversing six group values across forty receiver
records per group. Depending on observed record fields, it constructs
`CSpriteDataScreen` or `FUN_58731C60` children using indexed sprite data and
updates child flag bits. The receiver layout, record schema, sprite indices,
labels, and visual mapping remain unresolved.

Ghidra's direct-reference audit records one caller, `FUN_58791590`, at
`0x587918FC`. In the caller's state-transition path it checks a `0x600`-byte
allocation, stores the returned pointer at `DAT_58A24590`, passes it to
`FUN_5874A7F0`, calls `FUN_58731590(11000)` and `FUN_58758150(1)`, and loads
`NFCOSFO.RPT`. This establishes call order but does not prove the report file's
meaning or its runtime relationship to the screen. No emulator runtime test
was performed.

Ghidra identifies one contiguous body range, `0x58756F80..0x5875812F`, totaling
4,528 bytes. The generated source matches the mapped original byte-for-byte
under the recorded Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0; verification
checked 19 relocation operands.
