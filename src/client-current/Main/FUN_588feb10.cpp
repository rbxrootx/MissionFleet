// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 36 bytes in 1 exact ranges.
// Source symbol alias: FUN_588feb10.

// Ghidra body range 0x588FEB10..0x588FEB34; 36 mapped bytes.
extern "C" __declspec(naked) void FUN_588feb10_segment_00() {
    __asm {
        // 0x588FEB10: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FEB14: lea edx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x588FEB17: cmp edx, 0x63
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x63
        // 0x588FEB1A: jbe 0x588feb21
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FEB1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FEB1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FEB21: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588FEB24: cmp byte ptr [ecx + eax*8 - 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0xC1
        __asm _emit 0xEC
        __asm _emit 0x00
        // 0x588FEB29: lea eax, [ecx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC1
        // 0x588FEB2C: je 0x588feb1c
        __asm _emit 0x74
        __asm _emit 0xEE
        // 0x588FEB2E: mov eax, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0xF0
        // 0x588FEB31: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
