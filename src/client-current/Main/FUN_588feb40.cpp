// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 42 bytes in 1 exact ranges.
// Source symbol alias: FUN_588feb40.

// Ghidra body range 0x588FEB40..0x588FEB6A; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_588feb40_segment_00() {
    __asm {
        // 0x588FEB40: lea eax, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588FEB43: mov edx, 0x64
        __asm _emit 0xBA
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEB48: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FEB4A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEB50: mov byte ptr [eax - 8], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0xF8
        // 0x588FEB53: mov dword ptr [eax - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588FEB56: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588FEB58: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588FEB5B: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FEB5E: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588FEB61: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588FEB64: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588FEB67: jne 0x588feb50
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588FEB69: ret
        __asm _emit 0xC3
    }
}
