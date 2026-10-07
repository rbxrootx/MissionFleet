// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 41 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a84f0.

// Ghidra body range 0x587A84F0..0x587A8519; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_587a84f0_segment_00() {
    __asm {
        // 0x587A84F0: push esi
        __asm _emit 0x56
        // 0x587A84F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A84F3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A84F5: push edi
        __asm _emit 0x57
        // 0x587A84F6: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A84FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A84FC: je 0x587a8502
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A84FE: cmp eax, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x07
        // 0x587A8500: je 0x587a8507
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8502: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x47
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8507: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A850A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A850C: cmp eax, dword ptr [edi + 4]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A850F: pop edi
        __asm _emit 0x5F
        // 0x587A8510: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x587A8513: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x587A8515: pop esi
        __asm _emit 0x5E
        // 0x587A8516: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
