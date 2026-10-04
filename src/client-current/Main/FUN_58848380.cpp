// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848380 .. +0x45 bytes.
// Source symbol alias: FUN_58848380.
extern "C" __declspec(naked) void FUN_58848380() {
    __asm {
        // 0x58848380: push esi
        __asm _emit 0x56
        // 0x58848381: mov esi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x6C
        // 0x58848384: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848386: jne 0x5884838e
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58848388: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884838A: pop esi
        __asm _emit 0x5E
        // 0x5884838B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884838E: push ebx
        __asm _emit 0x53
        // 0x5884838F: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58848395: push edi
        __asm _emit 0x57
        // 0x58848396: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884839A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588483A0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588483A3: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588483A6: push eax
        __asm _emit 0x50
        // 0x588483A7: push edi
        __asm _emit 0x57
        // 0x588483A8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588483AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588483AC: je 0x588483bd
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588483AE: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x588483B1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588483B3: jne 0x588483a0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588483B5: pop edi
        __asm _emit 0x5F
        // 0x588483B6: pop ebx
        __asm _emit 0x5B
        // 0x588483B7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588483B9: pop esi
        __asm _emit 0x5E
        // 0x588483BA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588483BD: pop edi
        __asm _emit 0x5F
        // 0x588483BE: pop ebx
        __asm _emit 0x5B
        // 0x588483BF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588483C1: pop esi
        __asm _emit 0x5E
        // 0x588483C2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
