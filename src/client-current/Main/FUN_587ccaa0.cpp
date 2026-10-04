// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CCAA0 .. +0x39 bytes.
// Source symbol alias: FUN_587ccaa0.
extern "C" __declspec(naked) void FUN_587ccaa0() {
    __asm {
        // 0x587CCAA0: push esi
        __asm _emit 0x56
        // 0x587CCAA1: push edi
        __asm _emit 0x57
        // 0x587CCAA2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587CCAA4: mov esi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587CCAA7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CCAA9: je 0x587ccac1
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587CCAAB: jmp 0x587ccab0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587CCAAD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587CCAB0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CCAB2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CCAB4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CCAB6: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587CCAB9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CCABB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CCABD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CCABF: jne 0x587ccab0
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CCAC1: mov dword ptr [edi + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCAC8: mov dword ptr [edi + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCACF: mov dword ptr [edi + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCAD6: pop edi
        __asm _emit 0x5F
        // 0x587CCAD7: pop esi
        __asm _emit 0x5E
        // 0x587CCAD8: ret
        __asm _emit 0xC3
    }
}
