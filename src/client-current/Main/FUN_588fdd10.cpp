// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 22 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fdd10.

// Ghidra body range 0x588FDD10..0x588FDD26; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_588fdd10_segment_00() {
    __asm {
        // 0x588FDD10: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588FDD13: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x588FDD16: jge 0x588fdd25
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x588FDD18: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDD1E: inc eax
        __asm _emit 0x40
        // 0x588FDD1F: push eax
        __asm _emit 0x50
        // 0x588FDD20: call 0x588fd790
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDD25: ret
        __asm _emit 0xC3
    }
}
