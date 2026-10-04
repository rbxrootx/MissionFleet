// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873C470 .. +0x24 bytes.
// Source symbol alias: FUN_5873c470.
extern "C" __declspec(naked) void FUN_5873c470() {
    __asm {
        // 0x5873C470: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873C474: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873C478: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5873C47A: je 0x5873c493
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5873C47C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873C480: push esi
        __asm _emit 0x56
        // 0x5873C481: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x5873C483: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5873C485: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5873C488: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5873C48B: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x5873C48E: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5873C490: jne 0x5873c481
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x5873C492: pop esi
        __asm _emit 0x5E
        // 0x5873C493: ret
        __asm _emit 0xC3
    }
}
