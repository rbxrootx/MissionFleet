// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9880 .. +0x52 bytes.
// Source symbol alias: FUN_588e9880.
extern "C" __declspec(naked) void FUN_588e9880() {
    __asm {
        // 0x588E9880: push ebx
        __asm _emit 0x53
        // 0x588E9881: push esi
        __asm _emit 0x56
        // 0x588E9882: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588E9884: push edi
        __asm _emit 0x57
        // 0x588E9885: lea esi, [ebx + 0x9a4]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E988B: mov edi, 0x20
        __asm _emit 0xBF
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9890: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588E9892: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588E9894: je 0x588e989f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588E9896: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E9898: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588E989A: call 0x5877c660
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x2D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E989F: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588E98A2: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588E98A5: jne 0x588e9890
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x588E98A7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588E98A9: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E98AE: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E98B3: mov ecx, dword ptr [eax + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E98B9: call 0x588ecea0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E98BE: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E98C4: mov ecx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E98CA: pop edi
        __asm _emit 0x5F
        // 0x588E98CB: pop esi
        __asm _emit 0x5E
        // 0x588E98CC: pop ebx
        __asm _emit 0x5B
        // 0x588E98CD: jmp 0x588730f0
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0x98
        __asm _emit 0xF8
        __asm _emit 0xFF
    }
}
