// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58865E63 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58865e63() {
    __asm {
        // 0x58865E63: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58865E65: push ebp
        __asm _emit 0x55
        // 0x58865E66: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58865E68: push esi
        __asm _emit 0x56
        // 0x58865E69: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58865E6C: cmp esi, dword ptr [ebp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58865E6F: je 0x58865e8b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58865E71: push edi
        __asm _emit 0x57
        // 0x58865E72: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58865E74: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58865E76: je 0x58865e82
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58865E78: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58865E7A: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58865E80: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58865E82: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58865E85: cmp esi, dword ptr [ebp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58865E88: jne 0x58865e72
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58865E8A: pop edi
        __asm _emit 0x5F
        // 0x58865E8B: pop esi
        __asm _emit 0x5E
        // 0x58865E8C: pop ebp
        __asm _emit 0x5D
        // 0x58865E8D: ret
        __asm _emit 0xC3
    }
}
