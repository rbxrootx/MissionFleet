// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58759F20 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58759f20() {
    __asm {
        // 0x58759F20: push esi
        __asm _emit 0x56
        // 0x58759F21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58759F23: cmp dword ptr [esi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58759F27: jne 0x58759f53
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x58759F29: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58759F2B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x2D
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58759F30: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58759F34: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58759F37: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759F3D: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58759F40: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58759F43: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759F4A: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58759F4D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58759F50: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58759F53: pop esi
        __asm _emit 0x5E
        // 0x58759F54: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
