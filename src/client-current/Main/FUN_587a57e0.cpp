// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A57E0 .. +0x3A bytes.
// Source symbol alias: FUN_587a57e0.
extern "C" __declspec(naked) void FUN_587a57e0() {
    __asm {
        // 0x587A57E0: mov dword ptr [ecx + 0x3910], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57EA: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A57EF: cmp dword ptr [eax + 0x164], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x587A57F6: jle 0x587a5811
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x587A57F8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57FF: je 0x587a5811
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A5801: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5807: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587A580A: mov dword ptr [ecx + 0x3a54], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5810: ret
        __asm _emit 0xC3
        // 0x587A5811: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A5813: mov dword ptr [ecx + 0x3a54], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5819: ret
        __asm _emit 0xC3
    }
}
