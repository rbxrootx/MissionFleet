// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887cb30.

// Ghidra body range 0x5887CB30..0x5887CB60; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_5887cb30_segment_00() {
    __asm {
        // 0x5887CB30: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5887CB34: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5887CB36: jbe 0x5887cb5f
        __asm _emit 0x76
        __asm _emit 0x27
        // 0x5887CB38: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887CB3C: push ebx
        __asm _emit 0x53
        // 0x5887CB3D: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887CB41: push esi
        __asm _emit 0x56
        // 0x5887CB42: push edi
        __asm _emit 0x57
        // 0x5887CB43: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887CB45: je 0x5887cb54
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5887CB47: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887CB4C: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5887CB4E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887CB50: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5887CB52: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xA5
        // 0x5887CB54: dec edx
        __asm _emit 0x4A
        // 0x5887CB55: add eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x22
        // 0x5887CB58: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5887CB5A: ja 0x5887cb43
        __asm _emit 0x77
        __asm _emit 0xE7
        // 0x5887CB5C: pop edi
        __asm _emit 0x5F
        // 0x5887CB5D: pop esi
        __asm _emit 0x5E
        // 0x5887CB5E: pop ebx
        __asm _emit 0x5B
        // 0x5887CB5F: ret
        __asm _emit 0xC3
    }
}
