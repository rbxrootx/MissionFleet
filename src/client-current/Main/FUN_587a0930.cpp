// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a0930.

// Ghidra body range 0x587A0930..0x587A094B; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_587a0930_segment_00() {
    __asm {
        // 0x587A0930: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A0934: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A0936: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A093A: jne 0x587a094a
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587A093C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A0940: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A0942: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A0944: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0948: je 0x587a0940
        __asm _emit 0x74
        __asm _emit 0xF6
        // 0x587A094A: ret
        __asm _emit 0xC3
    }
}
