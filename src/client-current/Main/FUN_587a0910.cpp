// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a0910.

// Ghidra body range 0x587A0910..0x587A092C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_587a0910_segment_00() {
    __asm {
        // 0x587A0910: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A0914: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0917: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A091B: jne 0x587a092b
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587A091D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587A0920: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A0922: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0925: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0929: je 0x587a0920
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x587A092B: ret
        __asm _emit 0xC3
    }
}
