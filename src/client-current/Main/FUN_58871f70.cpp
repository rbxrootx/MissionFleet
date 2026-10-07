// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 33 bytes in 1 exact ranges.
// Source symbol alias: FUN_58871f70.

// Ghidra body range 0x58871F70..0x58871F91; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_58871f70_segment_00() {
    __asm {
        // 0x58871F70: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58871F72: mov dword ptr [ecx + 0x9c], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871F78: lea eax, [ecx + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871F7E: lea ecx, [edx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x20
        // 0x58871F81: push esi
        __asm _emit 0x56
        // 0x58871F82: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x58871F84: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58871F87: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58871F8A: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58871F8D: jne 0x58871f82
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x58871F8F: pop esi
        __asm _emit 0x5E
        // 0x58871F90: ret
        __asm _emit 0xC3
    }
}
