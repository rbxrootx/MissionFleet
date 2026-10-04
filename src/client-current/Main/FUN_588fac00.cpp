// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FAC00 .. +0x47 bytes.
// Source symbol alias: FUN_588fac00.
extern "C" __declspec(naked) void FUN_588fac00() {
    __asm {
        // 0x588FAC00: push esi
        __asm _emit 0x56
        // 0x588FAC01: push edi
        __asm _emit 0x57
        // 0x588FAC02: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588FAC04: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588FAC06: mov dword ptr [edi], 0x589a21b8
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xB8
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FAC0C: lea esi, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588FAC0F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAC14: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FAC16: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FAC19: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588FAC1B: je 0x588fac32
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588FAC1D: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x588FAC1F: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588FAC21: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588FAC23: pop edi
        __asm _emit 0x5F
        // 0x588FAC24: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FAC27: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588FAC2A: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x588FAC2D: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x588FAC30: pop esi
        __asm _emit 0x5E
        // 0x588FAC31: ret
        __asm _emit 0xC3
        // 0x588FAC32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAC34: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588FAC36: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588FAC38: pop edi
        __asm _emit 0x5F
        // 0x588FAC39: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FAC3C: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588FAC3F: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x588FAC42: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x588FAC45: pop esi
        __asm _emit 0x5E
        // 0x588FAC46: ret
        __asm _emit 0xC3
    }
}
