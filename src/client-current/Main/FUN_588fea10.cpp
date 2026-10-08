// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fea10.

// Ghidra body range 0x588FEA10..0x588FEA2B; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_588fea10_segment_00() {
    __asm {
        // 0x588FEA10: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FEA14: lea edx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x588FEA17: cmp edx, 0x63
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x63
        // 0x588FEA1A: jbe 0x588fea21
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FEA1C: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588FEA1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FEA21: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588FEA24: mov al, byte ptr [ecx + eax*8 - 0x14]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0xC1
        __asm _emit 0xEC
        // 0x588FEA28: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
