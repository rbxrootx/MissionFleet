// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908110 .. +0x27 bytes.
// Source symbol alias: FUN_58908110.
extern "C" __declspec(naked) void FUN_58908110() {
    __asm {
        // 0x58908110: cmp dword ptr [esp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58908115: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58908118: jle 0x58908129
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5890811A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908120: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908122: je 0x58908134
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58908124: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x58908127: jmp 0x58908120
        __asm _emit 0xEB
        __asm _emit 0xF7
        // 0x58908129: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890812B: je 0x58908134
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5890812D: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58908131: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58908134: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
