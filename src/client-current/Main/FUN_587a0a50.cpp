// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0A50 .. +0x3F bytes.
// Source symbol alias: FUN_587a0a50.
extern "C" __declspec(naked) void FUN_587a0a50() {
    __asm {
        // 0x587A0A50: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587A0A52: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0A57: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A0A5A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A0A5C: je 0x587a0a8c
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587A0A5E: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A0A62: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A0A66: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587A0A68: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A0A6C: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0A6F: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A0A73: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A0A76: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A0A78: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A0A7B: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A0A7E: mov dl, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0A82: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587A0A85: mov byte ptr [eax + 0x14], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587A0A88: mov byte ptr [eax + 0x15], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0A8C: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
