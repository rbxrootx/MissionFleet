// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588483D0 .. +0x45 bytes.
// Source symbol alias: FUN_588483d0.
extern "C" __declspec(naked) void FUN_588483d0() {
    __asm {
        // 0x588483D0: push esi
        __asm _emit 0x56
        // 0x588483D1: mov esi, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x64
        // 0x588483D4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588483D6: jne 0x588483de
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588483D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588483DA: pop esi
        __asm _emit 0x5E
        // 0x588483DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588483DE: push ebx
        __asm _emit 0x53
        // 0x588483DF: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588483E5: push edi
        __asm _emit 0x57
        // 0x588483E6: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588483EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588483F0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588483F3: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588483F6: push eax
        __asm _emit 0x50
        // 0x588483F7: push edi
        __asm _emit 0x57
        // 0x588483F8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588483FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588483FC: je 0x5884840d
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588483FE: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58848401: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848403: jne 0x588483f0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58848405: pop edi
        __asm _emit 0x5F
        // 0x58848406: pop ebx
        __asm _emit 0x5B
        // 0x58848407: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848409: pop esi
        __asm _emit 0x5E
        // 0x5884840A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884840D: pop edi
        __asm _emit 0x5F
        // 0x5884840E: pop ebx
        __asm _emit 0x5B
        // 0x5884840F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58848411: pop esi
        __asm _emit 0x5E
        // 0x58848412: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
