// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772ac0.

// Ghidra body range 0x58772AC0..0x58772B05; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_58772ac0_segment_00() {
    __asm {
        // 0x58772AC0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772AC4: push esi
        __asm _emit 0x56
        // 0x58772AC5: push 0x5898d68c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772ACA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772ACC: push eax
        __asm _emit 0x50
        // 0x58772ACD: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772AD1: push ecx
        __asm _emit 0x51
        // 0x58772AD2: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xA3
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772AD7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58772ADA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772ADC: je 0x58772ae4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58772ADE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58772AE0: pop esi
        __asm _emit 0x5E
        // 0x58772AE1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58772AE4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772AE8: push edx
        __asm _emit 0x52
        // 0x58772AE9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58772AEB: call 0x587727b0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772AF0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58772AF2: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772AF6: push eax
        __asm _emit 0x50
        // 0x58772AF7: call 0x5897ce3e
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xA3
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772AFC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58772AFF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58772B01: pop esi
        __asm _emit 0x5E
        // 0x58772B02: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
