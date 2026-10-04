// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A5790 .. +0x4B bytes.
// Source symbol alias: FUN_587a5790.
extern "C" __declspec(naked) void FUN_587a5790() {
    __asm {
        // 0x587A5790: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5796: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587A5798: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587A579A: mov dword ptr [ecx + 0x3910], 2
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57A4: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A57AA: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x587A57AD: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57B3: jle 0x587a57d2
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x587A57B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A57B7: jl 0x587a57d2
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x587A57B9: cmp dword ptr [edx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57C0: je 0x587a57d2
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A57C2: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57C8: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x587A57CB: mov dword ptr [ecx + 0x3a54], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57D1: ret
        __asm _emit 0xC3
        // 0x587A57D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A57D4: mov dword ptr [ecx + 0x3a54], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A57DA: ret
        __asm _emit 0xC3
    }
}
