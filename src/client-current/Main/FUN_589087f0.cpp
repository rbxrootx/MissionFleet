// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589087F0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_589087f0() {
    __asm {
        // 0x589087F0: push ebx
        __asm _emit 0x53
        // 0x589087F1: push esi
        __asm _emit 0x56
        // 0x589087F2: push edi
        __asm _emit 0x57
        // 0x589087F3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x589087F5: mov esi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x78
        // 0x589087F8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x589087FA: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x589087FC: je 0x58908811
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x589087FE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58908800: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58908802: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58908804: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58908806: mov esi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x14
        // 0x58908809: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5890880B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890880D: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5890880F: jne 0x58908800
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x58908811: mov dword ptr [edi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x78
        // 0x58908814: mov dword ptr [edi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x7C
        // 0x58908817: mov dword ptr [edi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890881D: mov dword ptr [edi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908823: mov dword ptr [edi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908829: pop edi
        __asm _emit 0x5F
        // 0x5890882A: pop esi
        __asm _emit 0x5E
        // 0x5890882B: pop ebx
        __asm _emit 0x5B
        // 0x5890882C: ret
        __asm _emit 0xC3
    }
}
