// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878A120 .. +0x37 bytes.
// Source symbol alias: FUN_5878a120.
extern "C" __declspec(naked) void FUN_5878a120() {
    __asm {
        // 0x5878A120: push ebx
        __asm _emit 0x53
        // 0x5878A121: push esi
        __asm _emit 0x56
        // 0x5878A122: push edi
        __asm _emit 0x57
        // 0x5878A123: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5878A125: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x5878A128: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5878A12A: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5878A12C: je 0x5878a141
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5878A12E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5878A130: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5878A132: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878A134: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878A136: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x5878A139: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878A13B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878A13D: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5878A13F: jne 0x5878a130
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x5878A141: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5878A144: mov dword ptr [edi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x18
        // 0x5878A147: mov dword ptr [edi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x5878A14A: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x5878A14D: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x5878A150: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x5878A153: pop edi
        __asm _emit 0x5F
        // 0x5878A154: pop esi
        __asm _emit 0x5E
        // 0x5878A155: pop ebx
        __asm _emit 0x5B
        // 0x5878A156: ret
        __asm _emit 0xC3
    }
}
